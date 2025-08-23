#include "TArtCore.hh"
#include "TArtStoreManager.hh"
#include "TArtMap.hh"
#include "TArtCATANAParameters.hh"
#include "TArtCATANACsIPara.hh"

#include <TROOT.h>
#include <TDOMParser.h>
#include <TXMLNode.h>

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <fstream>

TArtCATANAParameters* TArtCATANAParameters::fCATANAParameters = 0;

//__________________________________________________________
  TArtCATANAParameters::TArtCATANAParameters(const char* name, const char* title)
: TNamed(name, title)
{
  TArtCore::Info(__FILE__,"Creating catana setup...");

  listOfCsIPara = new TList();
  TArtStoreManager *sman = TArtStoreManager::Instance();
  sman->AddParameters(this);
}

//__________________________________________________________
TArtCATANAParameters::~TArtCATANAParameters() 
{
  itr = pmap.begin();
  std::vector<TArtCATANACsIPara*> pvec;
  while(itr != itrEnd){
    std::vector<TArtCATANACsIPara*>::iterator it_pvec = pvec.begin();
    if(std::find(pvec.begin(), pvec.end(), itr->second) == pvec.end()){
      pvec.push_back(itr->second);
      delete itr->second;
      itr->second = 0;
    }
    ++itr;
  }
  delete listOfCsIPara;

  // Delete the list of para

  fCATANAParameters = 0;
}

//__________________________________________________________
TArtCATANAParameters* TArtCATANAParameters::Instance(const char* name, const char* title)
{
  if(!fCATANAParameters) fCATANAParameters = 
    new TArtCATANAParameters(name, title);
  return fCATANAParameters;
}    

//__________________________________________________________
void TArtCATANAParameters::Delete()
{
  delete fCATANAParameters;
  fCATANAParameters = 0;
}

//__________________________________________________________
Bool_t TArtCATANAParameters::LoadParameter(char *xmlfile)
{
  TArtCore::Info(__FILE__,"Load parameter from %s", xmlfile);
  TDOMParser *domParser = new TDOMParser();
  domParser->SetValidate(false);
  Int_t parsecode = domParser->ParseFile(xmlfile);
  if (parsecode < 0) {
    std::cerr << domParser->GetParseCodeMessage(parsecode) << std::endl;
    return false;
  }
  TXMLNode * node = domParser->GetXMLDocument()->GetRootNode();
  ParseParaList(node->GetChildren());
  itrEnd = pmap.end();
  delete domParser;
  return true;
}

//__________________________________________________________
void TArtCATANAParameters::ParseParaList(TXMLNode *node) {
  for (; node; node = node->GetNextNode()) {
    if (node->GetNodeType() == TXMLNode::kXMLElementNode) { // Element Node
      if (strcmp(node->GetNodeName(), "CATANA") == 0)
        listOfCsIPara->Add(ParseCATANACsIPara(node->GetChildren()));
    }
  }

  return;
}

