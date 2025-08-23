// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anasilicons_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "include/TArtCalibSILICONS.hh"
#include "include/TArtSILICONS.hh"
#include "include/TArtSILICONSPara.hh"
#include "include/TArtSILICONSParameters.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TArtCalibSILICONS(void *p = nullptr);
   static void *newArray_TArtCalibSILICONS(Long_t size, void *p);
   static void delete_TArtCalibSILICONS(void *p);
   static void deleteArray_TArtCalibSILICONS(void *p);
   static void destruct_TArtCalibSILICONS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibSILICONS*)
   {
      ::TArtCalibSILICONS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibSILICONS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibSILICONS", ::TArtCalibSILICONS::Class_Version(), "TArtCalibSILICONS.hh", 17,
                  typeid(::TArtCalibSILICONS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibSILICONS::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibSILICONS) );
      instance.SetNew(&new_TArtCalibSILICONS);
      instance.SetNewArray(&newArray_TArtCalibSILICONS);
      instance.SetDelete(&delete_TArtCalibSILICONS);
      instance.SetDeleteArray(&deleteArray_TArtCalibSILICONS);
      instance.SetDestructor(&destruct_TArtCalibSILICONS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibSILICONS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCalibSILICONS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCalibSILICONS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSILICONS(void *p = nullptr);
   static void *newArray_TArtSILICONS(Long_t size, void *p);
   static void delete_TArtSILICONS(void *p);
   static void deleteArray_TArtSILICONS(void *p);
   static void destruct_TArtSILICONS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSILICONS*)
   {
      ::TArtSILICONS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSILICONS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSILICONS", ::TArtSILICONS::Class_Version(), "TArtSILICONS.hh", 7,
                  typeid(::TArtSILICONS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSILICONS::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSILICONS) );
      instance.SetNew(&new_TArtSILICONS);
      instance.SetNewArray(&newArray_TArtSILICONS);
      instance.SetDelete(&delete_TArtSILICONS);
      instance.SetDeleteArray(&deleteArray_TArtSILICONS);
      instance.SetDestructor(&destruct_TArtSILICONS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSILICONS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSILICONS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSILICONS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSILICONSPara(void *p = nullptr);
   static void *newArray_TArtSILICONSPara(Long_t size, void *p);
   static void delete_TArtSILICONSPara(void *p);
   static void deleteArray_TArtSILICONSPara(void *p);
   static void destruct_TArtSILICONSPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSILICONSPara*)
   {
      ::TArtSILICONSPara *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSILICONSPara >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSILICONSPara", ::TArtSILICONSPara::Class_Version(), "TArtSILICONSPara.hh", 12,
                  typeid(::TArtSILICONSPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSILICONSPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSILICONSPara) );
      instance.SetNew(&new_TArtSILICONSPara);
      instance.SetNewArray(&newArray_TArtSILICONSPara);
      instance.SetDelete(&delete_TArtSILICONSPara);
      instance.SetDeleteArray(&deleteArray_TArtSILICONSPara);
      instance.SetDestructor(&destruct_TArtSILICONSPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSILICONSPara*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSILICONSPara*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSILICONSPara*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtSILICONSParameters(void *p = nullptr);
   static void *newArray_TArtSILICONSParameters(Long_t size, void *p);
   static void delete_TArtSILICONSParameters(void *p);
   static void deleteArray_TArtSILICONSParameters(void *p);
   static void destruct_TArtSILICONSParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSILICONSParameters*)
   {
      ::TArtSILICONSParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtSILICONSParameters >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtSILICONSParameters", ::TArtSILICONSParameters::Class_Version(), "TArtSILICONSParameters.hh", 12,
                  typeid(::TArtSILICONSParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtSILICONSParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtSILICONSParameters) );
      instance.SetNew(&new_TArtSILICONSParameters);
      instance.SetNewArray(&newArray_TArtSILICONSParameters);
      instance.SetDelete(&delete_TArtSILICONSParameters);
      instance.SetDeleteArray(&deleteArray_TArtSILICONSParameters);
      instance.SetDestructor(&destruct_TArtSILICONSParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSILICONSParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSILICONSParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSILICONSParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibSILICONS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibSILICONS::Class_Name()
{
   return "TArtCalibSILICONS";
}

//______________________________________________________________________________
const char *TArtCalibSILICONS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSILICONS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibSILICONS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSILICONS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibSILICONS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSILICONS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibSILICONS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibSILICONS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSILICONS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSILICONS::Class_Name()
{
   return "TArtSILICONS";
}

//______________________________________________________________________________
const char *TArtSILICONS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSILICONS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSILICONS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSILICONS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSILICONSPara::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSILICONSPara::Class_Name()
{
   return "TArtSILICONSPara";
}

//______________________________________________________________________________
const char *TArtSILICONSPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSPara*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSILICONSPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSPara*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSILICONSPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSPara*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSILICONSPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSPara*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtSILICONSParameters::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtSILICONSParameters::Class_Name()
{
   return "TArtSILICONSParameters";
}

//______________________________________________________________________________
const char *TArtSILICONSParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSParameters*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtSILICONSParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSParameters*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtSILICONSParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSParameters*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtSILICONSParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtSILICONSParameters*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCalibSILICONS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibSILICONS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibSILICONS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibSILICONS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibSILICONS(void *p) {
      return  p ? new(p) ::TArtCalibSILICONS : new ::TArtCalibSILICONS;
   }
   static void *newArray_TArtCalibSILICONS(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibSILICONS[nElements] : new ::TArtCalibSILICONS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibSILICONS(void *p) {
      delete (static_cast<::TArtCalibSILICONS*>(p));
   }
   static void deleteArray_TArtCalibSILICONS(void *p) {
      delete [] (static_cast<::TArtCalibSILICONS*>(p));
   }
   static void destruct_TArtCalibSILICONS(void *p) {
      typedef ::TArtCalibSILICONS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibSILICONS

//______________________________________________________________________________
void TArtSILICONS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSILICONS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSILICONS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSILICONS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSILICONS(void *p) {
      return  p ? new(p) ::TArtSILICONS : new ::TArtSILICONS;
   }
   static void *newArray_TArtSILICONS(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSILICONS[nElements] : new ::TArtSILICONS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSILICONS(void *p) {
      delete (static_cast<::TArtSILICONS*>(p));
   }
   static void deleteArray_TArtSILICONS(void *p) {
      delete [] (static_cast<::TArtSILICONS*>(p));
   }
   static void destruct_TArtSILICONS(void *p) {
      typedef ::TArtSILICONS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSILICONS

//______________________________________________________________________________
void TArtSILICONSPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSILICONSPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSILICONSPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSILICONSPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSILICONSPara(void *p) {
      return  p ? new(p) ::TArtSILICONSPara : new ::TArtSILICONSPara;
   }
   static void *newArray_TArtSILICONSPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSILICONSPara[nElements] : new ::TArtSILICONSPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSILICONSPara(void *p) {
      delete (static_cast<::TArtSILICONSPara*>(p));
   }
   static void deleteArray_TArtSILICONSPara(void *p) {
      delete [] (static_cast<::TArtSILICONSPara*>(p));
   }
   static void destruct_TArtSILICONSPara(void *p) {
      typedef ::TArtSILICONSPara current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSILICONSPara

//______________________________________________________________________________
void TArtSILICONSParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtSILICONSParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtSILICONSParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtSILICONSParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSILICONSParameters(void *p) {
      return  p ? new(p) ::TArtSILICONSParameters : new ::TArtSILICONSParameters;
   }
   static void *newArray_TArtSILICONSParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSILICONSParameters[nElements] : new ::TArtSILICONSParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSILICONSParameters(void *p) {
      delete (static_cast<::TArtSILICONSParameters*>(p));
   }
   static void deleteArray_TArtSILICONSParameters(void *p) {
      delete [] (static_cast<::TArtSILICONSParameters*>(p));
   }
   static void destruct_TArtSILICONSParameters(void *p) {
      typedef ::TArtSILICONSParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSILICONSParameters

namespace ROOT {
   static TClass *vectorlETArtSILICONSParamUgR_Dictionary();
   static void vectorlETArtSILICONSParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtSILICONSParamUgR(void *p = nullptr);
   static void *newArray_vectorlETArtSILICONSParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtSILICONSParamUgR(void *p);
   static void deleteArray_vectorlETArtSILICONSParamUgR(void *p);
   static void destruct_vectorlETArtSILICONSParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtSILICONSPara*>*)
   {
      vector<TArtSILICONSPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtSILICONSPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtSILICONSPara*>", -2, "vector", 389,
                  typeid(vector<TArtSILICONSPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtSILICONSParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtSILICONSPara*>) );
      instance.SetNew(&new_vectorlETArtSILICONSParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtSILICONSParamUgR);
      instance.SetDelete(&delete_vectorlETArtSILICONSParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtSILICONSParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtSILICONSParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtSILICONSPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtSILICONSPara*>","std::vector<TArtSILICONSPara*, std::allocator<TArtSILICONSPara*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtSILICONSPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtSILICONSParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtSILICONSPara*>*>(nullptr))->GetClass();
      vectorlETArtSILICONSParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtSILICONSParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtSILICONSParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtSILICONSPara*> : new vector<TArtSILICONSPara*>;
   }
   static void *newArray_vectorlETArtSILICONSParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtSILICONSPara*>[nElements] : new vector<TArtSILICONSPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtSILICONSParamUgR(void *p) {
      delete (static_cast<vector<TArtSILICONSPara*>*>(p));
   }
   static void deleteArray_vectorlETArtSILICONSParamUgR(void *p) {
      delete [] (static_cast<vector<TArtSILICONSPara*>*>(p));
   }
   static void destruct_vectorlETArtSILICONSParamUgR(void *p) {
      typedef vector<TArtSILICONSPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtSILICONSPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtSILICONSParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtSILICONSParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p = nullptr);
   static void *newArray_maplETArtRIDFMapcOTArtSILICONSParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtSILICONSPara*>*)
   {
      map<TArtRIDFMap,TArtSILICONSPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtSILICONSPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtSILICONSPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtSILICONSPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtSILICONSParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtSILICONSPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtSILICONSParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtSILICONSParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtSILICONSParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtSILICONSParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtSILICONSParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtSILICONSPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtSILICONSPara*>","std::map<TArtRIDFMap, TArtSILICONSPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtSILICONSPara*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtSILICONSPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtSILICONSParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtSILICONSPara*>*>(nullptr))->GetClass();
      maplETArtRIDFMapcOTArtSILICONSParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtSILICONSParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtSILICONSPara*> : new map<TArtRIDFMap,TArtSILICONSPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtSILICONSParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtSILICONSPara*>[nElements] : new map<TArtRIDFMap,TArtSILICONSPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p) {
      delete (static_cast<map<TArtRIDFMap,TArtSILICONSPara*>*>(p));
   }
   static void deleteArray_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p) {
      delete [] (static_cast<map<TArtRIDFMap,TArtSILICONSPara*>*>(p));
   }
   static void destruct_maplETArtRIDFMapcOTArtSILICONSParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtSILICONSPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtSILICONSPara*>

namespace {
  void TriggerDictionaryInitialization_anasilicons_dict_Impl() {
    static const char* headers[] = {
"include/TArtCalibSILICONS.hh",
"include/TArtSILICONS.hh",
"include/TArtSILICONSPara.hh",
"include/TArtSILICONSParameters.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/SAMURAI/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/Reconstruction/SILICONS/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anasilicons_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtCalibSILICONS.hh")))  TArtCalibSILICONS;
class __attribute__((annotate("$clingAutoload$include/TArtSILICONS.hh")))  TArtSILICONS;
class __attribute__((annotate("$clingAutoload$include/TArtSILICONSPara.hh")))  TArtSILICONSPara;
class __attribute__((annotate("$clingAutoload$include/TArtSILICONSParameters.hh")))  TArtSILICONSParameters;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anasilicons_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCalibSILICONS.hh"
#include "include/TArtSILICONS.hh"
#include "include/TArtSILICONSPara.hh"
#include "include/TArtSILICONSParameters.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCalibSILICONS", payloadCode, "@",
"TArtSILICONS", payloadCode, "@",
"TArtSILICONSPara", payloadCode, "@",
"TArtSILICONSParameters", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anasilicons_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anasilicons_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anasilicons_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anasilicons_dict() {
  TriggerDictionaryInitialization_anasilicons_dict_Impl();
}
