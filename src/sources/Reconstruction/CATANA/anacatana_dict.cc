// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anacatana_dict
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
#include "include/TArtCATANACsI.hh"
#include "include/TArtCATANACsIPara.hh"
#include "include/TArtCATANAParameters.hh"
#include "include/TArtCalibCATANA.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TArtCATANACsI(void *p = nullptr);
   static void *newArray_TArtCATANACsI(Long_t size, void *p);
   static void delete_TArtCATANACsI(void *p);
   static void deleteArray_TArtCATANACsI(void *p);
   static void destruct_TArtCATANACsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANACsI*)
   {
      ::TArtCATANACsI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANACsI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANACsI", ::TArtCATANACsI::Class_Version(), "TArtCATANACsI.hh", 7,
                  typeid(::TArtCATANACsI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANACsI::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANACsI) );
      instance.SetNew(&new_TArtCATANACsI);
      instance.SetNewArray(&newArray_TArtCATANACsI);
      instance.SetDelete(&delete_TArtCATANACsI);
      instance.SetDeleteArray(&deleteArray_TArtCATANACsI);
      instance.SetDestructor(&destruct_TArtCATANACsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANACsI*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCATANACsI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCATANACsI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCATANACsIPara(void *p = nullptr);
   static void *newArray_TArtCATANACsIPara(Long_t size, void *p);
   static void delete_TArtCATANACsIPara(void *p);
   static void deleteArray_TArtCATANACsIPara(void *p);
   static void destruct_TArtCATANACsIPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANACsIPara*)
   {
      ::TArtCATANACsIPara *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANACsIPara >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANACsIPara", ::TArtCATANACsIPara::Class_Version(), "TArtCATANACsIPara.hh", 9,
                  typeid(::TArtCATANACsIPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANACsIPara::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANACsIPara) );
      instance.SetNew(&new_TArtCATANACsIPara);
      instance.SetNewArray(&newArray_TArtCATANACsIPara);
      instance.SetDelete(&delete_TArtCATANACsIPara);
      instance.SetDeleteArray(&deleteArray_TArtCATANACsIPara);
      instance.SetDestructor(&destruct_TArtCATANACsIPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANACsIPara*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCATANACsIPara*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCATANACsIPara*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCATANAParameters(void *p = nullptr);
   static void *newArray_TArtCATANAParameters(Long_t size, void *p);
   static void delete_TArtCATANAParameters(void *p);
   static void deleteArray_TArtCATANAParameters(void *p);
   static void destruct_TArtCATANAParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCATANAParameters*)
   {
      ::TArtCATANAParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCATANAParameters >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCATANAParameters", ::TArtCATANAParameters::Class_Version(), "TArtCATANAParameters.hh", 13,
                  typeid(::TArtCATANAParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCATANAParameters::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCATANAParameters) );
      instance.SetNew(&new_TArtCATANAParameters);
      instance.SetNewArray(&newArray_TArtCATANAParameters);
      instance.SetDelete(&delete_TArtCATANAParameters);
      instance.SetDeleteArray(&deleteArray_TArtCATANAParameters);
      instance.SetDestructor(&destruct_TArtCATANAParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCATANAParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCATANAParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCATANAParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtCalibCATANA(void *p = nullptr);
   static void *newArray_TArtCalibCATANA(Long_t size, void *p);
   static void delete_TArtCalibCATANA(void *p);
   static void deleteArray_TArtCalibCATANA(void *p);
   static void destruct_TArtCalibCATANA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCalibCATANA*)
   {
      ::TArtCalibCATANA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCalibCATANA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCalibCATANA", ::TArtCalibCATANA::Class_Version(), "TArtCalibCATANA.hh", 20,
                  typeid(::TArtCalibCATANA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCalibCATANA::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCalibCATANA) );
      instance.SetNew(&new_TArtCalibCATANA);
      instance.SetNewArray(&newArray_TArtCalibCATANA);
      instance.SetDelete(&delete_TArtCalibCATANA);
      instance.SetDeleteArray(&deleteArray_TArtCalibCATANA);
      instance.SetDestructor(&destruct_TArtCalibCATANA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCalibCATANA*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCalibCATANA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCalibCATANA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANACsI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANACsI::Class_Name()
{
   return "TArtCATANACsI";
}

//______________________________________________________________________________
const char *TArtCATANACsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANACsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANACsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANACsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsI*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANACsIPara::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANACsIPara::Class_Name()
{
   return "TArtCATANACsIPara";
}

//______________________________________________________________________________
const char *TArtCATANACsIPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANACsIPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANACsIPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANACsIPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANACsIPara*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCATANAParameters::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCATANAParameters::Class_Name()
{
   return "TArtCATANAParameters";
}

//______________________________________________________________________________
const char *TArtCATANAParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCATANAParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCATANAParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCATANAParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCATANAParameters*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtCalibCATANA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCalibCATANA::Class_Name()
{
   return "TArtCalibCATANA";
}

//______________________________________________________________________________
const char *TArtCalibCATANA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCalibCATANA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCalibCATANA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCalibCATANA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCalibCATANA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCATANACsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANACsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANACsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANACsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANACsI(void *p) {
      return  p ? new(p) ::TArtCATANACsI : new ::TArtCATANACsI;
   }
   static void *newArray_TArtCATANACsI(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANACsI[nElements] : new ::TArtCATANACsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANACsI(void *p) {
      delete (static_cast<::TArtCATANACsI*>(p));
   }
   static void deleteArray_TArtCATANACsI(void *p) {
      delete [] (static_cast<::TArtCATANACsI*>(p));
   }
   static void destruct_TArtCATANACsI(void *p) {
      typedef ::TArtCATANACsI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANACsI

//______________________________________________________________________________
void TArtCATANACsIPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANACsIPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANACsIPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANACsIPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANACsIPara(void *p) {
      return  p ? new(p) ::TArtCATANACsIPara : new ::TArtCATANACsIPara;
   }
   static void *newArray_TArtCATANACsIPara(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANACsIPara[nElements] : new ::TArtCATANACsIPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANACsIPara(void *p) {
      delete (static_cast<::TArtCATANACsIPara*>(p));
   }
   static void deleteArray_TArtCATANACsIPara(void *p) {
      delete [] (static_cast<::TArtCATANACsIPara*>(p));
   }
   static void destruct_TArtCATANACsIPara(void *p) {
      typedef ::TArtCATANACsIPara current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANACsIPara

//______________________________________________________________________________
void TArtCATANAParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCATANAParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCATANAParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCATANAParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCATANAParameters(void *p) {
      return  p ? new(p) ::TArtCATANAParameters : new ::TArtCATANAParameters;
   }
   static void *newArray_TArtCATANAParameters(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCATANAParameters[nElements] : new ::TArtCATANAParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCATANAParameters(void *p) {
      delete (static_cast<::TArtCATANAParameters*>(p));
   }
   static void deleteArray_TArtCATANAParameters(void *p) {
      delete [] (static_cast<::TArtCATANAParameters*>(p));
   }
   static void destruct_TArtCATANAParameters(void *p) {
      typedef ::TArtCATANAParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCATANAParameters

//______________________________________________________________________________
void TArtCalibCATANA::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCalibCATANA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCalibCATANA::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCalibCATANA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCalibCATANA(void *p) {
      return  p ? new(p) ::TArtCalibCATANA : new ::TArtCalibCATANA;
   }
   static void *newArray_TArtCalibCATANA(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCalibCATANA[nElements] : new ::TArtCalibCATANA[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCalibCATANA(void *p) {
      delete (static_cast<::TArtCalibCATANA*>(p));
   }
   static void deleteArray_TArtCalibCATANA(void *p) {
      delete [] (static_cast<::TArtCalibCATANA*>(p));
   }
   static void destruct_TArtCalibCATANA(void *p) {
      typedef ::TArtCalibCATANA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCalibCATANA

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOTArtCATANACsIParamUgR_Dictionary();
   static void maplEintcOTArtCATANACsIParamUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtCATANACsIParamUgR(void *p = nullptr);
   static void *newArray_maplEintcOTArtCATANACsIParamUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtCATANACsIParamUgR(void *p);
   static void deleteArray_maplEintcOTArtCATANACsIParamUgR(void *p);
   static void destruct_maplEintcOTArtCATANACsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtCATANACsIPara*>*)
   {
      map<int,TArtCATANACsIPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtCATANACsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtCATANACsIPara*>", -2, "map", 100,
                  typeid(map<int,TArtCATANACsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtCATANACsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtCATANACsIPara*>) );
      instance.SetNew(&new_maplEintcOTArtCATANACsIParamUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtCATANACsIParamUgR);
      instance.SetDelete(&delete_maplEintcOTArtCATANACsIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtCATANACsIParamUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtCATANACsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtCATANACsIPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,TArtCATANACsIPara*>","std::map<int, TArtCATANACsIPara*, std::less<int>, std::allocator<std::pair<int const, TArtCATANACsIPara*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,TArtCATANACsIPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtCATANACsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,TArtCATANACsIPara*>*>(nullptr))->GetClass();
      maplEintcOTArtCATANACsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtCATANACsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtCATANACsIParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TArtCATANACsIPara*> : new map<int,TArtCATANACsIPara*>;
   }
   static void *newArray_maplEintcOTArtCATANACsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TArtCATANACsIPara*>[nElements] : new map<int,TArtCATANACsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtCATANACsIParamUgR(void *p) {
      delete (static_cast<map<int,TArtCATANACsIPara*>*>(p));
   }
   static void deleteArray_maplEintcOTArtCATANACsIParamUgR(void *p) {
      delete [] (static_cast<map<int,TArtCATANACsIPara*>*>(p));
   }
   static void destruct_maplEintcOTArtCATANACsIParamUgR(void *p) {
      typedef map<int,TArtCATANACsIPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtCATANACsIPara*>

namespace ROOT {
   static TClass *maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary();
   static void maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(TClass*);
   static void *new_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p = nullptr);
   static void *newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(Long_t size, void *p);
   static void delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);
   static void deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);
   static void destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TArtRIDFMap,TArtCATANACsIPara*>*)
   {
      map<TArtRIDFMap,TArtCATANACsIPara*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TArtRIDFMap,TArtCATANACsIPara*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TArtRIDFMap,TArtCATANACsIPara*>", -2, "map", 100,
                  typeid(map<TArtRIDFMap,TArtCATANACsIPara*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TArtRIDFMap,TArtCATANACsIPara*>) );
      instance.SetNew(&new_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetNewArray(&newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDelete(&delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDeleteArray(&deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.SetDestructor(&destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TArtRIDFMap,TArtCATANACsIPara*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TArtRIDFMap,TArtCATANACsIPara*>","std::map<TArtRIDFMap, TArtCATANACsIPara*, std::less<TArtRIDFMap>, std::allocator<std::pair<TArtRIDFMap const, TArtCATANACsIPara*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtCATANACsIPara*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETArtRIDFMapcOTArtCATANACsIParamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TArtRIDFMap,TArtCATANACsIPara*>*>(nullptr))->GetClass();
      maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETArtRIDFMapcOTArtCATANACsIParamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtCATANACsIPara*> : new map<TArtRIDFMap,TArtCATANACsIPara*>;
   }
   static void *newArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TArtRIDFMap,TArtCATANACsIPara*>[nElements] : new map<TArtRIDFMap,TArtCATANACsIPara*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      delete (static_cast<map<TArtRIDFMap,TArtCATANACsIPara*>*>(p));
   }
   static void deleteArray_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      delete [] (static_cast<map<TArtRIDFMap,TArtCATANACsIPara*>*>(p));
   }
   static void destruct_maplETArtRIDFMapcOTArtCATANACsIParamUgR(void *p) {
      typedef map<TArtRIDFMap,TArtCATANACsIPara*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TArtRIDFMap,TArtCATANACsIPara*>

namespace {
  void TriggerDictionaryInitialization_anacatana_dict_Impl() {
    static const char* headers[] = {
"include/TArtCATANACsI.hh",
"include/TArtCATANACsIPara.hh",
"include/TArtCATANAParameters.hh",
"include/TArtCalibCATANA.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"../../Core/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/SAMURAI/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/Reconstruction/CATANA/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anacatana_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TArtCATANACsI.hh")))  TArtCATANACsI;
class __attribute__((annotate("$clingAutoload$include/TArtCATANACsIPara.hh")))  TArtCATANACsIPara;
class __attribute__((annotate("$clingAutoload$include/TArtCATANAParameters.hh")))  TArtCATANAParameters;
class __attribute__((annotate("$clingAutoload$include/TArtCalibCATANA.hh")))  TArtCalibCATANA;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anacatana_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCATANACsI.hh"
#include "include/TArtCATANACsIPara.hh"
#include "include/TArtCATANAParameters.hh"
#include "include/TArtCalibCATANA.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCATANACsI", payloadCode, "@",
"TArtCATANACsIPara", payloadCode, "@",
"TArtCATANAParameters", payloadCode, "@",
"TArtCalibCATANA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anacatana_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anacatana_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anacatana_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anacatana_dict() {
  TriggerDictionaryInitialization_anacatana_dict_Impl();
}
