// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anawinds_dict
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
#include "include/TArtCalibWINDSPla.hh"
#include "include/TArtWINDSParameters.hh"
#include "include/TArtWINDSPla.hh"
#include "include/TArtWINDSPlaPara.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TArtCalibWINDSPla(void *p = nullptr);
   static void *newArray_TArtCalibWINDSPla(Long_t size, void *p);
   static void delete_TArtCalibWINDSPla(void *p);
   static void deleteArray_TArtCalibWINDSPla(void *p);
   static void destruct_TArtCalibWINDSPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibWINDSPla*)
   {
      ::TArtCalibWINDSPla *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibWINDSPla >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibWINDSPla", ::TArtCalibWINDSPla::Class_Version(), "TArtCalibWINDSPla.hh", 17,
                  typeid(::TArtCalibWINDSPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibWINDSPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibWINDSPla) );
      instance.SetNew(&new_TArtCalibWINDSPla);
      instance.SetNewArray(&newArray_TArtCalibWINDSPla);
      instance.SetDelete(&delete_TArtCalibWINDSPla);
      instance.SetDeleteArray(&deleteArray_TArtCalibWINDSPla);
      instance.SetDestructor(&destruct_TArtCalibWINDSPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibWINDSPla*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCalibWINDSPla*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCalibWINDSPla*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtWINDSParameters(void *p = nullptr);
   static void *newArray_TArtWINDSParameters(Long_t size, void *p);
   static void delete_TArtWINDSParameters(void *p);
   static void deleteArray_TArtWINDSParameters(void *p);
   static void destruct_TArtWINDSParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtWINDSParameters*)
   {
      ::TArtWINDSParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtWINDSParameters >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtWINDSParameters", ::TArtWINDSParameters::Class_Version(), "TArtWINDSParameters.hh", 14,
                  typeid(::TArtWINDSParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtWINDSParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtWINDSParameters) );
      instance.SetNew(&new_TArtWINDSParameters);
      instance.SetNewArray(&newArray_TArtWINDSParameters);
      instance.SetDelete(&delete_TArtWINDSParameters);
      instance.SetDeleteArray(&deleteArray_TArtWINDSParameters);
      instance.SetDestructor(&destruct_TArtWINDSParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtWINDSParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtWINDSParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtWINDSParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtWINDSPla(void *p = nullptr);
   static void *newArray_TArtWINDSPla(Long_t size, void *p);
   static void delete_TArtWINDSPla(void *p);
   static void deleteArray_TArtWINDSPla(void *p);
   static void destruct_TArtWINDSPla(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtWINDSPla*)
   {
      ::TArtWINDSPla *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtWINDSPla >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtWINDSPla", ::TArtWINDSPla::Class_Version(), "TArtWINDSPla.hh", 6,
                  typeid(::TArtWINDSPla), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtWINDSPla::Dictionary, isa_proxy, 4,
                  sizeof(::TArtWINDSPla) );
      instance.SetNew(&new_TArtWINDSPla);
      instance.SetNewArray(&newArray_TArtWINDSPla);
      instance.SetDelete(&delete_TArtWINDSPla);
      instance.SetDeleteArray(&deleteArray_TArtWINDSPla);
      instance.SetDestructor(&destruct_TArtWINDSPla);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtWINDSPla*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtWINDSPla*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtWINDSPla*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtWINDSPlaPara(void *p = nullptr);
   static void *newArray_TArtWINDSPlaPara(Long_t size, void *p);
   static void delete_TArtWINDSPlaPara(void *p);
   static void deleteArray_TArtWINDSPlaPara(void *p);
   static void destruct_TArtWINDSPlaPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtWINDSPlaPara*)
   {
      ::TArtWINDSPlaPara *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtWINDSPlaPara >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtWINDSPlaPara", ::TArtWINDSPlaPara::Class_Version(), "TArtWINDSPlaPara.hh", 12,
                  typeid(::TArtWINDSPlaPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtWINDSPlaPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtWINDSPlaPara) );
      instance.SetNew(&new_TArtWINDSPlaPara);
      instance.SetNewArray(&newArray_TArtWINDSPlaPara);
      instance.SetDelete(&delete_TArtWINDSPlaPara);
      instance.SetDeleteArray(&deleteArray_TArtWINDSPlaPara);
      instance.SetDestructor(&destruct_TArtWINDSPlaPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtWINDSPlaPara*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtWINDSPlaPara*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtWINDSPlaPara*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibWINDSPla::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibWINDSPla::Class_Name()
{
   return "TArtCalibWINDSPla";
}

//______________________________________________________________________________
const char *TArtCalibWINDSPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibWINDSPla*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibWINDSPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibWINDSPla*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibWINDSPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibWINDSPla*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibWINDSPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibWINDSPla*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtWINDSParameters::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtWINDSParameters::Class_Name()
{
   return "TArtWINDSParameters";
}

//______________________________________________________________________________
const char *TArtWINDSParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSParameters*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtWINDSParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSParameters*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtWINDSParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSParameters*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtWINDSParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSParameters*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtWINDSPla::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtWINDSPla::Class_Name()
{
   return "TArtWINDSPla";
}

//______________________________________________________________________________
const char *TArtWINDSPla::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPla*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtWINDSPla::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPla*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtWINDSPla::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPla*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtWINDSPla::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPla*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtWINDSPlaPara::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtWINDSPlaPara::Class_Name()
{
   return "TArtWINDSPlaPara";
}

//______________________________________________________________________________
const char *TArtWINDSPlaPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPlaPara*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtWINDSPlaPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPlaPara*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtWINDSPlaPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPlaPara*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtWINDSPlaPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtWINDSPlaPara*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCalibWINDSPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibWINDSPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibWINDSPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibWINDSPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibWINDSPla(void *p) {
      return  p ? new(p) ::TArtCalibWINDSPla : new ::TArtCalibWINDSPla;
   }
   static void *newArray_TArtCalibWINDSPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibWINDSPla[nElements] : new ::TArtCalibWINDSPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibWINDSPla(void *p) {
      delete (static_cast<::TArtCalibWINDSPla*>(p));
   }
   static void deleteArray_TArtCalibWINDSPla(void *p) {
      delete [] (static_cast<::TArtCalibWINDSPla*>(p));
   }
   static void destruct_TArtCalibWINDSPla(void *p) {
      typedef ::TArtCalibWINDSPla current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibWINDSPla

//______________________________________________________________________________
void TArtWINDSParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtWINDSParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtWINDSParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtWINDSParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtWINDSParameters(void *p) {
      return  p ? new(p) ::TArtWINDSParameters : new ::TArtWINDSParameters;
   }
   static void *newArray_TArtWINDSParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtWINDSParameters[nElements] : new ::TArtWINDSParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtWINDSParameters(void *p) {
      delete (static_cast<::TArtWINDSParameters*>(p));
   }
   static void deleteArray_TArtWINDSParameters(void *p) {
      delete [] (static_cast<::TArtWINDSParameters*>(p));
   }
   static void destruct_TArtWINDSParameters(void *p) {
      typedef ::TArtWINDSParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtWINDSParameters

//______________________________________________________________________________
void TArtWINDSPla::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtWINDSPla.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtWINDSPla::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtWINDSPla::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtWINDSPla(void *p) {
      return  p ? new(p) ::TArtWINDSPla : new ::TArtWINDSPla;
   }
   static void *newArray_TArtWINDSPla(Long_t nElements, void *p) {
      return p ? new(p) ::TArtWINDSPla[nElements] : new ::TArtWINDSPla[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtWINDSPla(void *p) {
      delete (static_cast<::TArtWINDSPla*>(p));
   }
   static void deleteArray_TArtWINDSPla(void *p) {
      delete [] (static_cast<::TArtWINDSPla*>(p));
   }
   static void destruct_TArtWINDSPla(void *p) {
      typedef ::TArtWINDSPla current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtWINDSPla

//______________________________________________________________________________
void TArtWINDSPlaPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtWINDSPlaPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtWINDSPlaPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtWINDSPlaPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtWINDSPlaPara(void *p) {
      return  p ? new(p) ::TArtWINDSPlaPara : new ::TArtWINDSPlaPara;
   }
   static void *newArray_TArtWINDSPlaPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtWINDSPlaPara[nElements] : new ::TArtWINDSPlaPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtWINDSPlaPara(void *p) {
      delete (static_cast<::TArtWINDSPlaPara*>(p));
   }
   static void deleteArray_TArtWINDSPlaPara(void *p) {
      delete [] (static_cast<::TArtWINDSPlaPara*>(p));
   }
   static void destruct_TArtWINDSPlaPara(void *p) {
      typedef ::TArtWINDSPlaPara current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtWINDSPlaPara

namespace ROOT {
   static TClass *vectorlETArtWINDSPlaParamUgR_Dictionary();
   static void vectorlETArtWINDSPlaParamUgR_TClassManip(TClass*);
   static void *new_vectorlETArtWINDSPlaParamUgR(void *p = nullptr);
   static void *newArray_vectorlETArtWINDSPlaParamUgR(Long_t size, void *p);
   static void delete_vectorlETArtWINDSPlaParamUgR(void *p);
   static void deleteArray_vectorlETArtWINDSPlaParamUgR(void *p);
   static void destruct_vectorlETArtWINDSPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtWINDSPlaPara*>*)
   {
      vector<TArtWINDSPlaPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtWINDSPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtWINDSPlaPara*>", -2, "vector", 389,
                  typeid(vector<TArtWINDSPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtWINDSPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtWINDSPlaPara*>) );
      instance.SetNew(&new_vectorlETArtWINDSPlaParamUgR);
      instance.SetNewArray(&newArray_vectorlETArtWINDSPlaParamUgR);
      instance.SetDelete(&delete_vectorlETArtWINDSPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtWINDSPlaParamUgR);
      instance.SetDestructor(&destruct_vectorlETArtWINDSPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtWINDSPlaPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtWINDSPlaPara*>","std::vector<TArtWINDSPlaPara*, std::allocator<TArtWINDSPlaPara*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtWINDSPlaPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtWINDSPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtWINDSPlaPara*>*>(nullptr))->GetClass();
      vectorlETArtWINDSPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtWINDSPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtWINDSPlaParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtWINDSPlaPara*> : new vector<TArtWINDSPlaPara*>;
   }
   static void *newArray_vectorlETArtWINDSPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtWINDSPlaPara*>[nElements] : new vector<TArtWINDSPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtWINDSPlaParamUgR(void *p) {
      delete (static_cast<vector<TArtWINDSPlaPara*>*>(p));
   }
   static void deleteArray_vectorlETArtWINDSPlaParamUgR(void *p) {
      delete [] (static_cast<vector<TArtWINDSPlaPara*>*>(p));
   }
   static void destruct_vectorlETArtWINDSPlaParamUgR(void *p) {
      typedef vector<TArtWINDSPlaPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtWINDSPlaPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtWINDSPlaParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtWINDSPlaParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p = nullptr);
   static void *newArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtWINDSPlaPara*>*)
   {
      map<TArtRIDFMap,TArtWINDSPlaPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtWINDSPlaPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtWINDSPlaPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtWINDSPlaPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtWINDSPlaParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtWINDSPlaPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtWINDSPlaParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtWINDSPlaParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtWINDSPlaParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtWINDSPlaPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtWINDSPlaPara*>","std::map<TArtRIDFMap, TArtWINDSPlaPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtWINDSPlaPara*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtWINDSPlaPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtWINDSPlaParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtWINDSPlaPara*>*>(nullptr))->GetClass();
      maplETArtRIDFMapcOTArtWINDSPlaParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtWINDSPlaParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtWINDSPlaPara*> : new map<TArtRIDFMap,TArtWINDSPlaPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtWINDSPlaPara*>[nElements] : new map<TArtRIDFMap,TArtWINDSPlaPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p) {
      delete (static_cast<map<TArtRIDFMap,TArtWINDSPlaPara*>*>(p));
   }
   static void deleteArray_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p) {
      delete [] (static_cast<map<TArtRIDFMap,TArtWINDSPlaPara*>*>(p));
   }
   static void destruct_maplETArtRIDFMapcOTArtWINDSPlaParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtWINDSPlaPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtWINDSPlaPara*>

namespace {
  void TriggerDictionaryInitialization_anawinds_dict_Impl() {
    static const char* headers[] = {
"include/TArtCalibWINDSPla.hh",
"include/TArtWINDSParameters.hh",
"include/TArtWINDSPla.hh",
"include/TArtWINDSPlaPara.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/Reconstruction/WINDS/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anawinds_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtCalibWINDSPla.hh")))  TArtCalibWINDSPla;
class __attribute__((annotate("$clingAutoload$include/TArtWINDSParameters.hh")))  TArtWINDSParameters;
class __attribute__((annotate("$clingAutoload$include/TArtWINDSPla.hh")))  TArtWINDSPla;
class __attribute__((annotate("$clingAutoload$include/TArtWINDSPlaPara.hh")))  TArtWINDSPlaPara;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anawinds_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCalibWINDSPla.hh"
#include "include/TArtWINDSParameters.hh"
#include "include/TArtWINDSPla.hh"
#include "include/TArtWINDSPlaPara.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCalibWINDSPla", payloadCode, "@",
"TArtWINDSParameters", payloadCode, "@",
"TArtWINDSPla", payloadCode, "@",
"TArtWINDSPlaPara", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anawinds_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anawinds_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anawinds_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anawinds_dict() {
  TriggerDictionaryInitialization_anawinds_dict_Impl();
}
