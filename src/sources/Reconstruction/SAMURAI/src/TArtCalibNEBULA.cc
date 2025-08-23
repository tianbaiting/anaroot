
#include "TArtCalibNEBULA.hh" 
#include "TArtPlastic.hh"
#include "TArtCalibSAMURAITZero.hh"
#include "TArtTZero.hh"
#include "TArtMath.hh"

#include "TMath.h"
#include "TClonesArray.h"
#include "TRandom.h"

#include <cmath>
#include <limits>

//__________________________________________________________
TArtCalibNEBULA::TArtCalibNEBULA()
  : TArtReconstruction("NEBULAPla"), fSAMURAIParameters(0)
{
  TArtCore::Info(__FILE__,"Creating the NEBULA detector objects...");

  fStoreManager = TArtStoreManager::Instance();
  fNEBULAPlaArray = new TArtNEBULAPlaArray("TArtNEBULAPla", 300);
  fNEBULAPlaArray->SetOwner();
  fNEBULAPlaArray->SetName("NEBULAPla");
  fNEBULAPlaParaArray = new TArtNEBULAPlaParaArray("TArtNEBULAPlaPara", 300);
  fNEBULAPlaParaArray->SetOwner();
  fNEBULAPlaParaArray->SetName("NEBULAPlaPara");
  fStoreManager->AddDataContainer(fNEBULAPlaArray);
  fSAMURAIParameters = (const TArtSAMURAIParameters*)fStoreManager->FindParameters("SAMURAIParameters");
  if(!fSAMURAIParameters){
    TArtCore::Info(__FILE__,"Could not find SAMURAIParameters.");
    throw;
  }

  //  fCalibSAMURAIT0 = (TArtCalibSAMURAIT0*)fStoreManager->FindCalibContainer("CalibSAMURAIT0");
  //  if(!fCalibSAMURAIT0){
  //    TArtCore::Info(__FILE__, "t0 will be NaN during this analysis.");
  //  }

  //  fT0Array = (TClonesArray *)fStoreManager->FindDataContainer("SAMURAITZero");
  fT0Array = (TClonesArray *)fStoreManager->FindDataContainer("SAMURAIT0");
  if(!fT0Array) TArtCore::Info(__FILE__, "t0 will be NaN during this analysis.");
}

//__________________________________________________________
TArtCalibNEBULA::~TArtCalibNEBULA()
{
  delete fNEBULAPlaParaArray;
  delete fNEBULAPlaArray;
}

//__________________________________________________________
void TArtCalibNEBULA::LoadData()
{
  TArtRawEventObject* fEvent = (TArtRawEventObject*)fStoreManager->FindDataContainer("RawEvent");

  for(Int_t i=0; i<fEvent->GetNumSeg(); ++i){
    TArtRawSegmentObject* seg = fEvent->GetSegment(i);
    LoadData(seg);
  }
  fDataLoaded = true;
}

