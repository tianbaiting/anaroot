// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME analoop_dict
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
#include "include/TAlEncBranch.hh"
#include "include/TAlEncFactory.hh"
#include "include/TAlEncFillTree.hh"
#include "include/TAlEncGate.hh"
#include "include/TAlEncHist.hh"
#include "include/TAlEncPrint.hh"
#include "include/TAlEncStop.hh"
#include "include/TAlEncSub.hh"
#include "include/TAlRawDataExample.hh"
#include "include/TArtAnaClock.hh"
#include "include/TArtAnaFile.hh"
#include "include/TArtAnaLoop.hh"
#include "include/TArtAnaLoopManager.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TAlEncSub(void *p);
   static void deleteArray_TAlEncSub(void *p);
   static void destruct_TAlEncSub(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncSub*)
   {
      ::TAlEncSub *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncSub >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncSub", ::TAlEncSub::Class_Version(), "TAlEncSub.hh", 9,
                  typeid(::TAlEncSub), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncSub::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncSub) );
      instance.SetDelete(&delete_TAlEncSub);
      instance.SetDeleteArray(&deleteArray_TAlEncSub);
      instance.SetDestructor(&destruct_TAlEncSub);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncSub*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncSub*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncSub*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndex(void *p = nullptr);
   static void *newArray_TArtValIndex(Long_t size, void *p);
   static void delete_TArtValIndex(void *p);
   static void deleteArray_TArtValIndex(void *p);
   static void destruct_TArtValIndex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndex*)
   {
      ::TArtValIndex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndex", ::TArtValIndex::Class_Version(), "TArtAnaFile.hh", 26,
                  typeid(::TArtValIndex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndex::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndex) );
      instance.SetNew(&new_TArtValIndex);
      instance.SetNewArray(&newArray_TArtValIndex);
      instance.SetDelete(&delete_TArtValIndex);
      instance.SetDeleteArray(&deleteArray_TArtValIndex);
      instance.SetDestructor(&destruct_TArtValIndex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndex*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtValIndex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtValIndex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndexVal(void *p = nullptr);
   static void *newArray_TArtValIndexVal(Long_t size, void *p);
   static void delete_TArtValIndexVal(void *p);
   static void deleteArray_TArtValIndexVal(void *p);
   static void destruct_TArtValIndexVal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndexVal*)
   {
      ::TArtValIndexVal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndexVal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndexVal", ::TArtValIndexVal::Class_Version(), "TArtAnaFile.hh", 69,
                  typeid(::TArtValIndexVal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndexVal::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndexVal) );
      instance.SetNew(&new_TArtValIndexVal);
      instance.SetNewArray(&newArray_TArtValIndexVal);
      instance.SetDelete(&delete_TArtValIndexVal);
      instance.SetDeleteArray(&deleteArray_TArtValIndexVal);
      instance.SetDestructor(&destruct_TArtValIndexVal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndexVal*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtValIndexVal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtValIndexVal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValIndexValArray(void *p = nullptr);
   static void *newArray_TArtValIndexValArray(Long_t size, void *p);
   static void delete_TArtValIndexValArray(void *p);
   static void deleteArray_TArtValIndexValArray(void *p);
   static void destruct_TArtValIndexValArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValIndexValArray*)
   {
      ::TArtValIndexValArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValIndexValArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValIndexValArray", ::TArtValIndexValArray::Class_Version(), "TArtAnaFile.hh", 83,
                  typeid(::TArtValIndexValArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValIndexValArray::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValIndexValArray) );
      instance.SetNew(&new_TArtValIndexValArray);
      instance.SetNewArray(&newArray_TArtValIndexValArray);
      instance.SetDelete(&delete_TArtValIndexValArray);
      instance.SetDeleteArray(&deleteArray_TArtValIndexValArray);
      instance.SetDestructor(&destruct_TArtValIndexValArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValIndexValArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtValIndexValArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtValIndexValArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtValMap(void *p = nullptr);
   static void *newArray_TArtValMap(Long_t size, void *p);
   static void delete_TArtValMap(void *p);
   static void deleteArray_TArtValMap(void *p);
   static void destruct_TArtValMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtValMap*)
   {
      ::TArtValMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtValMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtValMap", ::TArtValMap::Class_Version(), "TArtAnaFile.hh", 98,
                  typeid(::TArtValMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtValMap::Dictionary, isa_proxy, 4,
                  sizeof(::TArtValMap) );
      instance.SetNew(&new_TArtValMap);
      instance.SetNewArray(&newArray_TArtValMap);
      instance.SetDelete(&delete_TArtValMap);
      instance.SetDeleteArray(&deleteArray_TArtValMap);
      instance.SetDestructor(&destruct_TArtValMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtValMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtValMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtValMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtAnaGate(void *p = nullptr);
   static void *newArray_TArtAnaGate(Long_t size, void *p);
   static void delete_TArtAnaGate(void *p);
   static void deleteArray_TArtAnaGate(void *p);
   static void destruct_TArtAnaGate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaGate*)
   {
      ::TArtAnaGate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaGate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaGate", ::TArtAnaGate::Class_Version(), "TArtAnaFile.hh", 125,
                  typeid(::TArtAnaGate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaGate::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaGate) );
      instance.SetNew(&new_TArtAnaGate);
      instance.SetNewArray(&newArray_TArtAnaGate);
      instance.SetDelete(&delete_TArtAnaGate);
      instance.SetDeleteArray(&deleteArray_TArtAnaGate);
      instance.SetDestructor(&destruct_TArtAnaGate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaGate*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtAnaGate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtAnaGate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtAnaFile(void *p);
   static void deleteArray_TArtAnaFile(void *p);
   static void destruct_TArtAnaFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaFile*)
   {
      ::TArtAnaFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaFile", ::TArtAnaFile::Class_Version(), "TArtAnaFile.hh", 230,
                  typeid(::TArtAnaFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaFile::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaFile) );
      instance.SetDelete(&delete_TArtAnaFile);
      instance.SetDeleteArray(&deleteArray_TArtAnaFile);
      instance.SetDestructor(&destruct_TArtAnaFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtAnaFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtAnaFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncBranch(void *p = nullptr);
   static void *newArray_TAlEncBranch(Long_t size, void *p);
   static void delete_TAlEncBranch(void *p);
   static void deleteArray_TAlEncBranch(void *p);
   static void destruct_TAlEncBranch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncBranch*)
   {
      ::TAlEncBranch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncBranch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncBranch", ::TAlEncBranch::Class_Version(), "TAlEncBranch.hh", 13,
                  typeid(::TAlEncBranch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncBranch::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncBranch) );
      instance.SetNew(&new_TAlEncBranch);
      instance.SetNewArray(&newArray_TAlEncBranch);
      instance.SetDelete(&delete_TAlEncBranch);
      instance.SetDeleteArray(&deleteArray_TAlEncBranch);
      instance.SetDestructor(&destruct_TAlEncBranch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncBranch*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncBranch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncBranch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TAlEncFactory(void *p);
   static void deleteArray_TAlEncFactory(void *p);
   static void destruct_TAlEncFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncFactory*)
   {
      ::TAlEncFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncFactory", ::TAlEncFactory::Class_Version(), "TAlEncFactory.hh", 8,
                  typeid(::TAlEncFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncFactory::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncFactory) );
      instance.SetDelete(&delete_TAlEncFactory);
      instance.SetDeleteArray(&deleteArray_TAlEncFactory);
      instance.SetDestructor(&destruct_TAlEncFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncFillTree(void *p = nullptr);
   static void *newArray_TAlEncFillTree(Long_t size, void *p);
   static void delete_TAlEncFillTree(void *p);
   static void deleteArray_TAlEncFillTree(void *p);
   static void destruct_TAlEncFillTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncFillTree*)
   {
      ::TAlEncFillTree *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncFillTree >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncFillTree", ::TAlEncFillTree::Class_Version(), "TAlEncFillTree.hh", 13,
                  typeid(::TAlEncFillTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncFillTree::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncFillTree) );
      instance.SetNew(&new_TAlEncFillTree);
      instance.SetNewArray(&newArray_TAlEncFillTree);
      instance.SetDelete(&delete_TAlEncFillTree);
      instance.SetDeleteArray(&deleteArray_TAlEncFillTree);
      instance.SetDestructor(&destruct_TAlEncFillTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncFillTree*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncFillTree*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncFillTree*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncGate(void *p = nullptr);
   static void *newArray_TAlEncGate(Long_t size, void *p);
   static void delete_TAlEncGate(void *p);
   static void deleteArray_TAlEncGate(void *p);
   static void destruct_TAlEncGate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncGate*)
   {
      ::TAlEncGate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncGate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncGate", ::TAlEncGate::Class_Version(), "TAlEncGate.hh", 8,
                  typeid(::TAlEncGate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncGate::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncGate) );
      instance.SetNew(&new_TAlEncGate);
      instance.SetNewArray(&newArray_TAlEncGate);
      instance.SetDelete(&delete_TAlEncGate);
      instance.SetDeleteArray(&deleteArray_TAlEncGate);
      instance.SetDestructor(&destruct_TAlEncGate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncGate*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncGate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncGate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncHist(void *p = nullptr);
   static void *newArray_TAlEncHist(Long_t size, void *p);
   static void delete_TAlEncHist(void *p);
   static void deleteArray_TAlEncHist(void *p);
   static void destruct_TAlEncHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncHist*)
   {
      ::TAlEncHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncHist >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncHist", ::TAlEncHist::Class_Version(), "TAlEncHist.hh", 13,
                  typeid(::TAlEncHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncHist::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncHist) );
      instance.SetNew(&new_TAlEncHist);
      instance.SetNewArray(&newArray_TAlEncHist);
      instance.SetDelete(&delete_TAlEncHist);
      instance.SetDeleteArray(&deleteArray_TAlEncHist);
      instance.SetDestructor(&destruct_TAlEncHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncHist*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncHist*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncHist*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncPrint(void *p = nullptr);
   static void *newArray_TAlEncPrint(Long_t size, void *p);
   static void delete_TAlEncPrint(void *p);
   static void deleteArray_TAlEncPrint(void *p);
   static void destruct_TAlEncPrint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncPrint*)
   {
      ::TAlEncPrint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncPrint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncPrint", ::TAlEncPrint::Class_Version(), "TAlEncPrint.hh", 11,
                  typeid(::TAlEncPrint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncPrint::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncPrint) );
      instance.SetNew(&new_TAlEncPrint);
      instance.SetNewArray(&newArray_TAlEncPrint);
      instance.SetDelete(&delete_TAlEncPrint);
      instance.SetDeleteArray(&deleteArray_TAlEncPrint);
      instance.SetDestructor(&destruct_TAlEncPrint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncPrint*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncPrint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncPrint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlEncStop(void *p = nullptr);
   static void *newArray_TAlEncStop(Long_t size, void *p);
   static void delete_TAlEncStop(void *p);
   static void deleteArray_TAlEncStop(void *p);
   static void destruct_TAlEncStop(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlEncStop*)
   {
      ::TAlEncStop *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlEncStop >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlEncStop", ::TAlEncStop::Class_Version(), "TAlEncStop.hh", 10,
                  typeid(::TAlEncStop), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlEncStop::Dictionary, isa_proxy, 4,
                  sizeof(::TAlEncStop) );
      instance.SetNew(&new_TAlEncStop);
      instance.SetNewArray(&newArray_TAlEncStop);
      instance.SetDelete(&delete_TAlEncStop);
      instance.SetDeleteArray(&deleteArray_TAlEncStop);
      instance.SetDestructor(&destruct_TAlEncStop);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlEncStop*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlEncStop*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlEncStop*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAlRawDataExample(void *p = nullptr);
   static void *newArray_TAlRawDataExample(Long_t size, void *p);
   static void delete_TAlRawDataExample(void *p);
   static void deleteArray_TAlRawDataExample(void *p);
   static void destruct_TAlRawDataExample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAlRawDataExample*)
   {
      ::TAlRawDataExample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAlRawDataExample >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAlRawDataExample", ::TAlRawDataExample::Class_Version(), "TAlRawDataExample.hh", 10,
                  typeid(::TAlRawDataExample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAlRawDataExample::Dictionary, isa_proxy, 4,
                  sizeof(::TAlRawDataExample) );
      instance.SetNew(&new_TAlRawDataExample);
      instance.SetNewArray(&newArray_TAlRawDataExample);
      instance.SetDelete(&delete_TAlRawDataExample);
      instance.SetDeleteArray(&deleteArray_TAlRawDataExample);
      instance.SetDestructor(&destruct_TAlRawDataExample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAlRawDataExample*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAlRawDataExample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAlRawDataExample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaLoopManager*)
   {
      ::TArtAnaLoopManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaLoopManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaLoopManager", ::TArtAnaLoopManager::Class_Version(), "TArtAnaLoopManager.hh", 36,
                  typeid(::TArtAnaLoopManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaLoopManager::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaLoopManager) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaLoopManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtAnaLoopManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtAnaLoopManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtAnaLoopStatic*)
   {
      ::TArtAnaLoopStatic *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtAnaLoopStatic >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtAnaLoopStatic", ::TArtAnaLoopStatic::Class_Version(), "TArtAnaLoopManager.hh", 104,
                  typeid(::TArtAnaLoopStatic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtAnaLoopStatic::Dictionary, isa_proxy, 4,
                  sizeof(::TArtAnaLoopStatic) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtAnaLoopStatic*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtAnaLoopStatic*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtAnaLoopStatic*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAlEncSub::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncSub::Class_Name()
{
   return "TAlEncSub";
}

//______________________________________________________________________________
const char *TAlEncSub::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncSub::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncSub::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncSub::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncSub*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndex::Class_Name()
{
   return "TArtValIndex";
}

//______________________________________________________________________________
const char *TArtValIndex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndexVal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndexVal::Class_Name()
{
   return "TArtValIndexVal";
}

//______________________________________________________________________________
const char *TArtValIndexVal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndexVal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndexVal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndexVal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexVal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValIndexValArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValIndexValArray::Class_Name()
{
   return "TArtValIndexValArray";
}

//______________________________________________________________________________
const char *TArtValIndexValArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValIndexValArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValIndexValArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValIndexValArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValIndexValArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtValMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtValMap::Class_Name()
{
   return "TArtValMap";
}

//______________________________________________________________________________
const char *TArtValMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtValMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtValMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtValMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtValMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaGate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaGate::Class_Name()
{
   return "TArtAnaGate";
}

//______________________________________________________________________________
const char *TArtAnaGate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaGate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaGate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaGate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaGate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaFile::Class_Name()
{
   return "TArtAnaFile";
}

//______________________________________________________________________________
const char *TArtAnaFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncBranch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncBranch::Class_Name()
{
   return "TAlEncBranch";
}

//______________________________________________________________________________
const char *TAlEncBranch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncBranch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncBranch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncBranch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncBranch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncFactory::Class_Name()
{
   return "TAlEncFactory";
}

//______________________________________________________________________________
const char *TAlEncFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncFillTree::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncFillTree::Class_Name()
{
   return "TAlEncFillTree";
}

//______________________________________________________________________________
const char *TAlEncFillTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncFillTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncFillTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncFillTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncFillTree*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncGate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncGate::Class_Name()
{
   return "TAlEncGate";
}

//______________________________________________________________________________
const char *TAlEncGate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncGate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncGate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncGate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncGate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncHist::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncHist::Class_Name()
{
   return "TAlEncHist";
}

//______________________________________________________________________________
const char *TAlEncHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncHist*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncPrint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncPrint::Class_Name()
{
   return "TAlEncPrint";
}

//______________________________________________________________________________
const char *TAlEncPrint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncPrint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncPrint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncPrint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncPrint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlEncStop::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlEncStop::Class_Name()
{
   return "TAlEncStop";
}

//______________________________________________________________________________
const char *TAlEncStop::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlEncStop::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlEncStop::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlEncStop::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlEncStop*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAlRawDataExample::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAlRawDataExample::Class_Name()
{
   return "TAlRawDataExample";
}

//______________________________________________________________________________
const char *TAlRawDataExample::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAlRawDataExample::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAlRawDataExample::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAlRawDataExample::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAlRawDataExample*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaLoopManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaLoopManager::Class_Name()
{
   return "TArtAnaLoopManager";
}

//______________________________________________________________________________
const char *TArtAnaLoopManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaLoopManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaLoopManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaLoopManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtAnaLoopStatic::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtAnaLoopStatic::Class_Name()
{
   return "TArtAnaLoopStatic";
}

//______________________________________________________________________________
const char *TArtAnaLoopStatic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtAnaLoopStatic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtAnaLoopStatic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtAnaLoopStatic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtAnaLoopStatic*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAlEncSub::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncSub.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncSub::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncSub::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAlEncSub(void *p) {
      delete (static_cast<::TAlEncSub*>(p));
   }
   static void deleteArray_TAlEncSub(void *p) {
      delete [] (static_cast<::TAlEncSub*>(p));
   }
   static void destruct_TAlEncSub(void *p) {
      typedef ::TAlEncSub current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncSub

//______________________________________________________________________________
void TArtValIndex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndex::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndex(void *p) {
      return  p ? new(p) ::TArtValIndex : new ::TArtValIndex;
   }
   static void *newArray_TArtValIndex(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndex[nElements] : new ::TArtValIndex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndex(void *p) {
      delete (static_cast<::TArtValIndex*>(p));
   }
   static void deleteArray_TArtValIndex(void *p) {
      delete [] (static_cast<::TArtValIndex*>(p));
   }
   static void destruct_TArtValIndex(void *p) {
      typedef ::TArtValIndex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndex

//______________________________________________________________________________
void TArtValIndexVal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndexVal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndexVal::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndexVal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndexVal(void *p) {
      return  p ? new(p) ::TArtValIndexVal : new ::TArtValIndexVal;
   }
   static void *newArray_TArtValIndexVal(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndexVal[nElements] : new ::TArtValIndexVal[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndexVal(void *p) {
      delete (static_cast<::TArtValIndexVal*>(p));
   }
   static void deleteArray_TArtValIndexVal(void *p) {
      delete [] (static_cast<::TArtValIndexVal*>(p));
   }
   static void destruct_TArtValIndexVal(void *p) {
      typedef ::TArtValIndexVal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndexVal

//______________________________________________________________________________
void TArtValIndexValArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValIndexValArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValIndexValArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValIndexValArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValIndexValArray(void *p) {
      return  p ? new(p) ::TArtValIndexValArray : new ::TArtValIndexValArray;
   }
   static void *newArray_TArtValIndexValArray(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValIndexValArray[nElements] : new ::TArtValIndexValArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValIndexValArray(void *p) {
      delete (static_cast<::TArtValIndexValArray*>(p));
   }
   static void deleteArray_TArtValIndexValArray(void *p) {
      delete [] (static_cast<::TArtValIndexValArray*>(p));
   }
   static void destruct_TArtValIndexValArray(void *p) {
      typedef ::TArtValIndexValArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtValIndexValArray

//______________________________________________________________________________
void TArtValMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtValMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtValMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtValMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtValMap(void *p) {
      return  p ? new(p) ::TArtValMap : new ::TArtValMap;
   }
   static void *newArray_TArtValMap(Long_t nElements, void *p) {
      return p ? new(p) ::TArtValMap[nElements] : new ::TArtValMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtValMap(void *p) {
      delete (static_cast<::TArtValMap*>(p));
   }
   static void deleteArray_TArtValMap(void *p) {
      delete [] (static_cast<::TArtValMap*>(p));
   }
   static void destruct_TArtValMap(void *p) {
      typedef ::TArtValMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtValMap

//______________________________________________________________________________
void TArtAnaGate::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaGate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaGate::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaGate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtAnaGate(void *p) {
      return  p ? new(p) ::TArtAnaGate : new ::TArtAnaGate;
   }
   static void *newArray_TArtAnaGate(Long_t nElements, void *p) {
      return p ? new(p) ::TArtAnaGate[nElements] : new ::TArtAnaGate[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtAnaGate(void *p) {
      delete (static_cast<::TArtAnaGate*>(p));
   }
   static void deleteArray_TArtAnaGate(void *p) {
      delete [] (static_cast<::TArtAnaGate*>(p));
   }
   static void destruct_TArtAnaGate(void *p) {
      typedef ::TArtAnaGate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtAnaGate

//______________________________________________________________________________
void TArtAnaFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtAnaFile(void *p) {
      delete (static_cast<::TArtAnaFile*>(p));
   }
   static void deleteArray_TArtAnaFile(void *p) {
      delete [] (static_cast<::TArtAnaFile*>(p));
   }
   static void destruct_TArtAnaFile(void *p) {
      typedef ::TArtAnaFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtAnaFile

//______________________________________________________________________________
void TAlEncBranch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncBranch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncBranch::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncBranch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncBranch(void *p) {
      return  p ? new(p) ::TAlEncBranch : new ::TAlEncBranch;
   }
   static void *newArray_TAlEncBranch(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncBranch[nElements] : new ::TAlEncBranch[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncBranch(void *p) {
      delete (static_cast<::TAlEncBranch*>(p));
   }
   static void deleteArray_TAlEncBranch(void *p) {
      delete [] (static_cast<::TAlEncBranch*>(p));
   }
   static void destruct_TAlEncBranch(void *p) {
      typedef ::TAlEncBranch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncBranch

//______________________________________________________________________________
void TAlEncFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAlEncFactory(void *p) {
      delete (static_cast<::TAlEncFactory*>(p));
   }
   static void deleteArray_TAlEncFactory(void *p) {
      delete [] (static_cast<::TAlEncFactory*>(p));
   }
   static void destruct_TAlEncFactory(void *p) {
      typedef ::TAlEncFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncFactory

//______________________________________________________________________________
void TAlEncFillTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncFillTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncFillTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncFillTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncFillTree(void *p) {
      return  p ? new(p) ::TAlEncFillTree : new ::TAlEncFillTree;
   }
   static void *newArray_TAlEncFillTree(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncFillTree[nElements] : new ::TAlEncFillTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncFillTree(void *p) {
      delete (static_cast<::TAlEncFillTree*>(p));
   }
   static void deleteArray_TAlEncFillTree(void *p) {
      delete [] (static_cast<::TAlEncFillTree*>(p));
   }
   static void destruct_TAlEncFillTree(void *p) {
      typedef ::TAlEncFillTree current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncFillTree

//______________________________________________________________________________
void TAlEncGate::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncGate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncGate::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncGate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncGate(void *p) {
      return  p ? new(p) ::TAlEncGate : new ::TAlEncGate;
   }
   static void *newArray_TAlEncGate(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncGate[nElements] : new ::TAlEncGate[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncGate(void *p) {
      delete (static_cast<::TAlEncGate*>(p));
   }
   static void deleteArray_TAlEncGate(void *p) {
      delete [] (static_cast<::TAlEncGate*>(p));
   }
   static void destruct_TAlEncGate(void *p) {
      typedef ::TAlEncGate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncGate

//______________________________________________________________________________
void TAlEncHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncHist(void *p) {
      return  p ? new(p) ::TAlEncHist : new ::TAlEncHist;
   }
   static void *newArray_TAlEncHist(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncHist[nElements] : new ::TAlEncHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncHist(void *p) {
      delete (static_cast<::TAlEncHist*>(p));
   }
   static void deleteArray_TAlEncHist(void *p) {
      delete [] (static_cast<::TAlEncHist*>(p));
   }
   static void destruct_TAlEncHist(void *p) {
      typedef ::TAlEncHist current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncHist

//______________________________________________________________________________
void TAlEncPrint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncPrint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncPrint::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncPrint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncPrint(void *p) {
      return  p ? new(p) ::TAlEncPrint : new ::TAlEncPrint;
   }
   static void *newArray_TAlEncPrint(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncPrint[nElements] : new ::TAlEncPrint[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncPrint(void *p) {
      delete (static_cast<::TAlEncPrint*>(p));
   }
   static void deleteArray_TAlEncPrint(void *p) {
      delete [] (static_cast<::TAlEncPrint*>(p));
   }
   static void destruct_TAlEncPrint(void *p) {
      typedef ::TAlEncPrint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncPrint

//______________________________________________________________________________
void TAlEncStop::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlEncStop.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlEncStop::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlEncStop::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlEncStop(void *p) {
      return  p ? new(p) ::TAlEncStop : new ::TAlEncStop;
   }
   static void *newArray_TAlEncStop(Long_t nElements, void *p) {
      return p ? new(p) ::TAlEncStop[nElements] : new ::TAlEncStop[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlEncStop(void *p) {
      delete (static_cast<::TAlEncStop*>(p));
   }
   static void deleteArray_TAlEncStop(void *p) {
      delete [] (static_cast<::TAlEncStop*>(p));
   }
   static void destruct_TAlEncStop(void *p) {
      typedef ::TAlEncStop current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlEncStop

//______________________________________________________________________________
void TAlRawDataExample::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAlRawDataExample.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAlRawDataExample::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAlRawDataExample::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAlRawDataExample(void *p) {
      return  p ? new(p) ::TAlRawDataExample : new ::TAlRawDataExample;
   }
   static void *newArray_TAlRawDataExample(Long_t nElements, void *p) {
      return p ? new(p) ::TAlRawDataExample[nElements] : new ::TAlRawDataExample[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAlRawDataExample(void *p) {
      delete (static_cast<::TAlRawDataExample*>(p));
   }
   static void deleteArray_TAlRawDataExample(void *p) {
      delete [] (static_cast<::TAlRawDataExample*>(p));
   }
   static void destruct_TAlRawDataExample(void *p) {
      typedef ::TAlRawDataExample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAlRawDataExample

//______________________________________________________________________________
void TArtAnaLoopManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaLoopManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaLoopManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaLoopManager::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtAnaLoopManager

//______________________________________________________________________________
void TArtAnaLoopStatic::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtAnaLoopStatic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtAnaLoopStatic::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtAnaLoopStatic::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TArtAnaLoopStatic

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETArtValIndexValgR_Dictionary();
   static void vectorlETArtValIndexValgR_TClassManip(TClass*);
   static void *new_vectorlETArtValIndexValgR(void *p = nullptr);
   static void *newArray_vectorlETArtValIndexValgR(Long_t size, void *p);
   static void delete_vectorlETArtValIndexValgR(void *p);
   static void deleteArray_vectorlETArtValIndexValgR(void *p);
   static void destruct_vectorlETArtValIndexValgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtValIndexVal>*)
   {
      vector<TArtValIndexVal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtValIndexVal>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtValIndexVal>", -2, "vector", 389,
                  typeid(vector<TArtValIndexVal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtValIndexValgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtValIndexVal>) );
      instance.SetNew(&new_vectorlETArtValIndexValgR);
      instance.SetNewArray(&newArray_vectorlETArtValIndexValgR);
      instance.SetDelete(&delete_vectorlETArtValIndexValgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtValIndexValgR);
      instance.SetDestructor(&destruct_vectorlETArtValIndexValgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtValIndexVal> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtValIndexVal>","std::vector<TArtValIndexVal, std::allocator<TArtValIndexVal> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtValIndexVal>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtValIndexValgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtValIndexVal>*>(nullptr))->GetClass();
      vectorlETArtValIndexValgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtValIndexValgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtValIndexValgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtValIndexVal> : new vector<TArtValIndexVal>;
   }
   static void *newArray_vectorlETArtValIndexValgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtValIndexVal>[nElements] : new vector<TArtValIndexVal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtValIndexValgR(void *p) {
      delete (static_cast<vector<TArtValIndexVal>*>(p));
   }
   static void deleteArray_vectorlETArtValIndexValgR(void *p) {
      delete [] (static_cast<vector<TArtValIndexVal>*>(p));
   }
   static void destruct_vectorlETArtValIndexValgR(void *p) {
      typedef vector<TArtValIndexVal> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtValIndexVal>

namespace ROOT {
   static TClass *vectorlETArtValIndexgR_Dictionary();
   static void vectorlETArtValIndexgR_TClassManip(TClass*);
   static void *new_vectorlETArtValIndexgR(void *p = nullptr);
   static void *newArray_vectorlETArtValIndexgR(Long_t size, void *p);
   static void delete_vectorlETArtValIndexgR(void *p);
   static void deleteArray_vectorlETArtValIndexgR(void *p);
   static void destruct_vectorlETArtValIndexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtValIndex>*)
   {
      vector<TArtValIndex> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtValIndex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtValIndex>", -2, "vector", 389,
                  typeid(vector<TArtValIndex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtValIndexgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtValIndex>) );
      instance.SetNew(&new_vectorlETArtValIndexgR);
      instance.SetNewArray(&newArray_vectorlETArtValIndexgR);
      instance.SetDelete(&delete_vectorlETArtValIndexgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtValIndexgR);
      instance.SetDestructor(&destruct_vectorlETArtValIndexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtValIndex> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtValIndex>","std::vector<TArtValIndex, std::allocator<TArtValIndex> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtValIndex>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtValIndexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtValIndex>*>(nullptr))->GetClass();
      vectorlETArtValIndexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtValIndexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtValIndexgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtValIndex> : new vector<TArtValIndex>;
   }
   static void *newArray_vectorlETArtValIndexgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtValIndex>[nElements] : new vector<TArtValIndex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtValIndexgR(void *p) {
      delete (static_cast<vector<TArtValIndex>*>(p));
   }
   static void deleteArray_vectorlETArtValIndexgR(void *p) {
      delete [] (static_cast<vector<TArtValIndex>*>(p));
   }
   static void destruct_vectorlETArtValIndexgR(void *p) {
      typedef vector<TArtValIndex> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtValIndex>

namespace ROOT {
   static TClass *maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary();
   static void maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlETArtValIndexgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlETArtValIndexgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlETArtValIndexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<TArtValIndex> >*)
   {
      map<string,vector<TArtValIndex> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<TArtValIndex> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<TArtValIndex> >", -2, "map", 100,
                  typeid(map<string,vector<TArtValIndex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<TArtValIndex> >) );
      instance.SetNew(&new_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlETArtValIndexgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<TArtValIndex> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<TArtValIndex> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<TArtValIndex, std::allocator<TArtValIndex> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<TArtValIndex, std::allocator<TArtValIndex> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<TArtValIndex> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlETArtValIndexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<TArtValIndex> >*>(nullptr))->GetClass();
      maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlETArtValIndexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<TArtValIndex> > : new map<string,vector<TArtValIndex> >;
   }
   static void *newArray_maplEstringcOvectorlETArtValIndexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<TArtValIndex> >[nElements] : new map<string,vector<TArtValIndex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      delete (static_cast<map<string,vector<TArtValIndex> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<TArtValIndex> >*>(p));
   }
   static void destruct_maplEstringcOvectorlETArtValIndexgRsPgR(void *p) {
      typedef map<string,vector<TArtValIndex> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<TArtValIndex> >

namespace ROOT {
   static TClass *maplEintcOvectorlETArtValIndexgRsPgR_Dictionary();
   static void maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlETArtValIndexgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlETArtValIndexgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlETArtValIndexgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlETArtValIndexgRsPgR(void *p);
   static void destruct_maplEintcOvectorlETArtValIndexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<TArtValIndex> >*)
   {
      map<int,vector<TArtValIndex> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<TArtValIndex> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<TArtValIndex> >", -2, "map", 100,
                  typeid(map<int,vector<TArtValIndex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlETArtValIndexgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<TArtValIndex> >) );
      instance.SetNew(&new_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlETArtValIndexgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<TArtValIndex> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,vector<TArtValIndex> >","std::map<int, std::vector<TArtValIndex, std::allocator<TArtValIndex> >, std::less<int>, std::allocator<std::pair<int const, std::vector<TArtValIndex, std::allocator<TArtValIndex> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,vector<TArtValIndex> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlETArtValIndexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,vector<TArtValIndex> >*>(nullptr))->GetClass();
      maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlETArtValIndexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<TArtValIndex> > : new map<int,vector<TArtValIndex> >;
   }
   static void *newArray_maplEintcOvectorlETArtValIndexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<TArtValIndex> >[nElements] : new map<int,vector<TArtValIndex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      delete (static_cast<map<int,vector<TArtValIndex> >*>(p));
   }
   static void deleteArray_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      delete [] (static_cast<map<int,vector<TArtValIndex> >*>(p));
   }
   static void destruct_maplEintcOvectorlETArtValIndexgRsPgR(void *p) {
      typedef map<int,vector<TArtValIndex> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<TArtValIndex> >

namespace ROOT {
   static TClass *maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary();
   static void maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);
   static void destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<int,map<int,double> > >*)
   {
      map<int,map<int,map<int,double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<int,map<int,double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<int,map<int,double> > >", -2, "map", 100,
                  typeid(map<int,map<int,map<int,double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<int,map<int,double> > >) );
      instance.SetNew(&new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<int,map<int,double> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,map<int,map<int,double> > >","std::map<int, std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,map<int,map<int,double> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,map<int,map<int,double> > >*>(nullptr))->GetClass();
      maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,map<int,map<int,double> > > : new map<int,map<int,map<int,double> > >;
   }
   static void *newArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,map<int,map<int,double> > >[nElements] : new map<int,map<int,map<int,double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      delete (static_cast<map<int,map<int,map<int,double> > >*>(p));
   }
   static void deleteArray_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      delete [] (static_cast<map<int,map<int,map<int,double> > >*>(p));
   }
   static void destruct_maplEintcOmaplEintcOmaplEintcOdoublegRsPgRsPgR(void *p) {
      typedef map<int,map<int,map<int,double> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,map<int,map<int,double> > >

namespace ROOT {
   static TClass *maplEintcOmaplEintcOdoublegRsPgR_Dictionary();
   static void maplEintcOmaplEintcOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEintcOdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOmaplEintcOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEintcOdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEintcOdoublegRsPgR(void *p);
   static void destruct_maplEintcOmaplEintcOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<int,double> >*)
   {
      map<int,map<int,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<int,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<int,double> >", -2, "map", 100,
                  typeid(map<int,map<int,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEintcOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<int,double> >) );
      instance.SetNew(&new_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEintcOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEintcOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<int,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,map<int,double> >","std::map<int, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,map<int,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEintcOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,map<int,double> >*>(nullptr))->GetClass();
      maplEintcOmaplEintcOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEintcOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,map<int,double> > : new map<int,map<int,double> >;
   }
   static void *newArray_maplEintcOmaplEintcOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,map<int,double> >[nElements] : new map<int,map<int,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      delete (static_cast<map<int,map<int,double> >*>(p));
   }
   static void deleteArray_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      delete [] (static_cast<map<int,map<int,double> >*>(p));
   }
   static void destruct_maplEintcOmaplEintcOdoublegRsPgR(void *p) {
      typedef map<int,map<int,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,map<int,double> >

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = nullptr);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 100,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,double>","std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr))->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete (static_cast<map<int,double>*>(p));
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] (static_cast<map<int,double>*>(p));
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOTArtAnaGatemUgR_Dictionary();
   static void maplEintcOTArtAnaGatemUgR_TClassManip(TClass*);
   static void *new_maplEintcOTArtAnaGatemUgR(void *p = nullptr);
   static void *newArray_maplEintcOTArtAnaGatemUgR(Long_t size, void *p);
   static void delete_maplEintcOTArtAnaGatemUgR(void *p);
   static void deleteArray_maplEintcOTArtAnaGatemUgR(void *p);
   static void destruct_maplEintcOTArtAnaGatemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TArtAnaGate*>*)
   {
      map<int,TArtAnaGate*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TArtAnaGate*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TArtAnaGate*>", -2, "map", 100,
                  typeid(map<int,TArtAnaGate*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTArtAnaGatemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TArtAnaGate*>) );
      instance.SetNew(&new_maplEintcOTArtAnaGatemUgR);
      instance.SetNewArray(&newArray_maplEintcOTArtAnaGatemUgR);
      instance.SetDelete(&delete_maplEintcOTArtAnaGatemUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTArtAnaGatemUgR);
      instance.SetDestructor(&destruct_maplEintcOTArtAnaGatemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TArtAnaGate*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,TArtAnaGate*>","std::map<int, TArtAnaGate*, std::less<int>, std::allocator<std::pair<int const, TArtAnaGate*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,TArtAnaGate*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTArtAnaGatemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,TArtAnaGate*>*>(nullptr))->GetClass();
      maplEintcOTArtAnaGatemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTArtAnaGatemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTArtAnaGatemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TArtAnaGate*> : new map<int,TArtAnaGate*>;
   }
   static void *newArray_maplEintcOTArtAnaGatemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,TArtAnaGate*>[nElements] : new map<int,TArtAnaGate*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTArtAnaGatemUgR(void *p) {
      delete (static_cast<map<int,TArtAnaGate*>*>(p));
   }
   static void deleteArray_maplEintcOTArtAnaGatemUgR(void *p) {
      delete [] (static_cast<map<int,TArtAnaGate*>*>(p));
   }
   static void destruct_maplEintcOTArtAnaGatemUgR(void *p) {
      typedef map<int,TArtAnaGate*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,TArtAnaGate*>

namespace {
  void TriggerDictionaryInitialization_analoop_dict_Impl() {
    static const char* headers[] = {
"include/TAlEncBranch.hh",
"include/TAlEncFactory.hh",
"include/TAlEncFillTree.hh",
"include/TAlEncGate.hh",
"include/TAlEncHist.hh",
"include/TAlEncPrint.hh",
"include/TAlEncStop.hh",
"include/TAlEncSub.hh",
"include/TAlRawDataExample.hh",
"include/TArtAnaClock.hh",
"include/TArtAnaFile.hh",
"include/TArtAnaLoop.hh",
"include/TArtAnaLoopManager.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"../../Core/include",
"../../Nadeko/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/AnaLoop/Core/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "analoop_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TAlEncSub.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TAlEncSub;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtValIndex;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtValIndexVal;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtValIndexValArray;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtValMap;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtAnaGate;
class __attribute__((annotate("$clingAutoload$TArtAnaFile.hh")))  __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TArtAnaFile;
class __attribute__((annotate("$clingAutoload$include/TAlEncBranch.hh")))  TAlEncBranch;
class __attribute__((annotate("$clingAutoload$include/TAlEncFactory.hh")))  TAlEncFactory;
class __attribute__((annotate("$clingAutoload$include/TAlEncFillTree.hh")))  TAlEncFillTree;
class __attribute__((annotate("$clingAutoload$include/TAlEncGate.hh")))  TAlEncGate;
class __attribute__((annotate("$clingAutoload$include/TAlEncHist.hh")))  TAlEncHist;
class __attribute__((annotate("$clingAutoload$include/TAlEncPrint.hh")))  TAlEncPrint;
class __attribute__((annotate("$clingAutoload$include/TAlEncStop.hh")))  TAlEncStop;
class __attribute__((annotate("$clingAutoload$include/TAlRawDataExample.hh")))  TAlRawDataExample;
class __attribute__((annotate("$clingAutoload$include/TArtAnaLoopManager.hh")))  TArtAnaLoopManager;
class __attribute__((annotate("$clingAutoload$include/TArtAnaLoopManager.hh")))  TArtAnaLoopStatic;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "analoop_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TAlEncBranch.hh"
#include "include/TAlEncFactory.hh"
#include "include/TAlEncFillTree.hh"
#include "include/TAlEncGate.hh"
#include "include/TAlEncHist.hh"
#include "include/TAlEncPrint.hh"
#include "include/TAlEncStop.hh"
#include "include/TAlEncSub.hh"
#include "include/TAlRawDataExample.hh"
#include "include/TArtAnaClock.hh"
#include "include/TArtAnaFile.hh"
#include "include/TArtAnaLoop.hh"
#include "include/TArtAnaLoopManager.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAlEncBranch", payloadCode, "@",
"TAlEncFactory", payloadCode, "@",
"TAlEncFillTree", payloadCode, "@",
"TAlEncGate", payloadCode, "@",
"TAlEncHist", payloadCode, "@",
"TAlEncPrint", payloadCode, "@",
"TAlEncStop", payloadCode, "@",
"TAlEncSub", payloadCode, "@",
"TAlRawDataExample", payloadCode, "@",
"TArtAnaFile", payloadCode, "@",
"TArtAnaGate", payloadCode, "@",
"TArtAnaLoopManager", payloadCode, "@",
"TArtAnaLoopStatic", payloadCode, "@",
"TArtValIndex", payloadCode, "@",
"TArtValIndexVal", payloadCode, "@",
"TArtValIndexValArray", payloadCode, "@",
"TArtValMap", payloadCode, "@",
"book", payloadCode, "@",
"cdraw", payloadCode, "@",
"clear", payloadCode, "@",
"end", payloadCode, "@",
"hcut", payloadCode, "@",
"join", payloadCode, "@",
"lc", payloadCode, "@",
"lv", payloadCode, "@",
"next", payloadCode, "@",
"pop", payloadCode, "@",
"push", payloadCode, "@",
"spush", payloadCode, "@",
"start", payloadCode, "@",
"status", payloadCode, "@",
"stop", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("analoop_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_analoop_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_analoop_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_analoop_dict() {
  TriggerDictionaryInitialization_analoop_dict_Impl();
}
