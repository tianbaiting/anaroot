
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


void analyze_pdc_tdc_tot(const char* ridffile = "../ridf/data0011.ridf") {
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");

    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");

    TArtEventStore *estore = new TArtEventStore();
    estore->Open(ridffile);

    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");

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
        h_tdc_tot[i] = new TH2F(Form("h_tdc_tot_layer%d", i), Form("TDC vs TOT for PDC Layer %d", i), 4096, 0, 4096, 4096, 0, 4096);
        h_tdc[i] = new TH1F(Form("h_tdc_layer%d", i), Form("TDC for PDC Layer %d", i), 4096, 0, 4096);
        h_tot[i] = new TH1F(Form("h_tot_layer%d", i), Form("TOT for PDC Layer %d", i), 4096, 0, 4096);
    }

    int neve = 0;
    int max_event = 100000; // Limit number of events for quick test
    while (estore->GetNextEvent() && neve < max_event) {
        if (neve % 10000 == 0) {
            std::cout << "Processing event " << neve << std::endl;
        }

        pdchitcalib->ClearData();
        pdchitcalib->ReconstructData();

        int num_hit = pdc_hit_array->GetEntries();
        for (int i = 0; i < num_hit; ++i) {
            TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            if (!hit) continue;

            int layer = hit->GetLayer();
            if (layer < 0 || layer >= 6) continue;

            int tdc = hit->GetTDC();
            int trail_tdc = hit->GetTrailTDC();

            if (tdc > 0 && trail_tdc > 0) {
                int tot = trail_tdc - tdc;
                if (tot > 0) {
                    h_tdc_tot[layer]->Fill(tdc, tot);
                    h_tdc[layer]->Fill(tdc);
                    h_tot[layer]->Fill(tot);
                }
            }
        }
        neve++;
    }

    fout->Write();
    fout->Close();

    std::cout << "Analysis finished. Output written to: " << outroot << std::endl;
    std::cout << "Total events processed: " << neve << std::endl;

    delete pdchitcalib;
    delete estore;
}
