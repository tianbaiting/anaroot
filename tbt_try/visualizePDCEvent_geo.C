// PDC事件可视化 - 结合TGeo几何框架和击中数据
// V4.2 - 修复 TPolyLine3D 点坐标的获取方法
// 显示某个事件中被击中的丝（亮、粗）和未击中的丝（灰、细）
// 似乎性能不够  显示有问题
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <set>
#include <sys/stat.h>
#include <algorithm>
#include <limits>
#include <map>

// ROOT includes
#include "TCanvas.h"
#include "TPolyLine3D.h"
#include "TPolyMarker3D.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TStyle.h"
#include "TView.h"
#include "TSystem.h"
#include "TPaveText.h"
#include "TColor.h"
#include "TBox.h"
#include "TMath.h"

// TGeo includes
#include "TGeoManager.h"
#include "TGeoBBox.h"
#include "TGeoTube.h"
#include "TGeoMatrix.h"
#include "TGeoTrack.h"

// ANAROOT 前向声明
class TArtSAMURAIParameters;
class TArtEventStore;
class TArtCalibPDCHit;
class TArtStoreManager;
class TArtDCHit;
class TClonesArray;
class TArtCalibPDCTrack;
class TArtDCTrack;

// 定义丝结构体 (与原版一致)
struct WireInfo {
    double wirepos;
    double wirez;
    std::string anodedir;
    int layer;
    int wireid;
    bool isHit;
};

// 辅助函数：去除字符串首尾空格 (与原版一致)
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