void TArtCalibNEBULA::LoadData(TArtRawSegmentObject* seg)
{
  Int_t device = seg->GetDevice();
  Int_t fpl = seg->GetFP();
  Int_t detector = seg->GetDetector();

//  std::cout<<"dev="<<device<<" "
//	   <<"fpl="<<fpl<<" "
//	   <<"det="<<detector<<" "
//	   <<std::endl;
  if(device != SAMURAI) return;
  if(detector != NEBULA1Q &&
     detector != NEBULA1T &&
     detector != NEBULA2Q &&
     detector != NEBULA2T &&
     detector != NEBULA3Q &&
     detector != NEBULA3T &&
     detector != NEBULA4Q &&
     detector != NEBULA4T){
     return; // analysis only tdc and qdc
  }
  
  for(Int_t j=0; j<seg->GetNumData(); ++j){
    TArtRawDataObject* d = seg->GetData(j);
    Int_t geo = d->GetGeo(); 
    Int_t ch = d->GetCh(); 
    Int_t val = (Int_t)d->GetVal();
    TArtRIDFMap mm(fpl,detector,geo,ch);
    const TArtNEBULAPlaPara* parau = fSAMURAIParameters->FindNEBULAPlaUPara(mm);
    const TArtNEBULAPlaPara* parad = fSAMURAIParameters->FindNEBULAPlaDPara(mm);
    const TArtNEBULAPlaPara* para;
//    std::cout<<"geo="<<geo<<" "
//	     <<"ch="<<ch<<" "
//	     <<"val="<<val<<" "
//	     <<"parau="<<parau<<" "
//	     <<"parad="<<parad<<" "
//	     <<std::endl;

    if(parau && !parad){
      para = parau;
    }else if(!parau && parad){
      para = parad;
    }else if(parau && parad){
      TArtCore::Info(__FILE__,"TArtNEBULAPara...: Dev:%d, %s found in U and D",
		     device, mm.GetMapInfo());
      return;
    }else{
      TArtCore::Info(__FILE__,"Could not find TArtNEBULAPlaPara...: Dev:%d, %s",
		     device, mm.GetMapInfo());
      //return;
      continue;
    }
    if(para->GetIgnore()){
      TArtCore::Debug(__FILE__,"Ignore TArtNEBULAPlaPara...: Dev:%d, %s", device, mm.GetMapInfo());
      return;
    }

    if(para->IsHPC()) continue;// Skip HPC data

    if(!FindNEBULAPlaPara(para->GetID())){
      Int_t npara = fNEBULAPlaParaArray->GetEntries();
      new ((*fNEBULAPlaParaArray)[npara]) TArtNEBULAPlaPara(*para);

      fIDNPlaParaMap.insert(std::pair<int, int>(para->GetID(), npara));
    }
    TArtNEBULAPla* pla = FindNEBULAPla(para->GetID());
    if(!pla){
      Int_t npla = fNEBULAPlaArray->GetEntries();
      pla = new ((*fNEBULAPlaArray)[npla]) TArtNEBULAPla();
      pla->SetID(para->GetID());
      pla->SetFpl(para->GetFpl());
      pla->SetDetectorName(para->GetDetectorName());
      //pla->SetDetectorName(*(para->GetDetectorName()));
      pla->SetLayer(para->GetLayer());
      pla->SetSubLayer(para->GetSubLayer());
      pla->SetDetPos(para->GetDetPos());

      fIDNPlaMap.insert(std::pair<int, int>(para->GetID(), npla));
      if (para->IsTref()) {
	fGeoPlaMap.insert(std::pair<int, TArtNEBULAPla*>(geo, pla));
//	std::cout<<geo<<" "
//		 <<val<<" "
//		 <<para<<" "
//		 <<parau<<" "
//		 <<parad<<" "
//		 <<pla->GetID()<<" "
//		 <<std::endl;
      }
    }

    if(detector == NEBULA1T ||
       detector == NEBULA2T ||
       detector == NEBULA3T ||
       detector == NEBULA4T){

      Int_t edge = d->GetEdge();

      if(parau){
	if (edge==0){
	  pla->SetTUMulti(pla->GetTUMulti()+1);
	  if( pla->GetTURaw()<0 ) pla->SetTURaw(val);
	}
	else if ( pla->GetTURaw_Trailing()<0 ) pla->SetTURaw_Trailing(val);
      }else{
	if (edge==0){
	  pla->SetTDMulti(pla->GetTDMulti()+1);
	  if( pla->GetTDRaw()<0 ) pla->SetTDRaw(val);
	}
	else if ( pla->GetTDRaw_Trailing()<0 ) pla->SetTDRaw_Trailing(val);
      }

//      std::cout<<"geo="<<geo<<" "
//	       <<"ch="<<ch<<" "
//      std::cout<<"T:  ID="<<pla->GetID()<<" "
//	       <<"val="<<val<<" "
//	       <<"TU="<<pla->GetTURaw()<<" "
//	       <<"TD="<<pla->GetTDRaw()<<" "
//	       <<"edge="<<edge<<" "
//	       <<std::endl;


    }

    if(detector == NEBULA1Q ||
       detector == NEBULA2Q ||
       detector == NEBULA3Q ||
       detector == NEBULA4Q){
//      std::cout<<"geo="<<geo<<" "
//	       <<"ch="<<ch<<" "
//      std::cout<<"Q:  ID="<<pla->GetID()<<" "
//	       <<"val="<<val<<" "
//	       <<std::endl;

      if(parau){
	pla->SetQURaw(val);
      }else{
	pla->SetQDRaw(val);
      }
    }
  }//for(Int_t j=0; j<seg->GetNumData(); ++j){
}

