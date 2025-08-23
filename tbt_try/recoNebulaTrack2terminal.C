
#include <iostream>
void recoNebulaTrack2terminal(const char* ridffile = "/home/s057/exp/exp2505_s057/anaroot/users/tbt/ridf/data0115.ridf") {
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");

    // It's good practice to set the include path if your custom classes are not in standard ROOT include paths
    // Adjust this path if your anaroot/users/tbt/src/include is different or if headers are elsewhere
    gSystem->AddIncludePath("-I/home/s057/exp/exp2505_s057/anaroot/users/tbt/src/include");
    gSystem->AddIncludePath("-I/home/s057/exp/exp2505_s057/anaroot/users/tbt/src/sources/Reconstruction/SAMURAI/include");


    TArtSAMURAIParameters *param = TArtSAMURAIParameters::Instance();
    if (!param) {
        std::cerr << "Error: Failed to get TArtSAMURAIParameters instance." << std::endl;
        return;
    }


    param->LoadParameter((char*)"/home/s057/exp/exp2505_s057/anaroot/users/tbt/db/NEBULA.2023_7_6.xml"); 

    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridffile)) {
        std::cerr << "Error: Cannot open RIDF file: " << ridffile << std::endl;
        delete estore;
        return;
    }

    // Initialize reconstruction classes
    TArtCalibNEBULAHPC *nebulahpc_calib = new TArtCalibNEBULAHPC();
    TArtCalibNEBULA    *nebulapla_calib = new TArtCalibNEBULA(); // Corrected type
    TArtRecoNeutron    *reco_neutron    = new TArtRecoNeutron();

    TArtStoreManager *sman = TArtStoreManager::Instance();

    std::cout << "Starting event loop for NEBULA reconstruction..." << std::endl;
    int neve = 0;
    while (estore->GetNextEvent() && neve < 100) { // Process first 100 events
        std::cout << "========== Event " << neve + 1 << " ==========" << std::endl;

        // 1. Clear data from previous event
        nebulahpc_calib->ClearData();
        nebulapla_calib->ClearData(); 
        reco_neutron->ClearData();

        // 2. Reconstruct current event's data
        // LoadRawData is typically called internally by ReconstructData if fDataLoaded is false.
        // If your framework requires explicit LoadRawData, uncomment the lines below.
        // nebulahpc_calib->LoadRawData(); 
        // nebulapla_calib->LoadData(); // TArtCalibNEBULA uses LoadData()

        nebulahpc_calib->ReconstructData();
        nebulapla_calib->ReconstructData(); 
        reco_neutron->ReconstructData();

        // 3. Output reconstructed results

        // Output HPC hits
        int n_hpc_hits = nebulahpc_calib->GetNumNEBULAHPC();
        std::cout << "  NEBULA HPC Hits: " << n_hpc_hits << std::endl;
        for (int i = 0; i < n_hpc_hits; ++i) {
            TArtNEBULAHPC* hit = nebulahpc_calib->GetNEBULAHPC(i);
            if (hit) {
                std::cout << "    HPC Hit " << i
                          << ": ID=" << hit->GetID()
                          << ", Layer=" << hit->GetLayer()
                          << ", SubLayer=" << hit->GetSubLayer()
                          << ", TRaw=" << hit->GetTRaw()
                          << ", TCal=" << hit->GetTCal()
                          << std::endl;
            }
        }

        // Output Pla hits
        int n_pla_hits = nebulapla_calib->GetNumNEBULAPla();
        std::cout << "  NEBULA Pla Hits: " << n_pla_hits << std::endl;
        for (int i = 0; i < n_pla_hits; ++i) {
            TArtNEBULAPla* pla_hit = nebulapla_calib->GetNEBULAPla(i);
            if (pla_hit) {
                std::cout << "    Pla Hit " << i
                          << ": ID=" << pla_hit->GetID()
                          << ", Layer=" << pla_hit->GetLayer()
                          << ", SubLayer=" << pla_hit->GetSubLayer()
                          << ", QUAveCal=" << pla_hit->GetQAveCal()
                          << ", TAveCal=" << pla_hit->GetTAveCal()
                          << ", PosCal=" << pla_hit->GetPosCal()
                          << std::endl;
            }
        }

        // Output Neutron reconstruction results
        TClonesArray* neutron_array = reco_neutron->GetNeutronArray();
        int n_neutron = neutron_array ? neutron_array->GetEntriesFast() : 0;
        std::cout << "  Reconstructed Neutrons: " << n_neutron << std::endl;
        for (int i = 0; i < n_neutron; ++i) {
            TArtNeutron* neutron = (TArtNeutron*)neutron_array->At(i);
            if (neutron) {
                std::cout << "    Neutron " << i
                          << ": Time=" << neutron->GetTime()
                          << ", MeVee=" << neutron->GetMeVee()
                          << ", PosX=" << neutron->GetPos(0)
                          << ", PosY=" << neutron->GetPos(1)
                          << ", PosZ=" << neutron->GetPos(2)
                          << std::endl;
            }
        }

        estore->ClearData(); // Clear raw event data for the next event
        neve++;
    }

    std::cout << "Finished event loop. Processed " << neve << " events." << std::endl;

    // Clean up
    delete nebulahpc_calib;
    delete nebulapla_calib;
    delete reco_neutron;
    delete estore;

}