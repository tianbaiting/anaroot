#ifndef _TARTCATANACSIPARA_H_
#define _TARTCATANACSIPARA_H_

#include <Riostream.h>

#include "TArtMap.hh"
#include "segidlist.hh"

class TArtCATANACsIPara : public TObject {

 public:
  TArtCATANACsIPara(Int_t id = -1, Int_t ch=-1, const TString& detname = "",
		    Int_t fpl = -1, Int_t frame=-1, Int_t layer=-1,
		    const Double_t* detpos = 0, Double_t tcal = -1, Double_t toff = -1,
		    Double_t qcal = -1, Double_t qped = -1 )
    : TObject(), fID(id),fChannel(ch), fDetName(detname), fFpl(fpl), fFrame(frame),
      fLayer(layer), fTCal(tcal), fTOff(toff), fQCal(qcal), fQPed(qped),fIsTRef(false)
  {
    if(detpos) for(Int_t i=0;i<3;i++)fDetPos[i] = detpos[i];
    else for(Int_t i=0;i<3;i++)fDetPos[i] = -10000;
  }
  ~TArtCATANACsIPara(){;}

  void SetMap(Int_t tgeo, Int_t tch, Int_t qgeo, Int_t qch) {
    fMapADC.SetMap(fFpl,CATANAQ,qgeo,qch); 
    fMapTDC.SetMap(fFpl,CATANAT,tgeo,tch); 
  }

  void SetID(Int_t val){ fID = val;}
  void SetChannel(Int_t val){ fChannel = val;}
  void SetDetectorName(const TString& val){fDetName = val;}
  void SetFPL(Int_t val){fFpl = val;}
  void SetLayer(Int_t val){fLayer = val;}
  void SetFrame(Int_t val){fFrame = val;}
  void SetPos(const Double_t* val){
    for(Int_t i=0;i<3;i++)fDetPos[i] = val[i];
  }
  void SetPos(Double_t val, Int_t i){fDetPos[i] = val;}
  void SetPosX(Double_t val){fDetPos[0] = val;}
  void SetPosY(Double_t val){fDetPos[1] = val;}
  void SetPosZ(Double_t val){fDetPos[2] = val;}
  void SetTCal(Double_t val){fTCal = val;}
  void SetTOff(Double_t val){fTOff = val;}
  void SetQCal(Double_t val){fQCal = val;}
  void SetQPed(Double_t val){fQPed = val;}
  void SetIsTRef(Bool_t val){fIsTRef = val;}
  // 2022.04.19 for digitizer
  void SetDynodeBoard(Int_t val){fDynode_Board = val;}
  void SetDynodeChannel(Int_t val){fDynode_Ch = val;}
  void SetDynodeQCal(Double_t val){fDynode_QCal = val;}
  void SetDynodeQPed(Double_t val){fDynode_QPed = val;}

  Int_t GetID() const { return fID; }
  Int_t GetChannel() const { return fChannel; }
  const TString& GetDetectorName() const { return fDetName; }
  Int_t GetFPL() const { return fFpl; }
  Int_t GetFrame() const { return fFrame; }
  Int_t GetLayer() const { return fLayer; }
  Double_t GetTCal() const { return fTCal; } 
  Double_t GetTOffset() const { return fTOff; } 
  Double_t GetQCal() const { return fQCal; } 
  Double_t GetQPed() const { return fQPed; } 
  const Double_t* GetPos() const { return fDetPos; } 
  Double_t GetPos(Int_t i) const { return fDetPos[i]; } 
  Double_t GetPosX() const { return fDetPos[0]; } 
  Double_t GetPosY() const { return fDetPos[1]; } 
  Double_t GetPosZ() const { return fDetPos[2]; } 
  Bool_t IsTRef() const {return fIsTRef;}
  // 2022.04.19 for digitizer
  Int_t GetDynodeBoard()const {return fDynode_Board;}
  Int_t GetDynodeChannel() const {return fDynode_Ch;}
  Double_t GetDynodeQCal() const {return fDynode_QCal;}
  Double_t GetDynodeQPed() const {return fDynode_QPed;}

  const TArtRIDFMap& GetTDCMap() const { return fMapTDC;  }
  const TArtRIDFMap& GetADCMap() const { return fMapADC;  }

  friend std::ostream & operator << (std::ostream& out, const TArtCATANACsIPara& p) {
    out << "ID: " << p.fID << ", ";
    out << "Channel: " << p.fChannel << ", ";
    out << "DetectorName: " << p.fDetName << ", ";
    out << "Focal Plane: " << p.fFpl << ", ";
    out << "Frame: " << p.fFrame << ", ";
    out << "Layer: " << p.fLayer << ", ";
    out << "Time Calib: " << p.fTCal << ", ";
    out << "Time Offset: " << p.fTOff << ", ";
    out << "QDC Calib: " << p.fQCal << ", ";
    out << "QDC pedestal: " << p.fQPed << ", ";
    out << "Position: " <<p.fDetPos[0]<< " " 
	<< p.fDetPos[1]<< " " <<p.fDetPos[2]<< ", " ;
    out << "IsTRef: " << p.fIsTRef << std::endl;
    out << "Map of ADC: "  << p.fMapADC << std::endl;
    out << "Map of TDC: "  << p.fMapTDC;
    out << "Dynode BOARD: " << p.fDynode_Board << ", " ;
    out << "Dynode Channel: " << p.fDynode_Ch << ", ";
    out << "Dynode QCal: " << p.fDynode_QCal << ", ";
    out << "Dynode QPed: " << p.fDynode_QPed << std::endl;
    return out;
  }

 private:
  Int_t     fID;
  Int_t     fChannel;
  TString   fDetName;
  Int_t     fFpl;
  Int_t     fFrame;
  Int_t     fLayer;
  Double_t  fDetPos[3];
  Double_t  fTCal;
  Double_t  fTOff;
  Double_t  fQCal;
  Double_t  fQPed;
  Bool_t fIsTRef;

  TArtRIDFMap fMapTDC;
  TArtRIDFMap fMapADC;

  // 2022.04.19 by Togano to handle dynode information
  Int_t fDynode_Board;
  Int_t fDynode_Ch;
  Double_t fDynode_QCal;
  Double_t fDynode_QPed;

  ClassDef(TArtCATANACsIPara,1);

};

#endif