//__________________________________________________________
void TArtCalibNEBULA::ReconstructData()
{
  if(!fDataLoaded) LoadData();

  //共通のoffset。どう値を取ってくるかは後で考える(とりあえず手打ち？)。
  Double_t posxoff = 0;
  Double_t posyoff = 0;
  Double_t poszoff = 0;

  for(Int_t i=0;i<GetNumNEBULAPla();++i){
    TArtNEBULAPla* pla = GetNEBULAPla(i);
    Int_t id = pla->GetID();
    const TArtNEBULAPlaPara* para = FindNEBULAPlaPara(id);
    if(!para){
      TArtCore::Info(__FILE__,"cannot find para %d", id); // programming problem
      continue;
    }
    if (para->IsTref()) continue;


    // find tref
    TArtRIDFMap map_u = para->GetMapTU();
    TArtRIDFMap map_d = para->GetMapTD();

    Double_t turaw_ref = GetTRef(map_u);
    Double_t tdraw_ref = GetTRef(map_d);

//    std::cout<<id<<" "
//	     <<"TU="<<pla->GetTURaw()<<" "
//	     <<"TU_tl="<<pla->GetTURaw_Trailing()<<" "
//	     <<"QU="<<pla->GetQURaw()<<" "
//	     <<"tref_u="<<turaw_ref<<"    "
//	     <<"TD="<<pla->GetTDRaw()<<" "
//	     <<"TD_tl="<<pla->GetTDRaw_Trailing()<<" "
//	     <<"QD="<<pla->GetQDRaw()<<" "
//	     <<"tref_d="<<tdraw_ref<<" "
//	     <<std::endl;

    Double_t turaw = pla->GetTURaw();
    Double_t tdraw = pla->GetTDRaw();

    Double_t turaw_subtref = turaw - turaw_ref;
    Double_t tdraw_subtref = tdraw - tdraw_ref;

    Double_t turaw_width = pla->GetTURaw_Trailing() - pla->GetTURaw();
    Double_t tdraw_width = pla->GetTDRaw_Trailing() - pla->GetTDRaw();

    Double_t quraw = pla->GetQURaw();
    Double_t qdraw = pla->GetQDRaw();

    double t0 = TArtMath::InvalidNum();
    if(fT0Array){
      if(0 == fT0Array->GetEntries()){
	TArtCore::Error(__FILE__,"CalibSAMURAIT0 seems not to be reconstructed.\n Cannot reconstruct CalibSAMURAITZero.");
      }else{
	//	t0 = ((TArtTZero*)fT0Array->At(0))->GetTZeroCal();
	t0 = ((TArtTZero*)fT0Array->At(0))->GetTZeroSlw();
      }
    }

    Int_t hit = 0;
    if(TMath::Finite(quraw)) hit += 1;
    if(TMath::Finite(qdraw)) hit += 2;
    if(TMath::Finite(turaw)) hit += 4;
    if(TMath::Finite(tdraw)) hit += 8;      

    Double_t quped = quraw - para->GetQUPed();
    Double_t qdped = qdraw - para->GetQDPed();
    Double_t qucal = quped * para->GetQUCal();
    Double_t qdcal = qdped * para->GetQDCal();
    Double_t qaveped = sqrt(quped*qdped);
    Double_t qavecal = para->GetQAveCal()*sqrt(qucal*qdcal);
    Double_t logqped = log(quped/qdped);
    Double_t logqcal = log(qucal/qdcal);
    Double_t ivsqrtquped = 1/sqrt(quped);
    Double_t ivsqrtqdped = 1/sqrt(qdped);
    Double_t ivsqrtqaveped = 1/sqrt(qaveped);

    Double_t tucal = turaw_subtref * para->GetTUCal() + para->GetTUOff();
    Double_t tdcal = tdraw_subtref * para->GetTDCal() + para->GetTDOff();
    Double_t tucal_width = turaw_width * para->GetTUCal();
    Double_t tdcal_width = tdraw_width * para->GetTDCal();
    Double_t tuslw = tucal;
    Double_t tdslw = tdcal;
    if(para->GetTUSlwLog(0) != 0 && para->GetTDSlwLog(0) != 0){
      double logquped = log(quped);
      double logqdped = log(qdped);
      double logquped2 = logquped*logquped;
      double logqdped2 = logqdped*logqdped;
      double logquped4 = logquped2*logquped2;
      double logqdped4 = logqdped2*logqdped2;
      tuslw -= (para->GetTUSlwLog(0)*logquped +
		para->GetTUSlwLog(1)*logquped2 +
		para->GetTUSlwLog(2)*logquped2*logquped +
		para->GetTUSlwLog(3)*logquped4 +
		para->GetTUSlwLog(4)*logquped4*logquped);
      tdslw -= (para->GetTDSlwLog(0)*logqdped +
		para->GetTDSlwLog(1)*logqdped2 +
		para->GetTDSlwLog(2)*logqdped2*logqdped +
		para->GetTDSlwLog(3)*logqdped4 +
		para->GetTDSlwLog(4)*logqdped4*logqdped);
    }else{
      tuslw -= para->GetTUSlw()/sqrt(quped);
      tdslw -= para->GetTDSlw()/sqrt(qdped);
    }
    Double_t dtraw = tdraw - turaw;
    Double_t dtcal = tdcal - tucal;
    Double_t dtslw = tdslw - tuslw;
    Double_t taveraw = (turaw_subtref + tdraw_subtref)/2.;
    Double_t tavecal = (tucal + tdcal)/2 + para->GetTAveOff();
    Double_t taveslw = (tuslw + tdslw)/2 + para->GetTAveOff();
    Double_t poscal = dtcal * para->GetDTCal() + para->GetDTOff();
    Double_t posslw = dtslw * para->GetDTCal() + para->GetDTOff();
    
    Double_t tucalt0 = tucal - t0;
    Double_t tdcalt0 = tdcal - t0;
    Double_t tuslwt0 = tuslw - t0;
    Double_t tdslwt0 = tdslw - t0;
    Double_t tavecalt0 = tavecal - t0;
    Double_t taveslwt0 = taveslw - t0;

    Double_t pos[3];
    if(para->GetSubLayer() != 0){ // NEUT
      //      pos[0] = para->GetDetPos(0) + posxoff + gRandom->Uniform(-6,6);
      pos[0] = para->GetDetPos(0) + posxoff;
    }else{ // VETO
      //      pos[0] = para->GetDetPos(0) + posxoff + gRandom->Uniform(-16,16);
      pos[0] = para->GetDetPos(0) + posxoff;
    }
    pos[1] = posslw + para->GetDetPos(1) + posyoff; 
    pos[2] = para->GetDetPos(2) + poszoff;

    qavecal /= 1+pos[1]*pos[1]*para->GetQAveCalAtt();

    Double_t flightlength = sqrt(pos[0]*pos[0]+pos[1]*pos[1]+pos[2]*pos[2]);
    Double_t flightangle = sqrt(pos[0]*pos[0]+pos[1]*pos[1])/pos[2];
    Double_t ttofgamma = taveslw - flightlength/29.979; //beta=1
    Double_t ttofneutron = taveslw - flightlength/20.; //とりあえずbeta=2/3. 上流でのbetaを本当は取ってきたい。

    pla->SetHit(hit);
    pla->SetQUPed(quped);
    pla->SetQDPed(qdped);
    pla->SetQUCal(qucal);
    pla->SetQDCal(qdcal);
    pla->SetQAvePed(qaveped);
    pla->SetQAveCal(qavecal);
    pla->SetLogQPed(logqped);
    pla->SetLogQCal(logqcal);
    pla->SetIvSqrtQUPed(ivsqrtquped);
    pla->SetIvSqrtQDPed(ivsqrtqdped);
    pla->SetIvSqrtQAvePed(ivsqrtqaveped);


    pla->SetTURawRef(turaw_ref);
    pla->SetTDRawRef(tdraw_ref);
    pla->SetTURaw_SubTRef(turaw_subtref);
    pla->SetTDRaw_SubTRef(tdraw_subtref);
    pla->SetTURaw_Width(turaw_width);
    pla->SetTDRaw_Width(tdraw_width);

    pla->SetTUCal(tucal);
    pla->SetTDCal(tdcal);
    pla->SetTUCal_Width(tucal_width);
    pla->SetTDCal_Width(tdcal_width);
    pla->SetTUSlw(tuslw);
    pla->SetTDSlw(tdslw);
    pla->SetDTRaw(dtraw);
    pla->SetDTCal(dtcal);
    pla->SetDTSlw(dtslw);    
    pla->SetTAveRaw(taveraw);
    pla->SetTAveCal(tavecal);
    pla->SetTAveSlw(taveslw);    

    pla->SetTUCalT0(tucalt0);
    pla->SetTDCalT0(tdcalt0);
    pla->SetTUSlwT0(tuslwt0);
    pla->SetTDSlwT0(tdslwt0);
    pla->SetTAveCalT0(tavecalt0);
    pla->SetTAveSlwT0(taveslwt0);    

    pla->SetTTOFGamma(ttofgamma);
    pla->SetTTOFNeutron(ttofneutron);

    pla->SetPosCal(poscal);
    pla->SetPosSlw(posslw);
    pla->SetPos(pos);
    pla->SetFlightLength(flightlength);
    pla->SetFlightAngle(flightangle);

    pla->SetDataState(1);
  }
  
  fReconstructed = true;
}

