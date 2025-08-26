#include <sys/stat.h>
#include <string>
#include <vector>
#include <iostream>
#include <TMinuit.h>

#ifndef _Cling_
#include <TCanvas.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TPaveText.h>
#include <TSystem.h>
#include <TArtSAMURAIParameters.hh>
#include <TArtEventStore.hh>
#include <TArtCalibPDCHit.hh>
#include <TArtStoreManager.hh>
#include <TArtDCHit.hh>
#include <TClonesArray.h>
#endif

std::vector<TArtDCHit*> hits_buffer_x[2];
std::vector<TArtDCHit*> hits_buffer_u[2];
std::vector<TArtDCHit*> hits_buffer_v[2];

double myChi2Calculation(double x0, double y0, double k_xz, double k_yz) {
    double chi2 = 0;
    double z = 0, X = 0, U = 0, V = 0, x_line = 0, y_line = 0, U_line = 0, V_line = 0;
    double weightx = 0, weightu = 0, weightv = 0;

    // x layers
    for (int l = 0; l < 2; ++l) {
        X = 0; weightx = 0;
        int nhitx_layer = 0;
        for (auto hit : hits_buffer_x[l]) {
            if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                weightx += std::abs(hit->GetTDC() - hit->GetTrailTDC());
                X += std::abs(hit->GetTDC() - hit->GetTrailTDC()) * hit->GetWirePosition();
                z = hit->GetWireZPosition();
                nhitx_layer++;
            }
        }
        x_line = k_xz * z + x0;
        y_line = k_yz * z + y0;
        if (nhitx_layer > 0 && weightx > 0) {
            X /= weightx;
            chi2 += pow(X - x_line, 2);
        }
    }
    // u layers
    for (int l = 0; l < 2; ++l) {
        U = 0; weightu = 0;
        int nhitu_layer = 0;
        for (auto hit : hits_buffer_u[l]) {
            if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                weightu += std::abs(hit->GetTDC() - hit->GetTrailTDC());
                U += std::abs(hit->GetTDC() - hit->GetTrailTDC()) * hit->GetWirePosition();
                z = hit->GetWireZPosition();
                nhitu_layer++;
            }
        }
        x_line = k_xz * z + x0;
        y_line = k_yz * z + y0;
        U_line = (x_line + y_line) * sqrt(2.0) / 2.0;
        if (nhitu_layer > 0 && weightu > 0) {
            U /= weightu;
            chi2 += pow(U - U_line, 2);
        }
    }
    // v layers
    for (int l = 0; l < 2; ++l) {
        V = 0; weightv = 0;
        int nhitv_layer = 0;
        for (auto hit : hits_buffer_v[l]) {
            if (hit->GetTDC() > 0 && hit->GetTrailTDC() > 0) {
                weightv += std::abs(hit->GetTDC() - hit->GetTrailTDC());
                V += std::abs(hit->GetTDC() - hit->GetTrailTDC()) * hit->GetWirePosition() ;
                z = hit->GetWireZPosition();
                nhitv_layer++;
            }
        }
        x_line = k_xz * z + x0;
        y_line = k_yz * z + y0;
        V_line = (x_line - y_line) * sqrt(2.0) / 2.0;
        if (nhitv_layer > 0 && weightv > 0) {
            V /= weightv;
            chi2 += pow(V - V_line, 2);
        }
    }
    return chi2;
}

void fcn_wrapper(Int_t& npar, Double_t* grad, Double_t& fval, Double_t* par, Int_t flag) {
    fval = myChi2Calculation(par[0], par[1], par[2], par[3]);
}

