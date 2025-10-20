// 简化版PDC丝室3D可视化 - 使用ROOT TGraph2D
// 更简单的实现方式

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

#include "TCanvas.h"
#include "TGraph2D.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TPolyLine3D.h"
#include "TView3D.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TLatex.h"
#include "TArrow3D.h"

void plot_pdc_simple() {
    
    gStyle->SetOptStat(0);
    
    TCanvas *c1 = new TCanvas("c1", "PDC Wire Structure", 1200, 800);
    
    // 创建多个TGraph2D来表示不同方向的丝
    TGraph2D *gr_x = new TGraph2D();
    TGraph2D *gr_u = new TGraph2D();
    TGraph2D *gr_v = new TGraph2D();
    
    gr_x->SetTitle("PDC Wire 3D Structure;X (mm);Y (mm);Z (mm)");
    gr_x->SetMarkerColor(kRed);
    gr_x->SetMarkerStyle(20);
    gr_x->SetMarkerSize(0.3);
    
    gr_u->SetMarkerColor(kGreen);
    gr_u->SetMarkerStyle(20);
    gr_u->SetMarkerSize(0.3);
    
    gr_v->SetMarkerColor(kBlue);
    gr_v->SetMarkerStyle(20);
    gr_v->SetMarkerSize(0.3);
    
    // 模拟PDC丝的数据（简化版本）
    const double halfx = 850.0;
    const double halfy = 400.0;
    
    int point_x = 0, point_u = 0, point_v = 0;
    
    // 模拟X方向的丝 (垂直线)
    for (double z = 0; z < 3000; z += 50) {
        for (double wire_x = -halfx; wire_x <= halfx; wire_x += 20) {
            for (double y = -halfy; y <= halfy; y += 50) {
                gr_x->SetPoint(point_x++, wire_x, y, z);
            }
        }
    }
    
    // 模拟U方向的丝 (45度)
    for (double z = 25; z < 3000; z += 50) {
        for (double wire_pos = -600; wire_pos <= 600; wire_pos += 30) {
            for (double x = -halfx; x <= halfx; x += 50) {
                double y = -x + sqrt(2) * wire_pos;
                if (y >= -halfy && y <= halfy) {
                    gr_u->SetPoint(point_u++, x, y, z);
                }
            }
        }
    }
    
    // 模拟V方向的丝 (-45度)
    for (double z = 12.5; z < 3000; z += 50) {
        for (double wire_pos = -600; wire_pos <= 600; wire_pos += 30) {
            for (double x = -halfx; x <= halfx; x += 50) {
                double y = x - sqrt(2) * wire_pos;
                if (y >= -halfy && y <= halfy) {
                    gr_v->SetPoint(point_v++, x, y, z);
                }
            }
        }
    }
    
    // 绘制
    gr_x->Draw("P");
    gr_u->Draw("P SAME");
    gr_v->Draw("P SAME");
    
    // 绘制坐标轴
    const double axis_length = 400.0;
    
    // X轴
    TPolyLine3D *axis_x = new TPolyLine3D(2);
    axis_x->SetPoint(0, 0, 0, 0);
    axis_x->SetPoint(1, axis_length, 0, 0);
    axis_x->SetLineColor(kRed);
    axis_x->SetLineWidth(4);
    axis_x->Draw();
    
    // Y轴
    TPolyLine3D *axis_y = new TPolyLine3D(2);
    axis_y->SetPoint(0, 0, 0, 0);
    axis_y->SetPoint(1, 0, axis_length, 0);
    axis_y->SetLineColor(kGreen+2);
    axis_y->SetLineWidth(4);
    axis_y->Draw();
    
    // Z轴
    TPolyLine3D *axis_z = new TPolyLine3D(2);
    axis_z->SetPoint(0, 0, 0, 0);
    axis_z->SetPoint(1, 0, 0, axis_length);
    axis_z->SetLineColor(kBlue);
    axis_z->SetLineWidth(4);
    axis_z->Draw();
    
    // 原点
    TPolyMarker3D *origin = new TPolyMarker3D(1);
    origin->SetPoint(0, 0, 0, 0);
    origin->SetMarkerStyle(20);
    origin->SetMarkerSize(3);
    origin->SetMarkerColor(kBlack);
    origin->Draw();
    
    // 添加轴标签（使用TLatex在2D平面上）
    TLatex *label = new TLatex();
    label->SetTextSize(0.03);
    label->SetTextColor(kRed);
    label->DrawLatex(0.15, 0.85, "X axis (Red)");
    label->SetTextColor(kGreen);
    label->DrawLatex(0.15, 0.80, "Y axis (Green)");
    label->SetTextColor(kBlue);
    label->DrawLatex(0.15, 0.75, "Z axis (Blue)");
    
    // 图例
    TLegend *legend = new TLegend(0.1, 0.6, 0.3, 0.7);
    legend->SetFillColor(0);
    legend->AddEntry(gr_x, "X wires", "p");
    legend->AddEntry(gr_u, "U wires", "p");
    legend->AddEntry(gr_v, "V wires", "p");
    legend->Draw();
    
    c1->Update();
    c1->SaveAs("pdc_simple_3d.png");
    
    std::cout << "简化版PDC 3D可视化完成!" << std::endl;
    std::cout << "X点数: " << point_x << std::endl;
    std::cout << "U点数: " << point_u << std::endl;
    std::cout << "V点数: " << point_v << std::endl;
}