// 辅助函数：从XML风格的行中提取值 (与原版一致)
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
void visualizePDCEvent_geo(const char* ridffile = "../ridf/data0074.ridf", 
                            const char* xmlfile = "/home/tbt/workspace/dpol/tbt_anaroot/db/SAMURAIPDC.xml",
                            int target_event = 66) {
    // 创建输出目录
    const char* outputDir = "./output";
    mkdir(outputDir, 0755);
    
    std::cout << "=== PDC事件可视化 (TGeo版本) ===" << std::endl;
    std::cout << "目标事件: " << target_event << std::endl;
    std::cout << "输入文件: " << ridffile << std::endl;
    
    // 1. 读取XML文件获取丝室结构 (与原版一致)
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
    
    // 2. 初始化anaroot系统 (与原版一致)
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
    
    // 3. 读取目标事件的击中数据 (与原版一致)
    std::map<int, double> wireTotMap;
    std::set<int> hitWireIDs;
    int neve = 0;
    bool eventFound = false;
    
    while (estore->GetNextEvent()) {
        if (neve == target_event) {
            eventFound = true;
            pdchitcalib->ClearData();
            pdchitcalib->ReconstructData();
            pdctrackcalib->ClearData();
            pdctrackcalib->ReconstructData();
            
            int num_hit = pdc_hit_array->GetEntries();
            std::cout << "事件 " << target_event << " 有 " << num_hit << " 个击中" << std::endl;
            
            for (int i = 0; i < num_hit; ++i) {
                TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
                if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                    int wid = hit->GetWireID();
                    double tot = hit->GetTrailTDC() - hit->GetTDC();
                    wireTotMap[wid] = tot;
                    hitWireIDs.insert(wid);
                }
            }

            if (pdc_trk_array && pdc_trk_array->GetEntries() > 0) {
                double zmin_w = -500, zmax_w = 10; // 径迹绘制范围
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
    
    // 4. 准备数据和颜色 (与原版一致)
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

    // 5. 创建TGeo几何体
    TGeoManager *geom = new TGeoManager("PDCEvent", "PDC Event Display with TGeo");

    TGeoMaterial *matVacuum = new TGeoMaterial("Vacuum", 0, 0, 0);
    TGeoMedium *medVacuum = new TGeoMedium("Vacuum", 1, matVacuum);
    TGeoMaterial *matGas = new TGeoMaterial("PDCGas", 18, 39.9, 0.0017); // Argon
    TGeoMedium *medGas = new TGeoMedium("PDCGas", 2, matGas);

    TGeoVolume *top = geom->MakeBox("TOP", medVacuum, 1000., 600., 1000.);
    geom->SetTopVolume(top);

    double pdc_x = 900.0, pdc_y = 450.0;
    double z_min = wires.empty() ? -500 : (*std::min_element(wires.begin(), wires.end(), [](auto& a, auto& b){return a.wirez < b.wirez;})).wirez;
    double z_max = wires.empty() ? 0 : (*std::max_element(wires.begin(), wires.end(), [](auto& a, auto& b){return a.wirez < b.wirez;})).wirez;
    double pdc_z_halflen = (z_max - z_min) / 2.0;
    TGeoVolume *pdc_vol = geom->MakeBox("PDC", medGas, pdc_x, pdc_y, pdc_z_halflen);
    top->AddNode(pdc_vol, 1, new TGeoTranslation(0, 0, (z_min+z_max)/2.0));

    std::map<int, TGeoVolume*> wireVolumeMap;
    double wire_radius = 0.5; // 为清晰显示而夸大半径
    double wire_len_y = 2 * pdc_y;
    double wire_len_uv = 2 * sqrt(pdc_x*pdc_x + pdc_y*pdc_y);

    for (const auto& wire : wires) {
        TGeoVolume *wire_vol = nullptr;
        TGeoRotation *rot = new TGeoRotation();
        
        double tx = 0, ty = 0, tz = wire.wirez - (z_min+z_max)/2.0;

        if (wire.anodedir == "X") {
            wire_vol = geom->MakeTube(Form("wire_X_%d", wire.wireid), medGas, 0, wire_radius, wire_len_y/2.0);
            rot->RotateX(90); // 使圆柱体沿Y轴方向
            tx = wire.wirepos;
        } else {
            wire_vol = geom->MakeTube(Form("wire_UV_%d", wire.wireid), medGas, 0, wire_radius, wire_len_uv/2.0);
            double normal_angle_rad=0, wire_angle_deg=0;
            if (wire.anodedir == "U") {
                normal_angle_rad = 45.0 * TMath::DegToRad(); // 法线方向
                wire_angle_deg = 135.0; // 丝线自身方向
            } else { // "V"
                normal_angle_rad = -45.0 * TMath::DegToRad();
                wire_angle_deg = 45.0;
            }
            rot->RotateY(90); // 先将Z轴转到X轴
            rot->RotateZ(wire_angle_deg); // 再绕Z轴转到目标方向
            tx = wire.wirepos * cos(normal_angle_rad);
            ty = wire.wirepos * sin(normal_angle_rad);
        }
        
        TGeoCombiTrans* combi = new TGeoCombiTrans(tx, ty, tz, rot);
        pdc_vol->AddNode(wire_vol, wire.wireid, combi);
        wireVolumeMap[wire.wireid] = wire_vol;
    }
    geom->CloseGeometry();
    std::cout << "TGeo 几何体创建完成，包含 " << wireVolumeMap.size() << " 根丝." << std::endl;

    // 6. 根据事件数据设置可视化属性
    for (std::map<int, TGeoVolume*>::const_iterator it = wireVolumeMap.begin(); it != wireVolumeMap.end(); ++it) {
        it->second->SetLineColorAlpha(kGray, 0.3); // 未击中
        it->second->SetLineWidth(1);
    }
    
    int count_x=0, count_u=0, count_v=0, hit_x=0, hit_u=0, hit_v=0;
    for (const auto& wire : wires) { // 重新统计用于显示
        if (wire.anodedir == "X") count_x++;
        else if (wire.anodedir == "U") count_u++;
        else count_v++;
    }

    for (int wid : hitWireIDs) {
        if (wireVolumeMap.count(wid)) {
            TGeoVolume* vol = wireVolumeMap[wid];
            double norm = wireTotMap[wid];
            int idx = int(norm * (NCont - 1) + 0.5);
            idx = std::max(0, std::min(NCont - 1, idx));
            int color = kBlack;
            
            auto it = std::find_if(wires.begin(), wires.end(), [wid](const WireInfo& w){ return w.wireid == wid; });
            if (it != wires.end()) {
                if(it->anodedir=="X") { color=colorTableX[idx]; hit_x++; }
                if(it->anodedir=="U") { color=colorTableU[idx]; hit_u++; }
                if(it->anodedir=="V") { color=colorTableV[idx]; hit_v++; }
            }
            vol->SetLineColor(color);
            vol->SetLineWidth(3);
        }
    }

    // 7. 创建画布并进行3D可视化
    gStyle->SetOptStat(0);
    TCanvas *c1 = new TCanvas("c1", "PDC Event Visualization (TGeo)", 1400, 900);
    
    top->Draw("ogl");

    for (const auto& tline : trackLines) {
        TGeoTrack *track = new TGeoTrack(1, 1);
        // *** FIX 3 (revised): Correctly handle points from TPolyLine3D ***
        Float_t *points = tline->GetP();
        if (points && tline->GetN() >= 2) { // Ensure there are at least 2 points
            // The points are stored as (x0, y0, z0, x1, y1, z1, ...)
            track->AddPoint(points[0], points[1], points[2], 0);
            track->AddPoint(points[3], points[4], points[5], 0);
        }
        track->SetLineColor(tline->GetLineColor());
        track->SetLineWidth(tline->GetLineWidth());
        geom->AddTrack(track);
    }
    geom->DrawTracks("same");

    TView *view = gPad->GetView();
    if(view){
        Int_t irep = 0;
        view->SetView(0.0, 90.0 + 15.0, -90.0, irep); // 与原版一致的视角
        gPad->Modified(kTRUE);
        gPad->Update();
    }
    
    const double axis_length = 400.0;
    TPolyLine3D *axis_x = new TPolyLine3D(2); axis_x->SetPoint(0,0,0,0); axis_x->SetPoint(1,axis_length,0,0); axis_x->SetLineColor(kRed); axis_x->SetLineWidth(4); axis_x->Draw("same");
    TPolyLine3D *axis_y = new TPolyLine3D(2); axis_y->SetPoint(0,0,0,0); axis_y->SetPoint(1,0,axis_length,0); axis_y->SetLineColor(kGreen+2); axis_y->SetLineWidth(4); axis_y->Draw("same");
    TPolyLine3D *axis_z = new TPolyLine3D(2); axis_z->SetPoint(0,0,0,0); axis_z->SetPoint(1,0,0,axis_length); axis_z->SetLineColor(kBlue); axis_z->SetLineWidth(4); axis_z->Draw("same");
    TPolyMarker3D *origin = new TPolyMarker3D(1); origin->SetPoint(0,0,0,0); origin->SetMarkerStyle(20); origin->SetMarkerSize(2); origin->SetMarkerColor(kBlack); origin->Draw("same");

    // 8. 在主画布上绘制所有2D信息 (图例、标题、文字等)
    c1->cd();
    {
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
            label.SetTextSize(0.025); label.SetTextAlign(11);
            label.DrawLatex(pal_x, y + pal_h + 0.005, pals[p].title);
            
            const std::vector<int>& tbl = *pals[p].tbl;
            for (int i=0; i<(int)tbl.size(); ++i) {
                TBox *b = new TBox(pal_x+i*pal_w/tbl.size(), y, pal_x+(i+1)*pal_w/tbl.size(), y+pal_h);
                b->SetFillColor(tbl[i]); b->SetLineColor(tbl[i]); 
                b->Draw();
            }
            
            label.SetTextSize(0.020);
            label.SetTextAlign(12); label.DrawLatex(pal_x, y - 0.02, Form("%.0f", tot_min));
            label.SetTextAlign(32); label.DrawLatex(pal_x + pal_w, y - 0.02, Form("%.0f", tot_max));
        }

        TLatex title; title.SetNDC(); title.SetTextSize(0.04); title.SetTextFont(62); title.SetTextColor(kBlack);
        title.DrawLatex(0.25, 0.95, Form("PDC Event %d Visualization", target_event));
        
        TLatex info; info.SetNDC(); info.SetTextSize(0.025); info.SetTextFont(42);
        info.SetTextColor(kRed); info.DrawLatex(0.02, 0.84, Form("X wires: %d total, %d hit", count_x, hit_x));
        info.SetTextColor(kGreen+1); info.DrawLatex(0.02, 0.88, Form("U wires: %d total, %d hit", count_u, hit_u));
        info.SetTextColor(kBlue); info.DrawLatex(0.02, 0.80, Form("V wires: %d total, %d hit", count_v, hit_v));
        info.SetTextColor(kGray+2); info.DrawLatex(0.02, 0.75, "Gray: No hit (thin)"); info.DrawLatex(0.02, 0.72, "Color: Hit (thick)");
        info.SetTextColor(kRed); info.DrawLatex(0.02, 0.65, "X axis (Red)");
        info.SetTextColor(kGreen+2); info.DrawLatex(0.02, 0.62, "Y axis (Green)");
        info.SetTextColor(kBlue); info.DrawLatex(0.02, 0.59, "Z axis (Blue)");
    }

    // 9. 更新画布并保存
    c1->Update();
    std::string outputFile = std::string(outputDir) + Form("/pdc_event_%d_3d_TGeo.png", target_event);
    c1->SaveAs(outputFile.c_str());
    std::cout << "可视化图像已保存到: " << outputFile << std::endl;
    
    // 10. 清理内存
    delete pdchitcalib;
    delete pdctrackcalib;
    delete estore;
}

