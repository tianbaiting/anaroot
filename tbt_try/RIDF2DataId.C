#include <sys/stat.h>
#include <sys/types.h>

void RIDF2DataId(const char* filepath = "/home/s057/exp/exp2505_s057/anaroot/users/tbt/ridf/data0073.ridf"){

  gSystem->Load("libanacore.so");

  TArtEventStore *estore = new TArtEventStore();
  estore->Open(filepath);
  TArtRawEventObject *rawevent = estore->GetRawEventObject();
  std::string inputFileName = std::string(filepath);

  // Ensure the output directory exists
  const char* outputDir = "./output";
  struct stat st;
  if (stat(outputDir, &st) != 0) {
    mkdir(outputDir, 0755);
  }

  size_t pos = inputFileName.find_last_of('/');
  std::string fileName = (pos != std::string::npos) ? inputFileName.substr(pos + 1) : inputFileName;
  TFile *fout = new TFile((std::string(outputDir) + "/dataid" + fileName + ".root").c_str(), "RECREATE");


  TNtuple *ntp = new TNtuple("ntp","ntp","sys:cat:det:dtype:val");

  int neve = 0;
  while(estore->GetNextEvent() && neve < 10000){

    for(int i=0;i<rawevent->GetNumSeg();i++){
      TArtRawSegmentObject *seg = rawevent->GetSegment(i);
      int device = seg->GetDevice();
      int fp = seg->GetFP();
      int detector = seg->GetDetector();
      int module = seg->GetModule();

      for(int j=0;j<seg->GetNumData();j++){
	TArtRawDataObject *d = seg->GetData(j);
	int geo = d->GetGeo(); 
	int ch = d->GetCh();
	int val = d->GetVal(); 
	int cat = d->GetCategoryID(); 
	int det = d->GetDetectorID(); 
	int id = d->GetDatatypeID(); 

	ntp->Fill((float)detector,(float)cat,(float)det,(float)id,(float)val);
      }
    }

    estore->ClearData();
    neve ++;
  }

  fout->Write();
  fout->Close();

}

