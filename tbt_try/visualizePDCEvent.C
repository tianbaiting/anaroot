// PDC事件可视化 - 结合丝室结构和击中数据
// 显示某个事件中被击中的丝（亮、粗）和未击中的丝（灰、细）

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <set>
#include <sys/stat.h>

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

// 前向声明 - 避免直接包含头文件
class TArtSAMURAIParameters;
class TArtEventStore;
class TArtCalibPDCHit;
class TArtStoreManager;
class TArtDCHit;
class TClonesArray;

struct WireInfo {
    double wirepos;
    double wirez;
    std::string anodedir;
    int layer;
    int wireid;
    bool isHit;
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

void visualizePDCEvent(const char* ridffile = "../ridf/data0074.ridf", 
                       const char* xmlfile = "/home/tbt/workspace/dpol/tbt_anaroot/db/SAMURAIPDC.xml",
                       int target_event = 66) {
    
    // 创建输出目录
    const char* outputDir = "./output";
    mkdir(outputDir, 0755);
    
    std::cout << "=== PDC事件可视化 ===" << std::endl;
    std::cout << "目标事件: " << target_event << std::endl;
    std::cout << "输入文件: " << ridffile << std::endl;
    
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
            
            value = extractValue(line, "layer");
            if (!value.empty()) {
                currentWire.layer = std::stoi(value);
            }
            
            value = extractValue(line, "wireid");
            if (!value.empty()) {
                currentWire.wireid = std::stoi(value);
            }
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
    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");
    
    // 3. 读取目标事件的击中数据
    std::set<int> hitWireIDs;
    int neve = 0;
    bool eventFound = false;
    
    while (estore->GetNextEvent()) {
        if (neve == target_event) {
            pdchitcalib->ClearData();
            pdchitcalib->ReconstructData();
            
            int num_hit = pdc_hit_array->GetEntries();
            std::cout << "事件 " << target_event << " 有 " << num_hit << " 个击中" << std::endl;
            
            for (int i = 0; i < num_hit; ++i) {
                TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
                if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                    hitWireIDs.insert(hit->GetWireID());
                    std::cout << "击中丝: Layer=" << hit->GetLayer() 
                              << " WireID=" << hit->GetWireID() 
                              << " Position=" << hit->GetWirePosition()
                              << " TDC=" << hit->GetTDC() << std::endl;
                }
            }
            eventFound = true;
            break;
        }
        neve++;
    }
    
    if (!eventFound) {
        std::cerr << "Error: Event " << target_event << " not found!" << std::endl;
        return;
    }
    
    std::cout << "总共 " << hitWireIDs.size() << " 根丝被击中" << std::endl;
    
    // 4. 标记被击中的丝
    for (auto& wire : wires) {
        if (hitWireIDs.find(wire.wireid) != hitWireIDs.end()) {
            wire.isHit = true;
        }
    }
    
    // 5. 创建3D可视化
    gStyle->SetOptStat(0);
    
    TCanvas *c1 = new TCanvas("c1", "PDC Event Visualization", 1400, 900);
    c1->SetTheta(25);
    c1->SetPhi(35);
    
    // 有效面积参数
    const double halfx = 850.0; // mm
    const double halfy = 400.0; // mm
    
    std::vector<TPolyLine3D*> lines;
    std::vector<double> z_values;
    
    int count_x = 0, count_u = 0, count_v = 0;
    int hit_x = 0, hit_u = 0, hit_v = 0;
    
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
            
            if (wire.isHit) {
                line->SetLineColor(kGreen);
                line->SetLineWidth(3);
                hit_u++;
            } else {
                line->SetLineColor(kGray);
                line->SetLineWidth(1);
            }
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
            
