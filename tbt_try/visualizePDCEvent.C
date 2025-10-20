// PDC事件可视化 - 结合丝室结构和击中数据
// 显示某个事件中被击中的丝（亮、粗）和未击中的丝（灰、细）
// V3.2 - 修复了因缺少头文件而导致的“不完整类型”编译错误
//        现在直接包含anaroot类的定义头文件

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
#include <sys/stat.h>
#include <algorithm>
#include <limits>

#include "TCanvas.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TStyle.h"
#include "TView3D.h"
#include "TSystem.h"
#include "TPaveText.h"
#include "TColor.h"
#include "TBox.h"

// 引入ANAROOT的完整头文件以提供完整的类定义
#include "TArtSAMURAIParameters.hh"
#include "TArtEventStore.hh"
#include "TArtCalibPDCHit.hh"
#include "TArtCalibPDCTrack.hh"
#include "TArtStoreManager.hh"
#include "TArtDCHit.hh"
#include "TArtDCTrack.hh"
#include "TClonesArray.h"

// 定义丝结构体
struct WireInfo {
    double wirepos;
    double wirez;
    std::string anodedir;
    int layer;
    int wireid;
    bool isHit;
};

// 辅助函数：去除字符串首尾空格
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

// 辅助函数：从XML风格的行中提取值
std::string extractValue(const std::string& line, const std::string& tag) {
    size_t start = line.find("<" + tag + ">");
    size_t end = line.find("</" + tag + ">");
    if (start != std::string::npos && end != std::string::npos) {
        start += tag.length() + 2;
        return trim(line.substr(start, end - start));
    }
    return "";
}

