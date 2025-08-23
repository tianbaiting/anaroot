#include <fstream>
#include <iostream>

void transPDCData(const char* ridfFile = "/home/s057/exp/exp2505_s057/anaroot/users/tbt/ridf/data0073.ridf") {
    gSystem->Load("libanacore.so");

    // 打开RIDF文件
    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridfFile)) {
        std::cerr << "Error: Failed to open RIDF file: " << ridfFile << std::endl;
        return;
    }
    TArtRawEventObject *rawevent = estore->GetRawEventObject();

    // 打开输出文件
    std::ofstream outFile("pdc_readable.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Failed to open output file: pdc_readable.txt" << std::endl;
        return;
    }

    int neve = 0;
    while (estore->GetNextEvent() && neve < 5) { // 可根据需要调整事件数
        outFile << "========== Event " << neve + 1 << " ==========" << std::endl;
        bool hasPDC = false;

        for (int i = 0; i < rawevent->GetNumSeg(); i++) {
            TArtRawSegmentObject *seg = rawevent->GetSegment(i);
            int detector = seg->GetDetector();
            if (detector != 37) continue; // 只处理PDC

            hasPDC = true;
            outFile << "  Segment " << i + 1 << ":" << std::endl;
            outFile << "    Device: " << seg->GetDevice() << std::endl;
            outFile << "    FP: " << seg->GetFP() << std::endl;
            outFile << "    Detector: " << detector << std::endl;
            outFile << "    Module: " << seg->GetModule() << std::endl;
            outFile << "    NumData: " << seg->GetNumData() << std::endl;

            for (int j = 0; j < seg->GetNumData(); j++) {
                TArtRawDataObject *d = seg->GetData(j);
                outFile << "      Data " << j + 1 << ": ";
                outFile << "Geo=" << d->GetGeo()
                        << ", Ch=" << d->GetCh()
                        << ", Val=" << d->GetVal()
                        << ", Edge=" << d->GetEdge()
                        << ", CatID=" << d->GetCategoryID()
                        << ", DetID=" << d->GetDetectorID()
                        << ", DataTypeID=" << d->GetDatatypeID()
                        << std::endl;
            }
        }
        if (!hasPDC) outFile << "  No PDC data in this event." << std::endl;

        estore->ClearData();
        neve++;
    }

    outFile << "Done. Processed " << neve << " events." << std::endl;
    outFile.close();
    std::cout << "PDC rawdata conversion finished. Output: pdc_readable.txt" << std::endl;
}