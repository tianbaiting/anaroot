// PDC丝室3D可视化 - C++版本
// 基于ROOT框架实现

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph2D.h"
#include "TPolyLine3D.h"
#include "TView3D.h"
#include "TAxis3D.h"
#include "TText.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TColor.h"

// XML解析相关
#include "TXMLEngine.h"

void plot_pdc_wires_3d(const char* xmlfile = "../../d_work/geometry/SAMURAIPDC.xml") {
    
    // 设置ROOT样式
    gStyle->SetOptStat(0);
    gStyle->SetPalette(1);
    
    // 创建画布
    TCanvas *c1 = new TCanvas("c1", "PDC Wire 3D Structure", 1200, 800);
    c1->SetTheta(30);
    c1->SetPhi(45);
    
    // 有效面积参数
    const double halfx = 850.0; // mm
    const double halfy = 400.0; // mm
    
    // 存储丝的数据
    std::vector<TPolyLine3D*> wire_x, wire_u, wire_v;
    std::vector<double> z_values;
    
    // 解析XML文件
    TXMLEngine xml;
    XMLDocPointer_t xmldoc = xml.ParseFile(xmlfile);
    if (!xmldoc) {
        std::cerr << "Error: Cannot parse XML file " << xmlfile << std::endl;
        return;
    }
    
    XMLNodePointer_t mainnode = xml.DocGetRootElement(xmldoc);
    XMLNodePointer_t child = xml.GetChild(mainnode);
    
    while (child) {
        if (strcmp(xml.GetNodeName(child), "SAMURAIPDC") == 0) {
            
            // 读取参数
            double wirepos = 0, wirez = 0;
            std::string anodedir = "";
            
            XMLNodePointer_t param = xml.GetChild(child);
            while (param) {
                std::string paramname = xml.GetNodeName(param);
                std::string paramvalue = xml.GetNodeContent(param);
                
                if (paramname == "wirepos") {
                    wirepos = std::stod(paramvalue);
                } else if (paramname == "wirez") {
                    wirez = std::stod(paramvalue);
                    z_values.push_back(wirez);
                } else if (paramname == "anodedir") {
                    anodedir = paramvalue;
                    // 去除空格
                    anodedir.erase(std::remove_if(anodedir.begin(), anodedir.end(), ::isspace), anodedir.end());
                }
                
                param = xml.GetNext(param);
            }
            
            // 根据方向绘制丝
            if (anodedir == "U") {
                // U层: y = -x + sqrt(2)*wirepos
                std::vector<double> x_board_value = {-halfx, halfx, 
                                                   sqrt(2)*wirepos - halfy, 
                                                   sqrt(2)*wirepos + halfy};
                std::sort(x_board_value.begin(), x_board_value.end());
                
                double x1 = x_board_value[1];
                double x2 = x_board_value[2];
                double y1 = -x1 + sqrt(2)*wirepos;
                double y2 = -x2 + sqrt(2)*wirepos;
                
                TPolyLine3D *line = new TPolyLine3D(2);
                line->SetPoint(0, x1, y1, wirez);
                line->SetPoint(1, x2, y2, wirez);
                line->SetLineColor(kGreen);
                line->SetLineWidth(1);
                wire_u.push_back(line);
                
            } else if (anodedir == "V") {
                // V层: y = x - sqrt(2)*wirepos
                std::vector<double> x_board_value = {-halfx, halfx, 
                                                   sqrt(2)*wirepos - halfy, 
                                                   sqrt(2)*wirepos + halfy};
                std::sort(x_board_value.begin(), x_board_value.end());
                
                double x1 = x_board_value[1];
                double x2 = x_board_value[2];
                double y1 = x1 - sqrt(2)*wirepos;
                double y2 = x2 - sqrt(2)*wirepos;
                
                TPolyLine3D *line = new TPolyLine3D(2);
                line->SetPoint(0, x1, y1, wirez);
                line->SetPoint(1, x2, y2, wirez);
                line->SetLineColor(kBlue);
                line->SetLineWidth(1);
                wire_v.push_back(line);
                
            } else if (anodedir == "X") {
                // X层: 垂直线
                TPolyLine3D *line = new TPolyLine3D(2);
                line->SetPoint(0, wirepos, halfy, wirez);
                line->SetPoint(1, wirepos, -halfy, wirez);
                line->SetLineColor(kRed);
                line->SetLineWidth(1);
                wire_x.push_back(line);
            }
        }
        
        child = xml.GetNext(child);
    }
    
    xml.FreeDoc(xmldoc);
    
    // 创建3D视图
    TView3D *view = TView3D::CreateView(1);
    view->SetRange(-1000, -500, -100, 1000, 500, 3000);
    
    // 绘制所有丝
    std::cout << "Drawing " << wire_x.size() << " X wires" << std::endl;
    for (auto wire : wire_x) {
        wire->Draw();
    }
    
    std::cout << "Drawing " << wire_u.size() << " U wires" << std::endl;
    for (auto wire : wire_u) {
        wire->Draw();
    }
    
    std::cout << "Drawing " << wire_v.size() << " V wires" << std::endl;
    for (auto wire : wire_v) {
        wire->Draw();
    }
    
    // 绘制坐标轴
    const double axis_length = 300.0;
    
    // X轴 (红色)
    TPolyLine3D *axis_x = new TPolyLine3D(2);
    axis_x->SetPoint(0, 0, 0, 0);
    axis_x->SetPoint(1, axis_length, 0, 0);
    axis_x->SetLineColor(kRed);
    axis_x->SetLineWidth(3);
    axis_x->Draw();
    
    // Y轴 (绿色)
    TPolyLine3D *axis_y = new TPolyLine3D(2);
    axis_y->SetPoint(0, 0, 0, 0);
    axis_y->SetPoint(1, 0, axis_length, 0);
    axis_y->SetLineColor(kGreen+2);
    axis_y->SetLineWidth(3);
    axis_y->Draw();
    
    // Z轴 (蓝色)
    TPolyLine3D *axis_z = new TPolyLine3D(2);
    axis_z->SetPoint(0, 0, 0, 0);
    axis_z->SetPoint(1, 0, 0, axis_length);
    axis_z->SetLineColor(kBlue);
    axis_z->SetLineWidth(3);
    axis_z->Draw();
    
    // 原点标记
    TPolyMarker3D *origin = new TPolyMarker3D(1);
    origin->SetPoint(0, 0, 0, 0);
    origin->SetMarkerStyle(20);
    origin->SetMarkerSize(2);
    origin->SetMarkerColor(kBlack);
    origin->Draw();
    
    // 添加图例
    TLegend *legend = new TLegend(0.1, 0.7, 0.3, 0.9);
    legend->SetFillColor(0);
    legend->SetBorderSize(1);
    
    // 创建图例用的线条
    TLine *line_x = new TLine(0, 0, 1, 0);
    line_x->SetLineColor(kRed);
    line_x->SetLineWidth(2);
    legend->AddEntry(line_x, "X wires", "l");
    
    TLine *line_u = new TLine(0, 0, 1, 0);
    line_u->SetLineColor(kGreen);
    line_u->SetLineWidth(2);
    legend->AddEntry(line_u, "U wires", "l");
    
    TLine *line_v = new TLine(0, 0, 1, 0);
    line_v->SetLineColor(kBlue);
    line_v->SetLineWidth(2);
    legend->AddEntry(line_v, "V wires", "l");
    
    legend->Draw();
    
    // 添加标题
    c1->SetTitle("PDC Wire 3D Structure");
    
    c1->Update();
    c1->SaveAs("pdc_wire_structure_3d_root.png");
    
    // 创建Z分布直方图
    TCanvas *c2 = new TCanvas("c2", "Z Distribution", 800, 600);
    
    // 找到Z值的范围
    double z_min = *std::min_element(z_values.begin(), z_values.end());
    double z_max = *std::max_element(z_values.begin(), z_values.end());
    
    TH1F *h_z = new TH1F("h_z", "Z Distribution of PDC Wires;Z (mm);Counts", 
                         100, z_min - 50, z_max + 50);
    h_z->SetFillColor(kRed);
    h_z->SetFillStyle(3001);
    
    for (double z : z_values) {
        h_z->Fill(z);
    }
    
    h_z->Draw();
    c2->SetGrid();
    c2->Update();
    c2->SaveAs("pdc_wire_z_distribution_root.png");
    
    std::cout << "PDC丝室3D可视化完成!" << std::endl;
    std::cout << "总共绘制了 " << wire_x.size() + wire_u.size() + wire_v.size() << " 根丝" << std::endl;
    std::cout << "X丝: " << wire_x.size() << " 根" << std::endl;
    std::cout << "U丝: " << wire_u.size() << " 根" << std::endl;
    std::cout << "V丝: " << wire_v.size() << " 根" << std::endl;
}