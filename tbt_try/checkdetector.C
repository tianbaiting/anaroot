#include <sys/stat.h>
#include <string>
#include <set>
#include <vector>
#include <iostream>
void checkdetector(const char* filepath = "../ridf/data1008.ridf") {

    gSystem->Load("libanacore.so");

    // 创建输出目录
    const char* outputDir = "./output";
    struct stat st;
    if (stat(outputDir, &st) != 0) {
        mkdir(outputDir, 0755);
    }

    // 获取输入文件名
    std::string inputFileName = std::string(filepath);
    size_t pos = inputFileName.find_last_of('/');
    std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;

    // 创建detector直方图
    TH1F* h_detector = new TH1F("h_detector", "Detector Distribution;detector;Counts", 32, -0.5, 70);

    // 创建detector TTree
    std::string outroot = std::string(outputDir) + "/" + fileName + "_detector.root";
    TFile* fout = new TFile(outroot.c_str(), "RECREATE");
    int detector_val = 0;
    TTree* detector_tree = new TTree("detector_tree", "detector value tree");
    detector_tree->Branch("detector", &detector_val, "detector/I");

    TArtEventStore *estore = new TArtEventStore();
    estore->Open(filepath);
    TArtRawEventObject *rawevent = estore->GetRawEventObject();

    // 用于收集所有出现过的不重复detector
    std::set<int> detector_set;

    int neve = 0;
    while (estore->GetNextEvent() && neve < 1000) {
        for (int i = 0; i < rawevent->GetNumSeg(); i++) {
            TArtRawSegmentObject *seg = rawevent->GetSegment(i);
            int device = seg->GetDevice();
            int fp = seg->GetFP();
            int detector = seg->GetDetector();
            int module = seg->GetModule();

            for (int j = 0; j < seg->GetNumData(); j++) {
                TArtRawDataObject *d = seg->GetData(j);
                int geo = d->GetGeo();
                int ch = d->GetCh();
                int val = d->GetVal();
                int cat = d->GetCategoryID();
                int det = d->GetDetectorID();
                int id = d->GetDatatypeID();
                // 填充detector直方图
                h_detector->Fill(detector);
                // 填充detector tree
                detector_val = detector;
                detector_tree->Fill();
                // 收集detector
                detector_set.insert(detector);
            }
        }
        estore->ClearData();
        neve++;
    }

    // 保存直方图为PNG
    TCanvas* c1 = new TCanvas("c1", "detector", 800, 600);
    h_detector->Draw();
    std::string outpng = std::string(outputDir) + "/detector_" + fileName + ".png";
    c1->SaveAs(outpng.c_str());

    // 保存tree
    fout->cd();
    detector_tree->Write();
    fout->Close();

    // 输出所有出现过的不重复detector
    std::vector<int> detector_array(detector_set.begin(), detector_set.end());
    std::cout << "all the detector appear(at least once) : [";
    for (size_t i = 0; i < detector_array.size(); ++i) {
        std::cout << detector_array[i];
        if (i != detector_array.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    delete c1;
    delete h_detector;
    delete fout;
}