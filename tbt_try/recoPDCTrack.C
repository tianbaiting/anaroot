#include <sys/stat.h>
#include <string>
#include <set>
#include <vector>
#include <iostream>



void recoPDCTrack(const char* ridffile = "../ridf/data1008.ridf") {

  gSystem->Load("libXMLParser.so"); // 先加载XML解析库
    gSystem->Load("libanacore.so");
    // 加载PDC参数
    TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
    samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");
    // samuraiparameters->LoadParameter("../db/SAMURAIPDC_fit.xml");
    // 打开RIDF文件
    TArtEventStore *estore = new TArtEventStore();
    estore->Open(ridffile);

    // 初始化PDC hit和track重建
    TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
    TArtCalibPDCTrack *pdctrackcalib = new TArtCalibPDCTrack();

    TArtStoreManager *sman = TArtStoreManager::Instance();
    TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");
    TClonesArray *pdc_trk_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCTrack");

    // 获取输入文件名
    std::string inputFileName = std::string(ridffile);
    size_t pos = inputFileName.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;

    // 创建输出ROOT文件和TTree
    const char* outputDir = "./output";
    std::string outroot = std::string(outputDir) + "/" + fileName + "_pdc.root";
    std::string outpng = std::string(outputDir) + "/" + fileName + "_pdc_track_xy.png";

    TFile *fout = new TFile(outroot.c_str(), "RECREATE");
    TTree *tree = new TTree("pdctree", "PDC Track Tree");
    int event, trackid, ndf, nhit;
    double x, y, ax, ay, chi2;
    tree->Branch("event", &event, "event/I");
    tree->Branch("trackid", &trackid, "trackid/I");
    tree->Branch("x", &x, "x/D");
    tree->Branch("y", &y, "y/D");
    tree->Branch("ax", &ax, "ax/D");
    tree->Branch("ay", &ay, "ay/D");
    tree->Branch("chi2", &chi2, "chi2/D");
    tree->Branch("ndf", &ndf, "ndf/I");
    tree->Branch("nhit", &nhit, "nhit/I");

    int neve = 0;
    // while (estore->GetNextEvent() ) {
    
    while (estore->GetNextEvent() && neve < 200000) {
        pdchitcalib->ClearData();
        pdctrackcalib->ClearData();
        pdchitcalib->ReconstructData();
        pdctrackcalib->ReconstructData();

        int ntrk = pdc_trk_array->GetEntries();
        for (int i = 0; i < ntrk; ++i) {
            TArtDCTrack *trk = (TArtDCTrack*)pdc_trk_array->At(i);
            x = trk->GetPosition(0);
            y = trk->GetPosition(1);
            ax = trk->GetAngle(0);
            ay = trk->GetAngle(1);
            chi2 = trk->GetChi2();
            ndf = trk->GetNDF();
            nhit = trk->GetNumHitLayer();
            event = neve;
            trackid = i;
            tree->Fill();
            // std::cout << "Event: " << neve << ", Track ID: " << i 
            //           << ", X: " << x << ", Y: " << y 
            //           << ", Ax: " << ax << ", Ay: " << ay 
            //           << ", Chi2: " << chi2 
            //           << ", NDF: " << ndf 
            //           << ", NHits: " << nhit 
            //           << std::endl;
        }
        neve++;
    }
    tree->Write();

    TCanvas *c1 = new TCanvas("c1", "PDC Track X-Y", 800, 600);
    tree->Draw("y:x>>hxy", "", "COLZ");
    c1->SaveAs(outpng.c_str());
    delete c1;
    std::cout << "Output ROOT file: " << outroot << std::endl;
    std::cout << "Output PNG file: " << outpng << std::endl;
    std::cout << "Total events processed: " << neve << std::endl;
    
    fout->Close();
    delete pdchitcalib;
    delete pdctrackcalib;
    delete estore;
}
