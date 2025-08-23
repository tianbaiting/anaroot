#include "TArtCalibCATANA.hh" 
#include "TArtCATANACsI.hh"
#include "TArtCATANACsIPara.hh"
#include "TArtCATANAParameters.hh"
#include "TArtRawEventObject.hh"
#include "TArtCore.hh" 
#include "TArtStoreManager.hh"
#include "TArtReconstruction.hh"
//#include "TArtMapper.hh"

#include <TROOT.h>
#include <TMath.h>
#include <TClonesArray.h>

#include <stdio.h>

//__________________________________________________________
TArtCalibCATANA::TArtCalibCATANA()
  : TArtReconstruction("CATANACsI")
{
  TArtCore::Info(__FILE__,"Creating the CATANA detector objects...");
  sman = TArtStoreManager::Instance();
  setup = (TArtCATANAParameters*)sman->FindParameters("CATANAParameters");
  if(!setup){
    TArtCore::Info(__FILE__,"Can not find parameter handler: CATANAParameters");
    throw;
  }

  fCsIArray = new TClonesArray("TArtCATANACsI",10);
  fCsIArray->SetName("CATANACsI");
  fCsIArray->SetOwner();
  sman->AddDataContainer(fCsIArray);

}

//__________________________________________________________
TArtCalibCATANA::~TArtCalibCATANA()  {
  ClearData();

  delete fCsIArray;
}

//__________________________________________________________
void TArtCalibCATANA::LoadData()   {

  TArtRawEventObject *fEvent = (TArtRawEventObject *)
    sman->FindDataContainer("RawEvent");

  for(Int_t i=0;i<fEvent->GetNumSeg();i++){
    TArtRawSegmentObject *seg = fEvent->GetSegment(i);
    Int_t device   = seg->GetDevice();
    Int_t detector = seg->GetDetector();
    if(CATANAQ == detector || CATANAT == detector) {
      LoadData(seg);
    }
  }
}

//__________________________________________________________
void TArtCalibCATANA::LoadData(TArtRawSegmentObject *seg)   {

  Int_t device   = seg->GetDevice();
  Int_t fpl      = seg->GetFP();
  Int_t detector = seg->GetDetector();
  if(CATANAQ != detector && CATANAT != detector) return;

  for(Int_t i=0;i<seg->GetNumData();++i){
    TArtRawDataObject *d = seg->GetData(i);
    Int_t geo = d->GetGeo(); 
    Int_t ch = d->GetCh(); 
    Int_t val = (Int_t)d->GetVal();
    TArtRIDFMap mm(fpl,detector,geo,ch);
    TArtCATANACsIPara *para = (TArtCATANACsIPara*)setup->GetCATANACsIPara(&mm);
    if(NULL == para){
      TArtCore::Warning(__FILE__,"Could not find TArtCATANACsIPara...: Dev:%d, %s", 
			device, mm.GetMapInfo());
      continue;
    }
    /*
    std::cout << "    : " << geo << ", " << ch << ", " << val 
	      << ", " << para->IsTRef() << std::endl;
    */
    if(para->IsTRef()){ // TRef
      Int_t trefid = 0;
      if(geo == 10) trefid = 1;
      fTRefCsI[trefid].SetID(para->GetID());
      fTRefCsI[trefid].SetDetectorName(para->GetDetectorName());
      fTRefCsI[trefid].SetRawTDC(val);
    }
    else{ // detectors 
      Int_t id = para->GetID();
      TArtCATANACsI *csi = FindCsI(id);
      if(!csi){
	Int_t ncsi = fCsIArray->GetEntries();
	csi = new ((*fCsIArray)[ncsi]) TArtCATANACsI();
	csi->SetID(para->GetID());
	csi->SetFpl(para->GetFPL());
	csi->SetDetectorName(*(para->GetDetectorName()));
	csi->SetPosX(para->GetPosX());
	csi->SetPosY(para->GetPosY());
	csi->SetPosZ(para->GetPosZ());
	csi->SetLayer(para->GetLayer());
	csi->SetChannel(para->GetChannel());
	csi->SetFrame(para->GetFrame());
      }
      
      if(para->GetADCMap() == mm){
	if(csi->GetRawADC() < 0) csi->SetRawADC(val);
	else TArtCore::Warning(__FILE__, "Multiple ADC Value: ID= %d",csi->GetID());
      }
      else if(para->GetTDCMap() == mm){
	if(csi->GetRawTDC() < 0) csi->SetRawTDC(val);
      }
      else{
	TArtCore::Warning(__FILE__, "Strange Map Dev: %d %s",device, mm.GetMapInfo());
      }
    }
  }

  fDataLoaded = true;
  return;
}

