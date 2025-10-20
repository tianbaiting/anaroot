//// reconstruc pdc and hodp data
// compare y with hodp time up and down (time down-timeup)/2*c

// By tbt
#include <iostream>
#include <sys/stat.h>

#include "TSystem.h"
#include "TClonesArray.h"
#include "TFile.h"
#include "TTree.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TCanvas.h"

#include "TArtSAMURAIParameters.hh"
#include "TArtCalibHODPla.hh"
#include "TArtHODPla.hh"
#include "TArtCalibPDCHit.hh"
#include "TArtCalibPDCTrack.hh"
#include "TArtStoreManager.hh"
#include "TArtEventStore.hh"
#include "TArtDCTrack.hh"
#include "TArtDCHit.hh"

void PDC_Hodp_cor(const char* ridffile = "../ridf/data0074.ridf") {
    // load libraries
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");

    // parameters
    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIHOD.xml");
    samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");

    // prepare event store
    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridffile)) {
        std::cerr << "Error: cannot open " << ridffile << std::endl;
        delete estore;
        return;
    }

    // calibrations / reconstructor
    TArtCalibHODPla *calibhodpla = new TArtCalibHODPla();
    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtCalibPDCTrack *pdctrackcalib = new TArtCalibPDCTrack();

    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *hod_pla_array = (TClonesArray *)sman->FindDataContainer("SAMURAIHODPla");
    TClonesArray *pdc_trk_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCTrack");

    // output
    const char* outputDir = "./output";
    mkdir(outputDir, 0755);
    std::string fname = std::string(outputDir) + "/PDC_HODP_cor.root";
    TFile *fout = new TFile(fname.c_str(), "RECREATE");

    TH2F *h_y_vs_hodp = new TH2F("h_y_vs_hodp", "PDC y vs HOD y ; PDC y (mm) ;HOD y (mm)  (((t_down - t_up) / 2.0) * c_in_pla)", 100, -300, 300, 100, -300, 300);
    TH1F *h_hodp = new TH1F("h_hodp", "HOD positions;pos (mm);entries", 400, -1000, 1000);
    TH1F *h_pdc_y = new TH1F("h_pdc_y", "PDC track y; y (mm); entries", 200, -400, 400);

    // event loop
    const double c_mm_ns = 299.792458 / 1.58; // mm / ns // effective speed in HODP plastic
    Long64_t neve = 0;
    const Long64_t max_events = 100000; // safe cap
    while (estore->GetNextEvent() && neve < max_events) {
        if (neve % 10000 == 0) std::cout << "Processing event " << neve << std::endl;

        // reconstruct detectors
        calibhodpla->ClearData();
        pdchitcalib->ClearData();
        pdctrackcalib->ClearData();

        calibhodpla->ReconstructData();
        pdchitcalib->ReconstructData();
        pdctrackcalib->ReconstructData();

        // compute event-level HOD position: mean of per-plate (tdown - tup)/2 * c
        double hod_sum = 0.0;
        int hod_count = 0;
        if (hod_pla_array) {
            for (int ih = 0; ih < hod_pla_array->GetEntries(); ++ih) {
                TArtHODPla *pla = (TArtHODPla*)hod_pla_array->At(ih);
                if (!pla) continue;
                // prefer reconstructed times (in ns) if available
                double tup = pla->GetTimeU();
                double tdown = pla->GetTimeD();
     
                // fall back to raw times * parameter if reconstructed not available
                if( tup >-900 & tdown > -900){
                double pos = ((tdown - tup) / 2.0) * c_mm_ns; // mm
                hod_sum += pos;
                hod_count++;
                // std::cout << "event" << neve << " plate " << ih << " pos " << pos << std::endl;
                // std::cout << "tim up " << tup << "time down " << tdown << std::endl;
            
                }
                
            }
        }


        // hod_y_average = hod_count > 0 ? hod_sum / hod_count : 0.0;

        double hod_pos_event = 0.0;
        if (hod_count > 0) {
            hod_pos_event = hod_sum / hod_count;
            h_hodp->Fill(hod_pos_event);
        }

        // associate PDC tracks with hod_pos_event
        if (pdc_trk_array&& pdc_trk_array->GetEntries() >0 && hod_count > 0) {

            int ntrks = pdc_trk_array->GetEntries();
            // std::cout << "event " << neve << " ntrks " << ntrks << std::endl;
            for (int it = 0; it < ntrks; ++it) {
                TArtDCTrack *trk = (TArtDCTrack*)pdc_trk_array->At(it);
                if (!trk) continue;
                double y = trk->GetPosition(1);
                h_pdc_y->Fill(y);
                h_y_vs_hodp->Fill(y, hod_pos_event);
                // std::cout << "event " << neve << " pdc track " << it << " y " << y << std::endl;
                // std::cout << "hod pos " << hod_pos_event << std::endl;
             }

        }

        neve++;
    }

    // save output
    TCanvas *c1 = new TCanvas("c1", "PDC y vs HOD y pos", 800, 600);
    h_y_vs_hodp->SetStats(kFALSE);
    h_y_vs_hodp->Draw("COLZ");
    std::string png1 = std::string(outputDir) + "/PDC_y_vs_HODpos.png";
    c1->SaveAs(png1.c_str());
    delete c1;

    // Write histograms to ROOT file (Canvas is not saved to avoid duplication)
    h_hodp->Write();
    h_pdc_y->Write();
    h_y_vs_hodp->Write();

    fout->Close();

    std::cout << "PDC-HODP correlation finished. Output: " << fname << std::endl;
    std::cout << "Events processed: " << neve << std::endl;

    // cleanup
    delete calibhodpla;
    delete pdchitcalib;
    delete pdctrackcalib;
    delete estore;
}