
#include "TArtCalibNEBULAHPC.hh" 

#include "TArtRawEventObject.hh"
#include "TArtCore.hh" 
#include "TArtReconstruction.hh" 
#include "TArtStoreManager.hh"
#include "TArtMap.hh"
#include "segidlist.hh"

#include "TArtSAMURAIParameters.hh"
#include "TArtNEBULAHPC.hh"
#include "TArtNEBULAPlaPara.hh"

#include "TClonesArray.h"
#include "TMath.h"
#include <iostream>
#include <cmath>

//__________________________________________________________
TArtCalibNEBULAHPC::TArtCalibNEBULAHPC(const TString outdataname) 
  : TArtReconstruction(outdataname), fSAMURAIParameters(0)
{
  TArtCore::Info(__FILE__,"Creating the NEBULAHPC detector objects...");

  fStoreManager = TArtStoreManager::Instance();
  fNEBULAHPCArray = new TArtNEBULAHPCArray("TArtNEBULAHPC", 16);
  fNEBULAHPCArray->SetOwner();
  fNEBULAHPCArray->SetName("NEBULAHPC");
  fNEBULAPlaParaArray = new TArtNEBULAPlaParaArray("TArtNEBULAPlaPara", 16);
  fNEBULAPlaParaArray->SetOwner();
  fNEBULAPlaParaArray->SetName("NEBULAHPCPara");
  fStoreManager->AddDataContainer(fNEBULAHPCArray);
  fNEBULAPlaParaArray = new TArtNEBULAPlaParaArray;
  fSAMURAIParameters = (const TArtSAMURAIParameters*)fStoreManager->FindParameters("SAMURAIParameters");
  if(!fSAMURAIParameters){
    TArtCore::Info(__FILE__,"Could not find SAMURAIParameters.");
    throw;
  }
}

//__________________________________________________________
TArtCalibNEBULAHPC::~TArtCalibNEBULAHPC()
{
  delete fNEBULAPlaParaArray;
  delete fNEBULAHPCArray;
}

//__________________________________________________________
void TArtCalibNEBULAHPC::LoadRawData()
{
  TArtRawEventObject* fEvent = (TArtRawEventObject*)fStoreManager->FindDataContainer("RawEvent");

  for(Int_t i=0; i<fEvent->GetNumSeg(); ++i){
    TArtRawSegmentObject* seg = fEvent->GetSegment(i);
    Int_t device = seg->GetDevice();
    Int_t fpl = seg->GetFP();
    Int_t detector = seg->GetDetector();
    if(device != SAMURAI) continue;
    //if(detector != HPCT) continue; // analysis only hpc
    if(detector != NEBULA2T) continue; // for new config. since 2022

    for(Int_t j=0; j<seg->GetNumData(); ++j){
      TArtRawDataObject* d = seg->GetData(j);
      Int_t geo = d->GetGeo(); 
      Int_t ch = d->GetCh(); 
      Int_t val = (Int_t)d->GetVal();
      TArtRIDFMap mm(fpl,detector,geo,ch);
      const TArtNEBULAPlaPara* para = fSAMURAIParameters->FindNEBULAPlaUPara(mm);

      if(!para) continue;
      if (!para->IsHPC()) continue;// skip non-HPC data

      Int_t ID = para->GetHPCID();

      if(FindNEBULAPlaPara(ID)){
	Int_t npara = fNEBULAPlaParaArray->GetEntries();
	new ((*fNEBULAPlaParaArray)[npara]) TArtNEBULAPlaPara(*para);

	fIDNHPCParaMap.insert(std::pair<int, int>(ID, npara)); //optimization
      }
      TArtNEBULAHPC* hpc = FindNEBULAHPC(ID);
      if(!hpc){
	Int_t nhpc = fNEBULAHPCArray->GetEntries();
	hpc = new ((*fNEBULAHPCArray)[nhpc]) TArtNEBULAHPC();
	hpc->SetID(ID);
	hpc->SetFpl(para->GetFpl());
	hpc->SetDetectorName(para->GetDetectorName());
	hpc->SetLayer(para->GetLayer());
	hpc->SetSubLayer(para->GetSubLayer());
	hpc->SetDetPos(para->GetDetPos());

	fIDNHPCMap.insert(std::pair<int, int>(ID, nhpc)); //optimization
      }

      hpc->SetTRaw(val);
    }
  }

  fDataLoaded = true;
}

