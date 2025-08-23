// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME analoopencexample_dict
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
#include "include/EAnalyser.hh"
#include "include/EWNum.hh"
#include "include/TAlEncCATANAExample.hh"
#include "include/TAlEncDALIExample.hh"
#include "include/TAlEncESPRIExample.hh"
#include "include/TAlEncExample.hh"
#include "include/TAlEncGlobalExample.hh"
#include "include/TAlEncHIMEExample.hh"
#include "include/TAlEncICExample.hh"
#include "include/TAlEncMatrixExample.hh"
#include "include/TAlEncNEBULAExample.hh"
#include "include/TAlEncNEBULAHPCExample.hh"
#include "include/TAlEncNINJAExample.hh"
#include "include/TAlEncNeuLANDExample.hh"
#include "include/TAlEncPIDExample.hh"
#include "include/TAlEncPPACExample.hh"
#include "include/TAlEncPlasticExample.hh"
#include "include/TAlEncRPDCExample.hh"
#include "include/TAlEncRPTOFExample.hh"
#include "include/TAlEncRawDataExample.hh"
#include "include/TAlEncSAMURAIDCExample.hh"
#include "include/TAlEncSAMURAIFrag.hh"
#include "include/TAlEncSAMURAIHODExample.hh"
#include "include/TAlEncSAMURAIICExample.hh"
#include "include/TAlEncSAMURAINeutronExample.hh"
#include "include/TAlEncSAMURAIPlaExample.hh"
#include "include/TAlEncSAMURAITEDExample.hh"
#include "include/TAlEncSAMURAITZeroExample.hh"
#include "include/TAlEncSILICONSExample.hh"
#include "include/TAlEncWINDSExample.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TAlEncCATANAExample(void *p = nullptr);
   static void *newArray_TAlEncCATANAExample(Long_t size, void *p);
   static void delete_TAlEncCATANAExample(void *p);
   static void deleteArray_TAlEncCATANAExample(void *p);
   static void destruct_TAlEncCATANAExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncCATANAExample*)
   {
      ::TAlEncCATANAExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncCATANAExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncCATANAExample", ::TAlEncCATANAExample::Class_Version(), "TAlEncCATANAExample.hh", 13,
                  typeid(::TAlEncCATANAExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncCATANAExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncCATANAExample) );
      instance.SetNew(&new_TAlEncCATANAExample);
      instance.SetNewArray(&newArray_TAlEncCATANAExample);
      instance.SetDelete(&delete_TAlEncCATANAExample);
      instance.SetDeleteArray(&deleteArray_TAlEncCATANAExample);
      instance.SetDestructor(&destruct_TAlEncCATANAExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncCATANAExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncCATANAExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncCATANAExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncCATANAExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncCATANAExampleFactory(Long_t size, void *p);
   static void delete_TAlEncCATANAExampleFactory(void *p);
   static void deleteArray_TAlEncCATANAExampleFactory(void *p);
   static void destruct_TAlEncCATANAExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncCATANAExampleFactory*)
   {
      ::TAlEncCATANAExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncCATANAExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncCATANAExampleFactory", ::TAlEncCATANAExampleFactory::Class_Version(), "TAlEncCATANAExample.hh", 40,
                  typeid(::TAlEncCATANAExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncCATANAExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncCATANAExampleFactory) );
      instance.SetNew(&new_TAlEncCATANAExampleFactory);
      instance.SetNewArray(&newArray_TAlEncCATANAExampleFactory);
      instance.SetDelete(&delete_TAlEncCATANAExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncCATANAExampleFactory);
      instance.SetDestructor(&destruct_TAlEncCATANAExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncCATANAExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncCATANAExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncCATANAExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncDALIExample(void *p = nullptr);
   static void *newArray_TAlEncDALIExample(Long_t size, void *p);
   static void delete_TAlEncDALIExample(void *p);
   static void deleteArray_TAlEncDALIExample(void *p);
   static void destruct_TAlEncDALIExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncDALIExample*)
   {
      ::TAlEncDALIExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncDALIExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncDALIExample", ::TAlEncDALIExample::Class_Version(), "TAlEncDALIExample.hh", 13,
                  typeid(::TAlEncDALIExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncDALIExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncDALIExample) );
      instance.SetNew(&new_TAlEncDALIExample);
      instance.SetNewArray(&newArray_TAlEncDALIExample);
      instance.SetDelete(&delete_TAlEncDALIExample);
      instance.SetDeleteArray(&deleteArray_TAlEncDALIExample);
      instance.SetDestructor(&destruct_TAlEncDALIExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncDALIExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncDALIExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncDALIExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncDALIExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncDALIExampleFactory(Long_t size, void *p);
   static void delete_TAlEncDALIExampleFactory(void *p);
   static void deleteArray_TAlEncDALIExampleFactory(void *p);
   static void destruct_TAlEncDALIExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncDALIExampleFactory*)
   {
      ::TAlEncDALIExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncDALIExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncDALIExampleFactory", ::TAlEncDALIExampleFactory::Class_Version(), "TAlEncDALIExample.hh", 37,
                  typeid(::TAlEncDALIExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncDALIExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncDALIExampleFactory) );
      instance.SetNew(&new_TAlEncDALIExampleFactory);
      instance.SetNewArray(&newArray_TAlEncDALIExampleFactory);
      instance.SetDelete(&delete_TAlEncDALIExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncDALIExampleFactory);
      instance.SetDestructor(&destruct_TAlEncDALIExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncDALIExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncDALIExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncDALIExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncESPRIExample(void *p = nullptr);
   static void *newArray_TAlEncESPRIExample(Long_t size, void *p);
   static void delete_TAlEncESPRIExample(void *p);
   static void deleteArray_TAlEncESPRIExample(void *p);
   static void destruct_TAlEncESPRIExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncESPRIExample*)
   {
      ::TAlEncESPRIExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncESPRIExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncESPRIExample", ::TAlEncESPRIExample::Class_Version(), "TAlEncESPRIExample.hh", 54,
                  typeid(::TAlEncESPRIExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncESPRIExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncESPRIExample) );
      instance.SetNew(&new_TAlEncESPRIExample);
      instance.SetNewArray(&newArray_TAlEncESPRIExample);
      instance.SetDelete(&delete_TAlEncESPRIExample);
      instance.SetDeleteArray(&deleteArray_TAlEncESPRIExample);
      instance.SetDestructor(&destruct_TAlEncESPRIExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncESPRIExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncESPRIExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncESPRIExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncESPRIExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncESPRIExampleFactory(Long_t size, void *p);
   static void delete_TAlEncESPRIExampleFactory(void *p);
   static void deleteArray_TAlEncESPRIExampleFactory(void *p);
   static void destruct_TAlEncESPRIExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncESPRIExampleFactory*)
   {
      ::TAlEncESPRIExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncESPRIExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncESPRIExampleFactory", ::TAlEncESPRIExampleFactory::Class_Version(), "TAlEncESPRIExample.hh", 86,
                  typeid(::TAlEncESPRIExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncESPRIExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncESPRIExampleFactory) );
      instance.SetNew(&new_TAlEncESPRIExampleFactory);
      instance.SetNewArray(&newArray_TAlEncESPRIExampleFactory);
      instance.SetDelete(&delete_TAlEncESPRIExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncESPRIExampleFactory);
      instance.SetDestructor(&destruct_TAlEncESPRIExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncESPRIExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncESPRIExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncESPRIExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncExample(void *p = nullptr);
   static void *newArray_TAlEncExample(Long_t size, void *p);
   static void delete_TAlEncExample(void *p);
   static void deleteArray_TAlEncExample(void *p);
   static void destruct_TAlEncExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncExample*)
   {
      ::TAlEncExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncExample", ::TAlEncExample::Class_Version(), "TAlEncExample.hh", 15,
                  typeid(::TAlEncExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncExample) );
      instance.SetNew(&new_TAlEncExample);
      instance.SetNewArray(&newArray_TAlEncExample);
      instance.SetDelete(&delete_TAlEncExample);
      instance.SetDeleteArray(&deleteArray_TAlEncExample);
      instance.SetDestructor(&destruct_TAlEncExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncGlobalExample(void *p = nullptr);
   static void *newArray_TAlEncGlobalExample(Long_t size, void *p);
   static void delete_TAlEncGlobalExample(void *p);
   static void deleteArray_TAlEncGlobalExample(void *p);
   static void destruct_TAlEncGlobalExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncGlobalExample*)
   {
      ::TAlEncGlobalExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncGlobalExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncGlobalExample", ::TAlEncGlobalExample::Class_Version(), "TAlEncGlobalExample.hh", 13,
                  typeid(::TAlEncGlobalExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncGlobalExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncGlobalExample) );
      instance.SetNew(&new_TAlEncGlobalExample);
      instance.SetNewArray(&newArray_TAlEncGlobalExample);
      instance.SetDelete(&delete_TAlEncGlobalExample);
      instance.SetDeleteArray(&deleteArray_TAlEncGlobalExample);
      instance.SetDestructor(&destruct_TAlEncGlobalExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncGlobalExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncGlobalExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncGlobalExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncGlobalExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncGlobalExampleFactory(Long_t size, void *p);
   static void delete_TAlEncGlobalExampleFactory(void *p);
   static void deleteArray_TAlEncGlobalExampleFactory(void *p);
   static void destruct_TAlEncGlobalExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncGlobalExampleFactory*)
   {
      ::TAlEncGlobalExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncGlobalExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncGlobalExampleFactory", ::TAlEncGlobalExampleFactory::Class_Version(), "TAlEncGlobalExample.hh", 36,
                  typeid(::TAlEncGlobalExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncGlobalExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncGlobalExampleFactory) );
      instance.SetNew(&new_TAlEncGlobalExampleFactory);
      instance.SetNewArray(&newArray_TAlEncGlobalExampleFactory);
      instance.SetDelete(&delete_TAlEncGlobalExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncGlobalExampleFactory);
      instance.SetDestructor(&destruct_TAlEncGlobalExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncGlobalExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncGlobalExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncGlobalExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncHIMEExample(void *p = nullptr);
   static void *newArray_TAlEncHIMEExample(Long_t size, void *p);
   static void delete_TAlEncHIMEExample(void *p);
   static void deleteArray_TAlEncHIMEExample(void *p);
   static void destruct_TAlEncHIMEExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncHIMEExample*)
   {
      ::TAlEncHIMEExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncHIMEExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncHIMEExample", ::TAlEncHIMEExample::Class_Version(), "TAlEncHIMEExample.hh", 14,
                  typeid(::TAlEncHIMEExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncHIMEExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncHIMEExample) );
      instance.SetNew(&new_TAlEncHIMEExample);
      instance.SetNewArray(&newArray_TAlEncHIMEExample);
      instance.SetDelete(&delete_TAlEncHIMEExample);
      instance.SetDeleteArray(&deleteArray_TAlEncHIMEExample);
      instance.SetDestructor(&destruct_TAlEncHIMEExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncHIMEExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncHIMEExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncHIMEExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncHIMEExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncHIMEExampleFactory(Long_t size, void *p);
   static void delete_TAlEncHIMEExampleFactory(void *p);
   static void deleteArray_TAlEncHIMEExampleFactory(void *p);
   static void destruct_TAlEncHIMEExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncHIMEExampleFactory*)
   {
      ::TAlEncHIMEExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncHIMEExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncHIMEExampleFactory", ::TAlEncHIMEExampleFactory::Class_Version(), "TAlEncHIMEExample.hh", 44,
                  typeid(::TAlEncHIMEExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncHIMEExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncHIMEExampleFactory) );
      instance.SetNew(&new_TAlEncHIMEExampleFactory);
      instance.SetNewArray(&newArray_TAlEncHIMEExampleFactory);
      instance.SetDelete(&delete_TAlEncHIMEExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncHIMEExampleFactory);
      instance.SetDestructor(&destruct_TAlEncHIMEExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncHIMEExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncHIMEExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncHIMEExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncICExample(void *p = nullptr);
   static void *newArray_TAlEncICExample(Long_t size, void *p);
   static void delete_TAlEncICExample(void *p);
   static void deleteArray_TAlEncICExample(void *p);
   static void destruct_TAlEncICExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncICExample*)
   {
      ::TAlEncICExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncICExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncICExample", ::TAlEncICExample::Class_Version(), "TAlEncICExample.hh", 12,
                  typeid(::TAlEncICExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncICExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncICExample) );
      instance.SetNew(&new_TAlEncICExample);
      instance.SetNewArray(&newArray_TAlEncICExample);
      instance.SetDelete(&delete_TAlEncICExample);
      instance.SetDeleteArray(&deleteArray_TAlEncICExample);
      instance.SetDestructor(&destruct_TAlEncICExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncICExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncICExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncICExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncICExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncICExampleFactory(Long_t size, void *p);
   static void delete_TAlEncICExampleFactory(void *p);
   static void deleteArray_TAlEncICExampleFactory(void *p);
   static void destruct_TAlEncICExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncICExampleFactory*)
   {
      ::TAlEncICExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncICExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncICExampleFactory", ::TAlEncICExampleFactory::Class_Version(), "TAlEncICExample.hh", 34,
                  typeid(::TAlEncICExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncICExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncICExampleFactory) );
      instance.SetNew(&new_TAlEncICExampleFactory);
      instance.SetNewArray(&newArray_TAlEncICExampleFactory);
      instance.SetDelete(&delete_TAlEncICExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncICExampleFactory);
      instance.SetDestructor(&destruct_TAlEncICExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncICExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncICExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncICExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncMatrixExample(void *p = nullptr);
   static void *newArray_TAlEncMatrixExample(Long_t size, void *p);
   static void delete_TAlEncMatrixExample(void *p);
   static void deleteArray_TAlEncMatrixExample(void *p);
   static void destruct_TAlEncMatrixExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncMatrixExample*)
   {
      ::TAlEncMatrixExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncMatrixExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncMatrixExample", ::TAlEncMatrixExample::Class_Version(), "TAlEncMatrixExample.hh", 11,
                  typeid(::TAlEncMatrixExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncMatrixExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncMatrixExample) );
      instance.SetNew(&new_TAlEncMatrixExample);
      instance.SetNewArray(&newArray_TAlEncMatrixExample);
      instance.SetDelete(&delete_TAlEncMatrixExample);
      instance.SetDeleteArray(&deleteArray_TAlEncMatrixExample);
      instance.SetDestructor(&destruct_TAlEncMatrixExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncMatrixExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncMatrixExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncMatrixExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncMatrixExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncMatrixExampleFactory(Long_t size, void *p);
   static void delete_TAlEncMatrixExampleFactory(void *p);
   static void deleteArray_TAlEncMatrixExampleFactory(void *p);
   static void destruct_TAlEncMatrixExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncMatrixExampleFactory*)
   {
      ::TAlEncMatrixExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncMatrixExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncMatrixExampleFactory", ::TAlEncMatrixExampleFactory::Class_Version(), "TAlEncMatrixExample.hh", 37,
                  typeid(::TAlEncMatrixExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncMatrixExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncMatrixExampleFactory) );
      instance.SetNew(&new_TAlEncMatrixExampleFactory);
      instance.SetNewArray(&newArray_TAlEncMatrixExampleFactory);
      instance.SetDelete(&delete_TAlEncMatrixExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncMatrixExampleFactory);
      instance.SetDestructor(&destruct_TAlEncMatrixExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncMatrixExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncMatrixExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncMatrixExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNEBULAExample(void *p = nullptr);
   static void *newArray_TAlEncNEBULAExample(Long_t size, void *p);
   static void delete_TAlEncNEBULAExample(void *p);
   static void deleteArray_TAlEncNEBULAExample(void *p);
   static void destruct_TAlEncNEBULAExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNEBULAExample*)
   {
      ::TAlEncNEBULAExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNEBULAExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNEBULAExample", ::TAlEncNEBULAExample::Class_Version(), "TAlEncNEBULAExample.hh", 14,
                  typeid(::TAlEncNEBULAExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNEBULAExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNEBULAExample) );
      instance.SetNew(&new_TAlEncNEBULAExample);
      instance.SetNewArray(&newArray_TAlEncNEBULAExample);
      instance.SetDelete(&delete_TAlEncNEBULAExample);
      instance.SetDeleteArray(&deleteArray_TAlEncNEBULAExample);
      instance.SetDestructor(&destruct_TAlEncNEBULAExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNEBULAExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNEBULAExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNEBULAExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNEBULAExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncNEBULAExampleFactory(Long_t size, void *p);
   static void delete_TAlEncNEBULAExampleFactory(void *p);
   static void deleteArray_TAlEncNEBULAExampleFactory(void *p);
   static void destruct_TAlEncNEBULAExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNEBULAExampleFactory*)
   {
      ::TAlEncNEBULAExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNEBULAExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNEBULAExampleFactory", ::TAlEncNEBULAExampleFactory::Class_Version(), "TAlEncNEBULAExample.hh", 44,
                  typeid(::TAlEncNEBULAExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNEBULAExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNEBULAExampleFactory) );
      instance.SetNew(&new_TAlEncNEBULAExampleFactory);
      instance.SetNewArray(&newArray_TAlEncNEBULAExampleFactory);
      instance.SetDelete(&delete_TAlEncNEBULAExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncNEBULAExampleFactory);
      instance.SetDestructor(&destruct_TAlEncNEBULAExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNEBULAExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNEBULAExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNEBULAExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNEBULAHPCExample(void *p = nullptr);
   static void *newArray_TAlEncNEBULAHPCExample(Long_t size, void *p);
   static void delete_TAlEncNEBULAHPCExample(void *p);
   static void deleteArray_TAlEncNEBULAHPCExample(void *p);
   static void destruct_TAlEncNEBULAHPCExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNEBULAHPCExample*)
   {
      ::TAlEncNEBULAHPCExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNEBULAHPCExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNEBULAHPCExample", ::TAlEncNEBULAHPCExample::Class_Version(), "TAlEncNEBULAHPCExample.hh", 14,
                  typeid(::TAlEncNEBULAHPCExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNEBULAHPCExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNEBULAHPCExample) );
      instance.SetNew(&new_TAlEncNEBULAHPCExample);
      instance.SetNewArray(&newArray_TAlEncNEBULAHPCExample);
      instance.SetDelete(&delete_TAlEncNEBULAHPCExample);
      instance.SetDeleteArray(&deleteArray_TAlEncNEBULAHPCExample);
      instance.SetDestructor(&destruct_TAlEncNEBULAHPCExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNEBULAHPCExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNEBULAHPCExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNEBULAHPCExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNEBULAHPCExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncNEBULAHPCExampleFactory(Long_t size, void *p);
   static void delete_TAlEncNEBULAHPCExampleFactory(void *p);
   static void deleteArray_TAlEncNEBULAHPCExampleFactory(void *p);
   static void destruct_TAlEncNEBULAHPCExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNEBULAHPCExampleFactory*)
   {
      ::TAlEncNEBULAHPCExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNEBULAHPCExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNEBULAHPCExampleFactory", ::TAlEncNEBULAHPCExampleFactory::Class_Version(), "TAlEncNEBULAHPCExample.hh", 37,
                  typeid(::TAlEncNEBULAHPCExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNEBULAHPCExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNEBULAHPCExampleFactory) );
      instance.SetNew(&new_TAlEncNEBULAHPCExampleFactory);
      instance.SetNewArray(&newArray_TAlEncNEBULAHPCExampleFactory);
      instance.SetDelete(&delete_TAlEncNEBULAHPCExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncNEBULAHPCExampleFactory);
      instance.SetDestructor(&destruct_TAlEncNEBULAHPCExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNEBULAHPCExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNEBULAHPCExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNEBULAHPCExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNINJAExample(void *p = nullptr);
   static void *newArray_TAlEncNINJAExample(Long_t size, void *p);
   static void delete_TAlEncNINJAExample(void *p);
   static void deleteArray_TAlEncNINJAExample(void *p);
   static void destruct_TAlEncNINJAExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNINJAExample*)
   {
      ::TAlEncNINJAExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNINJAExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNINJAExample", ::TAlEncNINJAExample::Class_Version(), "TAlEncNINJAExample.hh", 14,
                  typeid(::TAlEncNINJAExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNINJAExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNINJAExample) );
      instance.SetNew(&new_TAlEncNINJAExample);
      instance.SetNewArray(&newArray_TAlEncNINJAExample);
      instance.SetDelete(&delete_TAlEncNINJAExample);
      instance.SetDeleteArray(&deleteArray_TAlEncNINJAExample);
      instance.SetDestructor(&destruct_TAlEncNINJAExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNINJAExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNINJAExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNINJAExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNINJAExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncNINJAExampleFactory(Long_t size, void *p);
   static void delete_TAlEncNINJAExampleFactory(void *p);
   static void deleteArray_TAlEncNINJAExampleFactory(void *p);
   static void destruct_TAlEncNINJAExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNINJAExampleFactory*)
   {
      ::TAlEncNINJAExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNINJAExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNINJAExampleFactory", ::TAlEncNINJAExampleFactory::Class_Version(), "TAlEncNINJAExample.hh", 44,
                  typeid(::TAlEncNINJAExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNINJAExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNINJAExampleFactory) );
      instance.SetNew(&new_TAlEncNINJAExampleFactory);
      instance.SetNewArray(&newArray_TAlEncNINJAExampleFactory);
      instance.SetDelete(&delete_TAlEncNINJAExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncNINJAExampleFactory);
      instance.SetDestructor(&destruct_TAlEncNINJAExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNINJAExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNINJAExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNINJAExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNeuLANDExample(void *p = nullptr);
   static void *newArray_TAlEncNeuLANDExample(Long_t size, void *p);
   static void delete_TAlEncNeuLANDExample(void *p);
   static void deleteArray_TAlEncNeuLANDExample(void *p);
   static void destruct_TAlEncNeuLANDExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNeuLANDExample*)
   {
      ::TAlEncNeuLANDExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNeuLANDExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNeuLANDExample", ::TAlEncNeuLANDExample::Class_Version(), "TAlEncNeuLANDExample.hh", 18,
                  typeid(::TAlEncNeuLANDExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNeuLANDExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNeuLANDExample) );
      instance.SetNew(&new_TAlEncNeuLANDExample);
      instance.SetNewArray(&newArray_TAlEncNeuLANDExample);
      instance.SetDelete(&delete_TAlEncNeuLANDExample);
      instance.SetDeleteArray(&deleteArray_TAlEncNeuLANDExample);
      instance.SetDestructor(&destruct_TAlEncNeuLANDExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNeuLANDExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNeuLANDExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNeuLANDExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncNeuLANDExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncNeuLANDExampleFactory(Long_t size, void *p);
   static void delete_TAlEncNeuLANDExampleFactory(void *p);
   static void deleteArray_TAlEncNeuLANDExampleFactory(void *p);
   static void destruct_TAlEncNeuLANDExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncNeuLANDExampleFactory*)
   {
      ::TAlEncNeuLANDExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncNeuLANDExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncNeuLANDExampleFactory", ::TAlEncNeuLANDExampleFactory::Class_Version(), "TAlEncNeuLANDExample.hh", 48,
                  typeid(::TAlEncNeuLANDExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncNeuLANDExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncNeuLANDExampleFactory) );
      instance.SetNew(&new_TAlEncNeuLANDExampleFactory);
      instance.SetNewArray(&newArray_TAlEncNeuLANDExampleFactory);
      instance.SetDelete(&delete_TAlEncNeuLANDExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncNeuLANDExampleFactory);
      instance.SetDestructor(&destruct_TAlEncNeuLANDExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncNeuLANDExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncNeuLANDExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncNeuLANDExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPIDExample(void *p = nullptr);
   static void *newArray_TAlEncPIDExample(Long_t size, void *p);
   static void delete_TAlEncPIDExample(void *p);
   static void deleteArray_TAlEncPIDExample(void *p);
   static void destruct_TAlEncPIDExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPIDExample*)
   {
      ::TAlEncPIDExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPIDExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPIDExample", ::TAlEncPIDExample::Class_Version(), "TAlEncPIDExample.hh", 12,
                  typeid(::TAlEncPIDExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPIDExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPIDExample) );
      instance.SetNew(&new_TAlEncPIDExample);
      instance.SetNewArray(&newArray_TAlEncPIDExample);
      instance.SetDelete(&delete_TAlEncPIDExample);
      instance.SetDeleteArray(&deleteArray_TAlEncPIDExample);
      instance.SetDestructor(&destruct_TAlEncPIDExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPIDExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPIDExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPIDExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPIDExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncPIDExampleFactory(Long_t size, void *p);
   static void delete_TAlEncPIDExampleFactory(void *p);
   static void deleteArray_TAlEncPIDExampleFactory(void *p);
   static void destruct_TAlEncPIDExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPIDExampleFactory*)
   {
      ::TAlEncPIDExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPIDExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPIDExampleFactory", ::TAlEncPIDExampleFactory::Class_Version(), "TAlEncPIDExample.hh", 53,
                  typeid(::TAlEncPIDExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPIDExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPIDExampleFactory) );
      instance.SetNew(&new_TAlEncPIDExampleFactory);
      instance.SetNewArray(&newArray_TAlEncPIDExampleFactory);
      instance.SetDelete(&delete_TAlEncPIDExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncPIDExampleFactory);
      instance.SetDestructor(&destruct_TAlEncPIDExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPIDExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPIDExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPIDExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPPACExample(void *p = nullptr);
   static void *newArray_TAlEncPPACExample(Long_t size, void *p);
   static void delete_TAlEncPPACExample(void *p);
   static void deleteArray_TAlEncPPACExample(void *p);
   static void destruct_TAlEncPPACExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPPACExample*)
   {
      ::TAlEncPPACExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPPACExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPPACExample", ::TAlEncPPACExample::Class_Version(), "TAlEncPPACExample.hh", 14,
                  typeid(::TAlEncPPACExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPPACExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPPACExample) );
      instance.SetNew(&new_TAlEncPPACExample);
      instance.SetNewArray(&newArray_TAlEncPPACExample);
      instance.SetDelete(&delete_TAlEncPPACExample);
      instance.SetDeleteArray(&deleteArray_TAlEncPPACExample);
      instance.SetDestructor(&destruct_TAlEncPPACExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPPACExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPPACExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPPACExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPPACExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncPPACExampleFactory(Long_t size, void *p);
   static void delete_TAlEncPPACExampleFactory(void *p);
   static void deleteArray_TAlEncPPACExampleFactory(void *p);
   static void destruct_TAlEncPPACExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPPACExampleFactory*)
   {
      ::TAlEncPPACExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPPACExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPPACExampleFactory", ::TAlEncPPACExampleFactory::Class_Version(), "TAlEncPPACExample.hh", 39,
                  typeid(::TAlEncPPACExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPPACExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPPACExampleFactory) );
      instance.SetNew(&new_TAlEncPPACExampleFactory);
      instance.SetNewArray(&newArray_TAlEncPPACExampleFactory);
      instance.SetDelete(&delete_TAlEncPPACExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncPPACExampleFactory);
      instance.SetDestructor(&destruct_TAlEncPPACExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPPACExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPPACExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPPACExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPlasticExample(void *p = nullptr);
   static void *newArray_TAlEncPlasticExample(Long_t size, void *p);
   static void delete_TAlEncPlasticExample(void *p);
   static void deleteArray_TAlEncPlasticExample(void *p);
   static void destruct_TAlEncPlasticExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPlasticExample*)
   {
      ::TAlEncPlasticExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPlasticExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPlasticExample", ::TAlEncPlasticExample::Class_Version(), "TAlEncPlasticExample.hh", 12,
                  typeid(::TAlEncPlasticExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPlasticExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPlasticExample) );
      instance.SetNew(&new_TAlEncPlasticExample);
      instance.SetNewArray(&newArray_TAlEncPlasticExample);
      instance.SetDelete(&delete_TAlEncPlasticExample);
      instance.SetDeleteArray(&deleteArray_TAlEncPlasticExample);
      instance.SetDestructor(&destruct_TAlEncPlasticExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPlasticExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPlasticExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPlasticExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPlasticExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncPlasticExampleFactory(Long_t size, void *p);
   static void delete_TAlEncPlasticExampleFactory(void *p);
   static void deleteArray_TAlEncPlasticExampleFactory(void *p);
   static void destruct_TAlEncPlasticExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPlasticExampleFactory*)
   {
      ::TAlEncPlasticExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPlasticExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPlasticExampleFactory", ::TAlEncPlasticExampleFactory::Class_Version(), "TAlEncPlasticExample.hh", 35,
                  typeid(::TAlEncPlasticExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPlasticExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPlasticExampleFactory) );
      instance.SetNew(&new_TAlEncPlasticExampleFactory);
      instance.SetNewArray(&newArray_TAlEncPlasticExampleFactory);
      instance.SetDelete(&delete_TAlEncPlasticExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncPlasticExampleFactory);
      instance.SetDestructor(&destruct_TAlEncPlasticExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPlasticExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPlasticExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPlasticExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRPDCExample(void *p = nullptr);
   static void *newArray_TAlEncRPDCExample(Long_t size, void *p);
   static void delete_TAlEncRPDCExample(void *p);
   static void deleteArray_TAlEncRPDCExample(void *p);
   static void destruct_TAlEncRPDCExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRPDCExample*)
   {
      ::TAlEncRPDCExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRPDCExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRPDCExample", ::TAlEncRPDCExample::Class_Version(), "TAlEncRPDCExample.hh", 15,
                  typeid(::TAlEncRPDCExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRPDCExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRPDCExample) );
      instance.SetNew(&new_TAlEncRPDCExample);
      instance.SetNewArray(&newArray_TAlEncRPDCExample);
      instance.SetDelete(&delete_TAlEncRPDCExample);
      instance.SetDeleteArray(&deleteArray_TAlEncRPDCExample);
      instance.SetDestructor(&destruct_TAlEncRPDCExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRPDCExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRPDCExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRPDCExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRPDCExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncRPDCExampleFactory(Long_t size, void *p);
   static void delete_TAlEncRPDCExampleFactory(void *p);
   static void deleteArray_TAlEncRPDCExampleFactory(void *p);
   static void destruct_TAlEncRPDCExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRPDCExampleFactory*)
   {
      ::TAlEncRPDCExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRPDCExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRPDCExampleFactory", ::TAlEncRPDCExampleFactory::Class_Version(), "TAlEncRPDCExample.hh", 40,
                  typeid(::TAlEncRPDCExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRPDCExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRPDCExampleFactory) );
      instance.SetNew(&new_TAlEncRPDCExampleFactory);
      instance.SetNewArray(&newArray_TAlEncRPDCExampleFactory);
      instance.SetDelete(&delete_TAlEncRPDCExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncRPDCExampleFactory);
      instance.SetDestructor(&destruct_TAlEncRPDCExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRPDCExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRPDCExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRPDCExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRPTOFExample(void *p = nullptr);
   static void *newArray_TAlEncRPTOFExample(Long_t size, void *p);
   static void delete_TAlEncRPTOFExample(void *p);
   static void deleteArray_TAlEncRPTOFExample(void *p);
   static void destruct_TAlEncRPTOFExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRPTOFExample*)
   {
      ::TAlEncRPTOFExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRPTOFExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRPTOFExample", ::TAlEncRPTOFExample::Class_Version(), "TAlEncRPTOFExample.hh", 14,
                  typeid(::TAlEncRPTOFExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRPTOFExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRPTOFExample) );
      instance.SetNew(&new_TAlEncRPTOFExample);
      instance.SetNewArray(&newArray_TAlEncRPTOFExample);
      instance.SetDelete(&delete_TAlEncRPTOFExample);
      instance.SetDeleteArray(&deleteArray_TAlEncRPTOFExample);
      instance.SetDestructor(&destruct_TAlEncRPTOFExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRPTOFExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRPTOFExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRPTOFExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRPTOFExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncRPTOFExampleFactory(Long_t size, void *p);
   static void delete_TAlEncRPTOFExampleFactory(void *p);
   static void deleteArray_TAlEncRPTOFExampleFactory(void *p);
   static void destruct_TAlEncRPTOFExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRPTOFExampleFactory*)
   {
      ::TAlEncRPTOFExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRPTOFExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRPTOFExampleFactory", ::TAlEncRPTOFExampleFactory::Class_Version(), "TAlEncRPTOFExample.hh", 35,
                  typeid(::TAlEncRPTOFExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRPTOFExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRPTOFExampleFactory) );
      instance.SetNew(&new_TAlEncRPTOFExampleFactory);
      instance.SetNewArray(&newArray_TAlEncRPTOFExampleFactory);
      instance.SetDelete(&delete_TAlEncRPTOFExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncRPTOFExampleFactory);
      instance.SetDestructor(&destruct_TAlEncRPTOFExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRPTOFExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRPTOFExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRPTOFExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRawDataExample(void *p = nullptr);
   static void *newArray_TAlEncRawDataExample(Long_t size, void *p);
   static void delete_TAlEncRawDataExample(void *p);
   static void deleteArray_TAlEncRawDataExample(void *p);
   static void destruct_TAlEncRawDataExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRawDataExample*)
   {
      ::TAlEncRawDataExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRawDataExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRawDataExample", ::TAlEncRawDataExample::Class_Version(), "TAlEncRawDataExample.hh", 11,
                  typeid(::TAlEncRawDataExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRawDataExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRawDataExample) );
      instance.SetNew(&new_TAlEncRawDataExample);
      instance.SetNewArray(&newArray_TAlEncRawDataExample);
      instance.SetDelete(&delete_TAlEncRawDataExample);
      instance.SetDeleteArray(&deleteArray_TAlEncRawDataExample);
      instance.SetDestructor(&destruct_TAlEncRawDataExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRawDataExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRawDataExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRawDataExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncRawDataExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncRawDataExampleFactory(Long_t size, void *p);
   static void delete_TAlEncRawDataExampleFactory(void *p);
   static void deleteArray_TAlEncRawDataExampleFactory(void *p);
   static void destruct_TAlEncRawDataExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncRawDataExampleFactory*)
   {
      ::TAlEncRawDataExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncRawDataExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncRawDataExampleFactory", ::TAlEncRawDataExampleFactory::Class_Version(), "TAlEncRawDataExample.hh", 42,
                  typeid(::TAlEncRawDataExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncRawDataExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncRawDataExampleFactory) );
      instance.SetNew(&new_TAlEncRawDataExampleFactory);
      instance.SetNewArray(&newArray_TAlEncRawDataExampleFactory);
      instance.SetDelete(&delete_TAlEncRawDataExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncRawDataExampleFactory);
      instance.SetDestructor(&destruct_TAlEncRawDataExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncRawDataExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncRawDataExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncRawDataExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIDCExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIDCExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAIDCExample(void *p);
   static void deleteArray_TAlEncSAMURAIDCExample(void *p);
   static void destruct_TAlEncSAMURAIDCExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIDCExample*)
   {
      ::TAlEncSAMURAIDCExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIDCExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIDCExample", ::TAlEncSAMURAIDCExample::Class_Version(), "TAlEncSAMURAIDCExample.hh", 48,
                  typeid(::TAlEncSAMURAIDCExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIDCExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIDCExample) );
      instance.SetNew(&new_TAlEncSAMURAIDCExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAIDCExample);
      instance.SetDelete(&delete_TAlEncSAMURAIDCExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIDCExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAIDCExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIDCExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIDCExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIDCExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIDCExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIDCExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAIDCExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAIDCExampleFactory(void *p);
   static void destruct_TAlEncSAMURAIDCExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIDCExampleFactory*)
   {
      ::TAlEncSAMURAIDCExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIDCExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIDCExampleFactory", ::TAlEncSAMURAIDCExampleFactory::Class_Version(), "TAlEncSAMURAIDCExample.hh", 100,
                  typeid(::TAlEncSAMURAIDCExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIDCExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIDCExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAIDCExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAIDCExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAIDCExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIDCExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAIDCExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIDCExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIDCExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIDCExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIFrag(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIFrag(Long_t size, void *p);
   static void delete_TAlEncSAMURAIFrag(void *p);
   static void deleteArray_TAlEncSAMURAIFrag(void *p);
   static void destruct_TAlEncSAMURAIFrag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIFrag*)
   {
      ::TAlEncSAMURAIFrag *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIFrag >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIFrag", ::TAlEncSAMURAIFrag::Class_Version(), "TAlEncSAMURAIFrag.hh", 41,
                  typeid(::TAlEncSAMURAIFrag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIFrag::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIFrag) );
      instance.SetNew(&new_TAlEncSAMURAIFrag);
      instance.SetNewArray(&newArray_TAlEncSAMURAIFrag);
      instance.SetDelete(&delete_TAlEncSAMURAIFrag);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIFrag);
      instance.SetDestructor(&destruct_TAlEncSAMURAIFrag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIFrag*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIFrag*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIFrag*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIFragFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIFragFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAIFragFactory(void *p);
   static void deleteArray_TAlEncSAMURAIFragFactory(void *p);
   static void destruct_TAlEncSAMURAIFragFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIFragFactory*)
   {
      ::TAlEncSAMURAIFragFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIFragFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIFragFactory", ::TAlEncSAMURAIFragFactory::Class_Version(), "TAlEncSAMURAIFrag.hh", 63,
                  typeid(::TAlEncSAMURAIFragFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIFragFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIFragFactory) );
      instance.SetNew(&new_TAlEncSAMURAIFragFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAIFragFactory);
      instance.SetDelete(&delete_TAlEncSAMURAIFragFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIFragFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAIFragFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIFragFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIFragFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIFragFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIHODExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIHODExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAIHODExample(void *p);
   static void deleteArray_TAlEncSAMURAIHODExample(void *p);
   static void destruct_TAlEncSAMURAIHODExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIHODExample*)
   {
      ::TAlEncSAMURAIHODExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIHODExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIHODExample", ::TAlEncSAMURAIHODExample::Class_Version(), "TAlEncSAMURAIHODExample.hh", 14,
                  typeid(::TAlEncSAMURAIHODExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIHODExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIHODExample) );
      instance.SetNew(&new_TAlEncSAMURAIHODExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAIHODExample);
      instance.SetDelete(&delete_TAlEncSAMURAIHODExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIHODExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAIHODExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIHODExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIHODExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIHODExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIHODExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIHODExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAIHODExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAIHODExampleFactory(void *p);
   static void destruct_TAlEncSAMURAIHODExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIHODExampleFactory*)
   {
      ::TAlEncSAMURAIHODExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIHODExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIHODExampleFactory", ::TAlEncSAMURAIHODExampleFactory::Class_Version(), "TAlEncSAMURAIHODExample.hh", 40,
                  typeid(::TAlEncSAMURAIHODExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIHODExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIHODExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAIHODExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAIHODExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAIHODExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIHODExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAIHODExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIHODExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIHODExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIHODExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIICExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIICExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAIICExample(void *p);
   static void deleteArray_TAlEncSAMURAIICExample(void *p);
   static void destruct_TAlEncSAMURAIICExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIICExample*)
   {
      ::TAlEncSAMURAIICExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIICExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIICExample", ::TAlEncSAMURAIICExample::Class_Version(), "TAlEncSAMURAIICExample.hh", 16,
                  typeid(::TAlEncSAMURAIICExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIICExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIICExample) );
      instance.SetNew(&new_TAlEncSAMURAIICExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAIICExample);
      instance.SetDelete(&delete_TAlEncSAMURAIICExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIICExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAIICExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIICExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIICExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIICExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIICExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIICExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAIICExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAIICExampleFactory(void *p);
   static void destruct_TAlEncSAMURAIICExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIICExampleFactory*)
   {
      ::TAlEncSAMURAIICExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIICExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIICExampleFactory", ::TAlEncSAMURAIICExampleFactory::Class_Version(), "TAlEncSAMURAIICExample.hh", 39,
                  typeid(::TAlEncSAMURAIICExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIICExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIICExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAIICExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAIICExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAIICExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIICExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAIICExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIICExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIICExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIICExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAINeutronExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAINeutronExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAINeutronExample(void *p);
   static void deleteArray_TAlEncSAMURAINeutronExample(void *p);
   static void destruct_TAlEncSAMURAINeutronExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAINeutronExample*)
   {
      ::TAlEncSAMURAINeutronExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAINeutronExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAINeutronExample", ::TAlEncSAMURAINeutronExample::Class_Version(), "TAlEncSAMURAINeutronExample.hh", 14,
                  typeid(::TAlEncSAMURAINeutronExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAINeutronExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAINeutronExample) );
      instance.SetNew(&new_TAlEncSAMURAINeutronExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAINeutronExample);
      instance.SetDelete(&delete_TAlEncSAMURAINeutronExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAINeutronExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAINeutronExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAINeutronExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAINeutronExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAINeutronExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAINeutronExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAINeutronExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAINeutronExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAINeutronExampleFactory(void *p);
   static void destruct_TAlEncSAMURAINeutronExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAINeutronExampleFactory*)
   {
      ::TAlEncSAMURAINeutronExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAINeutronExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAINeutronExampleFactory", ::TAlEncSAMURAINeutronExampleFactory::Class_Version(), "TAlEncSAMURAINeutronExample.hh", 41,
                  typeid(::TAlEncSAMURAINeutronExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAINeutronExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAINeutronExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAINeutronExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAINeutronExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAINeutronExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAINeutronExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAINeutronExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAINeutronExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAINeutronExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAINeutronExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIPlaExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIPlaExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAIPlaExample(void *p);
   static void deleteArray_TAlEncSAMURAIPlaExample(void *p);
   static void destruct_TAlEncSAMURAIPlaExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIPlaExample*)
   {
      ::TAlEncSAMURAIPlaExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIPlaExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIPlaExample", ::TAlEncSAMURAIPlaExample::Class_Version(), "TAlEncSAMURAIPlaExample.hh", 13,
                  typeid(::TAlEncSAMURAIPlaExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIPlaExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIPlaExample) );
      instance.SetNew(&new_TAlEncSAMURAIPlaExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAIPlaExample);
      instance.SetDelete(&delete_TAlEncSAMURAIPlaExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIPlaExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAIPlaExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIPlaExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIPlaExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIPlaExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAIPlaExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAIPlaExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAIPlaExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAIPlaExampleFactory(void *p);
   static void destruct_TAlEncSAMURAIPlaExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAIPlaExampleFactory*)
   {
      ::TAlEncSAMURAIPlaExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAIPlaExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAIPlaExampleFactory", ::TAlEncSAMURAIPlaExampleFactory::Class_Version(), "TAlEncSAMURAIPlaExample.hh", 37,
                  typeid(::TAlEncSAMURAIPlaExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAIPlaExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAIPlaExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAIPlaExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAIPlaExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAIPlaExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAIPlaExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAIPlaExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAIPlaExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAIPlaExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAIPlaExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAITEDExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAITEDExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAITEDExample(void *p);
   static void deleteArray_TAlEncSAMURAITEDExample(void *p);
   static void destruct_TAlEncSAMURAITEDExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAITEDExample*)
   {
      ::TAlEncSAMURAITEDExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAITEDExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAITEDExample", ::TAlEncSAMURAITEDExample::Class_Version(), "TAlEncSAMURAITEDExample.hh", 10,
                  typeid(::TAlEncSAMURAITEDExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAITEDExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAITEDExample) );
      instance.SetNew(&new_TAlEncSAMURAITEDExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAITEDExample);
      instance.SetDelete(&delete_TAlEncSAMURAITEDExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAITEDExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAITEDExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAITEDExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAITEDExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAITEDExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAITEDExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAITEDExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAITEDExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAITEDExampleFactory(void *p);
   static void destruct_TAlEncSAMURAITEDExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAITEDExampleFactory*)
   {
      ::TAlEncSAMURAITEDExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAITEDExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAITEDExampleFactory", ::TAlEncSAMURAITEDExampleFactory::Class_Version(), "TAlEncSAMURAITEDExample.hh", 31,
                  typeid(::TAlEncSAMURAITEDExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAITEDExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAITEDExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAITEDExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAITEDExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAITEDExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAITEDExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAITEDExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAITEDExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAITEDExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAITEDExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAITZeroExample(void *p = nullptr);
   static void *newArray_TAlEncSAMURAITZeroExample(Long_t size, void *p);
   static void delete_TAlEncSAMURAITZeroExample(void *p);
   static void deleteArray_TAlEncSAMURAITZeroExample(void *p);
   static void destruct_TAlEncSAMURAITZeroExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAITZeroExample*)
   {
      ::TAlEncSAMURAITZeroExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAITZeroExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAITZeroExample", ::TAlEncSAMURAITZeroExample::Class_Version(), "TAlEncSAMURAITZeroExample.hh", 14,
                  typeid(::TAlEncSAMURAITZeroExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAITZeroExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAITZeroExample) );
      instance.SetNew(&new_TAlEncSAMURAITZeroExample);
      instance.SetNewArray(&newArray_TAlEncSAMURAITZeroExample);
      instance.SetDelete(&delete_TAlEncSAMURAITZeroExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAITZeroExample);
      instance.SetDestructor(&destruct_TAlEncSAMURAITZeroExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAITZeroExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAITZeroExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAITZeroExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSAMURAITZeroExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSAMURAITZeroExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSAMURAITZeroExampleFactory(void *p);
   static void deleteArray_TAlEncSAMURAITZeroExampleFactory(void *p);
   static void destruct_TAlEncSAMURAITZeroExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSAMURAITZeroExampleFactory*)
   {
      ::TAlEncSAMURAITZeroExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSAMURAITZeroExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSAMURAITZeroExampleFactory", ::TAlEncSAMURAITZeroExampleFactory::Class_Version(), "TAlEncSAMURAITZeroExample.hh", 41,
                  typeid(::TAlEncSAMURAITZeroExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSAMURAITZeroExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSAMURAITZeroExampleFactory) );
      instance.SetNew(&new_TAlEncSAMURAITZeroExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSAMURAITZeroExampleFactory);
      instance.SetDelete(&delete_TAlEncSAMURAITZeroExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSAMURAITZeroExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSAMURAITZeroExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSAMURAITZeroExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSAMURAITZeroExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSAMURAITZeroExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSILICONSExample(void *p = nullptr);
   static void *newArray_TAlEncSILICONSExample(Long_t size, void *p);
   static void delete_TAlEncSILICONSExample(void *p);
   static void deleteArray_TAlEncSILICONSExample(void *p);
   static void destruct_TAlEncSILICONSExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSILICONSExample*)
   {
      ::TAlEncSILICONSExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSILICONSExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSILICONSExample", ::TAlEncSILICONSExample::Class_Version(), "TAlEncSILICONSExample.hh", 13,
                  typeid(::TAlEncSILICONSExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSILICONSExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSILICONSExample) );
      instance.SetNew(&new_TAlEncSILICONSExample);
      instance.SetNewArray(&newArray_TAlEncSILICONSExample);
      instance.SetDelete(&delete_TAlEncSILICONSExample);
      instance.SetDeleteArray(&deleteArray_TAlEncSILICONSExample);
      instance.SetDestructor(&destruct_TAlEncSILICONSExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSILICONSExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSILICONSExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSILICONSExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncSILICONSExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncSILICONSExampleFactory(Long_t size, void *p);
   static void delete_TAlEncSILICONSExampleFactory(void *p);
   static void deleteArray_TAlEncSILICONSExampleFactory(void *p);
   static void destruct_TAlEncSILICONSExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSILICONSExampleFactory*)
   {
      ::TAlEncSILICONSExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSILICONSExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSILICONSExampleFactory", ::TAlEncSILICONSExampleFactory::Class_Version(), "TAlEncSILICONSExample.hh", 38,
                  typeid(::TAlEncSILICONSExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSILICONSExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSILICONSExampleFactory) );
      instance.SetNew(&new_TAlEncSILICONSExampleFactory);
      instance.SetNewArray(&newArray_TAlEncSILICONSExampleFactory);
      instance.SetDelete(&delete_TAlEncSILICONSExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncSILICONSExampleFactory);
      instance.SetDestructor(&destruct_TAlEncSILICONSExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSILICONSExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSILICONSExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSILICONSExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncWINDSExample(void *p = nullptr);
   static void *newArray_TAlEncWINDSExample(Long_t size, void *p);
   static void delete_TAlEncWINDSExample(void *p);
   static void deleteArray_TAlEncWINDSExample(void *p);
   static void destruct_TAlEncWINDSExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncWINDSExample*)
   {
      ::TAlEncWINDSExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncWINDSExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncWINDSExample", ::TAlEncWINDSExample::Class_Version(), "TAlEncWINDSExample.hh", 14,
                  typeid(::TAlEncWINDSExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncWINDSExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncWINDSExample) );
      instance.SetNew(&new_TAlEncWINDSExample);
      instance.SetNewArray(&newArray_TAlEncWINDSExample);
      instance.SetDelete(&delete_TAlEncWINDSExample);
      instance.SetDeleteArray(&deleteArray_TAlEncWINDSExample);
      instance.SetDestructor(&destruct_TAlEncWINDSExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncWINDSExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncWINDSExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncWINDSExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncWINDSExampleFactory(void *p = nullptr);
   static void *newArray_TAlEncWINDSExampleFactory(Long_t size, void *p);
   static void delete_TAlEncWINDSExampleFactory(void *p);
   static void deleteArray_TAlEncWINDSExampleFactory(void *p);
   static void destruct_TAlEncWINDSExampleFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncWINDSExampleFactory*)
   {
      ::TAlEncWINDSExampleFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncWINDSExampleFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncWINDSExampleFactory", ::TAlEncWINDSExampleFactory::Class_Version(), "TAlEncWINDSExample.hh", 40,
                  typeid(::TAlEncWINDSExampleFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncWINDSExampleFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncWINDSExampleFactory) );
      instance.SetNew(&new_TAlEncWINDSExampleFactory);
      instance.SetNewArray(&newArray_TAlEncWINDSExampleFactory);
      instance.SetDelete(&delete_TAlEncWINDSExampleFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncWINDSExampleFactory);
      instance.SetDestructor(&destruct_TAlEncWINDSExampleFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncWINDSExampleFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncWINDSExampleFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncWINDSExampleFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAlEncCATANAExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncCATANAExample::Class_Name()
{
   return "TAlEncCATANAExample";
}

//______________________________________________________________________________
const char *TAlEncCATANAExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncCATANAExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncCATANAExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncCATANAExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncCATANAExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncCATANAExampleFactory::Class_Name()
{
   return "TAlEncCATANAExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncCATANAExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncCATANAExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncCATANAExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncCATANAExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncCATANAExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncDALIExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncDALIExample::Class_Name()
{
   return "TAlEncDALIExample";
}

//______________________________________________________________________________
const char *TAlEncDALIExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncDALIExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncDALIExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncDALIExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncDALIExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncDALIExampleFactory::Class_Name()
{
   return "TAlEncDALIExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncDALIExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncDALIExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncDALIExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncDALIExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncDALIExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncESPRIExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncESPRIExample::Class_Name()
{
   return "TAlEncESPRIExample";
}

//______________________________________________________________________________
const char *TAlEncESPRIExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncESPRIExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncESPRIExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncESPRIExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncESPRIExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncESPRIExampleFactory::Class_Name()
{
   return "TAlEncESPRIExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncESPRIExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncESPRIExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncESPRIExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncESPRIExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncESPRIExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncExample::Class_Name()
{
   return "TAlEncExample";
}

//______________________________________________________________________________
const char *TAlEncExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncGlobalExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncGlobalExample::Class_Name()
{
   return "TAlEncGlobalExample";
}

//______________________________________________________________________________
const char *TAlEncGlobalExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncGlobalExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncGlobalExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncGlobalExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncGlobalExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncGlobalExampleFactory::Class_Name()
{
   return "TAlEncGlobalExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncGlobalExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncGlobalExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncGlobalExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncGlobalExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGlobalExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncHIMEExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncHIMEExample::Class_Name()
{
   return "TAlEncHIMEExample";
}

//______________________________________________________________________________
const char *TAlEncHIMEExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncHIMEExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncHIMEExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncHIMEExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncHIMEExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncHIMEExampleFactory::Class_Name()
{
   return "TAlEncHIMEExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncHIMEExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncHIMEExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncHIMEExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncHIMEExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHIMEExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncICExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncICExample::Class_Name()
{
   return "TAlEncICExample";
}

//______________________________________________________________________________
const char *TAlEncICExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncICExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncICExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncICExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncICExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncICExampleFactory::Class_Name()
{
   return "TAlEncICExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncICExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncICExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncICExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncICExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncICExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncMatrixExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncMatrixExample::Class_Name()
{
   return "TAlEncMatrixExample";
}

//______________________________________________________________________________
const char *TAlEncMatrixExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncMatrixExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncMatrixExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncMatrixExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncMatrixExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncMatrixExampleFactory::Class_Name()
{
   return "TAlEncMatrixExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncMatrixExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncMatrixExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncMatrixExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncMatrixExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncMatrixExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNEBULAExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNEBULAExample::Class_Name()
{
   return "TAlEncNEBULAExample";
}

//______________________________________________________________________________
const char *TAlEncNEBULAExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNEBULAExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNEBULAExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNEBULAExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNEBULAExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNEBULAExampleFactory::Class_Name()
{
   return "TAlEncNEBULAExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncNEBULAExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNEBULAExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNEBULAExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNEBULAExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNEBULAHPCExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNEBULAHPCExample::Class_Name()
{
   return "TAlEncNEBULAHPCExample";
}

//______________________________________________________________________________
const char *TAlEncNEBULAHPCExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNEBULAHPCExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNEBULAHPCExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNEBULAHPCExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNEBULAHPCExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNEBULAHPCExampleFactory::Class_Name()
{
   return "TAlEncNEBULAHPCExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncNEBULAHPCExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNEBULAHPCExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNEBULAHPCExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNEBULAHPCExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNEBULAHPCExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNINJAExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNINJAExample::Class_Name()
{
   return "TAlEncNINJAExample";
}

//______________________________________________________________________________
const char *TAlEncNINJAExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNINJAExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNINJAExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNINJAExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNINJAExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNINJAExampleFactory::Class_Name()
{
   return "TAlEncNINJAExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncNINJAExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNINJAExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNINJAExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNINJAExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNINJAExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNeuLANDExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNeuLANDExample::Class_Name()
{
   return "TAlEncNeuLANDExample";
}

//______________________________________________________________________________
const char *TAlEncNeuLANDExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNeuLANDExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNeuLANDExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNeuLANDExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncNeuLANDExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncNeuLANDExampleFactory::Class_Name()
{
   return "TAlEncNeuLANDExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncNeuLANDExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncNeuLANDExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncNeuLANDExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncNeuLANDExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncNeuLANDExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPIDExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPIDExample::Class_Name()
{
   return "TAlEncPIDExample";
}

//______________________________________________________________________________
const char *TAlEncPIDExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPIDExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPIDExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPIDExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPIDExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPIDExampleFactory::Class_Name()
{
   return "TAlEncPIDExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncPIDExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPIDExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPIDExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPIDExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPIDExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPPACExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPPACExample::Class_Name()
{
   return "TAlEncPPACExample";
}

//______________________________________________________________________________
const char *TAlEncPPACExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPPACExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPPACExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPPACExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPPACExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPPACExampleFactory::Class_Name()
{
   return "TAlEncPPACExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncPPACExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPPACExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPPACExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPPACExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPPACExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPlasticExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPlasticExample::Class_Name()
{
   return "TAlEncPlasticExample";
}

//______________________________________________________________________________
const char *TAlEncPlasticExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPlasticExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPlasticExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPlasticExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPlasticExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPlasticExampleFactory::Class_Name()
{
   return "TAlEncPlasticExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncPlasticExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPlasticExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPlasticExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPlasticExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPlasticExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRPDCExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRPDCExample::Class_Name()
{
   return "TAlEncRPDCExample";
}

//______________________________________________________________________________
const char *TAlEncRPDCExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRPDCExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRPDCExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRPDCExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRPDCExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRPDCExampleFactory::Class_Name()
{
   return "TAlEncRPDCExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncRPDCExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRPDCExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRPDCExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRPDCExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPDCExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRPTOFExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRPTOFExample::Class_Name()
{
   return "TAlEncRPTOFExample";
}

//______________________________________________________________________________
const char *TAlEncRPTOFExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRPTOFExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRPTOFExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRPTOFExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRPTOFExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRPTOFExampleFactory::Class_Name()
{
   return "TAlEncRPTOFExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncRPTOFExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRPTOFExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRPTOFExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRPTOFExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRPTOFExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRawDataExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRawDataExample::Class_Name()
{
   return "TAlEncRawDataExample";
}

//______________________________________________________________________________
const char *TAlEncRawDataExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRawDataExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRawDataExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRawDataExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncRawDataExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncRawDataExampleFactory::Class_Name()
{
   return "TAlEncRawDataExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncRawDataExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncRawDataExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncRawDataExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncRawDataExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncRawDataExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIDCExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIDCExample::Class_Name()
{
   return "TAlEncSAMURAIDCExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIDCExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIDCExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIDCExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIDCExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIDCExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIDCExampleFactory::Class_Name()
{
   return "TAlEncSAMURAIDCExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIDCExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIDCExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIDCExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIDCExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIDCExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIFrag::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIFrag::Class_Name()
{
   return "TAlEncSAMURAIFrag";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIFrag::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFrag*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIFrag::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFrag*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIFrag::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFrag*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIFrag::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFrag*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIFragFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIFragFactory::Class_Name()
{
   return "TAlEncSAMURAIFragFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIFragFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFragFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIFragFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFragFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIFragFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFragFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIFragFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIFragFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIHODExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIHODExample::Class_Name()
{
   return "TAlEncSAMURAIHODExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIHODExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIHODExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIHODExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIHODExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIHODExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIHODExampleFactory::Class_Name()
{
   return "TAlEncSAMURAIHODExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIHODExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIHODExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIHODExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIHODExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIHODExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIICExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIICExample::Class_Name()
{
   return "TAlEncSAMURAIICExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIICExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIICExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIICExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIICExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIICExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIICExampleFactory::Class_Name()
{
   return "TAlEncSAMURAIICExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIICExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIICExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIICExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIICExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIICExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAINeutronExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAINeutronExample::Class_Name()
{
   return "TAlEncSAMURAINeutronExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAINeutronExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAINeutronExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAINeutronExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAINeutronExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAINeutronExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAINeutronExampleFactory::Class_Name()
{
   return "TAlEncSAMURAINeutronExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAINeutronExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAINeutronExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAINeutronExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAINeutronExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAINeutronExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIPlaExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIPlaExample::Class_Name()
{
   return "TAlEncSAMURAIPlaExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIPlaExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIPlaExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIPlaExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIPlaExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAIPlaExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAIPlaExampleFactory::Class_Name()
{
   return "TAlEncSAMURAIPlaExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAIPlaExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAIPlaExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIPlaExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAIPlaExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAIPlaExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAITEDExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAITEDExample::Class_Name()
{
   return "TAlEncSAMURAITEDExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAITEDExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAITEDExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITEDExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITEDExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAITEDExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAITEDExampleFactory::Class_Name()
{
   return "TAlEncSAMURAITEDExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAITEDExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAITEDExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITEDExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITEDExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITEDExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAITZeroExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAITZeroExample::Class_Name()
{
   return "TAlEncSAMURAITZeroExample";
}

//______________________________________________________________________________
const char *TAlEncSAMURAITZeroExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAITZeroExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITZeroExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITZeroExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSAMURAITZeroExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSAMURAITZeroExampleFactory::Class_Name()
{
   return "TAlEncSAMURAITZeroExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSAMURAITZeroExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSAMURAITZeroExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITZeroExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSAMURAITZeroExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSAMURAITZeroExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSILICONSExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSILICONSExample::Class_Name()
{
   return "TAlEncSILICONSExample";
}

//______________________________________________________________________________
const char *TAlEncSILICONSExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSILICONSExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSILICONSExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSILICONSExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSILICONSExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSILICONSExampleFactory::Class_Name()
{
   return "TAlEncSILICONSExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncSILICONSExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSILICONSExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSILICONSExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSILICONSExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSILICONSExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncWINDSExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncWINDSExample::Class_Name()
{
   return "TAlEncWINDSExample";
}

//______________________________________________________________________________
const char *TAlEncWINDSExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncWINDSExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncWINDSExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncWINDSExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncWINDSExampleFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncWINDSExampleFactory::Class_Name()
{
   return "TAlEncWINDSExampleFactory";
}

//______________________________________________________________________________
const char *TAlEncWINDSExampleFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExampleFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncWINDSExampleFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExampleFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncWINDSExampleFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExampleFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncWINDSExampleFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncWINDSExampleFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAlEncCATANAExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncCATANAExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncCATANAExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncCATANAExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncCATANAExample(void *p) {
      return  p ? new(p) ::TAlEncCATANAExample : new ::TAlEncCATANAExample;
   }
   static void *newArray_TAlEncCATANAExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncCATANAExample[nElements] : new ::TAlEncCATANAExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncCATANAExample(void *p) {
      delete (static_cast<::TAlEncCATANAExample*>(p));
   }
   static void deleteArray_TAlEncCATANAExample(void *p) {
      delete [] (static_cast<::TAlEncCATANAExample*>(p));
   }
   static void destruct_TAlEncCATANAExample(void *p) {
      typedef ::TAlEncCATANAExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncCATANAExample

//______________________________________________________________________________
void TAlEncCATANAExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncCATANAExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncCATANAExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncCATANAExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncCATANAExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncCATANAExampleFactory : new ::TAlEncCATANAExampleFactory;
   }
   static void *newArray_TAlEncCATANAExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncCATANAExampleFactory[nElements] : new ::TAlEncCATANAExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncCATANAExampleFactory(void *p) {
      delete (static_cast<::TAlEncCATANAExampleFactory*>(p));
   }
   static void deleteArray_TAlEncCATANAExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncCATANAExampleFactory*>(p));
   }
   static void destruct_TAlEncCATANAExampleFactory(void *p) {
      typedef ::TAlEncCATANAExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncCATANAExampleFactory

//______________________________________________________________________________
void TAlEncDALIExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncDALIExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncDALIExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncDALIExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncDALIExample(void *p) {
      return  p ? new(p) ::TAlEncDALIExample : new ::TAlEncDALIExample;
   }
   static void *newArray_TAlEncDALIExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncDALIExample[nElements] : new ::TAlEncDALIExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncDALIExample(void *p) {
      delete (static_cast<::TAlEncDALIExample*>(p));
   }
   static void deleteArray_TAlEncDALIExample(void *p) {
      delete [] (static_cast<::TAlEncDALIExample*>(p));
   }
   static void destruct_TAlEncDALIExample(void *p) {
      typedef ::TAlEncDALIExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncDALIExample

//______________________________________________________________________________
void TAlEncDALIExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncDALIExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncDALIExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncDALIExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncDALIExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncDALIExampleFactory : new ::TAlEncDALIExampleFactory;
   }
   static void *newArray_TAlEncDALIExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncDALIExampleFactory[nElements] : new ::TAlEncDALIExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncDALIExampleFactory(void *p) {
      delete (static_cast<::TAlEncDALIExampleFactory*>(p));
   }
   static void deleteArray_TAlEncDALIExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncDALIExampleFactory*>(p));
   }
   static void destruct_TAlEncDALIExampleFactory(void *p) {
      typedef ::TAlEncDALIExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncDALIExampleFactory

//______________________________________________________________________________
void TAlEncESPRIExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncESPRIExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncESPRIExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncESPRIExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncESPRIExample(void *p) {
      return  p ? new(p) ::TAlEncESPRIExample : new ::TAlEncESPRIExample;
   }
   static void *newArray_TAlEncESPRIExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncESPRIExample[nElements] : new ::TAlEncESPRIExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncESPRIExample(void *p) {
      delete (static_cast<::TAlEncESPRIExample*>(p));
   }
   static void deleteArray_TAlEncESPRIExample(void *p) {
      delete [] (static_cast<::TAlEncESPRIExample*>(p));
   }
   static void destruct_TAlEncESPRIExample(void *p) {
      typedef ::TAlEncESPRIExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncESPRIExample

//______________________________________________________________________________
void TAlEncESPRIExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncESPRIExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncESPRIExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncESPRIExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncESPRIExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncESPRIExampleFactory : new ::TAlEncESPRIExampleFactory;
   }
   static void *newArray_TAlEncESPRIExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncESPRIExampleFactory[nElements] : new ::TAlEncESPRIExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncESPRIExampleFactory(void *p) {
      delete (static_cast<::TAlEncESPRIExampleFactory*>(p));
   }
   static void deleteArray_TAlEncESPRIExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncESPRIExampleFactory*>(p));
   }
   static void destruct_TAlEncESPRIExampleFactory(void *p) {
      typedef ::TAlEncESPRIExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncESPRIExampleFactory

//______________________________________________________________________________
void TAlEncExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncExample(void *p) {
      return  p ? new(p) ::TAlEncExample : new ::TAlEncExample;
   }
   static void *newArray_TAlEncExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncExample[nElements] : new ::TAlEncExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncExample(void *p) {
      delete (static_cast<::TAlEncExample*>(p));
   }
   static void deleteArray_TAlEncExample(void *p) {
      delete [] (static_cast<::TAlEncExample*>(p));
   }
   static void destruct_TAlEncExample(void *p) {
      typedef ::TAlEncExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncExample

//______________________________________________________________________________
void TAlEncGlobalExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncGlobalExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncGlobalExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncGlobalExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncGlobalExample(void *p) {
      return  p ? new(p) ::TAlEncGlobalExample : new ::TAlEncGlobalExample;
   }
   static void *newArray_TAlEncGlobalExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncGlobalExample[nElements] : new ::TAlEncGlobalExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncGlobalExample(void *p) {
      delete (static_cast<::TAlEncGlobalExample*>(p));
   }
   static void deleteArray_TAlEncGlobalExample(void *p) {
      delete [] (static_cast<::TAlEncGlobalExample*>(p));
   }
   static void destruct_TAlEncGlobalExample(void *p) {
      typedef ::TAlEncGlobalExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncGlobalExample

//______________________________________________________________________________
void TAlEncGlobalExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncGlobalExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncGlobalExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncGlobalExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncGlobalExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncGlobalExampleFactory : new ::TAlEncGlobalExampleFactory;
   }
   static void *newArray_TAlEncGlobalExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncGlobalExampleFactory[nElements] : new ::TAlEncGlobalExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncGlobalExampleFactory(void *p) {
      delete (static_cast<::TAlEncGlobalExampleFactory*>(p));
   }
   static void deleteArray_TAlEncGlobalExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncGlobalExampleFactory*>(p));
   }
   static void destruct_TAlEncGlobalExampleFactory(void *p) {
      typedef ::TAlEncGlobalExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncGlobalExampleFactory

//______________________________________________________________________________
void TAlEncHIMEExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncHIMEExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncHIMEExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncHIMEExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncHIMEExample(void *p) {
      return  p ? new(p) ::TAlEncHIMEExample : new ::TAlEncHIMEExample;
   }
   static void *newArray_TAlEncHIMEExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncHIMEExample[nElements] : new ::TAlEncHIMEExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncHIMEExample(void *p) {
      delete (static_cast<::TAlEncHIMEExample*>(p));
   }
   static void deleteArray_TAlEncHIMEExample(void *p) {
      delete [] (static_cast<::TAlEncHIMEExample*>(p));
   }
   static void destruct_TAlEncHIMEExample(void *p) {
      typedef ::TAlEncHIMEExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncHIMEExample

//______________________________________________________________________________
void TAlEncHIMEExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncHIMEExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncHIMEExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncHIMEExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncHIMEExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncHIMEExampleFactory : new ::TAlEncHIMEExampleFactory;
   }
   static void *newArray_TAlEncHIMEExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncHIMEExampleFactory[nElements] : new ::TAlEncHIMEExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncHIMEExampleFactory(void *p) {
      delete (static_cast<::TAlEncHIMEExampleFactory*>(p));
   }
   static void deleteArray_TAlEncHIMEExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncHIMEExampleFactory*>(p));
   }
   static void destruct_TAlEncHIMEExampleFactory(void *p) {
      typedef ::TAlEncHIMEExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncHIMEExampleFactory

//______________________________________________________________________________
void TAlEncICExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncICExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncICExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncICExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncICExample(void *p) {
      return  p ? new(p) ::TAlEncICExample : new ::TAlEncICExample;
   }
   static void *newArray_TAlEncICExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncICExample[nElements] : new ::TAlEncICExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncICExample(void *p) {
      delete (static_cast<::TAlEncICExample*>(p));
   }
   static void deleteArray_TAlEncICExample(void *p) {
      delete [] (static_cast<::TAlEncICExample*>(p));
   }
   static void destruct_TAlEncICExample(void *p) {
      typedef ::TAlEncICExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncICExample

//______________________________________________________________________________
void TAlEncICExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncICExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncICExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncICExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncICExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncICExampleFactory : new ::TAlEncICExampleFactory;
   }
   static void *newArray_TAlEncICExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncICExampleFactory[nElements] : new ::TAlEncICExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncICExampleFactory(void *p) {
      delete (static_cast<::TAlEncICExampleFactory*>(p));
   }
   static void deleteArray_TAlEncICExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncICExampleFactory*>(p));
   }
   static void destruct_TAlEncICExampleFactory(void *p) {
      typedef ::TAlEncICExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncICExampleFactory

//______________________________________________________________________________
void TAlEncMatrixExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncMatrixExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncMatrixExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncMatrixExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncMatrixExample(void *p) {
      return  p ? new(p) ::TAlEncMatrixExample : new ::TAlEncMatrixExample;
   }
   static void *newArray_TAlEncMatrixExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncMatrixExample[nElements] : new ::TAlEncMatrixExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncMatrixExample(void *p) {
      delete (static_cast<::TAlEncMatrixExample*>(p));
   }
   static void deleteArray_TAlEncMatrixExample(void *p) {
      delete [] (static_cast<::TAlEncMatrixExample*>(p));
   }
   static void destruct_TAlEncMatrixExample(void *p) {
      typedef ::TAlEncMatrixExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncMatrixExample

//______________________________________________________________________________
void TAlEncMatrixExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncMatrixExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncMatrixExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncMatrixExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncMatrixExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncMatrixExampleFactory : new ::TAlEncMatrixExampleFactory;
   }
   static void *newArray_TAlEncMatrixExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncMatrixExampleFactory[nElements] : new ::TAlEncMatrixExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncMatrixExampleFactory(void *p) {
      delete (static_cast<::TAlEncMatrixExampleFactory*>(p));
   }
   static void deleteArray_TAlEncMatrixExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncMatrixExampleFactory*>(p));
   }
   static void destruct_TAlEncMatrixExampleFactory(void *p) {
      typedef ::TAlEncMatrixExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncMatrixExampleFactory

//______________________________________________________________________________
void TAlEncNEBULAExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNEBULAExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNEBULAExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNEBULAExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNEBULAExample(void *p) {
      return  p ? new(p) ::TAlEncNEBULAExample : new ::TAlEncNEBULAExample;
   }
   static void *newArray_TAlEncNEBULAExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNEBULAExample[nElements] : new ::TAlEncNEBULAExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNEBULAExample(void *p) {
      delete (static_cast<::TAlEncNEBULAExample*>(p));
   }
   static void deleteArray_TAlEncNEBULAExample(void *p) {
      delete [] (static_cast<::TAlEncNEBULAExample*>(p));
   }
   static void destruct_TAlEncNEBULAExample(void *p) {
      typedef ::TAlEncNEBULAExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNEBULAExample

//______________________________________________________________________________
void TAlEncNEBULAExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNEBULAExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNEBULAExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNEBULAExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNEBULAExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncNEBULAExampleFactory : new ::TAlEncNEBULAExampleFactory;
   }
   static void *newArray_TAlEncNEBULAExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNEBULAExampleFactory[nElements] : new ::TAlEncNEBULAExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNEBULAExampleFactory(void *p) {
      delete (static_cast<::TAlEncNEBULAExampleFactory*>(p));
   }
   static void deleteArray_TAlEncNEBULAExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncNEBULAExampleFactory*>(p));
   }
   static void destruct_TAlEncNEBULAExampleFactory(void *p) {
      typedef ::TAlEncNEBULAExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNEBULAExampleFactory

//______________________________________________________________________________
void TAlEncNEBULAHPCExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNEBULAHPCExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNEBULAHPCExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNEBULAHPCExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNEBULAHPCExample(void *p) {
      return  p ? new(p) ::TAlEncNEBULAHPCExample : new ::TAlEncNEBULAHPCExample;
   }
   static void *newArray_TAlEncNEBULAHPCExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNEBULAHPCExample[nElements] : new ::TAlEncNEBULAHPCExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNEBULAHPCExample(void *p) {
      delete (static_cast<::TAlEncNEBULAHPCExample*>(p));
   }
   static void deleteArray_TAlEncNEBULAHPCExample(void *p) {
      delete [] (static_cast<::TAlEncNEBULAHPCExample*>(p));
   }
   static void destruct_TAlEncNEBULAHPCExample(void *p) {
      typedef ::TAlEncNEBULAHPCExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNEBULAHPCExample

//______________________________________________________________________________
void TAlEncNEBULAHPCExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNEBULAHPCExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNEBULAHPCExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNEBULAHPCExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNEBULAHPCExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncNEBULAHPCExampleFactory : new ::TAlEncNEBULAHPCExampleFactory;
   }
   static void *newArray_TAlEncNEBULAHPCExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNEBULAHPCExampleFactory[nElements] : new ::TAlEncNEBULAHPCExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNEBULAHPCExampleFactory(void *p) {
      delete (static_cast<::TAlEncNEBULAHPCExampleFactory*>(p));
   }
   static void deleteArray_TAlEncNEBULAHPCExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncNEBULAHPCExampleFactory*>(p));
   }
   static void destruct_TAlEncNEBULAHPCExampleFactory(void *p) {
      typedef ::TAlEncNEBULAHPCExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNEBULAHPCExampleFactory

//______________________________________________________________________________
void TAlEncNINJAExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNINJAExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNINJAExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNINJAExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNINJAExample(void *p) {
      return  p ? new(p) ::TAlEncNINJAExample : new ::TAlEncNINJAExample;
   }
   static void *newArray_TAlEncNINJAExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNINJAExample[nElements] : new ::TAlEncNINJAExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNINJAExample(void *p) {
      delete (static_cast<::TAlEncNINJAExample*>(p));
   }
   static void deleteArray_TAlEncNINJAExample(void *p) {
      delete [] (static_cast<::TAlEncNINJAExample*>(p));
   }
   static void destruct_TAlEncNINJAExample(void *p) {
      typedef ::TAlEncNINJAExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNINJAExample

//______________________________________________________________________________
void TAlEncNINJAExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNINJAExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNINJAExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNINJAExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNINJAExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncNINJAExampleFactory : new ::TAlEncNINJAExampleFactory;
   }
   static void *newArray_TAlEncNINJAExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNINJAExampleFactory[nElements] : new ::TAlEncNINJAExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNINJAExampleFactory(void *p) {
      delete (static_cast<::TAlEncNINJAExampleFactory*>(p));
   }
   static void deleteArray_TAlEncNINJAExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncNINJAExampleFactory*>(p));
   }
   static void destruct_TAlEncNINJAExampleFactory(void *p) {
      typedef ::TAlEncNINJAExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNINJAExampleFactory

//______________________________________________________________________________
void TAlEncNeuLANDExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNeuLANDExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNeuLANDExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNeuLANDExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNeuLANDExample(void *p) {
      return  p ? new(p) ::TAlEncNeuLANDExample : new ::TAlEncNeuLANDExample;
   }
   static void *newArray_TAlEncNeuLANDExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNeuLANDExample[nElements] : new ::TAlEncNeuLANDExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNeuLANDExample(void *p) {
      delete (static_cast<::TAlEncNeuLANDExample*>(p));
   }
   static void deleteArray_TAlEncNeuLANDExample(void *p) {
      delete [] (static_cast<::TAlEncNeuLANDExample*>(p));
   }
   static void destruct_TAlEncNeuLANDExample(void *p) {
      typedef ::TAlEncNeuLANDExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNeuLANDExample

//______________________________________________________________________________
void TAlEncNeuLANDExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncNeuLANDExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncNeuLANDExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncNeuLANDExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncNeuLANDExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncNeuLANDExampleFactory : new ::TAlEncNeuLANDExampleFactory;
   }
   static void *newArray_TAlEncNeuLANDExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncNeuLANDExampleFactory[nElements] : new ::TAlEncNeuLANDExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncNeuLANDExampleFactory(void *p) {
      delete (static_cast<::TAlEncNeuLANDExampleFactory*>(p));
   }
   static void deleteArray_TAlEncNeuLANDExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncNeuLANDExampleFactory*>(p));
   }
   static void destruct_TAlEncNeuLANDExampleFactory(void *p) {
      typedef ::TAlEncNeuLANDExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncNeuLANDExampleFactory

//______________________________________________________________________________
void TAlEncPIDExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPIDExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPIDExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPIDExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPIDExample(void *p) {
      return  p ? new(p) ::TAlEncPIDExample : new ::TAlEncPIDExample;
   }
   static void *newArray_TAlEncPIDExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPIDExample[nElements] : new ::TAlEncPIDExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPIDExample(void *p) {
      delete (static_cast<::TAlEncPIDExample*>(p));
   }
   static void deleteArray_TAlEncPIDExample(void *p) {
      delete [] (static_cast<::TAlEncPIDExample*>(p));
   }
   static void destruct_TAlEncPIDExample(void *p) {
      typedef ::TAlEncPIDExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPIDExample

//______________________________________________________________________________
void TAlEncPIDExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPIDExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPIDExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPIDExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPIDExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncPIDExampleFactory : new ::TAlEncPIDExampleFactory;
   }
   static void *newArray_TAlEncPIDExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPIDExampleFactory[nElements] : new ::TAlEncPIDExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPIDExampleFactory(void *p) {
      delete (static_cast<::TAlEncPIDExampleFactory*>(p));
   }
   static void deleteArray_TAlEncPIDExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncPIDExampleFactory*>(p));
   }
   static void destruct_TAlEncPIDExampleFactory(void *p) {
      typedef ::TAlEncPIDExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPIDExampleFactory

//______________________________________________________________________________
void TAlEncPPACExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPPACExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPPACExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPPACExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPPACExample(void *p) {
      return  p ? new(p) ::TAlEncPPACExample : new ::TAlEncPPACExample;
   }
   static void *newArray_TAlEncPPACExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPPACExample[nElements] : new ::TAlEncPPACExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPPACExample(void *p) {
      delete (static_cast<::TAlEncPPACExample*>(p));
   }
   static void deleteArray_TAlEncPPACExample(void *p) {
      delete [] (static_cast<::TAlEncPPACExample*>(p));
   }
   static void destruct_TAlEncPPACExample(void *p) {
      typedef ::TAlEncPPACExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPPACExample

//______________________________________________________________________________
void TAlEncPPACExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPPACExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPPACExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPPACExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPPACExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncPPACExampleFactory : new ::TAlEncPPACExampleFactory;
   }
   static void *newArray_TAlEncPPACExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPPACExampleFactory[nElements] : new ::TAlEncPPACExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPPACExampleFactory(void *p) {
      delete (static_cast<::TAlEncPPACExampleFactory*>(p));
   }
   static void deleteArray_TAlEncPPACExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncPPACExampleFactory*>(p));
   }
   static void destruct_TAlEncPPACExampleFactory(void *p) {
      typedef ::TAlEncPPACExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPPACExampleFactory

//______________________________________________________________________________
void TAlEncPlasticExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPlasticExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPlasticExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPlasticExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPlasticExample(void *p) {
      return  p ? new(p) ::TAlEncPlasticExample : new ::TAlEncPlasticExample;
   }
   static void *newArray_TAlEncPlasticExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPlasticExample[nElements] : new ::TAlEncPlasticExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPlasticExample(void *p) {
      delete (static_cast<::TAlEncPlasticExample*>(p));
   }
   static void deleteArray_TAlEncPlasticExample(void *p) {
      delete [] (static_cast<::TAlEncPlasticExample*>(p));
   }
   static void destruct_TAlEncPlasticExample(void *p) {
      typedef ::TAlEncPlasticExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPlasticExample

//______________________________________________________________________________
void TAlEncPlasticExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPlasticExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPlasticExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPlasticExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPlasticExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncPlasticExampleFactory : new ::TAlEncPlasticExampleFactory;
   }
   static void *newArray_TAlEncPlasticExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPlasticExampleFactory[nElements] : new ::TAlEncPlasticExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPlasticExampleFactory(void *p) {
      delete (static_cast<::TAlEncPlasticExampleFactory*>(p));
   }
   static void deleteArray_TAlEncPlasticExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncPlasticExampleFactory*>(p));
   }
   static void destruct_TAlEncPlasticExampleFactory(void *p) {
      typedef ::TAlEncPlasticExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPlasticExampleFactory

//______________________________________________________________________________
void TAlEncRPDCExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRPDCExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRPDCExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRPDCExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRPDCExample(void *p) {
      return  p ? new(p) ::TAlEncRPDCExample : new ::TAlEncRPDCExample;
   }
   static void *newArray_TAlEncRPDCExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRPDCExample[nElements] : new ::TAlEncRPDCExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRPDCExample(void *p) {
      delete (static_cast<::TAlEncRPDCExample*>(p));
   }
   static void deleteArray_TAlEncRPDCExample(void *p) {
      delete [] (static_cast<::TAlEncRPDCExample*>(p));
   }
   static void destruct_TAlEncRPDCExample(void *p) {
      typedef ::TAlEncRPDCExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRPDCExample

//______________________________________________________________________________
void TAlEncRPDCExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRPDCExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRPDCExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRPDCExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRPDCExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncRPDCExampleFactory : new ::TAlEncRPDCExampleFactory;
   }
   static void *newArray_TAlEncRPDCExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRPDCExampleFactory[nElements] : new ::TAlEncRPDCExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRPDCExampleFactory(void *p) {
      delete (static_cast<::TAlEncRPDCExampleFactory*>(p));
   }
   static void deleteArray_TAlEncRPDCExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncRPDCExampleFactory*>(p));
   }
   static void destruct_TAlEncRPDCExampleFactory(void *p) {
      typedef ::TAlEncRPDCExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRPDCExampleFactory

//______________________________________________________________________________
void TAlEncRPTOFExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRPTOFExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRPTOFExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRPTOFExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRPTOFExample(void *p) {
      return  p ? new(p) ::TAlEncRPTOFExample : new ::TAlEncRPTOFExample;
   }
   static void *newArray_TAlEncRPTOFExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRPTOFExample[nElements] : new ::TAlEncRPTOFExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRPTOFExample(void *p) {
      delete (static_cast<::TAlEncRPTOFExample*>(p));
   }
   static void deleteArray_TAlEncRPTOFExample(void *p) {
      delete [] (static_cast<::TAlEncRPTOFExample*>(p));
   }
   static void destruct_TAlEncRPTOFExample(void *p) {
      typedef ::TAlEncRPTOFExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRPTOFExample

//______________________________________________________________________________
void TAlEncRPTOFExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRPTOFExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRPTOFExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRPTOFExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRPTOFExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncRPTOFExampleFactory : new ::TAlEncRPTOFExampleFactory;
   }
   static void *newArray_TAlEncRPTOFExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRPTOFExampleFactory[nElements] : new ::TAlEncRPTOFExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRPTOFExampleFactory(void *p) {
      delete (static_cast<::TAlEncRPTOFExampleFactory*>(p));
   }
   static void deleteArray_TAlEncRPTOFExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncRPTOFExampleFactory*>(p));
   }
   static void destruct_TAlEncRPTOFExampleFactory(void *p) {
      typedef ::TAlEncRPTOFExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRPTOFExampleFactory

//______________________________________________________________________________
void TAlEncRawDataExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRawDataExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRawDataExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRawDataExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRawDataExample(void *p) {
      return  p ? new(p) ::TAlEncRawDataExample : new ::TAlEncRawDataExample;
   }
   static void *newArray_TAlEncRawDataExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRawDataExample[nElements] : new ::TAlEncRawDataExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRawDataExample(void *p) {
      delete (static_cast<::TAlEncRawDataExample*>(p));
   }
   static void deleteArray_TAlEncRawDataExample(void *p) {
      delete [] (static_cast<::TAlEncRawDataExample*>(p));
   }
   static void destruct_TAlEncRawDataExample(void *p) {
      typedef ::TAlEncRawDataExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRawDataExample

//______________________________________________________________________________
void TAlEncRawDataExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncRawDataExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncRawDataExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncRawDataExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncRawDataExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncRawDataExampleFactory : new ::TAlEncRawDataExampleFactory;
   }
   static void *newArray_TAlEncRawDataExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncRawDataExampleFactory[nElements] : new ::TAlEncRawDataExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncRawDataExampleFactory(void *p) {
      delete (static_cast<::TAlEncRawDataExampleFactory*>(p));
   }
   static void deleteArray_TAlEncRawDataExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncRawDataExampleFactory*>(p));
   }
   static void destruct_TAlEncRawDataExampleFactory(void *p) {
      typedef ::TAlEncRawDataExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncRawDataExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAIDCExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIDCExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIDCExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIDCExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIDCExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIDCExample : new ::TAlEncSAMURAIDCExample;
   }
   static void *newArray_TAlEncSAMURAIDCExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIDCExample[nElements] : new ::TAlEncSAMURAIDCExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIDCExample(void *p) {
      delete (static_cast<::TAlEncSAMURAIDCExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAIDCExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIDCExample*>(p));
   }
   static void destruct_TAlEncSAMURAIDCExample(void *p) {
      typedef ::TAlEncSAMURAIDCExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIDCExample

//______________________________________________________________________________
void TAlEncSAMURAIDCExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIDCExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIDCExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIDCExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIDCExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIDCExampleFactory : new ::TAlEncSAMURAIDCExampleFactory;
   }
   static void *newArray_TAlEncSAMURAIDCExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIDCExampleFactory[nElements] : new ::TAlEncSAMURAIDCExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIDCExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAIDCExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAIDCExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIDCExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAIDCExampleFactory(void *p) {
      typedef ::TAlEncSAMURAIDCExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIDCExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAIFrag::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIFrag.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIFrag::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIFrag::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIFrag(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIFrag : new ::TAlEncSAMURAIFrag;
   }
   static void *newArray_TAlEncSAMURAIFrag(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIFrag[nElements] : new ::TAlEncSAMURAIFrag[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIFrag(void *p) {
      delete (static_cast<::TAlEncSAMURAIFrag*>(p));
   }
   static void deleteArray_TAlEncSAMURAIFrag(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIFrag*>(p));
   }
   static void destruct_TAlEncSAMURAIFrag(void *p) {
      typedef ::TAlEncSAMURAIFrag current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIFrag

//______________________________________________________________________________
void TAlEncSAMURAIFragFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIFragFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIFragFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIFragFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIFragFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIFragFactory : new ::TAlEncSAMURAIFragFactory;
   }
   static void *newArray_TAlEncSAMURAIFragFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIFragFactory[nElements] : new ::TAlEncSAMURAIFragFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIFragFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAIFragFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAIFragFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIFragFactory*>(p));
   }
   static void destruct_TAlEncSAMURAIFragFactory(void *p) {
      typedef ::TAlEncSAMURAIFragFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIFragFactory

//______________________________________________________________________________
void TAlEncSAMURAIHODExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIHODExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIHODExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIHODExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIHODExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIHODExample : new ::TAlEncSAMURAIHODExample;
   }
   static void *newArray_TAlEncSAMURAIHODExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIHODExample[nElements] : new ::TAlEncSAMURAIHODExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIHODExample(void *p) {
      delete (static_cast<::TAlEncSAMURAIHODExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAIHODExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIHODExample*>(p));
   }
   static void destruct_TAlEncSAMURAIHODExample(void *p) {
      typedef ::TAlEncSAMURAIHODExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIHODExample

//______________________________________________________________________________
void TAlEncSAMURAIHODExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIHODExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIHODExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIHODExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIHODExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIHODExampleFactory : new ::TAlEncSAMURAIHODExampleFactory;
   }
   static void *newArray_TAlEncSAMURAIHODExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIHODExampleFactory[nElements] : new ::TAlEncSAMURAIHODExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIHODExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAIHODExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAIHODExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIHODExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAIHODExampleFactory(void *p) {
      typedef ::TAlEncSAMURAIHODExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIHODExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAIICExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIICExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIICExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIICExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIICExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIICExample : new ::TAlEncSAMURAIICExample;
   }
   static void *newArray_TAlEncSAMURAIICExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIICExample[nElements] : new ::TAlEncSAMURAIICExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIICExample(void *p) {
      delete (static_cast<::TAlEncSAMURAIICExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAIICExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIICExample*>(p));
   }
   static void destruct_TAlEncSAMURAIICExample(void *p) {
      typedef ::TAlEncSAMURAIICExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIICExample

//______________________________________________________________________________
void TAlEncSAMURAIICExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIICExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIICExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIICExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIICExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIICExampleFactory : new ::TAlEncSAMURAIICExampleFactory;
   }
   static void *newArray_TAlEncSAMURAIICExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIICExampleFactory[nElements] : new ::TAlEncSAMURAIICExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIICExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAIICExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAIICExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIICExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAIICExampleFactory(void *p) {
      typedef ::TAlEncSAMURAIICExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIICExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAINeutronExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAINeutronExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAINeutronExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAINeutronExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAINeutronExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAINeutronExample : new ::TAlEncSAMURAINeutronExample;
   }
   static void *newArray_TAlEncSAMURAINeutronExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAINeutronExample[nElements] : new ::TAlEncSAMURAINeutronExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAINeutronExample(void *p) {
      delete (static_cast<::TAlEncSAMURAINeutronExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAINeutronExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAINeutronExample*>(p));
   }
   static void destruct_TAlEncSAMURAINeutronExample(void *p) {
      typedef ::TAlEncSAMURAINeutronExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAINeutronExample

//______________________________________________________________________________
void TAlEncSAMURAINeutronExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAINeutronExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAINeutronExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAINeutronExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAINeutronExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAINeutronExampleFactory : new ::TAlEncSAMURAINeutronExampleFactory;
   }
   static void *newArray_TAlEncSAMURAINeutronExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAINeutronExampleFactory[nElements] : new ::TAlEncSAMURAINeutronExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAINeutronExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAINeutronExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAINeutronExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAINeutronExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAINeutronExampleFactory(void *p) {
      typedef ::TAlEncSAMURAINeutronExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAINeutronExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAIPlaExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIPlaExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIPlaExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIPlaExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIPlaExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIPlaExample : new ::TAlEncSAMURAIPlaExample;
   }
   static void *newArray_TAlEncSAMURAIPlaExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIPlaExample[nElements] : new ::TAlEncSAMURAIPlaExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIPlaExample(void *p) {
      delete (static_cast<::TAlEncSAMURAIPlaExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAIPlaExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIPlaExample*>(p));
   }
   static void destruct_TAlEncSAMURAIPlaExample(void *p) {
      typedef ::TAlEncSAMURAIPlaExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIPlaExample

//______________________________________________________________________________
void TAlEncSAMURAIPlaExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAIPlaExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAIPlaExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAIPlaExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAIPlaExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAIPlaExampleFactory : new ::TAlEncSAMURAIPlaExampleFactory;
   }
   static void *newArray_TAlEncSAMURAIPlaExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAIPlaExampleFactory[nElements] : new ::TAlEncSAMURAIPlaExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAIPlaExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAIPlaExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAIPlaExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAIPlaExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAIPlaExampleFactory(void *p) {
      typedef ::TAlEncSAMURAIPlaExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAIPlaExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAITEDExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAITEDExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAITEDExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAITEDExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAITEDExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAITEDExample : new ::TAlEncSAMURAITEDExample;
   }
   static void *newArray_TAlEncSAMURAITEDExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAITEDExample[nElements] : new ::TAlEncSAMURAITEDExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAITEDExample(void *p) {
      delete (static_cast<::TAlEncSAMURAITEDExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAITEDExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAITEDExample*>(p));
   }
   static void destruct_TAlEncSAMURAITEDExample(void *p) {
      typedef ::TAlEncSAMURAITEDExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAITEDExample

//______________________________________________________________________________
void TAlEncSAMURAITEDExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAITEDExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAITEDExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAITEDExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAITEDExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAITEDExampleFactory : new ::TAlEncSAMURAITEDExampleFactory;
   }
   static void *newArray_TAlEncSAMURAITEDExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAITEDExampleFactory[nElements] : new ::TAlEncSAMURAITEDExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAITEDExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAITEDExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAITEDExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAITEDExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAITEDExampleFactory(void *p) {
      typedef ::TAlEncSAMURAITEDExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAITEDExampleFactory

//______________________________________________________________________________
void TAlEncSAMURAITZeroExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAITZeroExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAITZeroExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAITZeroExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAITZeroExample(void *p) {
      return  p ? new(p) ::TAlEncSAMURAITZeroExample : new ::TAlEncSAMURAITZeroExample;
   }
   static void *newArray_TAlEncSAMURAITZeroExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAITZeroExample[nElements] : new ::TAlEncSAMURAITZeroExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAITZeroExample(void *p) {
      delete (static_cast<::TAlEncSAMURAITZeroExample*>(p));
   }
   static void deleteArray_TAlEncSAMURAITZeroExample(void *p) {
      delete [] (static_cast<::TAlEncSAMURAITZeroExample*>(p));
   }
   static void destruct_TAlEncSAMURAITZeroExample(void *p) {
      typedef ::TAlEncSAMURAITZeroExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAITZeroExample

//______________________________________________________________________________
void TAlEncSAMURAITZeroExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSAMURAITZeroExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSAMURAITZeroExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSAMURAITZeroExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSAMURAITZeroExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSAMURAITZeroExampleFactory : new ::TAlEncSAMURAITZeroExampleFactory;
   }
   static void *newArray_TAlEncSAMURAITZeroExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSAMURAITZeroExampleFactory[nElements] : new ::TAlEncSAMURAITZeroExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSAMURAITZeroExampleFactory(void *p) {
      delete (static_cast<::TAlEncSAMURAITZeroExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSAMURAITZeroExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSAMURAITZeroExampleFactory*>(p));
   }
   static void destruct_TAlEncSAMURAITZeroExampleFactory(void *p) {
      typedef ::TAlEncSAMURAITZeroExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSAMURAITZeroExampleFactory

//______________________________________________________________________________
void TAlEncSILICONSExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSILICONSExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSILICONSExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSILICONSExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSILICONSExample(void *p) {
      return  p ? new(p) ::TAlEncSILICONSExample : new ::TAlEncSILICONSExample;
   }
   static void *newArray_TAlEncSILICONSExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSILICONSExample[nElements] : new ::TAlEncSILICONSExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSILICONSExample(void *p) {
      delete (static_cast<::TAlEncSILICONSExample*>(p));
   }
   static void deleteArray_TAlEncSILICONSExample(void *p) {
      delete [] (static_cast<::TAlEncSILICONSExample*>(p));
   }
   static void destruct_TAlEncSILICONSExample(void *p) {
      typedef ::TAlEncSILICONSExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSILICONSExample

//______________________________________________________________________________
void TAlEncSILICONSExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSILICONSExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSILICONSExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSILICONSExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncSILICONSExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncSILICONSExampleFactory : new ::TAlEncSILICONSExampleFactory;
   }
   static void *newArray_TAlEncSILICONSExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncSILICONSExampleFactory[nElements] : new ::TAlEncSILICONSExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncSILICONSExampleFactory(void *p) {
      delete (static_cast<::TAlEncSILICONSExampleFactory*>(p));
   }
   static void deleteArray_TAlEncSILICONSExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncSILICONSExampleFactory*>(p));
   }
   static void destruct_TAlEncSILICONSExampleFactory(void *p) {
      typedef ::TAlEncSILICONSExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSILICONSExampleFactory

//______________________________________________________________________________
void TAlEncWINDSExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncWINDSExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncWINDSExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncWINDSExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncWINDSExample(void *p) {
      return  p ? new(p) ::TAlEncWINDSExample : new ::TAlEncWINDSExample;
   }
   static void *newArray_TAlEncWINDSExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncWINDSExample[nElements] : new ::TAlEncWINDSExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncWINDSExample(void *p) {
      delete (static_cast<::TAlEncWINDSExample*>(p));
   }
   static void deleteArray_TAlEncWINDSExample(void *p) {
      delete [] (static_cast<::TAlEncWINDSExample*>(p));
   }
   static void destruct_TAlEncWINDSExample(void *p) {
      typedef ::TAlEncWINDSExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncWINDSExample

//______________________________________________________________________________
void TAlEncWINDSExampleFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncWINDSExampleFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncWINDSExampleFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncWINDSExampleFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncWINDSExampleFactory(void *p) {
      return  p ? new(p) ::TAlEncWINDSExampleFactory : new ::TAlEncWINDSExampleFactory;
   }
   static void *newArray_TAlEncWINDSExampleFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncWINDSExampleFactory[nElements] : new ::TAlEncWINDSExampleFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncWINDSExampleFactory(void *p) {
      delete (static_cast<::TAlEncWINDSExampleFactory*>(p));
   }
   static void deleteArray_TAlEncWINDSExampleFactory(void *p) {
      delete [] (static_cast<::TAlEncWINDSExampleFactory*>(p));
   }
   static void destruct_TAlEncWINDSExampleFactory(void *p) {
      typedef ::TAlEncWINDSExampleFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncWINDSExampleFactory

namespace ROOT {
   static TClass *vectorlETAlEncSubmUgR_Dictionary();
   static void vectorlETAlEncSubmUgR_TClassManip(TClass*);
   static void *new_vectorlETAlEncSubmUgR(void *p = nullptr);
   static void *newArray_vectorlETAlEncSubmUgR(Long_t size, void *p);
   static void delete_vectorlETAlEncSubmUgR(void *p);
   static void deleteArray_vectorlETAlEncSubmUgR(void *p);
   static void destruct_vectorlETAlEncSubmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TAlEncSub*>*)
   {
      vector<TAlEncSub*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TAlEncSub*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TAlEncSub*>", -2, "vector", 389,
                  typeid(vector<TAlEncSub*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETAlEncSubmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TAlEncSub*>) );
      instance.SetNew(&new_vectorlETAlEncSubmUgR);
      instance.SetNewArray(&newArray_vectorlETAlEncSubmUgR);
      instance.SetDelete(&delete_vectorlETAlEncSubmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETAlEncSubmUgR);
      instance.SetDestructor(&destruct_vectorlETAlEncSubmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TAlEncSub*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TAlEncSub*>","std::vector<TAlEncSub*, std::allocator<TAlEncSub*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TAlEncSub*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETAlEncSubmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TAlEncSub*>*>(nullptr))->GetClass();
      vectorlETAlEncSubmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETAlEncSubmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETAlEncSubmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAlEncSub*> : new vector<TAlEncSub*>;
   }
   static void *newArray_vectorlETAlEncSubmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAlEncSub*>[nElements] : new vector<TAlEncSub*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETAlEncSubmUgR(void *p) {
      delete (static_cast<vector<TAlEncSub*>*>(p));
   }
   static void deleteArray_vectorlETAlEncSubmUgR(void *p) {
      delete [] (static_cast<vector<TAlEncSub*>*>(p));
   }
   static void destruct_vectorlETAlEncSubmUgR(void *p) {
      typedef vector<TAlEncSub*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TAlEncSub*>

namespace {
  void TriggerDictionaryInitialization_analoopencexample_dict_Impl() {
    static const char* headers[] = {
"include/EAnalyser.hh",
"include/EWNum.hh",
"include/TAlEncCATANAExample.hh",
"include/TAlEncDALIExample.hh",
"include/TAlEncESPRIExample.hh",
"include/TAlEncExample.hh",
"include/TAlEncGlobalExample.hh",
"include/TAlEncHIMEExample.hh",
"include/TAlEncICExample.hh",
"include/TAlEncMatrixExample.hh",
"include/TAlEncNEBULAExample.hh",
"include/TAlEncNEBULAHPCExample.hh",
"include/TAlEncNINJAExample.hh",
"include/TAlEncNeuLANDExample.hh",
"include/TAlEncPIDExample.hh",
"include/TAlEncPPACExample.hh",
"include/TAlEncPlasticExample.hh",
"include/TAlEncRPDCExample.hh",
"include/TAlEncRPTOFExample.hh",
"include/TAlEncRawDataExample.hh",
"include/TAlEncSAMURAIDCExample.hh",
"include/TAlEncSAMURAIFrag.hh",
"include/TAlEncSAMURAIHODExample.hh",
"include/TAlEncSAMURAIICExample.hh",
"include/TAlEncSAMURAINeutronExample.hh",
"include/TAlEncSAMURAIPlaExample.hh",
"include/TAlEncSAMURAITEDExample.hh",
"include/TAlEncSAMURAITZeroExample.hh",
"include/TAlEncSILICONSExample.hh",
"include/TAlEncWINDSExample.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"../Core/include",
"../../Core/include",
"../../Nadeko/include",
"../../Reconstruction/BigRIPS/include",
"../../Reconstruction/CATANA/include",
"../../Reconstruction/DALI/include",
"../../Reconstruction/ESPRI/include",
"../../Reconstruction/MINOS/include",
"../../Reconstruction/SAMURAI/include",
"../../Reconstruction/SILICONS/include",
"../../Reconstruction/WINDS/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/AnaLoop/EncExample/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "analoopencexample_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$include/TAlEncCATANAExample.hh")))  TAlEncCATANAExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncCATANAExample.hh")))  TAlEncCATANAExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncDALIExample.hh")))  TAlEncDALIExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncDALIExample.hh")))  TAlEncDALIExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncESPRIExample.hh")))  TAlEncESPRIExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncESPRIExample.hh")))  TAlEncESPRIExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncExample.hh")))  TAlEncExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncGlobalExample.hh")))  TAlEncGlobalExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncGlobalExample.hh")))  TAlEncGlobalExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncHIMEExample.hh")))  TAlEncHIMEExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncHIMEExample.hh")))  TAlEncHIMEExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncICExample.hh")))  TAlEncICExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncICExample.hh")))  TAlEncICExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncMatrixExample.hh")))  TAlEncMatrixExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncMatrixExample.hh")))  TAlEncMatrixExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncNEBULAExample.hh")))  TAlEncNEBULAExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncNEBULAExample.hh")))  TAlEncNEBULAExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncNEBULAHPCExample.hh")))  TAlEncNEBULAHPCExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncNEBULAHPCExample.hh")))  TAlEncNEBULAHPCExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncNINJAExample.hh")))  TAlEncNINJAExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncNINJAExample.hh")))  TAlEncNINJAExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncNeuLANDExample.hh")))  TAlEncNeuLANDExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncNeuLANDExample.hh")))  TAlEncNeuLANDExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncPIDExample.hh")))  TAlEncPIDExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncPIDExample.hh")))  TAlEncPIDExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncPPACExample.hh")))  TAlEncPPACExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncPPACExample.hh")))  TAlEncPPACExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncPlasticExample.hh")))  TAlEncPlasticExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncPlasticExample.hh")))  TAlEncPlasticExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncRPDCExample.hh")))  TAlEncRPDCExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncRPDCExample.hh")))  TAlEncRPDCExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncRPTOFExample.hh")))  TAlEncRPTOFExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncRPTOFExample.hh")))  TAlEncRPTOFExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncRawDataExample.hh")))  TAlEncRawDataExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncRawDataExample.hh")))  TAlEncRawDataExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIDCExample.hh")))  TAlEncSAMURAIDCExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIDCExample.hh")))  TAlEncSAMURAIDCExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIFrag.hh")))  TAlEncSAMURAIFrag;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIFrag.hh")))  TAlEncSAMURAIFragFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIHODExample.hh")))  TAlEncSAMURAIHODExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIHODExample.hh")))  TAlEncSAMURAIHODExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIICExample.hh")))  TAlEncSAMURAIICExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIICExample.hh")))  TAlEncSAMURAIICExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAINeutronExample.hh")))  TAlEncSAMURAINeutronExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAINeutronExample.hh")))  TAlEncSAMURAINeutronExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIPlaExample.hh")))  TAlEncSAMURAIPlaExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAIPlaExample.hh")))  TAlEncSAMURAIPlaExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAITEDExample.hh")))  TAlEncSAMURAITEDExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAITEDExample.hh")))  TAlEncSAMURAITEDExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAITZeroExample.hh")))  TAlEncSAMURAITZeroExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSAMURAITZeroExample.hh")))  TAlEncSAMURAITZeroExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncSILICONSExample.hh")))  TAlEncSILICONSExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncSILICONSExample.hh")))  TAlEncSILICONSExampleFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncWINDSExample.hh")))  TAlEncWINDSExample;
class __attribute__((annotate("$clingAutoload$include/TAlEncWINDSExample.hh")))  TAlEncWINDSExampleFactory;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "analoopencexample_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/EAnalyser.hh"
#include "include/EWNum.hh"
#include "include/TAlEncCATANAExample.hh"
#include "include/TAlEncDALIExample.hh"
#include "include/TAlEncESPRIExample.hh"
#include "include/TAlEncExample.hh"
#include "include/TAlEncGlobalExample.hh"
#include "include/TAlEncHIMEExample.hh"
#include "include/TAlEncICExample.hh"
#include "include/TAlEncMatrixExample.hh"
#include "include/TAlEncNEBULAExample.hh"
#include "include/TAlEncNEBULAHPCExample.hh"
#include "include/TAlEncNINJAExample.hh"
#include "include/TAlEncNeuLANDExample.hh"
#include "include/TAlEncPIDExample.hh"
#include "include/TAlEncPPACExample.hh"
#include "include/TAlEncPlasticExample.hh"
#include "include/TAlEncRPDCExample.hh"
#include "include/TAlEncRPTOFExample.hh"
#include "include/TAlEncRawDataExample.hh"
#include "include/TAlEncSAMURAIDCExample.hh"
#include "include/TAlEncSAMURAIFrag.hh"
#include "include/TAlEncSAMURAIHODExample.hh"
#include "include/TAlEncSAMURAIICExample.hh"
#include "include/TAlEncSAMURAINeutronExample.hh"
#include "include/TAlEncSAMURAIPlaExample.hh"
#include "include/TAlEncSAMURAITEDExample.hh"
#include "include/TAlEncSAMURAITZeroExample.hh"
#include "include/TAlEncSILICONSExample.hh"
#include "include/TAlEncWINDSExample.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAlEncCATANAExample", payloadCode, "@",
"TAlEncCATANAExampleFactory", payloadCode, "@",
"TAlEncDALIExample", payloadCode, "@",
"TAlEncDALIExampleFactory", payloadCode, "@",
"TAlEncESPRIExample", payloadCode, "@",
"TAlEncESPRIExampleFactory", payloadCode, "@",
"TAlEncExample", payloadCode, "@",
"TAlEncGlobalExample", payloadCode, "@",
"TAlEncGlobalExampleFactory", payloadCode, "@",
"TAlEncHIMEExample", payloadCode, "@",
"TAlEncHIMEExampleFactory", payloadCode, "@",
"TAlEncICExample", payloadCode, "@",
"TAlEncICExampleFactory", payloadCode, "@",
"TAlEncMatrixExample", payloadCode, "@",
"TAlEncMatrixExampleFactory", payloadCode, "@",
"TAlEncNEBULAExample", payloadCode, "@",
"TAlEncNEBULAExampleFactory", payloadCode, "@",
"TAlEncNEBULAHPCExample", payloadCode, "@",
"TAlEncNEBULAHPCExampleFactory", payloadCode, "@",
"TAlEncNINJAExample", payloadCode, "@",
"TAlEncNINJAExampleFactory", payloadCode, "@",
"TAlEncNeuLANDExample", payloadCode, "@",
"TAlEncNeuLANDExampleFactory", payloadCode, "@",
"TAlEncPIDExample", payloadCode, "@",
"TAlEncPIDExampleFactory", payloadCode, "@",
"TAlEncPPACExample", payloadCode, "@",
"TAlEncPPACExampleFactory", payloadCode, "@",
"TAlEncPlasticExample", payloadCode, "@",
"TAlEncPlasticExampleFactory", payloadCode, "@",
"TAlEncRPDCExample", payloadCode, "@",
"TAlEncRPDCExampleFactory", payloadCode, "@",
"TAlEncRPTOFExample", payloadCode, "@",
"TAlEncRPTOFExampleFactory", payloadCode, "@",
"TAlEncRawDataExample", payloadCode, "@",
"TAlEncRawDataExampleFactory", payloadCode, "@",
"TAlEncSAMURAIDCExample", payloadCode, "@",
"TAlEncSAMURAIDCExampleFactory", payloadCode, "@",
"TAlEncSAMURAIFrag", payloadCode, "@",
"TAlEncSAMURAIFragFactory", payloadCode, "@",
"TAlEncSAMURAIHODExample", payloadCode, "@",
"TAlEncSAMURAIHODExampleFactory", payloadCode, "@",
"TAlEncSAMURAIICExample", payloadCode, "@",
"TAlEncSAMURAIICExampleFactory", payloadCode, "@",
"TAlEncSAMURAINeutronExample", payloadCode, "@",
"TAlEncSAMURAINeutronExampleFactory", payloadCode, "@",
"TAlEncSAMURAIPlaExample", payloadCode, "@",
"TAlEncSAMURAIPlaExampleFactory", payloadCode, "@",
"TAlEncSAMURAITEDExample", payloadCode, "@",
"TAlEncSAMURAITEDExampleFactory", payloadCode, "@",
"TAlEncSAMURAITZeroExample", payloadCode, "@",
"TAlEncSAMURAITZeroExampleFactory", payloadCode, "@",
"TAlEncSILICONSExample", payloadCode, "@",
"TAlEncSILICONSExampleFactory", payloadCode, "@",
"TAlEncWINDSExample", payloadCode, "@",
"TAlEncWINDSExampleFactory", payloadCode, "@",
"book", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("analoopencexample_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_analoopencexample_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_analoopencexample_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_analoopencexample_dict() {
  TriggerDictionaryInitialization_analoopencexample_dict_Impl();
}
