#include <sys/stat.h>
#include <string>
#include <vector>
#include <iostream>
#include <TMinuit.h>
#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include <TH2F.h>

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

void recoPDCmyself(const char* ridffile = "../ridf/data1008.ridf") {
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");
    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIPDC_fit.xml");

    TArtEventStore *estore = new TArtEventStore();
    estore->Open(ridffile);

    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");

    // 获取输入文件名
    std::string inputFileName = std::string(ridffile);
    size_t pos = inputFileName.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;

    // 创建输出ROOT文件和TTree
    const char* outputDir = "./output";
    std::string outroot = std::string(outputDir) + "/" + fileName + "_myself_pdc.root";
    std::string outpng = std::string(outputDir) + "/" + fileName + "_myself_pdc_track_xy.png";

    TFile *fout = new TFile(outroot.c_str(), "RECREATE");
    TTree *tree = new TTree("pdctree", "PDC Track Tree");
    int event, ndf, nhit;
    double x, y, ax, ay, chi2;
    tree->Branch("event", &event, "event/I");
    tree->Branch("x", &x, "x/D");
    tree->Branch("y", &y, "y/D");
    tree->Branch("ax", &ax, "ax/D");
    tree->Branch("ay", &ay, "ay/D");
    tree->Branch("chi2", &chi2, "chi2/D");
    tree->Branch("ndf", &ndf, "ndf/I");
    tree->Branch("nhit", &nhit, "nhit/I");

    int neve = 0;
    int max_event = 10000;
    while (estore->GetNextEvent() && neve < max_event) {
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

        
        // 统计有效hit数
        nhit = 0;

        for (int i = 0; i < 2; ++i) {
            nhit += hits_buffer_x[i].size();
            nhit += hits_buffer_u[i].size();
            nhit += hits_buffer_v[i].size();
        }
        if (nhit==0) {
            TArtCore::Warning(__FILE__, "No valid hit in this event, skip track fitting.");
            neve++;
            continue;
        }


        

        // 拟合
        TMinuit minuit(4);
        minuit.SetPrintLevel(-1);
        minuit.SetFCN(fcn_wrapper);
        minuit.DefineParameter(0, "x0", 0.0, 0.001, -1000.0, 1000.0);
        minuit.DefineParameter(1, "y0", 0.0, 0.001, -800.0, 800.0);
        minuit.DefineParameter(2, "k_xz", 0.0, 0.001, -100.0, 100.0);
        minuit.DefineParameter(3, "k_yz", 0.0, 0.001, -100.0, 100.0);

        minuit.SetMaxIterations(100);
        minuit.Migrad();

        double x0, y0, k_xz, k_yz, err;
        minuit.GetParameter(0, x0, err);
        minuit.GetParameter(1, y0, err);
        minuit.GetParameter(2, k_xz, err);
        minuit.GetParameter(3, k_yz, err);

        double chi2_final = myChi2Calculation(x0, y0, k_xz, k_yz);

        chi2 = chi2_final;
   
        // 角度
        ax = atan(k_xz);
        ay = atan(k_yz);
        x = x0;
        y = y0;
        ndf = 2; // 可根据实际情况调整

        event = neve;
        tree->Fill();

        neve++;
    }

    tree->Write();

    // 画图
    TCanvas *c1 = new TCanvas("c1", "PDC Track X-Y", 800, 600);
    tree->Draw("y:x>>hxy", "", "COLZ");
    c1->SaveAs(outpng.c_str());
    delete c1;

    std::cout << "Output ROOT file: " << outroot << std::endl;
    std::cout << "Output PNG file: " << outpng << std::endl;

    fout->Close();
    delete pdchitcalib;
    delete estore;
}