//__________________________________________________________
void TArtCalibCATANA::ClearData()   {
  fCsIArray->Clear();
  fDataLoaded = false;
  fReconstructed = false;
  return;
}

//__________________________________________________________
void TArtCalibCATANA::ReconstructData(){ // call after the raw data are loaded
  if(!fDataLoaded) LoadData();

  Int_t tref[2] = {-1,-1};
  for(Int_t i=0;i<2;++i) tref[i] = fTRefCsI[i].GetRawTDC();

  if(tref[0] < 0 || tref[1] < 0){
    TArtCore::Warning(__FILE__,"no TRef %d, %d", tref[0], tref[1]);
    return;
  }

  Int_t ncsi = fCsIArray->GetEntries();
  for(Int_t icsi=0;icsi<ncsi;++icsi){
    TArtCATANACsI *csi = (TArtCATANACsI*)fCsIArray->At(icsi);
    Int_t id = csi->GetID();
    TArtCATANACsIPara *para = setup->FindCATANACsIPara(id);
    if(!para){
      TArtCore::Warning(__FILE__,"cannot find CATANA Parameter: %d",id);
      continue;
    }
    /*
    // Remove invalid events
    if( csi->GetRawADC()<0 || csi->GetRawTDC()<0){
      fCsIArray->RemoveAt(icsi);
      continue;
    }
    */
    Int_t adc = csi->GetRawADC();
    Int_t tdcsub = csi->GetRawTDC();
    if(id>0 && id<=128) tdcsub -= tref[0];
    else tdcsub -= tref[1];

    Bool_t gammaOverFlow = false;
    if(adc > 4096) gammaOverFlow = true;

    // Gamma Calib
    Double_t energy = adc * para->GetQCal() + para->GetQPed();
    Double_t time = tdcsub * para->GetTCal() + para->GetTOffset();

    // Proton calib is not performed in this stage. 
    // Proton information will be added later.

    csi->SetRawTDC_TRefSubtracted(tdcsub);
    csi->SetEnergy(energy);
    csi->SetTime(time);
    csi->SetGammaOverFlow(gammaOverFlow);

  }
  
  //fCsIArray->Compress();
  fReconstructed = true;
}

//__________________________________________________________
// This function is for backward compatibility. It is better to use
// GetDopperCorrectedEnergy in TArtCATANACsI.
void TArtCalibCATANA::DopplerCorrect(Double_t beta)   {

  if(!fReconstructed){
    TArtCore::Info(__FILE__,"Data is not reconstructed.");
    return;
  }

  for(Int_t i=0;i<GetCsIEntries();++i){
    TArtCATANACsI *csi = (TArtCATANACsI*)fCsIArray->At(i);
    Double_t x = csi->GetPosX();
    Double_t y = csi->GetPosY();
    Double_t z = csi->GetPosZ();
    Double_t abs = TMath::Sqrt(TMath::Power(x,2)+TMath::Power(y,2)+
                               TMath::Power(z,2));
    Double_t cost = z/abs;
    Double_t edop = csi->GetEnergy() * (1-beta*cost)/TMath::Sqrt((1.0-beta*beta));
    csi->SetDoppCorEnergy(edop);
  }

  return;
}


//__________________________________________________________
TArtCATANACsI * TArtCalibCATANA::GetCsI(Int_t i) {
  return (TArtCATANACsI *)fCsIArray->At(i);
}
//__________________________________________________________
Int_t TArtCalibCATANA::GetCsIEntries() {
  return fCsIArray->GetEntries();
}
//__________________________________________________________
TArtCATANACsI * TArtCalibCATANA::FindCsI(Int_t id){
  for(Int_t i=0;i<GetCsIEntries();i++)
    if(id == ((TArtCATANACsI*)fCsIArray->At(i))->GetID())
      return (TArtCATANACsI*)fCsIArray->At(i);
  return NULL;
}