            if (wire.isHit) {
                line->SetLineColor(kBlue);
                line->SetLineWidth(3);
                hit_v++;
            } else {
                line->SetLineColor(kGray);
                line->SetLineWidth(1);
            }
            count_v++;
            
        } else if (wire.anodedir == "X") {
            // X层: 垂直线
            line->SetPoint(0, wire.wirepos, halfy, wire.wirez);
            line->SetPoint(1, wire.wirepos, -halfy, wire.wirez);
            
            if (wire.isHit) {
                line->SetLineColor(kRed);
                line->SetLineWidth(3);
                hit_x++;
            } else {
                line->SetLineColor(kGray);
                line->SetLineWidth(1);
            }
            count_x++;
            
        } else {
            delete line;
            continue;
        }
        
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
    
    // 原点标记
    TPolyMarker3D *origin = new TPolyMarker3D(1);
    origin->SetPoint(0, 0, 0, 0);
    origin->SetMarkerStyle(20);
    origin->SetMarkerSize(2);
    origin->SetMarkerColor(kBlack);
    origin->Draw();
    
    // 添加标题和信息
    TLatex *title = new TLatex();
    title->SetNDC();
    title->SetTextSize(0.04);
    title->SetTextFont(62);
    title->SetTextColor(kBlack);
    title->DrawLatex(0.25, 0.95, Form("PDC Event %d Visualization", target_event));
    
    // 添加统计信息
    TLatex *info = new TLatex();
    info->SetNDC();
    info->SetTextSize(0.025);
    info->SetTextFont(42);
    
    info->SetTextColor(kRed);
    info->DrawLatex(0.02, 0.88, Form("X wires: %d total, %d hit", count_x, hit_x));
    info->SetTextColor(kGreen);
    info->DrawLatex(0.02, 0.84, Form("U wires: %d total, %d hit", count_u, hit_u));
    info->SetTextColor(kBlue);
    info->DrawLatex(0.02, 0.80, Form("V wires: %d total, %d hit", count_v, hit_v));
    
    info->SetTextColor(kGray+2);
    info->DrawLatex(0.02, 0.75, "Gray: No hit (thin)");
    info->DrawLatex(0.02, 0.72, "Color: Hit (thick)");
    
    // 坐标轴说明
    info->SetTextColor(kRed);
    info->DrawLatex(0.02, 0.65, "X axis (Red)");
    info->SetTextColor(kGreen+2);
    info->DrawLatex(0.02, 0.62, "Y axis (Green)");
    info->SetTextColor(kBlue);
    info->DrawLatex(0.02, 0.59, "Z axis (Blue)");
    
    c1->Update();
    
    // 保存图片
    std::string outputFile = std::string(outputDir) + Form("/pdc_event_%d_3d.png", target_event);
    c1->SaveAs(outputFile.c_str());
    
    // 创建击中统计直方图
    TCanvas *c2 = new TCanvas("c2", "Hit Statistics", 800, 600);
    
    TH1F *h_hit_stats = new TH1F("h_hit_stats", 
                                 Form("PDC Hit Statistics - Event %d;Wire Type;Number of Hits", target_event),
                                 3, 0, 3);
    h_hit_stats->GetXaxis()->SetBinLabel(1, "X wires");
    h_hit_stats->GetXaxis()->SetBinLabel(2, "U wires");
    h_hit_stats->GetXaxis()->SetBinLabel(3, "V wires");
    
    h_hit_stats->SetBinContent(1, hit_x);
    h_hit_stats->SetBinContent(2, hit_u);
    h_hit_stats->SetBinContent(3, hit_v);
    
    h_hit_stats->SetFillColor(kCyan);
    h_hit_stats->SetStats(false);
    h_hit_stats->Draw();
    
    // 添加数值标签
    for (int i = 1; i <= 3; i++) {
        double content = h_hit_stats->GetBinContent(i);
        if (content > 0) {
            TLatex *label = new TLatex();
            label->SetTextAlign(22);
            label->SetTextSize(0.04);
            label->DrawLatex(i-0.5, content + content*0.1, Form("%.0f", content));
        }
    }
    
    c2->Update();
    std::string outputFile2 = std::string(outputDir) + Form("/pdc_event_%d_stats.png", target_event);
    c2->SaveAs(outputFile2.c_str());
    
    // 输出结果
    std::cout << "\n=== 可视化完成 ===" << std::endl;
    std::cout << "X丝击中: " << hit_x << "/" << count_x << std::endl;
    std::cout << "U丝击中: " << hit_u << "/" << count_u << std::endl;
    std::cout << "V丝击中: " << hit_v << "/" << count_v << std::endl;
    std::cout << "总击中: " << (hit_x + hit_u + hit_v) << "/" << (count_x + count_u + count_v) << std::endl;
    std::cout << "输出文件: " << outputFile << std::endl;
    std::cout << "统计文件: " << outputFile2 << std::endl;
    
    // 清理
    delete pdchitcalib;
    delete estore;
}