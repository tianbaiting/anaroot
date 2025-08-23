#ifndef __CLING__
#include "TArtEventStore.hh"
#include "TArtRawEventObject.hh"
#include "TArtRawSegmentObject.hh"
#include "TArtRawDataObject.hh"
#include "TArtRunInfo.hh"
#endif

#include <fstream>
#include <iostream>
#include <TSystem.h>


void convertRIDFtoReadable(const char* ridfFile = "../ridf/data1074.ridf") {
    gSystem->Load("libanacore.so");

    TArtEventStore *estore = new TArtEventStore();
    if (!estore->Open(ridfFile)) {
        std::cerr << "Error: Failed to open RIDF file: " << ridfFile << std::endl;
        return;
    }

    TArtRunInfo *runinfo = estore->GetRunInfo();
    std::ofstream outFile("./output/readable1074.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Failed to open output file: readable.txt" << std::endl;
        return;
    }

    outFile << "========== RIDF FILE HEADER ==========" << std::endl;
    if (runinfo) {
        outFile << "Run Number: " << runinfo->GetRunNumber() << std::endl;
        outFile << "Run Name: " << runinfo->GetRunName() << std::endl;
        outFile << "Start Time: " << runinfo->GetStartTime() << std::endl;
        // outFile << "End Time: " << runinfo->GetEndTime() << std::endl;
        // outFile << "End Time: (not available)" << std::endl;
        // //        outFile << "Comment: " << runinfo->GetComment() << std::endl;
        //         outFile << "Comment: (not available)" << std::endl;
    } else {
        outFile << "No run info found in RIDF file." << std::endl;
    }
    outFile << "======================================" << std::endl << std::endl;

    TArtRawEventObject *rawevent = estore->GetRawEventObject();

    int neve = 0;
    while (estore->GetNextEvent()) {
        if (neve > 10) {
            break;        
        }
        
        outFile << "==================== Event " << neve + 1 << " ====================" << std::endl;
        outFile << "Event Header: " << std::endl;
        // outFile << "  Event Type: " << rawevent->GetEventType() << std::endl;
        // outFile << "  Timestamp: " << rawevent->GetTimestamp() << std::endl;

        for (int i = 0; i < rawevent->GetNumSeg(); i++) {
            TArtRawSegmentObject *seg = rawevent->GetSegment(i);
            outFile << "Segment " << i + 1 << ":" << std::endl;
            outFile << "  Device: " << seg->GetDevice() << std::endl;
            outFile << "  FP: " << seg->GetFP() << std::endl;
            outFile << "  Detector: " << seg->GetDetector() << std::endl;
            outFile << "  Module: " << seg->GetModule() << std::endl;
            outFile << "  NumData: " << seg->GetNumData() << std::endl;

            for (int j = 0; j < seg->GetNumData(); j++) {
                TArtRawDataObject *d = seg->GetData(j);
                int geo = d->GetGeo();
                int ch = d->GetCh();
                int val = d->GetVal();
                int cat = d->GetCategoryID();
                int det = d->GetDetectorID();
                int id = d->GetDatatypeID();

                outFile << "    Data " << j + 1 << ":" << std::endl;
                outFile << "      Geo: " << geo << std::endl;
                outFile << "      Channel: " << ch << std::endl;
                outFile << "      Value: " << val << std::endl;
                outFile << "      Category ID: " << cat << std::endl;
                outFile << "      Detector ID: " << det << std::endl;
                outFile << "      Datatype ID: " << id << std::endl;
            }
        }

        estore->ClearData();
        neve++;
    }

    outFile << "Conversion completed. Processed " << neve << " events." << std::endl;
    outFile.close();
    std::cout << "Conversion completed. Results saved to readable.txt" << std::endl;
}