void recoPDCsingleTrackVisual(const char* ridffile = "../ridf/data1008.ridf") {
    int target_event = 97; // 只重建这个 event

    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");
    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");


    TArtEventStore *estore = new TArtEventStore();
    estore->Open(ridffile);

    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");

    
    // 获取输入文件名
    std::string inputFileName = std::string(ridffile);
    size_t pos = inputFileName.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;


    int neve = 0;
    while (estore->GetNextEvent()) {
        if (neve != target_event) { neve++; continue; }
        pdchitcalib->ClearData();
        pdchitcalib->ReconstructData();

        // 清空分组
        for (int i = 0; i < 2; ++i) {
            hits_buffer_x[i].clear();
            hits_buffer_u[i].clear();
            hits_buffer_v[i].clear();
        }

        // 分组hits
        int num_hit = pdc_hit_array->GetEntries();
        for (int i = 0; i < num_hit; ++i) {
            TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            int layer = hit->GetLayer();
            // 假设layer 0,3为u，1,4为x，2,5为v（可根据实际情况调整）
            if (layer == 0 || layer == 3) hits_buffer_u[layer/3].push_back(hit);
            else if (layer == 1 || layer == 4) hits_buffer_x[(layer-1)/3].push_back(hit);
            else if (layer == 2 || layer == 5) hits_buffer_v[(layer-2)/3].push_back(hit);
        }
      
        // 创建每个 layer 的直方图
        TH1F* hU0 = new TH1F("hU0", "U0 Layer Hit Position;U0 Position;Counts", 300, -900, 900);
        TH1F* hU1 = new TH1F("hU1", "U1 Layer Hit Position;U1 Position;Counts", 300, -900, 900);
        TH1F* hV0 = new TH1F("hV0", "V0 Layer Hit Position;V0 Position;Counts", 300, -900, 900);
        TH1F* hV1 = new TH1F("hV1", "V1 Layer Hit Position;V1 Position;Counts", 300, -900, 900);
        TH1F* hX0 = new TH1F("hX0", "X0 Layer Hit Position;X0 Position;Counts", 300, -900, 900);
        TH1F* hX1 = new TH1F("hX1", "X1 Layer Hit Position;X1 Position;Counts", 300, -900, 900);

        // 填充直方图
        for (auto hit : hits_buffer_u[0]) hU0->Fill(hit->GetWirePosition());
        for (auto hit : hits_buffer_u[1]) hU1->Fill(hit->GetWirePosition());
        for (auto hit : hits_buffer_v[0]) hV0->Fill(hit->GetWirePosition());
        for (auto hit : hits_buffer_v[1]) hV1->Fill(hit->GetWirePosition());
        for (auto hit : hits_buffer_x[0]) hX0->Fill(hit->GetWirePosition());
        for (auto hit : hits_buffer_x[1]) hX1->Fill(hit->GetWirePosition());

        // 创建画布并分成6区
        TString canvasTitle = Form("Each Layer Hit Position | File: %s | Event: %d", fileName.c_str(), target_event);
        TCanvas* cAll = new TCanvas("cAll", canvasTitle, 1800, 600);
        cAll->Divide(3,2);

        // 在画布上方添加标题
        cAll->cd(0); // 0号pad是整个画布
        TPaveText* pave = new TPaveText(0.1, 0.92, 0.9, 0.99, "NDC");
        pave->AddText(canvasTitle);
        pave->SetFillColor(0);
        pave->SetBorderSize(0);
        pave->SetTextFont(42);
        pave->SetTextAlign(22);
        pave->Draw();


        cAll->cd(1); hU0->Draw(); gPad->SetGrid();
        cAll->cd(2); hV0->Draw(); gPad->SetGrid();
        cAll->cd(3); hX0->Draw(); gPad->SetGrid();

        cAll->cd(4); hU1->Draw(); gPad->SetGrid();
        cAll->cd(5); hV1->Draw(); gPad->SetGrid();
        cAll->cd(6); hX1->Draw(); gPad->SetGrid();

        cAll->SaveAs("output/each_layer_hit_position.png");

        // 创建二维直方图
TH2F* hU0_2d = new TH2F("hU0_2d", "U0: TDC vs Position;U0 Position;TDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hV0_2d = new TH2F("hV0_2d", "V0: TDC vs Position;V0 Position;TDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hX0_2d = new TH2F("hX0_2d", "X0: TDC vs Position;X0 Position;TDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hU1_2d = new TH2F("hU1_2d", "U1: TDC vs Position;U1 Position;TDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hV1_2d = new TH2F("hV1_2d", "V1: TDC vs Position;V1 Position;TDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hX1_2d = new TH2F("hX1_2d", "X1: TDC vs Position;X1 Position;TDC", 100, -900, 900, 100, 0, 8*4096);

// 填充二维直方图
for (auto hit : hits_buffer_u[0]) hU0_2d->Fill(hit->GetWirePosition(), hit->GetTDC());
for (auto hit : hits_buffer_v[0]) hV0_2d->Fill(hit->GetWirePosition(), hit->GetTDC());
for (auto hit : hits_buffer_x[0]) hX0_2d->Fill(hit->GetWirePosition(), hit->GetTDC());
for (auto hit : hits_buffer_u[1]) hU1_2d->Fill(hit->GetWirePosition(), hit->GetTDC());
for (auto hit : hits_buffer_v[1]) hV1_2d->Fill(hit->GetWirePosition(), hit->GetTDC());
for (auto hit : hits_buffer_x[1]) hX1_2d->Fill(hit->GetWirePosition(), hit->GetTDC());

// 创建新画布并分成6区
TString canvasTitle2 = Form("TDC vs Position | File: %s | Event: %d", fileName.c_str(), target_event);
TCanvas* c2d = new TCanvas("c2d", canvasTitle2, 1800, 600);
c2d->Divide(3,2);

// 在画布上方添加标题
c2d->cd(0);
TPaveText* pave2 = new TPaveText(0.1, 0.92, 0.9, 0.99, "NDC");
pave2->AddText(canvasTitle2);
pave2->SetFillColor(0);
pave2->SetBorderSize(0);
pave2->SetTextFont(42);
pave2->SetTextAlign(22);
pave2->Draw();

c2d->cd(1); hU0_2d->Draw("COLZ");
c2d->cd(2); hV0_2d->Draw("COLZ");
c2d->cd(3); hX0_2d->Draw("COLZ");
c2d->cd(4); hU1_2d->Draw("COLZ");
c2d->cd(5); hV1_2d->Draw("COLZ");
c2d->cd(6); hX1_2d->Draw("COLZ");

c2d->SaveAs("output/each_layer_hit_position_tdc.png");


// 创建二维直方图
TH2F* hU0_trail = new TH2F("hU0_trail", "U0: TrailTDC vs Position;U0 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hV0_trail = new TH2F("hV0_trail", "V0: TrailTDC vs Position;V0 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hX0_trail = new TH2F("hX0_trail", "X0: TrailTDC vs Position;X0 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hU1_trail = new TH2F("hU1_trail", "U1: TrailTDC vs Position;U1 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hV1_trail = new TH2F("hV1_trail", "V1: TrailTDC vs Position;V1 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);
TH2F* hX1_trail = new TH2F("hX1_trail", "X1: TrailTDC vs Position;X1 Position;TrailTDC", 100, -900, 900, 100, 0, 8*4096);

// 填充二维直方图
for (auto hit : hits_buffer_u[0]) hU0_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());
for (auto hit : hits_buffer_v[0]) hV0_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());
for (auto hit : hits_buffer_x[0]) hX0_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());
for (auto hit : hits_buffer_u[1]) hU1_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());
for (auto hit : hits_buffer_v[1]) hV1_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());
for (auto hit : hits_buffer_x[1]) hX1_trail->Fill(hit->GetWirePosition(), hit->GetTrailTDC());

// 创建画布并分成6区
TString canvasTitleTrail = Form("TrailTDC vs Position | File: %s | Event: %d", fileName.c_str(), target_event);
TCanvas* cTrail = new TCanvas("cTrail", canvasTitleTrail, 1800, 600);
cTrail->Divide(3,2);

// 在画布上方添加标题
cTrail->cd(0);
TPaveText* paveTrail = new TPaveText(0.1, 0.92, 0.9, 0.99, "NDC");
paveTrail->AddText(canvasTitleTrail);
paveTrail->SetFillColor(0);
paveTrail->SetBorderSize(0);
paveTrail->SetTextFont(42);
paveTrail->SetTextAlign(22);
paveTrail->Draw();

cTrail->cd(1); hU0_trail->Draw("COLZ");
cTrail->cd(2); hV0_trail->Draw("COLZ");
cTrail->cd(3); hX0_trail->Draw("COLZ");
cTrail->cd(4); hU1_trail->Draw("COLZ");
cTrail->cd(5); hV1_trail->Draw("COLZ");
cTrail->cd(6); hX1_trail->Draw("COLZ");

cTrail->SaveAs("output/each_layer_hit_position_trailtdc.png");

// 创建二维直方图
TH2F* hU0_dt = new TH2F("hU0_dt", "U0: (TrailTDC-TDC) vs Position;U0 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);
TH2F* hV0_dt = new TH2F("hV0_dt", "V0: (TrailTDC-TDC) vs Position;V0 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);
TH2F* hX0_dt = new TH2F("hX0_dt", "X0: (TrailTDC-TDC) vs Position;X0 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);
TH2F* hU1_dt = new TH2F("hU1_dt", "U1: (TrailTDC-TDC) vs Position;U1 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);
TH2F* hV1_dt = new TH2F("hV1_dt", "V1: (TrailTDC-TDC) vs Position;V1 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);
TH2F* hX1_dt = new TH2F("hX1_dt", "X1: (TrailTDC-TDC) vs Position;X1 Position;TrailTDC-TDC", 100, -900, 900, 100, -100, 1000);

// 填充二维直方图
for (auto hit : hits_buffer_u[0]) hU0_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());
for (auto hit : hits_buffer_v[0]) hV0_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());
for (auto hit : hits_buffer_x[0]) hX0_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());
for (auto hit : hits_buffer_u[1]) hU1_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());
for (auto hit : hits_buffer_v[1]) hV1_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());
for (auto hit : hits_buffer_x[1]) hX1_dt->Fill(hit->GetWirePosition(), hit->GetTrailTDC() - hit->GetTDC());

// 创建画布并分成6区
TString canvasTitleDT = Form("TrailTDC-TDC vs Position | File: %s | Event: %d", fileName.c_str(), target_event);
TCanvas* cDT = new TCanvas("cDT", canvasTitleDT, 1800, 600);
cDT->Divide(3,2);

// 在画布上方添加标题
cDT->cd(0);
TPaveText* paveDT = new TPaveText(0.1, 0.92, 0.9, 0.99, "NDC");
paveDT->AddText(canvasTitleDT);
paveDT->SetFillColor(0);
paveDT->SetBorderSize(0);
paveDT->SetTextFont(42);
paveDT->SetTextAlign(22);
paveDT->Draw();

cDT->cd(1); hU0_dt->Draw("COLZ");
cDT->cd(2); hV0_dt->Draw("COLZ");
cDT->cd(3); hX0_dt->Draw("COLZ");
cDT->cd(4); hU1_dt->Draw("COLZ");
cDT->cd(5); hV1_dt->Draw("COLZ");
cDT->cd(6); hX1_dt->Draw("COLZ");

cDT->SaveAs("output/each_layer_hit_position_dt.png");

        // 拟合
        TMinuit minuit(4);
        minuit.SetFCN(fcn_wrapper);
        minuit.DefineParameter(0, "x0", 0.0, 0.001, -1000.0, 1000.0);
        minuit.DefineParameter(1, "y0", 0.0, 0.001, -800.0, 800.0);
        minuit.DefineParameter(2, "k_xz", 0.0, 0.001, -100.0, 100.0);
        minuit.DefineParameter(3, "k_yz", 0.0, 0.001, -100.0, 100.0);
        minuit.SetPrintLevel(-1);
        minuit.SetMaxIterations(100);
        minuit.Migrad();

        double x0, y0, k_xz, k_yz, err;
        minuit.GetParameter(0, x0, err);
        minuit.GetParameter(1, y0, err);
        minuit.GetParameter(2, k_xz, err);
        minuit.GetParameter(3, k_yz, err);

        double chi2_final = myChi2Calculation(x0, y0, k_xz, k_yz);
        std::cout << "Event " << neve << " track fit result: x0=" << x0 << " y0=" << y0
                  << " k_xz=" << k_xz << " k_yz=" << k_yz << " chi2=" << chi2_final << std::endl;

        
        break; // 只处理一个event
    }
}