//__________________________________________________________
void TArtCalibNEBULA::CalMultiplicity()
{
  for(Int_t i=0;i<GetNumNEBULAPla();++i){
    TArtNEBULAPla* pla = GetNEBULAPla(i);
    Int_t id = pla->GetID();
    const TArtNEBULAPlaPara* para = FindNEBULAPlaPara(id);
    if(!para){
      TArtCore::Info(__FILE__,"cannot find para %d", id); // programming problem
      continue;
    }

//    if(!(pla->GetTURaw() > 0 &&  pla->GetTURaw() < 4095 &&  
//	 pla->GetTDRaw() > 0 &&  pla->GetTDRaw() < 4095)){
    if(!(pla->GetTURaw() > 0  &&  pla->GetTDRaw() > 0 )){
      continue; // consider threshold
    }

    if(!para->GetSubLayer() == 0) ++fMult.fMultiplicity_N; // mul. of all NEUT

    if(para->GetLayer() == 1){
      if(!para->GetSubLayer() == 0){
	++fMult.fMultiplicity_N1;      
	if(para->GetSubLayer() == 1){
	  ++fMult.fMultiplicity_N11;	  
	}else if(para->GetSubLayer() == 2){
	  ++fMult.fMultiplicity_N12;
	}
      }else if(para->GetSubLayer() == 0){
	++fMult.fMultiplicity_V1;
      }      
    }else if(para->GetLayer() == 2){
      if(!para->GetSubLayer() == 0){
	++fMult.fMultiplicity_N2;
	if(para->GetSubLayer() == 1){
	  ++fMult.fMultiplicity_N21;	  
	}else if(para->GetSubLayer() == 2){
	  ++fMult.fMultiplicity_N22;
	}
      }else if(para->GetSubLayer() == 0){
	++fMult.fMultiplicity_V2;
      }
    }
  }
}

