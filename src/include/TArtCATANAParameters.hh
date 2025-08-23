#ifndef _TARTCATANAPARAMETERS_H_
#define _TARTCATANAPARAMETERS_H_

#include <TROOT.h>
#include <TList.h>
#include <map>

class TXMLNode;
class TArtRIDFMap;
class TArtCATANACsIPara;


class TArtCATANAParameters : public TNamed
{
 public: 

  TArtCATANAParameters(const char* name = "CATANAParameters",  
		     const char* title = "CATANAParameters");
  ~TArtCATANAParameters();
  static TArtCATANAParameters* Instance(const char* name = "CATANAParameters", 
					const char* title = "CATANAParameters");
  static void Delete();

  Bool_t LoadParameter(char *xmlfile);

  void PrintListOfCsIPara();
  TList* GetListOfCsIPara() {return listOfCsIPara; }
  Int_t GetNumCsIPara() {return listOfCsIPara->GetEntries(); }
  TArtCATANACsIPara *GetCATANACsIPara(TArtRIDFMap *rmap);
  TArtCATANACsIPara *FindCATANACsIPara(const TArtRIDFMap *rmap) const;
  TArtCATANACsIPara *FindCATANACsIPara(Int_t id) const;

 protected:

  std::map<TArtRIDFMap, TArtCATANACsIPara *> pmap;
  std::map<TArtRIDFMap, TArtCATANACsIPara *>::iterator itrEnd;
  std::map<TArtRIDFMap, TArtCATANACsIPara *>::iterator itr;
  std::map<Int_t, TArtCATANACsIPara*> idmap;

  TList *listOfCsIPara;

  void ParseParaList(TXMLNode *node);
  TArtCATANACsIPara * ParseCATANACsIPara(TXMLNode *node);

public:

  static TArtCATANAParameters* fCATANAParameters;

  ClassDef(TArtCATANAParameters,1);

};

#endif
