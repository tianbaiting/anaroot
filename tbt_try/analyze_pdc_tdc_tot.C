// 用于分析pdc tot重建位置和tdc的关系
//  now only analayze layer if (layer == 3) for tot reconstruction and  if (layer == 5)n for mintdc

#include <sys/stat.h>
#include <string>
#include <vector>
#include <iostream>
#include <TFile.h>
#include <TTree.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TSystem.h>
#include <TClonesArray.h>


void analyze_pdc_tdc_tot(const char* ridffile = "../ridf/data0012.ridf") {
    
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");

    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");

    TArtEventStore *estore = new TArtEventStore();
    estore->Open(ridffile);

    // 初始化PDC hit和track重建
    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    // TArtCalibPDCTrack *pdctrackcalib = new TArtCalibPDCTrack();

    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");
    // TClonesArray *pdc_trk_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCTrack");

    std::string inputFileName = std::string(ridffile);
    size_t pos = inputFileName.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;

    const char* outputDir = "./output";
    mkdir(outputDir, 0755);
    std::string outroot = std::string(outputDir) + "/" + fileName + "_pdc_tdc_tot.root";

    TFile *fout = new TFile(outroot.c_str(), "RECREATE");

    TH2F *h_tdc_tot[6];
    TH1F *h_tdc[6];
    TH1F *h_tot[6];

    for (int i = 0; i < 6; ++i) {
        h_tdc_tot[i] = new TH2F(Form("h_tdc_totreconstructionlayer%d", i), Form("U vs mintdc for PDC Layer %d", i), 2000, -50, 50, 200, 4000, 14000);
        h_tdc[i] = new TH1F(Form("h_tdc_layer%d", i), Form("TDC for PDC Layer %d", i), 4096, 0, 4096);
        h_tot[i] = new TH1F(Form("h_tot_layer%d", i), Form("TOT for PDC Layer %d", i), 4096, 0, 4096);
    }




    int neve = 0;
    int max_event = 10000000; // Limit number of events for quick test
    while (estore->GetNextEvent() && neve < max_event) {
        if (neve % 10000 == 0) {
            std::cout << "Processing event " << neve << std::endl;
        }

        pdchitcalib->ClearData();
        // pdctrackcalib->ClearData();
        pdchitcalib->ReconstructData();
        // pdctrackcalib->ReconstructData();

        double U = 0.0;
        double Utot=0.0;
        double sumtot=0.0;
        double mintdc=999999;

        int num_hit = pdc_hit_array->GetEntries();
        for (int i = 0; i < num_hit; ++i) {
            // TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            // if (!hit) continue;

            // int layer = hit->GetLayer();
            // if (layer < 0 || layer >= 6) continue;

            // int tdc = hit->GetTDC();
            // int trail_tdc = hit->GetTrailTDC();

            // if (tdc > 0 && trail_tdc > 0) {
            //     int tot = trail_tdc - tdc;
            //     if (tot > 0) {
            //         h_tdc_tot[layer]->Fill(tdc, tot);
            //         h_tdc[layer]->Fill(tdc);
            //         h_tot[layer]->Fill(tot);
            //     }
            // }
            TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            if (!hit) continue;
            int layer = hit->GetLayer();
            if (layer < 0 || layer >= 6) continue;

            int tdc = hit->GetTDC();
            int trail_tdc = hit->GetTrailTDC();

            if (layer == 3)
            {
                double tot = trail_tdc - tdc;
                sumtot += tot;
                Utot += tot*hit->GetWirePosition();
            }
            if (layer == 5)
            {
                if (tdc < mintdc && tdc > 0) mintdc = tdc;
                
            }


            
        }
        // 只在有有效数据时计算和填充
        if (sumtot > 0 && mintdc > 0) {
            U = Utot / sumtot;
            h_tdc_tot[0]->Fill(U, mintdc);
            if (neve < 10) {
                std::cout << "Event " << neve << ": U = " << U << ", mintdc = " << mintdc 
                         << std::endl;
            }
        } else {
            if (neve < 10) {
                std::cout << "Event " << neve << ": No valid data (sumtot=" << sumtot 
                            << ", mintdc=" << mintdc << ")" << std::endl;
            }
        }
        // std::cout << "Event " << neve << ": U = " << U << ", mintdc = " << mintdc << std::endl;
        
        neve++;
    }


    TCanvas *c_tdc0 = new TCanvas("c_tdc0", "TDC Layer 0", 800, 600);
    c_tdc0->cd();
    // if (h_tdc_tot[0]) {
    //     h_tdc_tot[0]->SetStats(kFALSE);
    //     h_tdc_tot[0]->GetXaxis()->SetTitle("U");
    //     h_tdc_tot[0]->GetYaxis()->SetTitle("mintdc");
    //     h_tdc_tot[0]->Draw();
    // }
        h_tdc_tot[0]->Draw();
    c_tdc0->Update();

    std::string pngname = std::string(outputDir) + "/" + fileName + "_tdc_layer0.png";
    c_tdc0->SaveAs(pngname.c_str());
    c_tdc0->Write();
    fout->Write();
    fout->Close();

    std::cout << "Analysis finished. Output written to: " << outroot << std::endl;
    std::cout << "Total events processed: " << neve << std::endl;

    delete pdchitcalib;
    delete estore;
}