//__________________________________________________________
TArtCATANACsIPara *TArtCATANAParameters::ParseCATANACsIPara(TXMLNode *node) {

  Int_t tdc_geo = -1, tdc_ch = -1, adc_geo = -1, adc_ch = -1;

  TArtCATANACsIPara *para = new TArtCATANACsIPara();

  for ( ; node; node = node->GetNextNode()) {
    if(node->GetNodeType() != TXMLNode::kXMLElementNode) continue;
    if (strcmp(node->GetNodeName(), "ID") == 0){
      Int_t id = atoi(node->GetText());
      para->SetID(id);
    } if (strcmp(node->GetNodeName(), "NAME") == 0){
      TString name = node->GetText();
      para->SetDetectorName(name);
    } if (strcmp(node->GetNodeName(), "CH") == 0){
      Int_t ch = atoi(node->GetText());
      para->SetChannel(ch);
    } if (strcmp(node->GetNodeName(), "FPL") == 0) {
      Int_t fpl = atoi(node->GetText());
      para->SetFPL(fpl);
    } if (strcmp(node->GetNodeName(), "FRAME") == 0) {
      Int_t frame = atoi(node->GetText());
      para->SetFrame(frame);
    } if (strcmp(node->GetNodeName(), "LAYER") == 0) {
      Int_t layer = atoi(node->GetText());
      para->SetLayer(layer);
    } if (strcmp(node->GetNodeName(), "X") == 0){
      Double_t x = (Double_t)atof(node->GetText());
      para->SetPosX(x);
    } if (strcmp(node->GetNodeName(), "Y") == 0){
      Double_t y = (Double_t)atof(node->GetText());
      para->SetPosY(y);
    } if (strcmp(node->GetNodeName(), "Z") == 0){
      Double_t z = (Double_t)atof(node->GetText());
      para->SetPosZ(z);
    } if (strcmp(node->GetNodeName(), "TOFF") == 0){
      Double_t toff = (Double_t)atof(node->GetText());
      para->SetTOff(toff);
    } if (strcmp(node->GetNodeName(), "TCAL") == 0){
      Double_t tcal = (Double_t)atof(node->GetText());
      para->SetTCal(tcal);
    } if (strcmp(node->GetNodeName(), "QPED") == 0) {
      Double_t qped = (Double_t)atof(node->GetText());
      para->SetQPed(qped);
    } if (strcmp(node->GetNodeName(), "QCAL") == 0){
      Double_t qcal = (Double_t)atof(node->GetText());
      para->SetQCal(qcal);
    } if (strcmp(node->GetNodeName(), "IsTREF") == 0){
      Int_t tref = atoi(node->GetText());
      para->SetIsTRef(tref);
    } if (strcmp(node->GetNodeName(), "ADC_GEO") == 0) {
      adc_geo = atoi(node->GetText());
    } if (strcmp(node->GetNodeName(), "ADC_CH") == 0) {
      adc_ch = atoi(node->GetText());
    } if (strcmp(node->GetNodeName(), "TDC_GEO") == 0) {
      tdc_geo = atoi(node->GetText());
    } if (strcmp(node->GetNodeName(), "TDC_CH") == 0) {
      tdc_ch = atoi(node->GetText());
    } if (strcmp(node->GetNodeName(), "DYNODE_BOARD") == 0) {
      Int_t board = atoi(node->GetText());
      para->SetDynodeBoard(board);
    } if (strcmp(node->GetNodeName(), "DYNODE_CH") == 0) {
      Int_t ch = atoi(node->GetText());
      para->SetDynodeChannel(ch);
    } if (strcmp(node->GetNodeName(), "DYNODE_QCAL") == 0) {
      Double_t qcal = atoi(node->GetText());
      para->SetDynodeQCal(qcal);
    } if (strcmp(node->GetNodeName(), "DYNODE_QPED") == 0) {
      Double_t qped = atoi(node->GetText());
      para->SetDynodeQPed(qped);
    }

  }

  para->SetMap(tdc_geo, tdc_ch, adc_geo, adc_ch);

  pmap.insert(std::pair<TArtRIDFMap, TArtCATANACsIPara*>
	      (para->GetADCMap(), para));
  pmap.insert(std::pair<TArtRIDFMap, TArtCATANACsIPara*>
	      (para->GetTDCMap(), para));
  idmap.insert(std::pair<Int_t,TArtCATANACsIPara*>(para->GetID(), para));

  return para;

}

//__________________________________________________________
void TArtCATANAParameters::PrintListOfCsIPara(){
  TIter next(listOfCsIPara);
  while (TArtCATANACsIPara *p = (TArtCATANACsIPara *)next()) std::cout << *p;
}

//__________________________________________________________
TArtCATANACsIPara *TArtCATANAParameters::GetCATANACsIPara(TArtRIDFMap *rmap){

  itr = pmap.find(*rmap);
  if(itr != itrEnd) return (TArtCATANACsIPara*)itr->second;
  return NULL;
}

//__________________________________________________________
TArtCATANACsIPara *TArtCATANAParameters::FindCATANACsIPara(const TArtRIDFMap *rmap)
const {
  std::map<TArtRIDFMap, TArtCATANACsIPara*>::const_iterator itr = 
    pmap.find(*rmap);
  if(itr != pmap.end()) return itr->second;
  else return 0;
}

//__________________________________________________________
TArtCATANACsIPara *TArtCATANAParameters::FindCATANACsIPara(Int_t id) const {
  std::map<Int_t,TArtCATANACsIPara*>::const_iterator itr = idmap.find(id);
  if(itr != idmap.end()) return itr->second;
  else return 0;
}