//__________________________________________________________
void TArtCalibNEBULAHPC::ReconstructData()
{
  if(!fDataLoaded) LoadRawData();

  Int_t multiplicity = 0;
  for(Int_t i=0;i<GetNumNEBULAHPC();++i){
    TArtNEBULAHPC* hpc = GetNEBULAHPC(i);
    Int_t id = hpc->GetID();
    const TArtNEBULAPlaPara* para = fSAMURAIParameters->FindNEBULAPlaPara(id);
    if(!para){
      TArtCore::Info(__FILE__,"cannot find para %d U", id); // programming problem
      continue;
    }

    Double_t traw = hpc->GetTRaw();
    Double_t tcal = traw * para->GetTUCal() + para->GetTUOff();
    
    hpc->SetTCal(tcal);

    if(TMath::Finite(traw)) ++multiplicity;
    hpc->SetDataState(1);
  }
  SetMultiplicity(multiplicity);
 
  fReconstructed = true;
}

//__________________________________________________________
Int_t TArtCalibNEBULAHPC::GetNumNEBULAHPC() const
{
  return fNEBULAHPCArray->GetEntries();
}

//__________________________________________________________
TArtNEBULAHPC* TArtCalibNEBULAHPC::GetNEBULAHPC(Int_t i) const
{
  return (TArtNEBULAHPC*)fNEBULAHPCArray->At(i);
}

//__________________________________________________________
TArtNEBULAHPC* TArtCalibNEBULAHPC::FindNEBULAHPC(Int_t id) const
{
  std::map<int,int>::const_iterator it = fIDNHPCMap.find(id);
  if(it != fIDNHPCMap.end()) return GetNEBULAHPC(it->second);
  else return 0;
}

//__________________________________________________________
TArtNEBULAHPCArray* TArtCalibNEBULAHPC::GetNEBULAHPCArray() const
{
  return fNEBULAHPCArray;
}

//__________________________________________________________
Int_t TArtCalibNEBULAHPC::GetNumNEBULAPlaPara() const
{
  return fNEBULAPlaParaArray->GetEntries();
}

//__________________________________________________________
TArtNEBULAPlaPara* TArtCalibNEBULAHPC::GetNEBULAPlaPara(Int_t i) const
{
  return (TArtNEBULAPlaPara*)fNEBULAPlaParaArray->At(i);
}

//__________________________________________________________
TArtNEBULAPlaPara* TArtCalibNEBULAHPC::FindNEBULAPlaPara(Int_t id) const
{
  std::map<int,int>::const_iterator it = fIDNHPCParaMap.find(id);
  if(it != fIDNHPCParaMap.end()) return GetNEBULAPlaPara(it->second);
  else return 0;
}

//__________________________________________________________
TArtNEBULAPlaParaArray* TArtCalibNEBULAHPC::GetNEBULAPlaParaArray() const
{
  return fNEBULAPlaParaArray;
}

//__________________________________________________________
Bool_t TArtCalibNEBULAHPC::GetHPCHit(Int_t id)
{
  TArtNEBULAHPC* hpc = FindNEBULAHPC(id);
  if (hpc==0) return false;
  if (hpc->GetDataState()==1) return true;
}
//__________________________________________________________
void TArtCalibNEBULAHPC::ClearData()
{
  fNEBULAHPCArray->Clear("C");
  fNEBULAPlaParaArray->Clear();
  fIDNHPCMap.clear();
  fIDNHPCParaMap.clear();
  SetMultiplicity(0);
  fDataLoaded = false;
  fReconstructed = false;
}

