// 实用版PDC丝室可视化 - 直接读取XML数据
// 使用简单的字符串解析而不依赖XML库

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

#include "TCanvas.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TH1F.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TText.h"
#include "TStyle.h"
#include "TView3D.h"

struct WireInfo {
    double wirepos;
    double wirez;
    std::string anodedir;
};

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

std::string extractValue(const std::string& line, const std::string& tag) {
    size_t start = line.find("<" + tag + ">");
    size_t end = line.find("</" + tag + ">");
    if (start != std::string::npos && end != std::string::npos) {
        start += tag.length() + 2;
        return trim(line.substr(start, end - start));
    }
    return "";
}

void plot_pdc_xml(const char* xmlfile = "/home/tbt/workspace/dpol/tbt_anaroot/db/SAMURAIPDC.xml") {
    
    std::ifstream file(xmlfile);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open XML file " << xmlfile << std::endl;
        return;
    }
    
    std::vector<WireInfo> wires;
    std::string line;
    WireInfo currentWire;
    bool inSamuraiPDC = false;
    
    // 简单的XML解析
    while (std::getline(file, line)) {
        line = trim(line);
        
        if (line.find("<SAMURAIPDC>") != std::string::npos) {
            inSamuraiPDC = true;
            currentWire = WireInfo();
        } else if (line.find("</SAMURAIPDC>") != std::string::npos) {
            if (inSamuraiPDC) {
                wires.push_back(currentWire);
            }
            inSamuraiPDC = false;
        } else if (inSamuraiPDC) {
            std::string value = extractValue(line, "wirepos");
            if (!value.empty()) {
                currentWire.wirepos = std::stod(value);
            }
            
            value = extractValue(line, "wirez");
            if (!value.empty()) {
                currentWire.wirez = std::stod(value);
            }
            
            value = extractValue(line, "anodedir");
            if (!value.empty()) {
                currentWire.anodedir = value;
            }
        }
    }
    file.close();
    
    std::cout << "读取到 " << wires.size() << " 根丝的信息" << std::endl;
    
    // 设置ROOT样式
    gStyle->SetOptStat(0);
    
    // 创建3D画布
    TCanvas *c1 = new TCanvas("c1", "PDC Wire 3D Structure", 1200, 800);
    c1->SetTheta(25);
    c1->SetPhi(35);
    
    // 有效面积参数
    const double halfx = 850.0; // mm
    const double halfy = 400.0; // mm
    
    // 存储不同类型的丝
    std::vector<TPolyLine3D*> lines;
    std::vector<double> z_values;
    
    int count_x = 0, count_u = 0, count_v = 0;
    
    // 创建丝的3D线条
    for (const auto& wire : wires) {
        z_values.push_back(wire.wirez);
        
        TPolyLine3D *line = new TPolyLine3D(2);
        
        if (wire.anodedir == "U") {
            // U层: y = -x + sqrt(2)*wirepos
            std::vector<double> x_bounds = {-halfx, halfx, 
                                          sqrt(2)*wire.wirepos - halfy, 
                                          sqrt(2)*wire.wirepos + halfy};
            std::sort(x_bounds.begin(), x_bounds.end());
            
            double x1 = x_bounds[1];
            double x2 = x_bounds[2];
            double y1 = -x1 + sqrt(2)*wire.wirepos;
            double y2 = -x2 + sqrt(2)*wire.wirepos;
            
            line->SetPoint(0, x1, y1, wire.wirez);
            line->SetPoint(1, x2, y2, wire.wirez);
            line->SetLineColor(kGreen);
            count_u++;
            
        } else if (wire.anodedir == "V") {
            // V层: y = x - sqrt(2)*wirepos
            std::vector<double> x_bounds = {-halfx, halfx, 
                                          sqrt(2)*wire.wirepos - halfy, 
                                          sqrt(2)*wire.wirepos + halfy};
            std::sort(x_bounds.begin(), x_bounds.end());
            
            double x1 = x_bounds[1];
            double x2 = x_bounds[2];
            double y1 = x1 - sqrt(2)*wire.wirepos;
            double y2 = x2 - sqrt(2)*wire.wirepos;
            
            line->SetPoint(0, x1, y1, wire.wirez);
            line->SetPoint(1, x2, y2, wire.wirez);
            line->SetLineColor(kBlue);
            count_v++;
            
        } else if (wire.anodedir == "X") {
            // X层: 垂直线
            line->SetPoint(0, wire.wirepos, halfy, wire.wirez);
            line->SetPoint(1, wire.wirepos, -halfy, wire.wirez);
            line->SetLineColor(kRed);
            count_x++;
            
        } else {
            delete line;
            continue;
        }
        
        line->SetLineWidth(1);
        lines.push_back(line);
    }
    
    // 设置3D视图范围
    TView *view = TView3D::CreateView(1);
    if (!z_values.empty()) {
        double z_min = *std::min_element(z_values.begin(), z_values.end());
        double z_max = *std::max_element(z_values.begin(), z_values.end());
        view->SetRange(-1000, -500, z_min-100, 1000, 500, z_max+100);
    }
    
    // 绘制所有丝
    for (auto line : lines) {
        line->Draw();
    }
    
    // 绘制坐标轴
    const double axis_length = 400.0;
    
    // X轴 (红色)
    TPolyLine3D *axis_x = new TPolyLine3D(2);
    axis_x->SetPoint(0, 0, 0, 0);
    axis_x->SetPoint(1, axis_length, 0, 0);
    axis_x->SetLineColor(kRed);
    axis_x->SetLineWidth(4);
    axis_x->Draw();
    
    // Y轴 (绿色)
    TPolyLine3D *axis_y = new TPolyLine3D(2);
    axis_y->SetPoint(0, 0, 0, 0);
    axis_y->SetPoint(1, 0, axis_length, 0);
    axis_y->SetLineColor(kGreen+2);
    axis_y->SetLineWidth(4);
    axis_y->Draw();
    
    // Z轴 (蓝色)
    TPolyLine3D *axis_z = new TPolyLine3D(2);
    axis_z->SetPoint(0, 0, 0, 0);
    axis_z->SetPoint(1, 0, 0, axis_length);
    axis_z->SetLineColor(kBlue);
    axis_z->SetLineWidth(4);
    axis_z->Draw();
    
    // 在轴端点放置标记并添加XYZ标签（将世界坐标转换为NDC用于2D文本绘制）
    TPolyMarker3D *markX = new TPolyMarker3D(1);
    markX->SetPoint(0, axis_length, 0, 0);
    markX->SetMarkerStyle(20);
    markX->SetMarkerSize(1.2);
    markX->SetMarkerColor(kRed);
    markX->Draw();
    
    TPolyMarker3D *markY = new TPolyMarker3D(1);
    markY->SetPoint(0, 0, axis_length, 0);
    markY->SetMarkerStyle(20);
    markY->SetMarkerSize(1.2);
    markY->SetMarkerColor(kGreen+2);
    markY->Draw();
    
    TPolyMarker3D *markZ = new TPolyMarker3D(1);
    markZ->SetPoint(0, 0, 0, axis_length);
    markZ->SetMarkerStyle(20);
    markZ->SetMarkerSize(1.2);
    markZ->SetMarkerColor(kBlue);
    markZ->Draw();
    
    // 使用简单的2D标签放置在固定位置
    TLatex *axisLabel = new TLatex();
    axisLabel->SetNDC();
    axisLabel->SetTextSize(0.04);
    axisLabel->SetTextFont(62); // 粗体字体
    
    // 坐标轴标签放在角落，用颜色区分
    axisLabel->SetTextColor(kRed);
    axisLabel->DrawLatex(0.02, 0.95, "X axis (Red)");
    
    axisLabel->SetTextColor(kGreen+2);
    axisLabel->DrawLatex(0.02, 0.90, "Y axis (Green)");
    
    axisLabel->SetTextColor(kBlue);
    axisLabel->DrawLatex(0.02, 0.85, "Z axis (Blue)");
    
    axisLabel->SetTextColor(kBlack);
    axisLabel->DrawLatex(0.02, 0.80, "Origin (Black dot)");
    
    // 原点标记
    TPolyMarker3D *origin = new TPolyMarker3D(1);
    origin->SetPoint(0, 0, 0, 0);
    origin->SetMarkerStyle(20);
    origin->SetMarkerSize(2);
    origin->SetMarkerColor(kBlack);
    origin->Draw();
    
    // 添加图例和标签
    TLatex *label = new TLatex();
    label->SetNDC();
    label->SetTextSize(0.03);
    
    label->SetTextColor(kRed);
    label->DrawLatex(0.15, 0.85, Form("X wires: %d", count_x));
    label->SetTextColor(kGreen);
    label->DrawLatex(0.15, 0.80, Form("U wires: %d", count_u));
    label->SetTextColor(kBlue);
    label->DrawLatex(0.15, 0.75, Form("V wires: %d", count_v));
    
    label->SetTextColor(kBlack);
    label->SetTextSize(0.04);
    label->DrawLatex(0.35, 0.92, "PDC Wire 3D Structure");
    
    c1->Update();
    c1->SaveAs("pdc_wires_from_xml.png");
    
    // 创建Z分布图
    TCanvas *c2 = new TCanvas("c2", "Z Distribution", 800, 600);
    
    if (!z_values.empty()) {
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
        c2->SaveAs("pdc_z_distribution_from_xml.png");
    }
    
    std::cout << "PDC 3D可视化完成!" << std::endl;
    std::cout << "X丝: " << count_x << " 根" << std::endl;
    std::cout << "U丝: " << count_u << " 根" << std::endl;
    std::cout << "V丝: " << count_v << " 根" << std::endl;
    std::cout << "总计: " << count_x + count_u + count_v << " 根" << std::endl;
}