// 主绘图函数
void visualizePDCEvent(const char* ridffile = "../ridf/data0074.ridf", 
                         const char* xmlfile = "/home/tbt/workspace/dpol/tbt_anaroot/db/SAMURAIPDC.xml",
                         int target_event = 55) {
    // 创建输出目录
    const char* outputDir = "./output";
    mkdir(outputDir, 0755);
    
    std::cout << "=== PDC事件可视化 ===" << std::endl;
    std::cout << "目标事件: " << target_event << std::endl;
    std::cout << "输入文件: " << ridffile << std::endl;

    std::string ridffile_str(ridffile);
    size_t pos = ridffile_str.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? ridffile_str.substr(pos + 1) : ridffile_str;

    // 1. 读取XML文件获取丝室结构
    std::ifstream file(xmlfile);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open XML file " << xmlfile << std::endl;
        return;
    }
    
    std::vector<WireInfo> wires;
    std::string line;
    WireInfo currentWire;
    bool inSamuraiPDC = false;
    
    while (std::getline(file, line)) {
        line = trim(line);
        if (line.find("<SAMURAIPDC>") != std::string::npos) {
            inSamuraiPDC = true;
            currentWire = WireInfo();
            currentWire.isHit = false;
        } else if (line.find("</SAMURAIPDC>") != std::string::npos) {
            if (inSamuraiPDC) {
                wires.push_back(currentWire);
            }
            inSamuraiPDC = false;
        } else if (inSamuraiPDC) {
            std::string value;
            if (!(value = extractValue(line, "wirepos")).empty()) currentWire.wirepos = std::stod(value);
            if (!(value = extractValue(line, "wirez")).empty()) currentWire.wirez = std::stod(value);
            if (!(value = extractValue(line, "anodedir")).empty()) currentWire.anodedir = value;
            if (!(value = extractValue(line, "layer")).empty()) currentWire.layer = std::stoi(value);
            if (!(value = extractValue(line, "wireid")).empty()) currentWire.wireid = std::stoi(value);
        }
    }
    file.close();
    std::cout << "读取到 " << wires.size() << " 根丝的信息" << std::endl;
    
    // 2. 初始化anaroot系统
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");
    
    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter(xmlfile);
    
    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridffile)) {
        std::cerr << "Error: Cannot open RIDF file " << ridffile << std::endl;
        return;
    }
    
    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtCalibPDCTrack *pdctrackcalib = new TArtCalibPDCTrack();
    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");
    TClonesArray *pdc_trk_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCTrack");

    std::vector<TPolyLine3D*> trackLines;
    
    // 3. 读取目标事件的击中数据
    // *** BUG修复: 使用 std::pair<layer, wireid> 作为唯一的键 ***
    std::map<std::pair<int, int>, double> wireTotMap;
    std::set<std::pair<int, int>> hitWireIDs;
    int neve = 0;
    bool eventFound = false;
    
    while (estore->GetNextEvent()) {
        if (neve == target_event) {
            eventFound = true;
            pdchitcalib->ClearData();
            pdchitcalib->ReconstructData();
            pdctrackcalib->ClearData();
            pdctrackcalib->ReconstructData();
            std::cout << "径迹重建完成，找到 " << (pdc_trk_array ? pdc_trk_array->GetEntries() : 0) << " 条径迹" << std::endl;
            
            int num_hit = pdc_hit_array->GetEntries();
            std::cout << "事件 " << target_event << " 有 " << num_hit << " 个击中" << std::endl;
            
            for (int i = 0; i < num_hit; ++i) {
                TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
                if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                    // *** BUG修复: 同时获取 layer 和 wireid ***
                    int layer = hit->GetLayer();
                    int wid = hit->GetWireID();
                    double tot = hit->GetTrailTDC() - hit->GetTDC();
                    
                    // *** BUG修复: 使用 pair 作为 map 和 set 的键 ***
                    wireTotMap[{layer, wid}] = tot;
                    hitWireIDs.insert({layer, wid});

                    std::cout <<"layer" << hit->GetLayer() << " Wire " << wid  <<" 的TDC值为 " << hit->GetTDC() << " 的TrailTDC值为 " << hit->GetTrailTDC() << " 的TOT值为 " << tot << std::endl;
                }
            }

            if (pdc_trk_array && pdc_trk_array->GetEntries() > 0) {
                double zmin_w = -500, zmax_w = 10;
                if (!wires.empty()) {
                    auto minmax_z = std::minmax_element(wires.begin(), wires.end(), 
                        [](const WireInfo& a, const WireInfo& b) { return a.wirez < b.wirez; });
                    zmin_w = minmax_z.first->wirez;
                    zmax_w = minmax_z.second->wirez;
                }

                for (int it = 0; it < pdc_trk_array->GetEntries(); ++it) {
                    TArtDCTrack *trk = (TArtDCTrack*)pdc_trk_array->At(it);
                    if (!trk) continue;
                    double tx = trk->GetPosition(0), ty = trk->GetPosition(1);
                    double ax = trk->GetAngle(0), ay = trk->GetAngle(1);
                    
                    TPolyLine3D *tline = new TPolyLine3D(2);
                    tline->SetPoint(0, tx + ax * zmin_w, ty + ay * zmin_w, zmin_w);
                    tline->SetPoint(1, tx + ax * zmax_w, ty + ay * zmax_w, zmax_w);
                    tline->SetLineColor(kMagenta);
                    tline->SetLineWidth(4);
                    trackLines.push_back(tline);
                }
            }
            break;
        }
        neve++;
    }
    
    if (!eventFound) {
        std::cerr << "Error: Event " << target_event << " not found!" << std::endl;
        delete estore; delete pdchitcalib; delete pdctrackcalib;
        return;
    }
    
    // 4. 准备数据和颜色
    // 4.1 归一化TOT值
    double tot_min = 0, tot_max = 0;
    if(!wireTotMap.empty()){
        auto minmax_tot = std::minmax_element(wireTotMap.begin(), wireTotMap.end(),
            [](const auto& a, const auto& b) { return a.second < b.second; });
        tot_min = minmax_tot.first->second;
        tot_max = minmax_tot.second->second;
    }
    bool hasTotRange = (tot_max > tot_min);
    for (auto& p : wireTotMap) {
        if (hasTotRange) p.second = (p.second - tot_min) / (tot_max - tot_min);
        else p.second = 0.5;
    }

    // 4.2 标记被击中的丝
    for (auto& wire : wires) {
        // *** BUG修复: 使用 pair 进行检查 ***
        wire.isHit = (hitWireIDs.count({wire.layer, wire.wireid}) > 0);
    }
    
    // 4.3 创建独立的颜色渐变调色板
    const int NCont = 255;
    std::vector<int> colorTableX, colorTableU, colorTableV;
    { // X-丝 (熔岩风格)
        const int n_stops = 4; double stops[] = {0.00,0.40,0.80,1.00};
        double r[]={0.1,0.8,1.0,0.95}, g[]={0.0,0.1,0.5,0.9}, b[]={0.2,0.1,0.0,0.2};
        int FI = TColor::CreateGradientColorTable(n_stops,stops,r,g,b,NCont);
        for (int i=0;i<NCont;++i) colorTableX.push_back(FI+i);
    }
    { // U-丝 (森林风格)
        const int n_stops = 4; double stops[] = {0.00,0.33,0.66,1.00};
        double r[]={0.1,0.2,0.6,0.9}, g[]={0.2,0.6,0.8,0.95}, b[]={0.2,0.3,0.1,0.3};
        int FI = TColor::CreateGradientColorTable(n_stops,stops,r,g,b,NCont);
        for (int i=0;i<NCont;++i) colorTableU.push_back(FI+i);
    }
    { // V-丝 (海洋风格)
        const int n_stops = 4; double stops[] = {0.00,0.33,0.66,1.00};
        double r[]={0.0,0.1,0.3,0.8}, g[]={0.1,0.2,0.7,0.9}, b[]={0.3,0.7,0.9,0.95};
        int FI = TColor::CreateGradientColorTable(n_stops,stops,r,g,b,NCont);
        for (int i=0;i<NCont;++i) colorTableV.push_back(FI+i);
    }
    std::cout << "为 X, U, V 创建了 3 组独立的调色板" << std::endl;

    // 5. 创建3D可视化
    gStyle->SetOptStat(0);
    TCanvas *c1 = new TCanvas("c1", "PDC Event Visualization", 1400, 900);
    
    const double halfx = 850.0, halfy = 400.0;
    std::vector<TPolyLine3D*> lines;
    std::vector<double> z_values;
    int count_x=0, count_u=0, count_v=0, hit_x=0, hit_u=0, hit_v=0;
    
    for (const auto& wire : wires) {
        z_values.push_back(wire.wirez);
        TPolyLine3D *line = new TPolyLine3D(2);
        double x1=0,y1=0,x2=0,y2=0;

        if (wire.anodedir == "X") {
            x1=wire.wirepos; y1=halfy; x2=wire.wirepos; y2=-halfy;
            count_x++;
        } else {
            double C = sqrt(2) * wire.wirepos;
            double slope = (wire.anodedir == "U") ? -1.0 : 1.0;
            if (wire.anodedir == "V") C = -C;
            std::vector<double> x_intersect = {-halfx, halfx, (halfy - C)/slope, (-halfy - C)/slope};
            std::sort(x_intersect.begin(), x_intersect.end());
            x1 = x_intersect[1]; x2 = x_intersect[2];
            y1 = slope*x1 + C;   y2 = slope*x2 + C;
            if (wire.anodedir == "U") count_u++; else count_v++;
        }
        line->SetPoint(0, x1, y1, wire.wirez);
        line->SetPoint(1, x2, y2, wire.wirez);

        if (wire.isHit) {
            // *** BUG修复: 使用 pair 获取正确的 TOT 值 ***
            double norm = wireTotMap.at({wire.layer, wire.wireid});
            int idx = int(norm * (NCont - 1) + 0.5);
            idx = std::max(0, std::min(NCont - 1, idx));
            int color = kBlack;
            if(wire.anodedir=="X") {color=colorTableX[idx]; hit_x++;}
            if(wire.anodedir=="U") {color=colorTableU[idx]; hit_u++;}
            if(wire.anodedir=="V") {color=colorTableV[idx]; hit_v++;}
            line->SetLineColorAlpha(color, 0.8); // 增加不透明度以突出显示
            line->SetLineWidth(3);
        } else {
            line->SetLineColorAlpha(kGray, 0.05); // 降低不透明度以淡化背景
            line->SetLineWidth(1);
        }
        lines.push_back(line);
    }
    
    // 5.1 设置3D视图
    TView *view = TView3D::CreateView(1);
    if (!z_values.empty()) {
        double z_min = *std::min_element(z_values.begin(), z_values.end());
        double z_max = *std::max_element(z_values.begin(), z_values.end());
        view->SetRange(-1000, -500, z_min-100, 1000, 500, z_max+100);
    }
    // 设定观察角度（单位：度）
    // 目标：Y 轴朝上，Z 轴朝左
    double view_longitude = 0.0;
    double view_latitude  = 90.0+15.0;
    double view_psi       = -90.0;
    int irep = 0;
    view->SetView(view_longitude, view_latitude, view_psi, irep);

    //更新视角
       // 检查当前是否有 TPad 处于活动状态
    if (gPad) {
        // 2. 将视角参数同步给 TPad，防止鼠标交互时视角跳变
        gPad->SetPhi(-90 - view_longitude);
        gPad->SetTheta(90 - view_latitude);

        // 3. 标记 Pad 已被修改并强制更新，确保画面立即刷新
        gPad->Modified(kTRUE);
        gPad->Update();
    }
    
    // 5.2 绘制所有3D对象
    for (auto line : lines) line->Draw();
    for (auto tline : trackLines) tline->Draw("same");

    const double axis_length = 400.0;
    TPolyLine3D *axis_x = new TPolyLine3D(2); axis_x->SetPoint(0,0,0,0); axis_x->SetPoint(1,axis_length,0,0); axis_x->SetLineColor(kRed); axis_x->SetLineWidth(4); axis_x->Draw();
    TPolyLine3D *axis_y = new TPolyLine3D(2); axis_y->SetPoint(0,0,0,0); axis_y->SetPoint(1,0,axis_length,0); axis_y->SetLineColor(kGreen+2); axis_y->SetLineWidth(4); axis_y->Draw();
    TPolyLine3D *axis_z = new TPolyLine3D(2); axis_z->SetPoint(0,0,0,0); axis_z->SetPoint(1,0,0,axis_length); axis_z->SetLineColor(kBlue); axis_z->SetLineWidth(4); axis_z->Draw();
    TPolyMarker3D *origin = new TPolyMarker3D(1); origin->SetPoint(0,0,0,0); origin->SetMarkerStyle(20); origin->SetMarkerSize(2); origin->SetMarkerColor(kBlack); origin->Draw();

    // 5.3 在主画布上绘制所有2D信息（图例、标题、文字等）
    c1->cd(); // 确保绘图上下文在主画布上
    {
        // 绘制调色板图例
        const double pal_w=0.15, pal_h=0.02, pal_x=0.83, pal_y_start=0.85, pal_y_space=0.12;
        struct PalInfo { const std::vector<int> *tbl; const char *title; };
        std::vector<PalInfo> pals = {
            {&colorTableX, "X-Wires : Lava (TOT)"},
            {&colorTableU, "U-Wires : Forest (TOT)"},
            {&colorTableV, "V-Wires : Ocean (TOT)"}
        };

        TLatex label; label.SetTextFont(42); label.SetNDC(kTRUE);
        for (int p = 0; p < 3; ++p) {
            double y = pal_y_start - p * pal_y_space;
            label.SetTextSize(0.025); label.SetTextAlign(11); // 左对齐
            label.DrawLatex(pal_x, y + pal_h + 0.005, pals[p].title);
            
            const std::vector<int>& tbl = *pals[p].tbl;
            for (int i=0; i<(int)tbl.size(); ++i) {
                TBox *b = new TBox(pal_x+i*pal_w/tbl.size(), y, pal_x+(i+1)*pal_w/tbl.size(), y+pal_h);
                b->SetFillColor(tbl[i]); 
                b->SetLineColor(tbl[i]); 
                b->Draw();
            }
            
            label.SetTextSize(0.020);
            label.SetTextAlign(12); label.DrawLatex(pal_x, y - 0.02, Form("%.0f", tot_min));
            label.SetTextAlign(32); label.DrawLatex(pal_x + pal_w, y - 0.02, Form("%.0f", tot_max));
        }

        // 绘制标题和统计信息
        TLatex title; title.SetNDC(); title.SetTextSize(0.04); title.SetTextFont(62); title.SetTextColor(kBlack);
        title.DrawLatex(0.25, 0.95, Form("PDC Event %d Visualization", target_event));
        
        TLatex info; info.SetNDC(); info.SetTextSize(0.025); info.SetTextFont(42);
        info.SetTextColor(kRed); info.DrawLatex(0.02, 0.84, Form("X wires: %d total, %d hit", count_x, hit_x));
        info.SetTextColor(kGreen+1); info.DrawLatex(0.02, 0.80, Form("U wires: %d total, %d hit", count_u, hit_u));
        info.SetTextColor(kBlue); info.DrawLatex(0.02, 0.76, Form("V wires: %d total, %d hit", count_v, hit_v));
        
        info.SetTextColor(kGray+2); info.DrawLatex(0.02, 0.70, "Gray: No hit (thin)"); info.DrawLatex(0.02, 0.67, "Color: Hit (thick)");
        info.SetTextColor(kMagenta); info.DrawLatex(0.02, 0.64, "Magenta: Reconstructed Track");
        
        info.SetTextColor(kRed); info.DrawLatex(0.02, 0.58, "X axis (Red)");
        info.SetTextColor(kGreen+2); info.DrawLatex(0.02, 0.55, "Y axis (Green)");
        info.SetTextColor(kBlue); info.DrawLatex(0.02, 0.52, "Z axis (Blue)");
    }
    // 6. 更新画布并保存
    c1->Update();
    //加上filename
    std::string outputFilePNG = std::string(outputDir) + Form("/pdc_event_%d_%s_3d.png", target_event, fileName.c_str());
    // std::string outputFile = std::string(outputDir) + Form("/pdc_event_%d_3d.png", target_event);
    c1->SaveAs(outputFilePNG.c_str());
    std::cout << "可视化图像已保存到: " << outputFilePNG << std::endl;
    
    // 7. 清理内存
    // 注意：所有画在c1上的对象(lines, trackLines, axis_*, origin, TBox*)都会由c1自动删除，无需手动delete
    delete pdchitcalib;
    delete pdctrackcalib;
    delete estore;
    // 如果希望画布在宏执行后保持打开，请将此函数包装在 TApplication 中
    // delete c1; // 若非交互式运行，可取消此行注释
}

