#ifndef _TARTCATANACSI_H_
#define _TARTCATANACSI_H_

#include <TMath.h>
#include "TArtDataObject.hh"

class TArtCATANACsI: public TArtDataObject {

 public:

 TArtCATANACsI()
   : TArtDataObject(), fADC(-1), fTDC(-1), fTDCSub(-1), fX(-1), fY(-1), fZ(-1),
     fEnergy(-1.), fTime(-1.), fGammaOverFlow(false), fDynodeQDC(-1), 
     fDynodeEnergy(-1.), fLayer(-1), fChannel(-1), fFrame(-1)
    {;}
  virtual ~TArtCATANACsI(){}
  
  virtual void SetPosX(Double_t val){fX = val;}
  virtual void SetPosY(Double_t val){fY = val;}
  virtual void SetPosZ(Double_t val){fZ = val;}

  virtual Double_t GetPosX(){return fX;}
  virtual Double_t GetPosY(){return fY;}
  virtual Double_t GetPosZ(){return fZ;}

  // For previous CATANA 
  virtual Double_t GetPositionX(){return fX;}
  virtual Double_t GetPositionY(){return fY;}
  virtual Double_t GetPositionZ(){return fZ;}

  // function to set raw data
  virtual void SetRawADC(Int_t val){fADC = val;}
  virtual void SetRawTDC(Int_t val){fTDC = val;}
  virtual void SetRawTDC_TRefSubtracted(Int_t val){fTDCSub = val;}
  virtual void SetGammaOverFlow(Bool_t val){fGammaOverFlow = val;}
  virtual void SetDynodeRawQDC(Int_t val){fDynodeQDC = val;}
  virtual void SetDynodeShortRawQDC(Int_t val){fDynodeShortQDC = val;}

  // function to get raw data
  virtual Int_t GetRawADC(){return fADC;}
  virtual Int_t GetRawTDC(){return fTDC;}
  virtual Int_t GetRawTDC_TRefSubtracted(){return fTDCSub;}
  virtual Int_t GetDynodeRawQDC(){return fDynodeQDC;}
  virtual Int_t GetDynodeShortRawQDC(){return fDynodeShortQDC;}
  virtual Bool_t IsGammaOverFlow(){return fGammaOverFlow;}

  // function to set reco data
  virtual void SetEnergy(Double_t val){fEnergy = val;}
  virtual void SetTime(Double_t val){fTime = val;}
  virtual void SetDynodeEnergy(Double_t val){fDynodeEnergy = val;}
  virtual void SetLayer(Int_t val){fLayer = val;}
  virtual void SetChannel(Int_t val){fChannel = val;}
  virtual void SetFrame(Int_t val){fFrame = val;}

  // function to get reco data
  virtual Double_t GetEnergy(){return fEnergy;}
  virtual Double_t GetTime(){return fTime;}
  virtual Double_t GetDynodeEnergy(){return fDynodeEnergy;}
  virtual Int_t    GetLayer(){return fLayer;}
  virtual Int_t    GetChannel(){return fChannel;}
  virtual Int_t    GetFrame(){return fFrame;}

  Double_t GetDopplerCorrectedEnergy(Double_t beta = 0.6){
    Double_t edop = -1000;
    if(beta>0. && beta<1.){
      Double_t abs = TMath::Sqrt(fX*fX+fY*fY+fZ+fZ);
      Double_t costheta = fZ/abs;
      edop = fEnergy * (1. - beta*costheta)/TMath::Sqrt(1-beta*beta);
    }
    return edop;
  }

  // Functions for backward compatibility
  virtual void SetDoppCorEnergy(Double_t val){fDoppCorEnergy = val;}
  virtual Double_t GetDoppCorEnergy(){return fDoppCorEnergy;}
  virtual Double_t GetTimeOffseted(){return fTime;}

 private:

  Int_t fADC;  
  Int_t fTDC;  
  Int_t fTDCSub;  

  Double_t fX, fY, fZ;

  // Information from Anode signal
  Double_t fEnergy;  
  Double_t fDoppCorEnergy;
  Double_t fTime;  
  Bool_t fGammaOverFlow; // Added for Dual Gain mode 

  // Added for Dual Gain mode 2022.04.15 by Togano
  // Dynode signal from V1725S

  Int_t fDynodeQDC;
  Int_t fDynodeShortQDC;
  Double_t fDynodeEnergy;


  Int_t fLayer, fChannel, fFrame;

  ClassDef(TArtCATANACsI,1);

};
#endif
