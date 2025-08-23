#include <iostream>
#include <string>
#include <vector>
#include <TFile.h>
#include <TTree.h>
#include <TSystem.h>
// #include <TArtStoreManager.h>
// #include <TArtEventStore.h>
// #include <TArtSAMURAIParameters.h>
// #include <TArtCalibNEBULAHPC.hh>
// #include <TArtCalibNEBULA.hh>
// #include <TArtRecoNeutron.hh>
// #include <TArtNEBULAHPC.hh>
// #include <TArtNEBULAPla.hh>
// #include <TArtNeutron.hh>

void recoNebulaTrack(const char* ridffile = "/home/s057/exp/exp2505_s057/anaroot/users/tbt/ridf/data1203.ridf") {
    gSystem->Load("libXMLParser.so");
    gSystem->Load("libanacore.so");

    gSystem->AddIncludePath("-I/home/s057/exp/exp2505_s057/anaroot/users/tbt/src/include");
    gSystem->AddIncludePath("-I/home/s057/exp/exp2505_s057/anaroot/users/tbt/src/sources/Reconstruction/SAMURAI/include");

    TArtSAMURAIParameters *param = TArtSAMURAIParameters::Instance();
    if (!param) {
        std::cerr << "Error: Failed to get TArtSAMURAIParameters instance." << std::endl;
        return;
    }
    // param->LoadParameter((char*)"/home/s057/exp/exp2505_s057/anaroot/users/tbt/db/NEBULA.2023_7_6.xml");
    param->LoadParameter((char*)"/home/s057/exp/exp2505_s057/anaroot/users/tbt/db/NEBULA.20250625.xml");


    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridffile)) {
        std::cerr << "Error: Cannot open RIDF file: " << ridffile << std::endl;
        delete estore;
        return;
    }

    // --- 创建输出文件和TTree ---
    std::string basename = std::string(ridffile);
    size_t slash_pos = basename.find_last_of('/');
    if(slash_pos != std::string::npos) basename = basename.substr(slash_pos + 1);
    size_t dot_pos = basename.find_last_of('.');
    if(dot_pos != std::string::npos) basename = basename.substr(0, dot_pos);

    const char* outputDir = "./output";
    gSystem->mkdir(outputDir, kTRUE); // 创建目录，如果不存在
    std::string outfilename = std::string(outputDir) + "/" + basename + "_nebula.root";

    TFile* fout = new TFile(outfilename.c_str(), "RECREATE");
    TTree* tree = new TTree("nebula_tree", "NEBULA Reconstructed Data");
    // --- 定义TTree的分支变量 ---
    int event_number;
    // HPC Hits
    std::vector<int> hpc_id, hpc_layer, hpc_sublayer;
    std::vector<double> hpc_traw, hpc_tcal;
    // Pla Hits
    std::vector<int> pla_id, pla_layer, pla_sublayer;
    std::vector<double> pla_qavecal, pla_tavecal, pla_poscal;
    // Neutrons
    std::vector<double> neutron_time, neutron_mevee, neutron_posx, neutron_posy, neutron_posz;

    // --- 创建分支 ---
    tree->Branch("event", &event_number);
    tree->Branch("hpc_id", &hpc_id);
    tree->Branch("hpc_layer", &hpc_layer);
    tree->Branch("hpc_sublayer", &hpc_sublayer);
    tree->Branch("hpc_traw", &hpc_traw);
    tree->Branch("hpc_tcal", &hpc_tcal);
    tree->Branch("pla_id", &pla_id);
    tree->Branch("pla_layer", &pla_layer);
    tree->Branch("pla_sublayer", &pla_sublayer);
    tree->Branch("pla_qavecal", &pla_qavecal);
    tree->Branch("pla_tavecal", &pla_tavecal);
    tree->Branch("pla_poscal", &pla_poscal);
    tree->Branch("neutron_time", &neutron_time);
    tree->Branch("neutron_mevee", &neutron_mevee);
    tree->Branch("neutron_posx", &neutron_posx);
    tree->Branch("neutron_posy", &neutron_posy);
    tree->Branch("neutron_posz", &neutron_posz);

    // 初始化重建类
    TArtCalibNEBULAHPC *nebulahpc_calib = new TArtCalibNEBULAHPC();
    TArtCalibNEBULA    *nebulapla_calib = new TArtCalibNEBULA();
    TArtRecoNeutron    *reco_neutron    = new TArtRecoNeutron();

    std::cout << "Starting event loop for NEBULA reconstruction..." << std::endl;
    int neve = 0;
    while (estore->GetNextEvent() && neve < 10000) { // 可以处理更多事件
        if(neve % 1000 == 0) std::cout << "Processing event " << neve << "..." << std::endl;

        // 1. 清空上一事件的数据
        nebulahpc_calib->ClearData();
        nebulapla_calib->ClearData();
        reco_neutron->ClearData();

        // 清空分支变量
        event_number = neve;
        hpc_id.clear(); hpc_layer.clear(); hpc_sublayer.clear(); hpc_traw.clear(); hpc_tcal.clear();
        pla_id.clear(); pla_layer.clear(); pla_sublayer.clear(); pla_qavecal.clear(); pla_tavecal.clear(); pla_poscal.clear();
        neutron_time.clear(); neutron_mevee.clear(); neutron_posx.clear(); neutron_posy.clear(); neutron_posz.clear();

        // 2. 重建当前事件
        nebulahpc_calib->ReconstructData();
        nebulapla_calib->ReconstructData();
        reco_neutron->ReconstructData();

        // 3. 填充分支变量
        // 填充 HPC hits
        for (int i = 0; i < nebulahpc_calib->GetNumNEBULAHPC(); ++i) {
            TArtNEBULAHPC* hit = nebulahpc_calib->GetNEBULAHPC(i);
            if (hit) {
                hpc_id.push_back(hit->GetID());
                hpc_layer.push_back(hit->GetLayer());
                hpc_sublayer.push_back(hit->GetSubLayer());
                hpc_traw.push_back(hit->GetTRaw());
                hpc_tcal.push_back(hit->GetTCal());
            }
        }

        // 填充 Pla hits
        for (int i = 0; i < nebulapla_calib->GetNumNEBULAPla(); ++i) {
            TArtNEBULAPla* pla_hit = nebulapla_calib->GetNEBULAPla(i);
            if (pla_hit) {
                pla_id.push_back(pla_hit->GetID());
                pla_layer.push_back(pla_hit->GetLayer());
                pla_sublayer.push_back(pla_hit->GetSubLayer());
                pla_qavecal.push_back(pla_hit->GetQAveCal());
                pla_tavecal.push_back(pla_hit->GetTAveCal());
                pla_poscal.push_back(pla_hit->GetPosCal());
            }
        }

        // 填充中子
        TClonesArray* neutron_array = reco_neutron->GetNeutronArray();
        if (neutron_array) {
            for (int i = 0; i < neutron_array->GetEntriesFast(); ++i) {
                TArtNeutron* neutron = (TArtNeutron*)neutron_array->At(i);
                if (neutron) {
                    neutron_time.push_back(neutron->GetTime());
                    neutron_mevee.push_back(neutron->GetMeVee());
                    neutron_posx.push_back(neutron->GetPos(0));
                    neutron_posy.push_back(neutron->GetPos(1));
                    neutron_posz.push_back(neutron->GetPos(2));
                }
            }
        }
        
        // 4. 填充TTree
        tree->Fill();

        estore->ClearData();
        neve++;
    }

    std::cout << "Finished event loop. Processed " << neve << " events." << std::endl;

    // 5. 写入并关闭文件
    fout->cd();
    tree->Write();
    fout->Close();
    std::cout << "Output saved to: " << outfilename << std::endl;

    // 清理
    delete fout;
    delete nebulahpc_calib;
    delete nebulapla_calib;
    delete reco_neutron;
    delete estore;
}