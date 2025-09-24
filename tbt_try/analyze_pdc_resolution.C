
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <TFile.h>
#include <TTree.h>
#include <TH2F.h>
#include <TSystem.h>
#include <TClonesArray.h>

// Simple helper struct for a cluster of hits
struct HitCluster {
    std::vector<TArtDCHit*> hits;
    double total_charge = 0;
    double position = -9999;
    int plane = -1;

    void CalculatePosition() {
        if (hits.empty() || total_charge == 0) return;

        double weighted_sum = 0;
        for (const auto& hit : hits) {
            double charge = hit->GetTrailTDC() - hit->GetTDC();
            weighted_sum += charge * hit->GetWirePosition();
        }
        position = weighted_sum / total_charge;
    }
};

void analyze_pdc_resolution(const char* ridffile = "../ridf/data0011.ridf") {
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
    std::string outroot = "./output/" + fileName + "_pdc_resolution.root";

    TFile *fout = new TFile(outroot.c_str(), "RECREATE");
    // Assuming U1/U2 are cathode planes and V1/V2 are anode planes for this example
    // You need to verify the actual plane IDs and their types (anode/cathode)
    TH2F *h_posU_tdcV = new TH2F("h_posU_tdcV", "Position from U-Cathode vs TDC from V-Anode; U-Position [mm]; V-TDC", 500, -300, 300, 500, 1500, 2000);

    int neve = 0;
    int max_event = 50000; // Limit events for faster processing

    while (estore->GetNextEvent() && neve < max_event) {
        if (neve % 10000 == 0) std::cout << "Processing event " << neve << std::endl;

        pdchitcalib->ClearData();
        pdchitcalib->ReconstructData();

        std::vector<TArtDCHit*> u_hits, v_hits;
        // *** This is a simplification. You need to find the correct plane IDs for U and V planes. ***
        // Let's assume U-planes (cathode) are plane 81, 84 and V-planes (anode) are 83, 86 based on Fig.22
        for (int i = 0; i < pdc_hit_array->GetEntries(); ++i) {
            TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            if (!hit || hit->GetTDC() <= 0 || hit->GetTrailTDC() <= 0) continue;
            int plane_id = hit->GetPlaneID();
            if (plane_id == 81 || plane_id == 84) { // Assuming these are U-planes (cathodes)
                u_hits.push_back(hit);
            } else if (plane_id == 83 || plane_id == 86) { // Assuming these are V-planes (anodes)
                v_hits.push_back(hit);
            }
        }

        if (u_hits.empty() || v_hits.empty()) {
            neve++;
            continue;
        }

        // Simple clustering for U-plane hits (group adjacent wire IDs)
        std::sort(u_hits.begin(), u_hits.end(), [](TArtDCHit* a, TArtDCHit* b){ return a->GetWireID() < b->GetWireID(); });
        
        std::vector<HitCluster> u_clusters;
        if (!u_hits.empty()) {
            u_clusters.emplace_back();
            u_clusters.back().hits.push_back(u_hits[0]);
            u_clusters.back().total_charge += (u_hits[0]->GetTrailTDC() - u_hits[0]->GetTDC());

            for (size_t i = 1; i < u_hits.size(); ++i) {
                if (u_hits[i]->GetWireID() == u_hits[i-1]->GetWireID() + 1) {
                    u_clusters.back().hits.push_back(u_hits[i]);
                    u_clusters.back().total_charge += (u_hits[i]->GetTrailTDC() - u_hits[i]->GetTDC());
                } else {
                    u_clusters.emplace_back();
                    u_clusters.back().hits.push_back(u_hits[i]);
                    u_clusters.back().total_charge += (u_hits[i]->GetTrailTDC() - u_hits[i]->GetTDC());
                }
            }
        }

        // For each U-cluster, calculate position and correlate with V-TDC
        for (auto& cluster : u_clusters) {
            if (cluster.hits.size() < 2) continue; // Require at least 2 hits for a cluster
            
            cluster.CalculatePosition();
            double u_position = cluster.position;

            // Correlate with the TDC of all hits in the V-plane (simplification)
            for (const auto& v_hit : v_hits) {
                h_posU_tdcV->Fill(u_position, v_hit->GetTDC());
            }
        }

        neve++;
    }

    fout->Write();
    fout->Close();

    std::cout << "Analysis finished. Output written to: " << outroot << std::endl;
}
