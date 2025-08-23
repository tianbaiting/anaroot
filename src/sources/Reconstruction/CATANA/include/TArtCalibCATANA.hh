// CATANA calibration class
// 

#ifndef _TARTCALIBCATANA_H_
#define _TARTCALIBCATANA_H_

#include <map>

#include <TNamed.h>

#include "TArtReconstruction.hh"
#include "TArtCATANACsI.hh"

class TArtRawSegmentObject;
class TArtCATANACsIPara;
class TArtCATANAParameters;
//class TArtCATANACsI;
class TArtStoreManager;

class TArtCalibCATANA : public TArtReconstruction {

 public:

  TArtCalibCATANA();
  virtual ~TArtCalibCATANA();

  void LoadData();
  void LoadData(TArtRawSegmentObject *);
  void ClearData();
  void ReconstructData();
  void DopplerCorrect(Double_t beta);

  // function to access data container
  TClonesArray    *GetCsIArray(){return fCsIArray;}
  Int_t           GetCsIEntries();
  TArtCATANACsI   *GetCsI(Int_t i);
  TArtCATANACsI   *FindCsI(Int_t i);
  TArtCATANACsI   GetTRefCsI(Int_t i){
    if(i>=0 && i<2) return fTRefCsI[i];
  }

 private:

  TClonesArray *fCsIArray;
  TArtCATANACsI fTRefCsI[2]; // We have 2 TRef channel

  TArtCATANAParameters *setup;
  TArtStoreManager *sman;

  std::map<int,int> fIDCATANACsIMap;
  std::map<int,int> fIDCATANACsIParaMap;

  ClassDef(TArtCalibCATANA,1);
 };
#endif