//__________________________________________________________
Int_t TArtCalibNEBULA::GetNumNEBULAPla() const
{
  return fNEBULAPlaArray->GetEntries();
}

//__________________________________________________________
TArtNEBULAPla* TArtCalibNEBULA::GetNEBULAPla(Int_t i) const
{
  return (TArtNEBULAPla*)fNEBULAPlaArray->At(i);
}

//__________________________________________________________
TArtNEBULAPla* TArtCalibNEBULA::FindNEBULAPla(Int_t id) const
{
  std::map<int,int>::const_iterator it = fIDNPlaMap.find(id);
  if(it != fIDNPlaMap.end()) return GetNEBULAPla(it->second);
  else return 0;
}

//__________________________________________________________
TArtNEBULAPlaArray* TArtCalibNEBULA::GetNEBULAPlaArray() const
{
  return fNEBULAPlaArray;
}

//__________________________________________________________
Int_t TArtCalibNEBULA::GetNumNEBULAPlaPara() const
{
  return fNEBULAPlaParaArray->GetEntries();
}

//__________________________________________________________
TArtNEBULAPlaPara* TArtCalibNEBULA::GetNEBULAPlaPara(Int_t i) const
{
  return (TArtNEBULAPlaPara*)fNEBULAPlaParaArray->At(i);
}

