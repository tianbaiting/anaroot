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


void analyze_pdc_tdc_tot(const char* ridffile = "../ridf/data0074.ridf") {
    
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

    // TH2F *h_tdc_tot[6];
    // TH1F *h_tdc[6];
    // TH1F *h_tot[6];

    // for (int i = 0; i < 6; ++i) {
    //     h_tdc_tot[i] = new TH2F(Form("h_tdc_totreconstructionlayer%d", i), Form("U vs mintdc for PDC Layer %d", i), 2000, -200, 50, 200, 4600, 5300);
    //     h_tdc[i] = new TH1F(Form("h_tdc_layer%d", i), Form("TDC for PDC Layer %d", i), 4096, 0, 4096);
    //     h_tot[i] = new TH1F(Form("h_tot_layer%d", i), Form("TOT for PDC Layer %d", i), 4096, 0, 4096);
    // }

    // Create output tree to store per-event U and mintdc
    // only analaye layer 0, 3.  not layer 3,5 for reconstruction.

    TTree *tout = new TTree("pdc_tdc", "PDC tdc-tot reconstruction per event");
    double tree_U = 0.0;
    double tree_mintdc_forU= 0.0;
    double tree_V = 0.0;
    double tree_mintdc_forV = 0.0;

    tout->Branch("U", &tree_U, "U/D");
    tout->Branch("mintdc_forU", &tree_mintdc_forU, "mintdc_forU/D");
    tout->Branch("V", &tree_V, "V/D");
    tout->Branch("mintdc_forV", &tree_mintdc_forV, "mintdc_forV/D");




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
        double sumtot_forU=0.0;
        double mintdc_forU=999999;

        double V = 0.0;
        double Vtot=0.0;
        double sumtot_forV=0.0;
        double mintdc_forV=999999;

        int num_hit = pdc_hit_array->GetEntries();
        for (int i = 0; i < num_hit; ++i) {
            
            TArtDCHit *hit = (TArtDCHit*)pdc_hit_array->At(i);
            if (!hit) continue;
            int layer = hit->GetLayer();
            if (layer < 0 || layer >= 6) continue;

            int tdc = hit->GetTDC();
            int trail_tdc = hit->GetTrailTDC();

            if (layer == 0)
            {
                double tot = trail_tdc - tdc;
                sumtot_forU += tot;
                Utot += tot*hit->GetWirePosition();
            }
            if (layer == 2)
            {
                if (tdc < mintdc_forU && tdc > 0) mintdc_forU = tdc;
    
            }



            if (layer == 3)
            {
                double tot = trail_tdc - tdc;
                sumtot_forV += tot;
                Vtot += tot*hit->GetWirePosition();
            }
            if (layer == 5)
            {
                if (tdc < mintdc_forV && tdc > 0) mintdc_forV = tdc;
    
            }
            


            
        }
        // for u
        // 只在有有效数据时计算和填充
        if (sumtot_forU > 0 && mintdc_forU > 0 && mintdc_forU<99999) {
            U = Utot / sumtot_forU;
            // h_tdc_tot[0]->Fill(U, mintdc_forU);
            // fill tree values
            tree_U = U;
            tree_mintdc_forU = mintdc_forU;
            tout->Fill();
            if (neve < 10) {
                std::cout << "Event " << neve << ": U = " << U << ", mintdc = " << mintdc_forU
                         << std::endl;
            }
        } else {
            if (neve < 10) {
                std::cout << "Event " << neve << ": No valid data (sumtot=" << sumtot_forU
                            << ", mintdc=" << mintdc_forU << ")" << std::endl;
            }
        }
        // for v
        if (sumtot_forV > 0 && mintdc_forV > 0 && mintdc_forV<99999) {
            V = Vtot / sumtot_forV;
            // h_tdc_tot[0]->Fill(V, mintdc_forV);
            // fill tree values
            tree_V = V;
            tree_mintdc_forV = mintdc_forV;
            tout->Fill();
            if (neve < 10) {
                std::cout << "Event " << neve << ": V = " << V << ", mintdc = " << mintdc_forV
                         << std::endl;
            }
        } else {
            if (neve < 10) {
                std::cout << "Event " << neve << ": No valid data (sumtot=" << sumtot_forV
                            << ", mintdc=" << mintdc_forV << ")" << std::endl;
            }
        }
        // std::cout << "Event " << neve << ": U = " << U << ", mintdc = " << mintdc << std::endl;
        
        neve++;
    }


    std::string pngname = std::string(outputDir) + "/" + fileName + "_tdc_layer0.png";
    std::string pngname1 = std::string(outputDir) + "/" + fileName + "_tdc_layer2.png";


    // 画出两张TH2F 根据branch
    TCanvas *c_tdc0 = new TCanvas("c_tdc0", "TDC Layer 0", 800, 600);
    c_tdc0->cd();
    // 画出两个 branch 的二维直方图（把 tree 的两个分支投影到 TH2F）
    // 这里创建两个 TH2F，并用 TTree::Project 填充
    int nbx = 200, nby = 200;
    double uxmin = -200, uxmax = 50;    // U 轴范围，根据实际调整
    double uymin = 4600, uymax = 5300;  // mintdc 轴范围，根据实际调整

    // U 对 mintdc_forU
    TH2F *h_U_mintdc = new TH2F("U:mintdc_forU", "U vs mintdc_forU", nbx, uxmin, uxmax, nby, uymin, uymax);
    tout->Project("U:mintdc_forU", "mintdc_forU:U", ""); // varexp = "y:x"
    if (h_U_mintdc) {
        h_U_mintdc->SetStats(kFALSE);
        h_U_mintdc->GetXaxis()->SetTitle("U");
        h_U_mintdc->GetYaxis()->SetTitle("mintdc_forU");
        h_U_mintdc->Draw("COLZ");
    }
   
    c_tdc0->SaveAs(pngname.c_str());



    TCanvas *c_tdc1 = new TCanvas("c_tdc1", "TDC Layer 2", 800, 600);
    c_tdc1->cd();
    // V 对 mintdc_forV
    TH2F *h_V_mintdc = new TH2F("V:mintdc_forV", "V vs mintdc_forV", nbx, uxmin, uxmax, nby, uymin, uymax);
    tout->Project("V:mintdc_forV", "mintdc_forV:V", "");

    if (h_V_mintdc) {
        h_V_mintdc->SetStats(kFALSE);
        h_V_mintdc->GetXaxis()->SetTitle("V");
        h_V_mintdc->GetYaxis()->SetTitle("mintdc_forV");
        h_V_mintdc->Draw("COLZ");
    }

    c_tdc1->SaveAs(pngname1.c_str());

    tout->Write();
    fout->Close();
    
    // write the tree as well
    // 

    // 简要说明（中文）：

    // - tout->Fill()：在事件循环中调用，用于把当前分支的值写入内存中的树（TTree）的下一个条目（entry）。这是逐事件累积数据的操作，只在内存/缓冲区中完成，不一定立刻写到磁盘。

    // - tout->Write()：把内存中的树序列化并写入当前打开的TFile（当前目录）。通常在所有 Fill 完成后、关闭文件之前调用，或在需要把已累计的数据强制写入磁盘时调用。调用前最好确保目标文件是当前目录（fout->cd()）。

    // - fout->Close()：会把文件中所有对象写入磁盘并关闭文件（内部会调用写操作并 flush）。所以即便不显式调用 tout->Write()，Close() 也会把树写入文件；不过显式调用 tout->Write() 可以控制写入时机和选项（比如覆盖名为同样对象）。

    // 建议用法：
    // - 每事件调用 tout->Fill()；
    // - 事件循环结束后调用 fout->cd(); tout->Write(); 然后 fout->Close()。
    // 或者如果需要在长运行过程中定期保存，使用 tout->AutoSave(...) 或周期性调用 tout->AutoSave()/fout->Flush()。

    std::cout << "Analysis finished. Output written to: " << outroot << std::endl;
    std::cout << "Total events processed: " << neve << std::endl;

    delete pdchitcalib;
    delete estore;
}