//__________________________________________________________
TArtNEBULAPlaPara* TArtCalibNEBULA::FindNEBULAPlaPara(Int_t id) const
{
  std::map<int,int>::const_iterator it = fIDNPlaParaMap.find(id);
  if(it != fIDNPlaParaMap.end()) return GetNEBULAPlaPara(it->second);
  else return 0;
}

//__________________________________________________________
TArtNEBULAPlaParaArray* TArtCalibNEBULA::GetNEBULAPlaParaArray() const
{
  return fNEBULAPlaParaArray;
}
//__________________________________________________________
Int_t TArtCalibNEBULA::GetTRef(TArtRIDFMap map) const
{
  Int_t geo = map.GetGeo();
  std::map<int,TArtNEBULAPla*>::const_iterator it = fGeoPlaMap.find(geo);
  if(it != fGeoPlaMap.end()) {
    TArtNEBULAPla* pla = it->second;
    if (pla->GetTURaw()<0)
      TArtCore::Info(__FILE__,"TArtCalibNEBULA: negative Tref=%d geo=%d",pla->GetTURaw(),geo);
    return pla->GetTURaw();
  }

  TArtCore::Info(__FILE__,"TArtCalibNEBULA: cannot find Tref for geo=%d",geo);
  return 0;
}

//__________________________________________________________
void TArtCalibNEBULA::ClearData()
{
  fMult.ClearData();

  fNEBULAPlaArray->Delete();
  fNEBULAPlaParaArray->Delete();
  fGeoPlaMap.clear();
  fIDNPlaMap.clear();
  fIDNPlaParaMap.clear();
  fDataLoaded = false;
  fReconstructed = false;
}
//__________________________________________________________
void TArtCalibNEBULAMult::ClearData()
{
  fMultiplicity_N = 0;
  fMultiplicity_N1 = 0;
  fMultiplicity_N2 = 0;
  fMultiplicity_V1 = 0;
  fMultiplicity_V2 = 0;
  fMultiplicity_N11 = 0;
  fMultiplicity_N12 = 0;
  fMultiplicity_N21 = 0;
  fMultiplicity_N22 = 0;
}
//__________________________________________________________
TArtCalibNEBULAMult::TArtCalibNEBULAMult()
{
  ClearData();
}

//__________________________________________________________
TArtCalibNEBULAMult::~TArtCalibNEBULAMult()
{;}

ClassImp(TArtCalibNEBULAMult)
