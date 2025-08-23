// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME anacore_dict
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
#include "include/TArtCore.hh"
#include "include/TArtDataObject.hh"
#include "include/TArtDataSource.hh"
#include "include/TArtDecoder.hh"
#include "include/TArtDecoderA3100.hh"
#include "include/TArtDecoderA3400.hh"
#include "include/TArtDecoderAD413A.hh"
#include "include/TArtDecoderAMTTDC.hh"
#include "include/TArtDecoderBigEndianV7XX.hh"
#include "include/TArtDecoderCTM405.hh"
#include "include/TArtDecoderDSP.hh"
#include "include/TArtDecoderFactory.hh"
#include "include/TArtDecoderFixed16.hh"
#include "include/TArtDecoderFixed24.hh"
#include "include/TArtDecoderFixed32.hh"
#include "include/TArtDecoderHINP.hh"
#include "include/TArtDecoderL3377d.hh"
#include "include/TArtDecoderLUPO.hh"
#include "include/TArtDecoderMADC32.hh"
#include "include/TArtDecoderMDPP16.hh"
#include "include/TArtDecoderMQDC32.hh"
#include "include/TArtDecoderMTDC32.hh"
#include "include/TArtDecoderNeulandTS.hh"
#include "include/TArtDecoderP716X.hh"
#include "include/TArtDecoderP716XZ.hh"
#include "include/TArtDecoderRICHADCM.hh"
#include "include/TArtDecoderSIS3301.hh"
#include "include/TArtDecoderTacquila.hh"
#include "include/TArtDecoderV1190.hh"
#include "include/TArtDecoderV1190C.hh"
#include "include/TArtDecoderV1290.hh"
#include "include/TArtDecoderV1740.hh"
#include "include/TArtDecoderV550.hh"
#include "include/TArtDecoderV767.hh"
#include "include/TArtDecoderV7XX.hh"
#include "include/TArtDecoderV830.hh"
#include "include/TArtDecoderVmeEasyroc.hh"
#include "include/TArtEventInfo.hh"
#include "include/TArtEventStore.hh"
#include "include/TArtFileDataSource.hh"
#include "include/TArtMap.hh"
#include "include/TArtMath.hh"
#include "include/TArtParser.hh"
#include "include/TArtParserFactory.hh"
#include "include/TArtParserRDF.hh"
#include "include/TArtParserRIDF.hh"
#include "include/TArtRawDataObject.hh"
#include "include/TArtRawEventObject.hh"
#include "include/TArtRawFADCDataObject.hh"
#include "include/TArtRawScalerObject.hh"
#include "include/TArtRawSegmentObject.hh"
#include "include/TArtRawTacquilaDataObject.hh"
#include "include/TArtReconstruction.hh"
#include "include/TArtRunInfo.hh"
#include "include/TArtSemaphore.hh"
#include "include/TArtSharedMemory.hh"
#include "include/TArtSharedMemoryDataSource.hh"
#include "include/TArtStoreManager.hh"
#include "include/TArtStreamingDataSource.hh"
#include "include/TArtUtil.hh"
#include "include/segidlist.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TArtCore(void *p = nullptr);
   static void *newArray_TArtCore(Long_t size, void *p);
   static void delete_TArtCore(void *p);
   static void deleteArray_TArtCore(void *p);
   static void destruct_TArtCore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtCore*)
   {
      ::TArtCore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtCore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtCore", ::TArtCore::Class_Version(), "TArtCore.hh", 18,
                  typeid(::TArtCore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtCore::Dictionary, isa_proxy, 4,
                  sizeof(::TArtCore) );
      instance.SetNew(&new_TArtCore);
      instance.SetNewArray(&newArray_TArtCore);
      instance.SetDelete(&delete_TArtCore);
      instance.SetDeleteArray(&deleteArray_TArtCore);
      instance.SetDestructor(&destruct_TArtCore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtCore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtCore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtCore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtDataObject(void *p = nullptr);
   static void *newArray_TArtDataObject(Long_t size, void *p);
   static void delete_TArtDataObject(void *p);
   static void deleteArray_TArtDataObject(void *p);
   static void destruct_TArtDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDataObject*)
   {
      ::TArtDataObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtDataObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtDataObject", ::TArtDataObject::Class_Version(), "TArtDataObject.hh", 7,
                  typeid(::TArtDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtDataObject) );
      instance.SetNew(&new_TArtDataObject);
      instance.SetNewArray(&newArray_TArtDataObject);
      instance.SetDelete(&delete_TArtDataObject);
      instance.SetDeleteArray(&deleteArray_TArtDataObject);
      instance.SetDestructor(&destruct_TArtDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDataObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDataObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDataObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDataSource_Dictionary();
   static void TArtDataSource_TClassManip(TClass*);
   static void delete_TArtDataSource(void *p);
   static void deleteArray_TArtDataSource(void *p);
   static void destruct_TArtDataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDataSource*)
   {
      ::TArtDataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDataSource));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDataSource", "TArtDataSource.hh", 53,
                  typeid(::TArtDataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDataSource_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDataSource) );
      instance.SetDelete(&delete_TArtDataSource);
      instance.SetDeleteArray(&deleteArray_TArtDataSource);
      instance.SetDestructor(&destruct_TArtDataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDataSource_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDataSource*>(nullptr))->GetClass();
      TArtDataSource_TClassManip(theClass);
   return theClass;
   }

   static void TArtDataSource_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawDataObject(void *p = nullptr);
   static void *newArray_TArtRawDataObject(Long_t size, void *p);
   static void delete_TArtRawDataObject(void *p);
   static void deleteArray_TArtRawDataObject(void *p);
   static void destruct_TArtRawDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawDataObject*)
   {
      ::TArtRawDataObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawDataObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawDataObject", ::TArtRawDataObject::Class_Version(), "TArtRawDataObject.hh", 6,
                  typeid(::TArtRawDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawDataObject) );
      instance.SetNew(&new_TArtRawDataObject);
      instance.SetNewArray(&newArray_TArtRawDataObject);
      instance.SetDelete(&delete_TArtRawDataObject);
      instance.SetDeleteArray(&deleteArray_TArtRawDataObject);
      instance.SetDestructor(&destruct_TArtRawDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawDataObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawDataObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawDataObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawFADCDataObject(void *p = nullptr);
   static void *newArray_TArtRawFADCDataObject(Long_t size, void *p);
   static void delete_TArtRawFADCDataObject(void *p);
   static void deleteArray_TArtRawFADCDataObject(void *p);
   static void destruct_TArtRawFADCDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawFADCDataObject*)
   {
      ::TArtRawFADCDataObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawFADCDataObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawFADCDataObject", ::TArtRawFADCDataObject::Class_Version(), "TArtRawFADCDataObject.hh", 7,
                  typeid(::TArtRawFADCDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawFADCDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawFADCDataObject) );
      instance.SetNew(&new_TArtRawFADCDataObject);
      instance.SetNewArray(&newArray_TArtRawFADCDataObject);
      instance.SetDelete(&delete_TArtRawFADCDataObject);
      instance.SetDeleteArray(&deleteArray_TArtRawFADCDataObject);
      instance.SetDestructor(&destruct_TArtRawFADCDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawFADCDataObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawFADCDataObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawFADCDataObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawTacquilaDataObject(void *p = nullptr);
   static void *newArray_TArtRawTacquilaDataObject(Long_t size, void *p);
   static void delete_TArtRawTacquilaDataObject(void *p);
   static void deleteArray_TArtRawTacquilaDataObject(void *p);
   static void destruct_TArtRawTacquilaDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawTacquilaDataObject*)
   {
      ::TArtRawTacquilaDataObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawTacquilaDataObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawTacquilaDataObject", ::TArtRawTacquilaDataObject::Class_Version(), "TArtRawTacquilaDataObject.hh", 7,
                  typeid(::TArtRawTacquilaDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawTacquilaDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawTacquilaDataObject) );
      instance.SetNew(&new_TArtRawTacquilaDataObject);
      instance.SetNewArray(&newArray_TArtRawTacquilaDataObject);
      instance.SetDelete(&delete_TArtRawTacquilaDataObject);
      instance.SetDeleteArray(&deleteArray_TArtRawTacquilaDataObject);
      instance.SetDestructor(&destruct_TArtRawTacquilaDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawTacquilaDataObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawTacquilaDataObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawTacquilaDataObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawSegmentObject(void *p = nullptr);
   static void *newArray_TArtRawSegmentObject(Long_t size, void *p);
   static void delete_TArtRawSegmentObject(void *p);
   static void deleteArray_TArtRawSegmentObject(void *p);
   static void destruct_TArtRawSegmentObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawSegmentObject*)
   {
      ::TArtRawSegmentObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawSegmentObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawSegmentObject", ::TArtRawSegmentObject::Class_Version(), "TArtRawSegmentObject.hh", 15,
                  typeid(::TArtRawSegmentObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawSegmentObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawSegmentObject) );
      instance.SetNew(&new_TArtRawSegmentObject);
      instance.SetNewArray(&newArray_TArtRawSegmentObject);
      instance.SetDelete(&delete_TArtRawSegmentObject);
      instance.SetDeleteArray(&deleteArray_TArtRawSegmentObject);
      instance.SetDestructor(&destruct_TArtRawSegmentObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawSegmentObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawSegmentObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawSegmentObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoder_Dictionary();
   static void TArtDecoder_TClassManip(TClass*);
   static void delete_TArtDecoder(void *p);
   static void deleteArray_TArtDecoder(void *p);
   static void destruct_TArtDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoder*)
   {
      ::TArtDecoder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoder));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoder", "TArtDecoder.hh", 18,
                  typeid(::TArtDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoder_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoder) );
      instance.SetDelete(&delete_TArtDecoder);
      instance.SetDeleteArray(&deleteArray_TArtDecoder);
      instance.SetDestructor(&destruct_TArtDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoder*>(nullptr))->GetClass();
      TArtDecoder_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderA3100_Dictionary();
   static void TArtDecoderA3100_TClassManip(TClass*);
   static void delete_TArtDecoderA3100(void *p);
   static void deleteArray_TArtDecoderA3100(void *p);
   static void destruct_TArtDecoderA3100(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderA3100*)
   {
      ::TArtDecoderA3100 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderA3100));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderA3100", "TArtDecoderA3100.hh", 14,
                  typeid(::TArtDecoderA3100), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderA3100_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderA3100) );
      instance.SetDelete(&delete_TArtDecoderA3100);
      instance.SetDeleteArray(&deleteArray_TArtDecoderA3100);
      instance.SetDestructor(&destruct_TArtDecoderA3100);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderA3100*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderA3100*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderA3100*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderA3100_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderA3100*>(nullptr))->GetClass();
      TArtDecoderA3100_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderA3100_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderA3400_Dictionary();
   static void TArtDecoderA3400_TClassManip(TClass*);
   static void delete_TArtDecoderA3400(void *p);
   static void deleteArray_TArtDecoderA3400(void *p);
   static void destruct_TArtDecoderA3400(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderA3400*)
   {
      ::TArtDecoderA3400 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderA3400));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderA3400", "TArtDecoderA3400.hh", 14,
                  typeid(::TArtDecoderA3400), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderA3400_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderA3400) );
      instance.SetDelete(&delete_TArtDecoderA3400);
      instance.SetDeleteArray(&deleteArray_TArtDecoderA3400);
      instance.SetDestructor(&destruct_TArtDecoderA3400);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderA3400*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderA3400*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderA3400*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderA3400_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderA3400*>(nullptr))->GetClass();
      TArtDecoderA3400_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderA3400_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderAD413A_Dictionary();
   static void TArtDecoderAD413A_TClassManip(TClass*);
   static void delete_TArtDecoderAD413A(void *p);
   static void deleteArray_TArtDecoderAD413A(void *p);
   static void destruct_TArtDecoderAD413A(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderAD413A*)
   {
      ::TArtDecoderAD413A *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderAD413A));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderAD413A", "TArtDecoderAD413A.hh", 14,
                  typeid(::TArtDecoderAD413A), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderAD413A_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderAD413A) );
      instance.SetDelete(&delete_TArtDecoderAD413A);
      instance.SetDeleteArray(&deleteArray_TArtDecoderAD413A);
      instance.SetDestructor(&destruct_TArtDecoderAD413A);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderAD413A*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderAD413A*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderAD413A*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderAD413A_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderAD413A*>(nullptr))->GetClass();
      TArtDecoderAD413A_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderAD413A_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderAMTTDC_Dictionary();
   static void TArtDecoderAMTTDC_TClassManip(TClass*);
   static void delete_TArtDecoderAMTTDC(void *p);
   static void deleteArray_TArtDecoderAMTTDC(void *p);
   static void destruct_TArtDecoderAMTTDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderAMTTDC*)
   {
      ::TArtDecoderAMTTDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderAMTTDC));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderAMTTDC", "TArtDecoderAMTTDC.hh", 5,
                  typeid(::TArtDecoderAMTTDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderAMTTDC_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderAMTTDC) );
      instance.SetDelete(&delete_TArtDecoderAMTTDC);
      instance.SetDeleteArray(&deleteArray_TArtDecoderAMTTDC);
      instance.SetDestructor(&destruct_TArtDecoderAMTTDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderAMTTDC*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderAMTTDC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderAMTTDC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderAMTTDC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderAMTTDC*>(nullptr))->GetClass();
      TArtDecoderAMTTDC_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderAMTTDC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderBigEndianV7XX_Dictionary();
   static void TArtDecoderBigEndianV7XX_TClassManip(TClass*);
   static void delete_TArtDecoderBigEndianV7XX(void *p);
   static void deleteArray_TArtDecoderBigEndianV7XX(void *p);
   static void destruct_TArtDecoderBigEndianV7XX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderBigEndianV7XX*)
   {
      ::TArtDecoderBigEndianV7XX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderBigEndianV7XX));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderBigEndianV7XX", "TArtDecoderBigEndianV7XX.hh", 7,
                  typeid(::TArtDecoderBigEndianV7XX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderBigEndianV7XX_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderBigEndianV7XX) );
      instance.SetDelete(&delete_TArtDecoderBigEndianV7XX);
      instance.SetDeleteArray(&deleteArray_TArtDecoderBigEndianV7XX);
      instance.SetDestructor(&destruct_TArtDecoderBigEndianV7XX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderBigEndianV7XX*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderBigEndianV7XX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderBigEndianV7XX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderBigEndianV7XX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderBigEndianV7XX*>(nullptr))->GetClass();
      TArtDecoderBigEndianV7XX_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderBigEndianV7XX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderCTM405_Dictionary();
   static void TArtDecoderCTM405_TClassManip(TClass*);
   static void delete_TArtDecoderCTM405(void *p);
   static void deleteArray_TArtDecoderCTM405(void *p);
   static void destruct_TArtDecoderCTM405(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderCTM405*)
   {
      ::TArtDecoderCTM405 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderCTM405));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderCTM405", "TArtDecoderCTM405.hh", 14,
                  typeid(::TArtDecoderCTM405), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderCTM405_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderCTM405) );
      instance.SetDelete(&delete_TArtDecoderCTM405);
      instance.SetDeleteArray(&deleteArray_TArtDecoderCTM405);
      instance.SetDestructor(&destruct_TArtDecoderCTM405);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderCTM405*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderCTM405*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderCTM405*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderCTM405_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderCTM405*>(nullptr))->GetClass();
      TArtDecoderCTM405_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderCTM405_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderDSP_Dictionary();
   static void TArtDecoderDSP_TClassManip(TClass*);
   static void delete_TArtDecoderDSP(void *p);
   static void deleteArray_TArtDecoderDSP(void *p);
   static void destruct_TArtDecoderDSP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderDSP*)
   {
      ::TArtDecoderDSP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderDSP));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderDSP", "TArtDecoderDSP.hh", 9,
                  typeid(::TArtDecoderDSP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderDSP_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderDSP) );
      instance.SetDelete(&delete_TArtDecoderDSP);
      instance.SetDeleteArray(&deleteArray_TArtDecoderDSP);
      instance.SetDestructor(&destruct_TArtDecoderDSP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderDSP*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderDSP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderDSP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderDSP_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderDSP*>(nullptr))->GetClass();
      TArtDecoderDSP_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderDSP_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderFactory_Dictionary();
   static void TArtDecoderFactory_TClassManip(TClass*);
   static void delete_TArtDecoderFactory(void *p);
   static void deleteArray_TArtDecoderFactory(void *p);
   static void destruct_TArtDecoderFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderFactory*)
   {
      ::TArtDecoderFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderFactory));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderFactory", "TArtDecoderFactory.hh", 14,
                  typeid(::TArtDecoderFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderFactory_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderFactory) );
      instance.SetDelete(&delete_TArtDecoderFactory);
      instance.SetDeleteArray(&deleteArray_TArtDecoderFactory);
      instance.SetDestructor(&destruct_TArtDecoderFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFactory*>(nullptr))->GetClass();
      TArtDecoderFactory_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderFixed16_Dictionary();
   static void TArtDecoderFixed16_TClassManip(TClass*);
   static void delete_TArtDecoderFixed16(void *p);
   static void deleteArray_TArtDecoderFixed16(void *p);
   static void destruct_TArtDecoderFixed16(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderFixed16*)
   {
      ::TArtDecoderFixed16 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderFixed16));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderFixed16", "TArtDecoderFixed16.hh", 14,
                  typeid(::TArtDecoderFixed16), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderFixed16_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderFixed16) );
      instance.SetDelete(&delete_TArtDecoderFixed16);
      instance.SetDeleteArray(&deleteArray_TArtDecoderFixed16);
      instance.SetDestructor(&destruct_TArtDecoderFixed16);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderFixed16*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderFixed16*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed16*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderFixed16_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed16*>(nullptr))->GetClass();
      TArtDecoderFixed16_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderFixed16_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderFixed24_Dictionary();
   static void TArtDecoderFixed24_TClassManip(TClass*);
   static void delete_TArtDecoderFixed24(void *p);
   static void deleteArray_TArtDecoderFixed24(void *p);
   static void destruct_TArtDecoderFixed24(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderFixed24*)
   {
      ::TArtDecoderFixed24 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderFixed24));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderFixed24", "TArtDecoderFixed24.hh", 14,
                  typeid(::TArtDecoderFixed24), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderFixed24_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderFixed24) );
      instance.SetDelete(&delete_TArtDecoderFixed24);
      instance.SetDeleteArray(&deleteArray_TArtDecoderFixed24);
      instance.SetDestructor(&destruct_TArtDecoderFixed24);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderFixed24*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderFixed24*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed24*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderFixed24_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed24*>(nullptr))->GetClass();
      TArtDecoderFixed24_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderFixed24_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderFixed32_Dictionary();
   static void TArtDecoderFixed32_TClassManip(TClass*);
   static void delete_TArtDecoderFixed32(void *p);
   static void deleteArray_TArtDecoderFixed32(void *p);
   static void destruct_TArtDecoderFixed32(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderFixed32*)
   {
      ::TArtDecoderFixed32 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderFixed32));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderFixed32", "TArtDecoderFixed32.hh", 9,
                  typeid(::TArtDecoderFixed32), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderFixed32_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderFixed32) );
      instance.SetDelete(&delete_TArtDecoderFixed32);
      instance.SetDeleteArray(&deleteArray_TArtDecoderFixed32);
      instance.SetDestructor(&destruct_TArtDecoderFixed32);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderFixed32*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderFixed32*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed32*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderFixed32_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderFixed32*>(nullptr))->GetClass();
      TArtDecoderFixed32_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderFixed32_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderHINP_Dictionary();
   static void TArtDecoderHINP_TClassManip(TClass*);
   static void delete_TArtDecoderHINP(void *p);
   static void deleteArray_TArtDecoderHINP(void *p);
   static void destruct_TArtDecoderHINP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderHINP*)
   {
      ::TArtDecoderHINP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderHINP));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderHINP", "TArtDecoderHINP.hh", 14,
                  typeid(::TArtDecoderHINP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderHINP_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderHINP) );
      instance.SetDelete(&delete_TArtDecoderHINP);
      instance.SetDeleteArray(&deleteArray_TArtDecoderHINP);
      instance.SetDestructor(&destruct_TArtDecoderHINP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderHINP*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderHINP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderHINP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderHINP_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderHINP*>(nullptr))->GetClass();
      TArtDecoderHINP_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderHINP_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderL3377d_Dictionary();
   static void TArtDecoderL3377d_TClassManip(TClass*);
   static void delete_TArtDecoderL3377d(void *p);
   static void deleteArray_TArtDecoderL3377d(void *p);
   static void destruct_TArtDecoderL3377d(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderL3377d*)
   {
      ::TArtDecoderL3377d *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderL3377d));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderL3377d", "TArtDecoderL3377d.hh", 14,
                  typeid(::TArtDecoderL3377d), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderL3377d_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderL3377d) );
      instance.SetDelete(&delete_TArtDecoderL3377d);
      instance.SetDeleteArray(&deleteArray_TArtDecoderL3377d);
      instance.SetDestructor(&destruct_TArtDecoderL3377d);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderL3377d*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderL3377d*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderL3377d*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderL3377d_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderL3377d*>(nullptr))->GetClass();
      TArtDecoderL3377d_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderL3377d_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderLUPO_Dictionary();
   static void TArtDecoderLUPO_TClassManip(TClass*);
   static void delete_TArtDecoderLUPO(void *p);
   static void deleteArray_TArtDecoderLUPO(void *p);
   static void destruct_TArtDecoderLUPO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderLUPO*)
   {
      ::TArtDecoderLUPO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderLUPO));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderLUPO", "TArtDecoderLUPO.hh", 9,
                  typeid(::TArtDecoderLUPO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderLUPO_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderLUPO) );
      instance.SetDelete(&delete_TArtDecoderLUPO);
      instance.SetDeleteArray(&deleteArray_TArtDecoderLUPO);
      instance.SetDestructor(&destruct_TArtDecoderLUPO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderLUPO*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderLUPO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderLUPO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderLUPO_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderLUPO*>(nullptr))->GetClass();
      TArtDecoderLUPO_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderLUPO_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderMADC32_Dictionary();
   static void TArtDecoderMADC32_TClassManip(TClass*);
   static void delete_TArtDecoderMADC32(void *p);
   static void deleteArray_TArtDecoderMADC32(void *p);
   static void destruct_TArtDecoderMADC32(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderMADC32*)
   {
      ::TArtDecoderMADC32 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderMADC32));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderMADC32", "TArtDecoderMADC32.hh", 14,
                  typeid(::TArtDecoderMADC32), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderMADC32_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderMADC32) );
      instance.SetDelete(&delete_TArtDecoderMADC32);
      instance.SetDeleteArray(&deleteArray_TArtDecoderMADC32);
      instance.SetDestructor(&destruct_TArtDecoderMADC32);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderMADC32*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderMADC32*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMADC32*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderMADC32_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMADC32*>(nullptr))->GetClass();
      TArtDecoderMADC32_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderMADC32_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderMDPP16_Dictionary();
   static void TArtDecoderMDPP16_TClassManip(TClass*);
   static void delete_TArtDecoderMDPP16(void *p);
   static void deleteArray_TArtDecoderMDPP16(void *p);
   static void destruct_TArtDecoderMDPP16(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderMDPP16*)
   {
      ::TArtDecoderMDPP16 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderMDPP16));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderMDPP16", "TArtDecoderMDPP16.hh", 4,
                  typeid(::TArtDecoderMDPP16), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderMDPP16_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderMDPP16) );
      instance.SetDelete(&delete_TArtDecoderMDPP16);
      instance.SetDeleteArray(&deleteArray_TArtDecoderMDPP16);
      instance.SetDestructor(&destruct_TArtDecoderMDPP16);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderMDPP16*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderMDPP16*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMDPP16*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderMDPP16_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMDPP16*>(nullptr))->GetClass();
      TArtDecoderMDPP16_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderMDPP16_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderMQDC32_Dictionary();
   static void TArtDecoderMQDC32_TClassManip(TClass*);
   static void delete_TArtDecoderMQDC32(void *p);
   static void deleteArray_TArtDecoderMQDC32(void *p);
   static void destruct_TArtDecoderMQDC32(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderMQDC32*)
   {
      ::TArtDecoderMQDC32 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderMQDC32));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderMQDC32", "TArtDecoderMQDC32.hh", 4,
                  typeid(::TArtDecoderMQDC32), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderMQDC32_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderMQDC32) );
      instance.SetDelete(&delete_TArtDecoderMQDC32);
      instance.SetDeleteArray(&deleteArray_TArtDecoderMQDC32);
      instance.SetDestructor(&destruct_TArtDecoderMQDC32);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderMQDC32*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderMQDC32*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMQDC32*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderMQDC32_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMQDC32*>(nullptr))->GetClass();
      TArtDecoderMQDC32_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderMQDC32_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderMTDC32_Dictionary();
   static void TArtDecoderMTDC32_TClassManip(TClass*);
   static void delete_TArtDecoderMTDC32(void *p);
   static void deleteArray_TArtDecoderMTDC32(void *p);
   static void destruct_TArtDecoderMTDC32(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderMTDC32*)
   {
      ::TArtDecoderMTDC32 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderMTDC32));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderMTDC32", "TArtDecoderMTDC32.hh", 4,
                  typeid(::TArtDecoderMTDC32), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderMTDC32_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderMTDC32) );
      instance.SetDelete(&delete_TArtDecoderMTDC32);
      instance.SetDeleteArray(&deleteArray_TArtDecoderMTDC32);
      instance.SetDestructor(&destruct_TArtDecoderMTDC32);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderMTDC32*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderMTDC32*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMTDC32*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderMTDC32_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderMTDC32*>(nullptr))->GetClass();
      TArtDecoderMTDC32_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderMTDC32_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderNeulandTS_Dictionary();
   static void TArtDecoderNeulandTS_TClassManip(TClass*);
   static void delete_TArtDecoderNeulandTS(void *p);
   static void deleteArray_TArtDecoderNeulandTS(void *p);
   static void destruct_TArtDecoderNeulandTS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderNeulandTS*)
   {
      ::TArtDecoderNeulandTS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderNeulandTS));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderNeulandTS", "TArtDecoderNeulandTS.hh", 9,
                  typeid(::TArtDecoderNeulandTS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderNeulandTS_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderNeulandTS) );
      instance.SetDelete(&delete_TArtDecoderNeulandTS);
      instance.SetDeleteArray(&deleteArray_TArtDecoderNeulandTS);
      instance.SetDestructor(&destruct_TArtDecoderNeulandTS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderNeulandTS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderNeulandTS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderNeulandTS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderNeulandTS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderNeulandTS*>(nullptr))->GetClass();
      TArtDecoderNeulandTS_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderNeulandTS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderP716X_Dictionary();
   static void TArtDecoderP716X_TClassManip(TClass*);
   static void delete_TArtDecoderP716X(void *p);
   static void deleteArray_TArtDecoderP716X(void *p);
   static void destruct_TArtDecoderP716X(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderP716X*)
   {
      ::TArtDecoderP716X *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderP716X));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderP716X", "TArtDecoderP716X.hh", 14,
                  typeid(::TArtDecoderP716X), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderP716X_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderP716X) );
      instance.SetDelete(&delete_TArtDecoderP716X);
      instance.SetDeleteArray(&deleteArray_TArtDecoderP716X);
      instance.SetDestructor(&destruct_TArtDecoderP716X);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderP716X*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderP716X*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderP716X*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderP716X_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderP716X*>(nullptr))->GetClass();
      TArtDecoderP716X_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderP716X_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderP716XZ_Dictionary();
   static void TArtDecoderP716XZ_TClassManip(TClass*);
   static void delete_TArtDecoderP716XZ(void *p);
   static void deleteArray_TArtDecoderP716XZ(void *p);
   static void destruct_TArtDecoderP716XZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderP716XZ*)
   {
      ::TArtDecoderP716XZ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderP716XZ));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderP716XZ", "TArtDecoderP716XZ.hh", 14,
                  typeid(::TArtDecoderP716XZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderP716XZ_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderP716XZ) );
      instance.SetDelete(&delete_TArtDecoderP716XZ);
      instance.SetDeleteArray(&deleteArray_TArtDecoderP716XZ);
      instance.SetDestructor(&destruct_TArtDecoderP716XZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderP716XZ*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderP716XZ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderP716XZ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderP716XZ_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderP716XZ*>(nullptr))->GetClass();
      TArtDecoderP716XZ_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderP716XZ_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderRICHADCM_Dictionary();
   static void TArtDecoderRICHADCM_TClassManip(TClass*);
   static void delete_TArtDecoderRICHADCM(void *p);
   static void deleteArray_TArtDecoderRICHADCM(void *p);
   static void destruct_TArtDecoderRICHADCM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderRICHADCM*)
   {
      ::TArtDecoderRICHADCM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderRICHADCM));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderRICHADCM", "TArtDecoderRICHADCM.hh", 14,
                  typeid(::TArtDecoderRICHADCM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderRICHADCM_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderRICHADCM) );
      instance.SetDelete(&delete_TArtDecoderRICHADCM);
      instance.SetDeleteArray(&deleteArray_TArtDecoderRICHADCM);
      instance.SetDestructor(&destruct_TArtDecoderRICHADCM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderRICHADCM*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderRICHADCM*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderRICHADCM*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderRICHADCM_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderRICHADCM*>(nullptr))->GetClass();
      TArtDecoderRICHADCM_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderRICHADCM_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderSIS3301_Dictionary();
   static void TArtDecoderSIS3301_TClassManip(TClass*);
   static void delete_TArtDecoderSIS3301(void *p);
   static void deleteArray_TArtDecoderSIS3301(void *p);
   static void destruct_TArtDecoderSIS3301(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderSIS3301*)
   {
      ::TArtDecoderSIS3301 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderSIS3301));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderSIS3301", "TArtDecoderSIS3301.hh", 16,
                  typeid(::TArtDecoderSIS3301), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderSIS3301_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderSIS3301) );
      instance.SetDelete(&delete_TArtDecoderSIS3301);
      instance.SetDeleteArray(&deleteArray_TArtDecoderSIS3301);
      instance.SetDestructor(&destruct_TArtDecoderSIS3301);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderSIS3301*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderSIS3301*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderSIS3301*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderSIS3301_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderSIS3301*>(nullptr))->GetClass();
      TArtDecoderSIS3301_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderSIS3301_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderTacquila_Dictionary();
   static void TArtDecoderTacquila_TClassManip(TClass*);
   static void delete_TArtDecoderTacquila(void *p);
   static void deleteArray_TArtDecoderTacquila(void *p);
   static void destruct_TArtDecoderTacquila(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderTacquila*)
   {
      ::TArtDecoderTacquila *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderTacquila));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderTacquila", "TArtDecoderTacquila.hh", 7,
                  typeid(::TArtDecoderTacquila), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderTacquila_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderTacquila) );
      instance.SetDelete(&delete_TArtDecoderTacquila);
      instance.SetDeleteArray(&deleteArray_TArtDecoderTacquila);
      instance.SetDestructor(&destruct_TArtDecoderTacquila);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderTacquila*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderTacquila*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderTacquila*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderTacquila_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderTacquila*>(nullptr))->GetClass();
      TArtDecoderTacquila_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderTacquila_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV1190_Dictionary();
   static void TArtDecoderV1190_TClassManip(TClass*);
   static void delete_TArtDecoderV1190(void *p);
   static void deleteArray_TArtDecoderV1190(void *p);
   static void destruct_TArtDecoderV1190(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV1190*)
   {
      ::TArtDecoderV1190 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV1190));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV1190", "TArtDecoderV1190.hh", 14,
                  typeid(::TArtDecoderV1190), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV1190_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV1190) );
      instance.SetDelete(&delete_TArtDecoderV1190);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV1190);
      instance.SetDestructor(&destruct_TArtDecoderV1190);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV1190*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV1190*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1190*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV1190_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1190*>(nullptr))->GetClass();
      TArtDecoderV1190_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV1190_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV1190C_Dictionary();
   static void TArtDecoderV1190C_TClassManip(TClass*);
   static void delete_TArtDecoderV1190C(void *p);
   static void deleteArray_TArtDecoderV1190C(void *p);
   static void destruct_TArtDecoderV1190C(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV1190C*)
   {
      ::TArtDecoderV1190C *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV1190C));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV1190C", "TArtDecoderV1190C.hh", 14,
                  typeid(::TArtDecoderV1190C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV1190C_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV1190C) );
      instance.SetDelete(&delete_TArtDecoderV1190C);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV1190C);
      instance.SetDestructor(&destruct_TArtDecoderV1190C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV1190C*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV1190C*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1190C*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV1190C_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1190C*>(nullptr))->GetClass();
      TArtDecoderV1190C_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV1190C_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV1290_Dictionary();
   static void TArtDecoderV1290_TClassManip(TClass*);
   static void delete_TArtDecoderV1290(void *p);
   static void deleteArray_TArtDecoderV1290(void *p);
   static void destruct_TArtDecoderV1290(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV1290*)
   {
      ::TArtDecoderV1290 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV1290));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV1290", "TArtDecoderV1290.hh", 14,
                  typeid(::TArtDecoderV1290), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV1290_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV1290) );
      instance.SetDelete(&delete_TArtDecoderV1290);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV1290);
      instance.SetDestructor(&destruct_TArtDecoderV1290);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV1290*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV1290*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1290*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV1290_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1290*>(nullptr))->GetClass();
      TArtDecoderV1290_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV1290_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV1740_Dictionary();
   static void TArtDecoderV1740_TClassManip(TClass*);
   static void delete_TArtDecoderV1740(void *p);
   static void deleteArray_TArtDecoderV1740(void *p);
   static void destruct_TArtDecoderV1740(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV1740*)
   {
      ::TArtDecoderV1740 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV1740));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV1740", "TArtDecoderV1740.hh", 7,
                  typeid(::TArtDecoderV1740), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV1740_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV1740) );
      instance.SetDelete(&delete_TArtDecoderV1740);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV1740);
      instance.SetDestructor(&destruct_TArtDecoderV1740);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV1740*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV1740*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1740*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV1740_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV1740*>(nullptr))->GetClass();
      TArtDecoderV1740_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV1740_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV550_Dictionary();
   static void TArtDecoderV550_TClassManip(TClass*);
   static void delete_TArtDecoderV550(void *p);
   static void deleteArray_TArtDecoderV550(void *p);
   static void destruct_TArtDecoderV550(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV550*)
   {
      ::TArtDecoderV550 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV550));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV550", "TArtDecoderV550.hh", 14,
                  typeid(::TArtDecoderV550), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV550_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV550) );
      instance.SetDelete(&delete_TArtDecoderV550);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV550);
      instance.SetDestructor(&destruct_TArtDecoderV550);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV550*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV550*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV550*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV550_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV550*>(nullptr))->GetClass();
      TArtDecoderV550_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV550_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV767_Dictionary();
   static void TArtDecoderV767_TClassManip(TClass*);
   static void delete_TArtDecoderV767(void *p);
   static void deleteArray_TArtDecoderV767(void *p);
   static void destruct_TArtDecoderV767(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV767*)
   {
      ::TArtDecoderV767 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV767));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV767", "TArtDecoderV767.hh", 14,
                  typeid(::TArtDecoderV767), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV767_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV767) );
      instance.SetDelete(&delete_TArtDecoderV767);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV767);
      instance.SetDestructor(&destruct_TArtDecoderV767);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV767*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV767*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV767*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV767_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV767*>(nullptr))->GetClass();
      TArtDecoderV767_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV767_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderV7XX_Dictionary();
   static void TArtDecoderV7XX_TClassManip(TClass*);
   static void delete_TArtDecoderV7XX(void *p);
   static void deleteArray_TArtDecoderV7XX(void *p);
   static void destruct_TArtDecoderV7XX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderV7XX*)
   {
      ::TArtDecoderV7XX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderV7XX));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderV7XX", "TArtDecoderV7XX.hh", 14,
                  typeid(::TArtDecoderV7XX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderV7XX_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderV7XX) );
      instance.SetDelete(&delete_TArtDecoderV7XX);
      instance.SetDeleteArray(&deleteArray_TArtDecoderV7XX);
      instance.SetDestructor(&destruct_TArtDecoderV7XX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderV7XX*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderV7XX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV7XX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderV7XX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderV7XX*>(nullptr))->GetClass();
      TArtDecoderV7XX_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderV7XX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtDecoderVmeEasyroc_Dictionary();
   static void TArtDecoderVmeEasyroc_TClassManip(TClass*);
   static void delete_TArtDecoderVmeEasyroc(void *p);
   static void deleteArray_TArtDecoderVmeEasyroc(void *p);
   static void destruct_TArtDecoderVmeEasyroc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtDecoderVmeEasyroc*)
   {
      ::TArtDecoderVmeEasyroc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtDecoderVmeEasyroc));
      static ::ROOT::TGenericClassInfo 
         instance("TArtDecoderVmeEasyroc", "TArtDecoderVmeEasyroc.hh", 7,
                  typeid(::TArtDecoderVmeEasyroc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtDecoderVmeEasyroc_Dictionary, isa_proxy, 3,
                  sizeof(::TArtDecoderVmeEasyroc) );
      instance.SetDelete(&delete_TArtDecoderVmeEasyroc);
      instance.SetDeleteArray(&deleteArray_TArtDecoderVmeEasyroc);
      instance.SetDestructor(&destruct_TArtDecoderVmeEasyroc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtDecoderVmeEasyroc*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtDecoderVmeEasyroc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtDecoderVmeEasyroc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtDecoderVmeEasyroc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtDecoderVmeEasyroc*>(nullptr))->GetClass();
      TArtDecoderVmeEasyroc_TClassManip(theClass);
   return theClass;
   }

   static void TArtDecoderVmeEasyroc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtEventInfo(void *p = nullptr);
   static void *newArray_TArtEventInfo(Long_t size, void *p);
   static void delete_TArtEventInfo(void *p);
   static void deleteArray_TArtEventInfo(void *p);
   static void destruct_TArtEventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtEventInfo*)
   {
      ::TArtEventInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtEventInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtEventInfo", ::TArtEventInfo::Class_Version(), "TArtEventInfo.hh", 6,
                  typeid(::TArtEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtEventInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TArtEventInfo) );
      instance.SetNew(&new_TArtEventInfo);
      instance.SetNewArray(&newArray_TArtEventInfo);
      instance.SetDelete(&delete_TArtEventInfo);
      instance.SetDeleteArray(&deleteArray_TArtEventInfo);
      instance.SetDestructor(&destruct_TArtEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtEventInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtEventInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtEventInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawScalerObject(void *p = nullptr);
   static void *newArray_TArtRawScalerObject(Long_t size, void *p);
   static void delete_TArtRawScalerObject(void *p);
   static void deleteArray_TArtRawScalerObject(void *p);
   static void destruct_TArtRawScalerObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawScalerObject*)
   {
      ::TArtRawScalerObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawScalerObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawScalerObject", ::TArtRawScalerObject::Class_Version(), "TArtRawScalerObject.hh", 9,
                  typeid(::TArtRawScalerObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawScalerObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawScalerObject) );
      instance.SetNew(&new_TArtRawScalerObject);
      instance.SetNewArray(&newArray_TArtRawScalerObject);
      instance.SetDelete(&delete_TArtRawScalerObject);
      instance.SetDeleteArray(&deleteArray_TArtRawScalerObject);
      instance.SetDestructor(&destruct_TArtRawScalerObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawScalerObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawScalerObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawScalerObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRawEventObject(void *p = nullptr);
   static void *newArray_TArtRawEventObject(Long_t size, void *p);
   static void delete_TArtRawEventObject(void *p);
   static void deleteArray_TArtRawEventObject(void *p);
   static void destruct_TArtRawEventObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRawEventObject*)
   {
      ::TArtRawEventObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRawEventObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRawEventObject", ::TArtRawEventObject::Class_Version(), "TArtRawEventObject.hh", 9,
                  typeid(::TArtRawEventObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRawEventObject::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRawEventObject) );
      instance.SetNew(&new_TArtRawEventObject);
      instance.SetNewArray(&newArray_TArtRawEventObject);
      instance.SetDelete(&delete_TArtRawEventObject);
      instance.SetDeleteArray(&deleteArray_TArtRawEventObject);
      instance.SetDestructor(&destruct_TArtRawEventObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRawEventObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRawEventObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRawEventObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtParser(void *p);
   static void deleteArray_TArtParser(void *p);
   static void destruct_TArtParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtParser*)
   {
      ::TArtParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtParser", ::TArtParser::Class_Version(), "TArtParser.hh", 16,
                  typeid(::TArtParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtParser::Dictionary, isa_proxy, 4,
                  sizeof(::TArtParser) );
      instance.SetDelete(&delete_TArtParser);
      instance.SetDeleteArray(&deleteArray_TArtParser);
      instance.SetDestructor(&destruct_TArtParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRunInfo(void *p = nullptr);
   static void *newArray_TArtRunInfo(Long_t size, void *p);
   static void delete_TArtRunInfo(void *p);
   static void deleteArray_TArtRunInfo(void *p);
   static void destruct_TArtRunInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRunInfo*)
   {
      ::TArtRunInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRunInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRunInfo", ::TArtRunInfo::Class_Version(), "TArtRunInfo.hh", 7,
                  typeid(::TArtRunInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRunInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRunInfo) );
      instance.SetNew(&new_TArtRunInfo);
      instance.SetNewArray(&newArray_TArtRunInfo);
      instance.SetDelete(&delete_TArtRunInfo);
      instance.SetDeleteArray(&deleteArray_TArtRunInfo);
      instance.SetDestructor(&destruct_TArtRunInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRunInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRunInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRunInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtStoreManager(void *p);
   static void deleteArray_TArtStoreManager(void *p);
   static void destruct_TArtStoreManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtStoreManager*)
   {
      ::TArtStoreManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtStoreManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtStoreManager", ::TArtStoreManager::Class_Version(), "TArtStoreManager.hh", 11,
                  typeid(::TArtStoreManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtStoreManager::Dictionary, isa_proxy, 4,
                  sizeof(::TArtStoreManager) );
      instance.SetDelete(&delete_TArtStoreManager);
      instance.SetDeleteArray(&deleteArray_TArtStoreManager);
      instance.SetDestructor(&destruct_TArtStoreManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtStoreManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtStoreManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtStoreManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtEventStore(void *p = nullptr);
   static void *newArray_TArtEventStore(Long_t size, void *p);
   static void delete_TArtEventStore(void *p);
   static void deleteArray_TArtEventStore(void *p);
   static void destruct_TArtEventStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtEventStore*)
   {
      ::TArtEventStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtEventStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtEventStore", ::TArtEventStore::Class_Version(), "TArtEventStore.hh", 33,
                  typeid(::TArtEventStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtEventStore::Dictionary, isa_proxy, 4,
                  sizeof(::TArtEventStore) );
      instance.SetNew(&new_TArtEventStore);
      instance.SetNewArray(&newArray_TArtEventStore);
      instance.SetDelete(&delete_TArtEventStore);
      instance.SetDeleteArray(&deleteArray_TArtEventStore);
      instance.SetDestructor(&destruct_TArtEventStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtEventStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtEventStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtEventStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtFileDataSource_Dictionary();
   static void TArtFileDataSource_TClassManip(TClass*);
   static void *new_TArtFileDataSource(void *p = nullptr);
   static void *newArray_TArtFileDataSource(Long_t size, void *p);
   static void delete_TArtFileDataSource(void *p);
   static void deleteArray_TArtFileDataSource(void *p);
   static void destruct_TArtFileDataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtFileDataSource*)
   {
      ::TArtFileDataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtFileDataSource));
      static ::ROOT::TGenericClassInfo 
         instance("TArtFileDataSource", "TArtFileDataSource.hh", 19,
                  typeid(::TArtFileDataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtFileDataSource_Dictionary, isa_proxy, 3,
                  sizeof(::TArtFileDataSource) );
      instance.SetNew(&new_TArtFileDataSource);
      instance.SetNewArray(&newArray_TArtFileDataSource);
      instance.SetDelete(&delete_TArtFileDataSource);
      instance.SetDeleteArray(&deleteArray_TArtFileDataSource);
      instance.SetDestructor(&destruct_TArtFileDataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtFileDataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtFileDataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtFileDataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtFileDataSource_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtFileDataSource*>(nullptr))->GetClass();
      TArtFileDataSource_TClassManip(theClass);
   return theClass;
   }

   static void TArtFileDataSource_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtRIDFMap(void *p = nullptr);
   static void *newArray_TArtRIDFMap(Long_t size, void *p);
   static void delete_TArtRIDFMap(void *p);
   static void deleteArray_TArtRIDFMap(void *p);
   static void destruct_TArtRIDFMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtRIDFMap*)
   {
      ::TArtRIDFMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtRIDFMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtRIDFMap", ::TArtRIDFMap::Class_Version(), "TArtMap.hh", 7,
                  typeid(::TArtRIDFMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtRIDFMap::Dictionary, isa_proxy, 4,
                  sizeof(::TArtRIDFMap) );
      instance.SetNew(&new_TArtRIDFMap);
      instance.SetNewArray(&newArray_TArtRIDFMap);
      instance.SetDelete(&delete_TArtRIDFMap);
      instance.SetDeleteArray(&deleteArray_TArtRIDFMap);
      instance.SetDestructor(&destruct_TArtRIDFMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtRIDFMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtRIDFMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtRIDFMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtMath_Dictionary();
   static void TArtMath_TClassManip(TClass*);
   static void *new_TArtMath(void *p = nullptr);
   static void *newArray_TArtMath(Long_t size, void *p);
   static void delete_TArtMath(void *p);
   static void deleteArray_TArtMath(void *p);
   static void destruct_TArtMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtMath*)
   {
      ::TArtMath *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtMath));
      static ::ROOT::TGenericClassInfo 
         instance("TArtMath", "TArtMath.hh", 10,
                  typeid(::TArtMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtMath_Dictionary, isa_proxy, 4,
                  sizeof(::TArtMath) );
      instance.SetNew(&new_TArtMath);
      instance.SetNewArray(&newArray_TArtMath);
      instance.SetDelete(&delete_TArtMath);
      instance.SetDeleteArray(&deleteArray_TArtMath);
      instance.SetDestructor(&destruct_TArtMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtMath*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtMath*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtMath*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtMath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtMath*>(nullptr))->GetClass();
      TArtMath_TClassManip(theClass);
   return theClass;
   }

   static void TArtMath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtParserFactory_Dictionary();
   static void TArtParserFactory_TClassManip(TClass*);
   static void delete_TArtParserFactory(void *p);
   static void deleteArray_TArtParserFactory(void *p);
   static void destruct_TArtParserFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtParserFactory*)
   {
      ::TArtParserFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtParserFactory));
      static ::ROOT::TGenericClassInfo 
         instance("TArtParserFactory", "TArtParserFactory.hh", 16,
                  typeid(::TArtParserFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtParserFactory_Dictionary, isa_proxy, 3,
                  sizeof(::TArtParserFactory) );
      instance.SetDelete(&delete_TArtParserFactory);
      instance.SetDeleteArray(&deleteArray_TArtParserFactory);
      instance.SetDestructor(&destruct_TArtParserFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtParserFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtParserFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtParserFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtParserFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtParserFactory*>(nullptr))->GetClass();
      TArtParserFactory_TClassManip(theClass);
   return theClass;
   }

   static void TArtParserFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtParserRDF(void *p = nullptr);
   static void *newArray_TArtParserRDF(Long_t size, void *p);
   static void delete_TArtParserRDF(void *p);
   static void deleteArray_TArtParserRDF(void *p);
   static void destruct_TArtParserRDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtParserRDF*)
   {
      ::TArtParserRDF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtParserRDF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtParserRDF", ::TArtParserRDF::Class_Version(), "TArtParserRDF.hh", 17,
                  typeid(::TArtParserRDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtParserRDF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtParserRDF) );
      instance.SetNew(&new_TArtParserRDF);
      instance.SetNewArray(&newArray_TArtParserRDF);
      instance.SetDelete(&delete_TArtParserRDF);
      instance.SetDeleteArray(&deleteArray_TArtParserRDF);
      instance.SetDestructor(&destruct_TArtParserRDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtParserRDF*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtParserRDF*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtParserRDF*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtParserRIDF(void *p = nullptr);
   static void *newArray_TArtParserRIDF(Long_t size, void *p);
   static void delete_TArtParserRIDF(void *p);
   static void deleteArray_TArtParserRIDF(void *p);
   static void destruct_TArtParserRIDF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtParserRIDF*)
   {
      ::TArtParserRIDF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtParserRIDF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtParserRIDF", ::TArtParserRIDF::Class_Version(), "TArtParserRIDF.hh", 18,
                  typeid(::TArtParserRIDF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtParserRIDF::Dictionary, isa_proxy, 4,
                  sizeof(::TArtParserRIDF) );
      instance.SetNew(&new_TArtParserRIDF);
      instance.SetNewArray(&newArray_TArtParserRIDF);
      instance.SetDelete(&delete_TArtParserRIDF);
      instance.SetDeleteArray(&deleteArray_TArtParserRIDF);
      instance.SetDestructor(&destruct_TArtParserRIDF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtParserRIDF*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtParserRIDF*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtParserRIDF*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArtReconstruction(void *p);
   static void deleteArray_TArtReconstruction(void *p);
   static void destruct_TArtReconstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtReconstruction*)
   {
      ::TArtReconstruction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtReconstruction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtReconstruction", ::TArtReconstruction::Class_Version(), "TArtReconstruction.hh", 11,
                  typeid(::TArtReconstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtReconstruction::Dictionary, isa_proxy, 4,
                  sizeof(::TArtReconstruction) );
      instance.SetDelete(&delete_TArtReconstruction);
      instance.SetDeleteArray(&deleteArray_TArtReconstruction);
      instance.SetDestructor(&destruct_TArtReconstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtReconstruction*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtReconstruction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtReconstruction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtSemaphore_Dictionary();
   static void TArtSemaphore_TClassManip(TClass*);
   static void delete_TArtSemaphore(void *p);
   static void deleteArray_TArtSemaphore(void *p);
   static void destruct_TArtSemaphore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSemaphore*)
   {
      ::TArtSemaphore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtSemaphore));
      static ::ROOT::TGenericClassInfo 
         instance("TArtSemaphore", "TArtSemaphore.hh", 29,
                  typeid(::TArtSemaphore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtSemaphore_Dictionary, isa_proxy, 3,
                  sizeof(::TArtSemaphore) );
      instance.SetDelete(&delete_TArtSemaphore);
      instance.SetDeleteArray(&deleteArray_TArtSemaphore);
      instance.SetDestructor(&destruct_TArtSemaphore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSemaphore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSemaphore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSemaphore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtSemaphore_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtSemaphore*>(nullptr))->GetClass();
      TArtSemaphore_TClassManip(theClass);
   return theClass;
   }

   static void TArtSemaphore_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtSharedMemory_Dictionary();
   static void TArtSharedMemory_TClassManip(TClass*);
   static void delete_TArtSharedMemory(void *p);
   static void deleteArray_TArtSharedMemory(void *p);
   static void destruct_TArtSharedMemory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSharedMemory*)
   {
      ::TArtSharedMemory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtSharedMemory));
      static ::ROOT::TGenericClassInfo 
         instance("TArtSharedMemory", "TArtSharedMemory.hh", 14,
                  typeid(::TArtSharedMemory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtSharedMemory_Dictionary, isa_proxy, 3,
                  sizeof(::TArtSharedMemory) );
      instance.SetDelete(&delete_TArtSharedMemory);
      instance.SetDeleteArray(&deleteArray_TArtSharedMemory);
      instance.SetDestructor(&destruct_TArtSharedMemory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSharedMemory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSharedMemory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSharedMemory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtSharedMemory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtSharedMemory*>(nullptr))->GetClass();
      TArtSharedMemory_TClassManip(theClass);
   return theClass;
   }

   static void TArtSharedMemory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtSharedMemoryDataSource_Dictionary();
   static void TArtSharedMemoryDataSource_TClassManip(TClass*);
   static void *new_TArtSharedMemoryDataSource(void *p = nullptr);
   static void *newArray_TArtSharedMemoryDataSource(Long_t size, void *p);
   static void delete_TArtSharedMemoryDataSource(void *p);
   static void deleteArray_TArtSharedMemoryDataSource(void *p);
   static void destruct_TArtSharedMemoryDataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtSharedMemoryDataSource*)
   {
      ::TArtSharedMemoryDataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtSharedMemoryDataSource));
      static ::ROOT::TGenericClassInfo 
         instance("TArtSharedMemoryDataSource", "TArtSharedMemoryDataSource.hh", 30,
                  typeid(::TArtSharedMemoryDataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtSharedMemoryDataSource_Dictionary, isa_proxy, 3,
                  sizeof(::TArtSharedMemoryDataSource) );
      instance.SetNew(&new_TArtSharedMemoryDataSource);
      instance.SetNewArray(&newArray_TArtSharedMemoryDataSource);
      instance.SetDelete(&delete_TArtSharedMemoryDataSource);
      instance.SetDeleteArray(&deleteArray_TArtSharedMemoryDataSource);
      instance.SetDestructor(&destruct_TArtSharedMemoryDataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtSharedMemoryDataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtSharedMemoryDataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtSharedMemoryDataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtSharedMemoryDataSource_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtSharedMemoryDataSource*>(nullptr))->GetClass();
      TArtSharedMemoryDataSource_TClassManip(theClass);
   return theClass;
   }

   static void TArtSharedMemoryDataSource_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TArtStreamingDataSource(void *p = nullptr);
   static void *newArray_TArtStreamingDataSource(Long_t size, void *p);
   static void delete_TArtStreamingDataSource(void *p);
   static void deleteArray_TArtStreamingDataSource(void *p);
   static void destruct_TArtStreamingDataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtStreamingDataSource*)
   {
      ::TArtStreamingDataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArtStreamingDataSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArtStreamingDataSource", ::TArtStreamingDataSource::Class_Version(), "TArtStreamingDataSource.hh", 14,
                  typeid(::TArtStreamingDataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArtStreamingDataSource::Dictionary, isa_proxy, 4,
                  sizeof(::TArtStreamingDataSource) );
      instance.SetNew(&new_TArtStreamingDataSource);
      instance.SetNewArray(&newArray_TArtStreamingDataSource);
      instance.SetDelete(&delete_TArtStreamingDataSource);
      instance.SetDeleteArray(&deleteArray_TArtStreamingDataSource);
      instance.SetDestructor(&destruct_TArtStreamingDataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtStreamingDataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtStreamingDataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtStreamingDataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TArtUtil_Dictionary();
   static void TArtUtil_TClassManip(TClass*);
   static void *new_TArtUtil(void *p = nullptr);
   static void *newArray_TArtUtil(Long_t size, void *p);
   static void delete_TArtUtil(void *p);
   static void deleteArray_TArtUtil(void *p);
   static void destruct_TArtUtil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArtUtil*)
   {
      ::TArtUtil *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TArtUtil));
      static ::ROOT::TGenericClassInfo 
         instance("TArtUtil", "TArtUtil.hh", 10,
                  typeid(::TArtUtil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TArtUtil_Dictionary, isa_proxy, 0,
                  sizeof(::TArtUtil) );
      instance.SetNew(&new_TArtUtil);
      instance.SetNewArray(&newArray_TArtUtil);
      instance.SetDelete(&delete_TArtUtil);
      instance.SetDeleteArray(&deleteArray_TArtUtil);
      instance.SetDestructor(&destruct_TArtUtil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArtUtil*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArtUtil*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArtUtil*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TArtUtil_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TArtUtil*>(nullptr))->GetClass();
      TArtUtil_TClassManip(theClass);
   return theClass;
   }

   static void TArtUtil_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TArtCore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtCore::Class_Name()
{
   return "TArtCore";
}

//______________________________________________________________________________
const char *TArtCore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtCore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtCore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtCore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtCore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtCore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtDataObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtDataObject::Class_Name()
{
   return "TArtDataObject";
}

//______________________________________________________________________________
const char *TArtDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDataObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtDataObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDataObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtDataObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawDataObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawDataObject::Class_Name()
{
   return "TArtRawDataObject";
}

//______________________________________________________________________________
const char *TArtRawDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawDataObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawDataObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawDataObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawDataObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawFADCDataObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawFADCDataObject::Class_Name()
{
   return "TArtRawFADCDataObject";
}

//______________________________________________________________________________
const char *TArtRawFADCDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawFADCDataObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawFADCDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawFADCDataObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawFADCDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawFADCDataObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawFADCDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawFADCDataObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawTacquilaDataObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawTacquilaDataObject::Class_Name()
{
   return "TArtRawTacquilaDataObject";
}

//______________________________________________________________________________
const char *TArtRawTacquilaDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawTacquilaDataObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawTacquilaDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawTacquilaDataObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawTacquilaDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawTacquilaDataObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawTacquilaDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawTacquilaDataObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawSegmentObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawSegmentObject::Class_Name()
{
   return "TArtRawSegmentObject";
}

//______________________________________________________________________________
const char *TArtRawSegmentObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawSegmentObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawSegmentObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawSegmentObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawSegmentObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawSegmentObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawSegmentObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawSegmentObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtEventInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtEventInfo::Class_Name()
{
   return "TArtEventInfo";
}

//______________________________________________________________________________
const char *TArtEventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtEventInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtEventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtEventInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtEventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtEventInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtEventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtEventInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawScalerObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawScalerObject::Class_Name()
{
   return "TArtRawScalerObject";
}

//______________________________________________________________________________
const char *TArtRawScalerObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawScalerObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawScalerObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawScalerObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawScalerObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawScalerObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawScalerObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawScalerObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRawEventObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRawEventObject::Class_Name()
{
   return "TArtRawEventObject";
}

//______________________________________________________________________________
const char *TArtRawEventObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawEventObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRawEventObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRawEventObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRawEventObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawEventObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRawEventObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRawEventObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtParser::Class_Name()
{
   return "TArtParser";
}

//______________________________________________________________________________
const char *TArtParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRunInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRunInfo::Class_Name()
{
   return "TArtRunInfo";
}

//______________________________________________________________________________
const char *TArtRunInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRunInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRunInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRunInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRunInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRunInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRunInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRunInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtStoreManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtStoreManager::Class_Name()
{
   return "TArtStoreManager";
}

//______________________________________________________________________________
const char *TArtStoreManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtStoreManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtStoreManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtStoreManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtStoreManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtStoreManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtStoreManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtStoreManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtEventStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtEventStore::Class_Name()
{
   return "TArtEventStore";
}

//______________________________________________________________________________
const char *TArtEventStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtEventStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtEventStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtEventStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtEventStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtEventStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtEventStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtEventStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtRIDFMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtRIDFMap::Class_Name()
{
   return "TArtRIDFMap";
}

//______________________________________________________________________________
const char *TArtRIDFMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIDFMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtRIDFMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtRIDFMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtRIDFMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIDFMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtRIDFMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtRIDFMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtParserRDF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtParserRDF::Class_Name()
{
   return "TArtParserRDF";
}

//______________________________________________________________________________
const char *TArtParserRDF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRDF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtParserRDF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRDF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtParserRDF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRDF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtParserRDF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRDF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtParserRIDF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtParserRIDF::Class_Name()
{
   return "TArtParserRIDF";
}

//______________________________________________________________________________
const char *TArtParserRIDF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRIDF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtParserRIDF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRIDF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtParserRIDF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRIDF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtParserRIDF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtParserRIDF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtReconstruction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtReconstruction::Class_Name()
{
   return "TArtReconstruction";
}

//______________________________________________________________________________
const char *TArtReconstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtReconstruction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtReconstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtReconstruction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtReconstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtReconstruction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtReconstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtReconstruction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArtStreamingDataSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtStreamingDataSource::Class_Name()
{
   return "TArtStreamingDataSource";
}

//______________________________________________________________________________
const char *TArtStreamingDataSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtStreamingDataSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArtStreamingDataSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArtStreamingDataSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtStreamingDataSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtStreamingDataSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtStreamingDataSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArtStreamingDataSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TArtCore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtCore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtCore::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtCore::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtCore(void *p) {
      return  p ? new(p) ::TArtCore : new ::TArtCore;
   }
   static void *newArray_TArtCore(Long_t nElements, void *p) {
      return p ? new(p) ::TArtCore[nElements] : new ::TArtCore[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtCore(void *p) {
      delete (static_cast<::TArtCore*>(p));
   }
   static void deleteArray_TArtCore(void *p) {
      delete [] (static_cast<::TArtCore*>(p));
   }
   static void destruct_TArtCore(void *p) {
      typedef ::TArtCore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtCore

//______________________________________________________________________________
void TArtDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtDataObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtDataObject(void *p) {
      return  p ? new(p) ::TArtDataObject : new ::TArtDataObject;
   }
   static void *newArray_TArtDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtDataObject[nElements] : new ::TArtDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtDataObject(void *p) {
      delete (static_cast<::TArtDataObject*>(p));
   }
   static void deleteArray_TArtDataObject(void *p) {
      delete [] (static_cast<::TArtDataObject*>(p));
   }
   static void destruct_TArtDataObject(void *p) {
      typedef ::TArtDataObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDataObject

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDataSource(void *p) {
      delete (static_cast<::TArtDataSource*>(p));
   }
   static void deleteArray_TArtDataSource(void *p) {
      delete [] (static_cast<::TArtDataSource*>(p));
   }
   static void destruct_TArtDataSource(void *p) {
      typedef ::TArtDataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDataSource

//______________________________________________________________________________
void TArtRawDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawDataObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawDataObject(void *p) {
      return  p ? new(p) ::TArtRawDataObject : new ::TArtRawDataObject;
   }
   static void *newArray_TArtRawDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawDataObject[nElements] : new ::TArtRawDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawDataObject(void *p) {
      delete (static_cast<::TArtRawDataObject*>(p));
   }
   static void deleteArray_TArtRawDataObject(void *p) {
      delete [] (static_cast<::TArtRawDataObject*>(p));
   }
   static void destruct_TArtRawDataObject(void *p) {
      typedef ::TArtRawDataObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawDataObject

//______________________________________________________________________________
void TArtRawFADCDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawFADCDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawFADCDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawFADCDataObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawFADCDataObject(void *p) {
      return  p ? new(p) ::TArtRawFADCDataObject : new ::TArtRawFADCDataObject;
   }
   static void *newArray_TArtRawFADCDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawFADCDataObject[nElements] : new ::TArtRawFADCDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawFADCDataObject(void *p) {
      delete (static_cast<::TArtRawFADCDataObject*>(p));
   }
   static void deleteArray_TArtRawFADCDataObject(void *p) {
      delete [] (static_cast<::TArtRawFADCDataObject*>(p));
   }
   static void destruct_TArtRawFADCDataObject(void *p) {
      typedef ::TArtRawFADCDataObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawFADCDataObject

//______________________________________________________________________________
void TArtRawTacquilaDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawTacquilaDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawTacquilaDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawTacquilaDataObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawTacquilaDataObject(void *p) {
      return  p ? new(p) ::TArtRawTacquilaDataObject : new ::TArtRawTacquilaDataObject;
   }
   static void *newArray_TArtRawTacquilaDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawTacquilaDataObject[nElements] : new ::TArtRawTacquilaDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawTacquilaDataObject(void *p) {
      delete (static_cast<::TArtRawTacquilaDataObject*>(p));
   }
   static void deleteArray_TArtRawTacquilaDataObject(void *p) {
      delete [] (static_cast<::TArtRawTacquilaDataObject*>(p));
   }
   static void destruct_TArtRawTacquilaDataObject(void *p) {
      typedef ::TArtRawTacquilaDataObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawTacquilaDataObject

//______________________________________________________________________________
void TArtRawSegmentObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawSegmentObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawSegmentObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawSegmentObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawSegmentObject(void *p) {
      return  p ? new(p) ::TArtRawSegmentObject : new ::TArtRawSegmentObject;
   }
   static void *newArray_TArtRawSegmentObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawSegmentObject[nElements] : new ::TArtRawSegmentObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawSegmentObject(void *p) {
      delete (static_cast<::TArtRawSegmentObject*>(p));
   }
   static void deleteArray_TArtRawSegmentObject(void *p) {
      delete [] (static_cast<::TArtRawSegmentObject*>(p));
   }
   static void destruct_TArtRawSegmentObject(void *p) {
      typedef ::TArtRawSegmentObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawSegmentObject

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoder(void *p) {
      delete (static_cast<::TArtDecoder*>(p));
   }
   static void deleteArray_TArtDecoder(void *p) {
      delete [] (static_cast<::TArtDecoder*>(p));
   }
   static void destruct_TArtDecoder(void *p) {
      typedef ::TArtDecoder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderA3100(void *p) {
      delete (static_cast<::TArtDecoderA3100*>(p));
   }
   static void deleteArray_TArtDecoderA3100(void *p) {
      delete [] (static_cast<::TArtDecoderA3100*>(p));
   }
   static void destruct_TArtDecoderA3100(void *p) {
      typedef ::TArtDecoderA3100 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderA3100

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderA3400(void *p) {
      delete (static_cast<::TArtDecoderA3400*>(p));
   }
   static void deleteArray_TArtDecoderA3400(void *p) {
      delete [] (static_cast<::TArtDecoderA3400*>(p));
   }
   static void destruct_TArtDecoderA3400(void *p) {
      typedef ::TArtDecoderA3400 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderA3400

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderAD413A(void *p) {
      delete (static_cast<::TArtDecoderAD413A*>(p));
   }
   static void deleteArray_TArtDecoderAD413A(void *p) {
      delete [] (static_cast<::TArtDecoderAD413A*>(p));
   }
   static void destruct_TArtDecoderAD413A(void *p) {
      typedef ::TArtDecoderAD413A current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderAD413A

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderAMTTDC(void *p) {
      delete (static_cast<::TArtDecoderAMTTDC*>(p));
   }
   static void deleteArray_TArtDecoderAMTTDC(void *p) {
      delete [] (static_cast<::TArtDecoderAMTTDC*>(p));
   }
   static void destruct_TArtDecoderAMTTDC(void *p) {
      typedef ::TArtDecoderAMTTDC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderAMTTDC

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderBigEndianV7XX(void *p) {
      delete (static_cast<::TArtDecoderBigEndianV7XX*>(p));
   }
   static void deleteArray_TArtDecoderBigEndianV7XX(void *p) {
      delete [] (static_cast<::TArtDecoderBigEndianV7XX*>(p));
   }
   static void destruct_TArtDecoderBigEndianV7XX(void *p) {
      typedef ::TArtDecoderBigEndianV7XX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderBigEndianV7XX

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderCTM405(void *p) {
      delete (static_cast<::TArtDecoderCTM405*>(p));
   }
   static void deleteArray_TArtDecoderCTM405(void *p) {
      delete [] (static_cast<::TArtDecoderCTM405*>(p));
   }
   static void destruct_TArtDecoderCTM405(void *p) {
      typedef ::TArtDecoderCTM405 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderCTM405

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderDSP(void *p) {
      delete (static_cast<::TArtDecoderDSP*>(p));
   }
   static void deleteArray_TArtDecoderDSP(void *p) {
      delete [] (static_cast<::TArtDecoderDSP*>(p));
   }
   static void destruct_TArtDecoderDSP(void *p) {
      typedef ::TArtDecoderDSP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderDSP

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderFactory(void *p) {
      delete (static_cast<::TArtDecoderFactory*>(p));
   }
   static void deleteArray_TArtDecoderFactory(void *p) {
      delete [] (static_cast<::TArtDecoderFactory*>(p));
   }
   static void destruct_TArtDecoderFactory(void *p) {
      typedef ::TArtDecoderFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderFixed16(void *p) {
      delete (static_cast<::TArtDecoderFixed16*>(p));
   }
   static void deleteArray_TArtDecoderFixed16(void *p) {
      delete [] (static_cast<::TArtDecoderFixed16*>(p));
   }
   static void destruct_TArtDecoderFixed16(void *p) {
      typedef ::TArtDecoderFixed16 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderFixed16

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderFixed24(void *p) {
      delete (static_cast<::TArtDecoderFixed24*>(p));
   }
   static void deleteArray_TArtDecoderFixed24(void *p) {
      delete [] (static_cast<::TArtDecoderFixed24*>(p));
   }
   static void destruct_TArtDecoderFixed24(void *p) {
      typedef ::TArtDecoderFixed24 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderFixed24

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderFixed32(void *p) {
      delete (static_cast<::TArtDecoderFixed32*>(p));
   }
   static void deleteArray_TArtDecoderFixed32(void *p) {
      delete [] (static_cast<::TArtDecoderFixed32*>(p));
   }
   static void destruct_TArtDecoderFixed32(void *p) {
      typedef ::TArtDecoderFixed32 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderFixed32

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderHINP(void *p) {
      delete (static_cast<::TArtDecoderHINP*>(p));
   }
   static void deleteArray_TArtDecoderHINP(void *p) {
      delete [] (static_cast<::TArtDecoderHINP*>(p));
   }
   static void destruct_TArtDecoderHINP(void *p) {
      typedef ::TArtDecoderHINP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderHINP

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderL3377d(void *p) {
      delete (static_cast<::TArtDecoderL3377d*>(p));
   }
   static void deleteArray_TArtDecoderL3377d(void *p) {
      delete [] (static_cast<::TArtDecoderL3377d*>(p));
   }
   static void destruct_TArtDecoderL3377d(void *p) {
      typedef ::TArtDecoderL3377d current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderL3377d

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderLUPO(void *p) {
      delete (static_cast<::TArtDecoderLUPO*>(p));
   }
   static void deleteArray_TArtDecoderLUPO(void *p) {
      delete [] (static_cast<::TArtDecoderLUPO*>(p));
   }
   static void destruct_TArtDecoderLUPO(void *p) {
      typedef ::TArtDecoderLUPO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderLUPO

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderMADC32(void *p) {
      delete (static_cast<::TArtDecoderMADC32*>(p));
   }
   static void deleteArray_TArtDecoderMADC32(void *p) {
      delete [] (static_cast<::TArtDecoderMADC32*>(p));
   }
   static void destruct_TArtDecoderMADC32(void *p) {
      typedef ::TArtDecoderMADC32 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderMADC32

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderMDPP16(void *p) {
      delete (static_cast<::TArtDecoderMDPP16*>(p));
   }
   static void deleteArray_TArtDecoderMDPP16(void *p) {
      delete [] (static_cast<::TArtDecoderMDPP16*>(p));
   }
   static void destruct_TArtDecoderMDPP16(void *p) {
      typedef ::TArtDecoderMDPP16 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderMDPP16

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderMQDC32(void *p) {
      delete (static_cast<::TArtDecoderMQDC32*>(p));
   }
   static void deleteArray_TArtDecoderMQDC32(void *p) {
      delete [] (static_cast<::TArtDecoderMQDC32*>(p));
   }
   static void destruct_TArtDecoderMQDC32(void *p) {
      typedef ::TArtDecoderMQDC32 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderMQDC32

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderMTDC32(void *p) {
      delete (static_cast<::TArtDecoderMTDC32*>(p));
   }
   static void deleteArray_TArtDecoderMTDC32(void *p) {
      delete [] (static_cast<::TArtDecoderMTDC32*>(p));
   }
   static void destruct_TArtDecoderMTDC32(void *p) {
      typedef ::TArtDecoderMTDC32 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderMTDC32

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderNeulandTS(void *p) {
      delete (static_cast<::TArtDecoderNeulandTS*>(p));
   }
   static void deleteArray_TArtDecoderNeulandTS(void *p) {
      delete [] (static_cast<::TArtDecoderNeulandTS*>(p));
   }
   static void destruct_TArtDecoderNeulandTS(void *p) {
      typedef ::TArtDecoderNeulandTS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderNeulandTS

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderP716X(void *p) {
      delete (static_cast<::TArtDecoderP716X*>(p));
   }
   static void deleteArray_TArtDecoderP716X(void *p) {
      delete [] (static_cast<::TArtDecoderP716X*>(p));
   }
   static void destruct_TArtDecoderP716X(void *p) {
      typedef ::TArtDecoderP716X current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderP716X

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderP716XZ(void *p) {
      delete (static_cast<::TArtDecoderP716XZ*>(p));
   }
   static void deleteArray_TArtDecoderP716XZ(void *p) {
      delete [] (static_cast<::TArtDecoderP716XZ*>(p));
   }
   static void destruct_TArtDecoderP716XZ(void *p) {
      typedef ::TArtDecoderP716XZ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderP716XZ

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderRICHADCM(void *p) {
      delete (static_cast<::TArtDecoderRICHADCM*>(p));
   }
   static void deleteArray_TArtDecoderRICHADCM(void *p) {
      delete [] (static_cast<::TArtDecoderRICHADCM*>(p));
   }
   static void destruct_TArtDecoderRICHADCM(void *p) {
      typedef ::TArtDecoderRICHADCM current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderRICHADCM

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderSIS3301(void *p) {
      delete (static_cast<::TArtDecoderSIS3301*>(p));
   }
   static void deleteArray_TArtDecoderSIS3301(void *p) {
      delete [] (static_cast<::TArtDecoderSIS3301*>(p));
   }
   static void destruct_TArtDecoderSIS3301(void *p) {
      typedef ::TArtDecoderSIS3301 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderSIS3301

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderTacquila(void *p) {
      delete (static_cast<::TArtDecoderTacquila*>(p));
   }
   static void deleteArray_TArtDecoderTacquila(void *p) {
      delete [] (static_cast<::TArtDecoderTacquila*>(p));
   }
   static void destruct_TArtDecoderTacquila(void *p) {
      typedef ::TArtDecoderTacquila current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderTacquila

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV1190(void *p) {
      delete (static_cast<::TArtDecoderV1190*>(p));
   }
   static void deleteArray_TArtDecoderV1190(void *p) {
      delete [] (static_cast<::TArtDecoderV1190*>(p));
   }
   static void destruct_TArtDecoderV1190(void *p) {
      typedef ::TArtDecoderV1190 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV1190

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV1190C(void *p) {
      delete (static_cast<::TArtDecoderV1190C*>(p));
   }
   static void deleteArray_TArtDecoderV1190C(void *p) {
      delete [] (static_cast<::TArtDecoderV1190C*>(p));
   }
   static void destruct_TArtDecoderV1190C(void *p) {
      typedef ::TArtDecoderV1190C current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV1190C

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV1290(void *p) {
      delete (static_cast<::TArtDecoderV1290*>(p));
   }
   static void deleteArray_TArtDecoderV1290(void *p) {
      delete [] (static_cast<::TArtDecoderV1290*>(p));
   }
   static void destruct_TArtDecoderV1290(void *p) {
      typedef ::TArtDecoderV1290 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV1290

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV1740(void *p) {
      delete (static_cast<::TArtDecoderV1740*>(p));
   }
   static void deleteArray_TArtDecoderV1740(void *p) {
      delete [] (static_cast<::TArtDecoderV1740*>(p));
   }
   static void destruct_TArtDecoderV1740(void *p) {
      typedef ::TArtDecoderV1740 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV1740

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV550(void *p) {
      delete (static_cast<::TArtDecoderV550*>(p));
   }
   static void deleteArray_TArtDecoderV550(void *p) {
      delete [] (static_cast<::TArtDecoderV550*>(p));
   }
   static void destruct_TArtDecoderV550(void *p) {
      typedef ::TArtDecoderV550 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV550

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV767(void *p) {
      delete (static_cast<::TArtDecoderV767*>(p));
   }
   static void deleteArray_TArtDecoderV767(void *p) {
      delete [] (static_cast<::TArtDecoderV767*>(p));
   }
   static void destruct_TArtDecoderV767(void *p) {
      typedef ::TArtDecoderV767 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV767

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderV7XX(void *p) {
      delete (static_cast<::TArtDecoderV7XX*>(p));
   }
   static void deleteArray_TArtDecoderV7XX(void *p) {
      delete [] (static_cast<::TArtDecoderV7XX*>(p));
   }
   static void destruct_TArtDecoderV7XX(void *p) {
      typedef ::TArtDecoderV7XX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderV7XX

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtDecoderVmeEasyroc(void *p) {
      delete (static_cast<::TArtDecoderVmeEasyroc*>(p));
   }
   static void deleteArray_TArtDecoderVmeEasyroc(void *p) {
      delete [] (static_cast<::TArtDecoderVmeEasyroc*>(p));
   }
   static void destruct_TArtDecoderVmeEasyroc(void *p) {
      typedef ::TArtDecoderVmeEasyroc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtDecoderVmeEasyroc

//______________________________________________________________________________
void TArtEventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtEventInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtEventInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtEventInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtEventInfo(void *p) {
      return  p ? new(p) ::TArtEventInfo : new ::TArtEventInfo;
   }
   static void *newArray_TArtEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TArtEventInfo[nElements] : new ::TArtEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtEventInfo(void *p) {
      delete (static_cast<::TArtEventInfo*>(p));
   }
   static void deleteArray_TArtEventInfo(void *p) {
      delete [] (static_cast<::TArtEventInfo*>(p));
   }
   static void destruct_TArtEventInfo(void *p) {
      typedef ::TArtEventInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtEventInfo

//______________________________________________________________________________
void TArtRawScalerObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawScalerObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawScalerObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawScalerObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawScalerObject(void *p) {
      return  p ? new(p) ::TArtRawScalerObject : new ::TArtRawScalerObject;
   }
   static void *newArray_TArtRawScalerObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawScalerObject[nElements] : new ::TArtRawScalerObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawScalerObject(void *p) {
      delete (static_cast<::TArtRawScalerObject*>(p));
   }
   static void deleteArray_TArtRawScalerObject(void *p) {
      delete [] (static_cast<::TArtRawScalerObject*>(p));
   }
   static void destruct_TArtRawScalerObject(void *p) {
      typedef ::TArtRawScalerObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawScalerObject

//______________________________________________________________________________
void TArtRawEventObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRawEventObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRawEventObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRawEventObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRawEventObject(void *p) {
      return  p ? new(p) ::TArtRawEventObject : new ::TArtRawEventObject;
   }
   static void *newArray_TArtRawEventObject(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRawEventObject[nElements] : new ::TArtRawEventObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRawEventObject(void *p) {
      delete (static_cast<::TArtRawEventObject*>(p));
   }
   static void deleteArray_TArtRawEventObject(void *p) {
      delete [] (static_cast<::TArtRawEventObject*>(p));
   }
   static void destruct_TArtRawEventObject(void *p) {
      typedef ::TArtRawEventObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRawEventObject

//______________________________________________________________________________
void TArtParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtParser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtParser::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtParser::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtParser(void *p) {
      delete (static_cast<::TArtParser*>(p));
   }
   static void deleteArray_TArtParser(void *p) {
      delete [] (static_cast<::TArtParser*>(p));
   }
   static void destruct_TArtParser(void *p) {
      typedef ::TArtParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtParser

//______________________________________________________________________________
void TArtRunInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRunInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRunInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRunInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRunInfo(void *p) {
      return  p ? new(p) ::TArtRunInfo : new ::TArtRunInfo;
   }
   static void *newArray_TArtRunInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRunInfo[nElements] : new ::TArtRunInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRunInfo(void *p) {
      delete (static_cast<::TArtRunInfo*>(p));
   }
   static void deleteArray_TArtRunInfo(void *p) {
      delete [] (static_cast<::TArtRunInfo*>(p));
   }
   static void destruct_TArtRunInfo(void *p) {
      typedef ::TArtRunInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRunInfo

//______________________________________________________________________________
void TArtStoreManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtStoreManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtStoreManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtStoreManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtStoreManager(void *p) {
      delete (static_cast<::TArtStoreManager*>(p));
   }
   static void deleteArray_TArtStoreManager(void *p) {
      delete [] (static_cast<::TArtStoreManager*>(p));
   }
   static void destruct_TArtStoreManager(void *p) {
      typedef ::TArtStoreManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtStoreManager

//______________________________________________________________________________
void TArtEventStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtEventStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtEventStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtEventStore::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtEventStore(void *p) {
      return  p ? new(p) ::TArtEventStore : new ::TArtEventStore;
   }
   static void *newArray_TArtEventStore(Long_t nElements, void *p) {
      return p ? new(p) ::TArtEventStore[nElements] : new ::TArtEventStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtEventStore(void *p) {
      delete (static_cast<::TArtEventStore*>(p));
   }
   static void deleteArray_TArtEventStore(void *p) {
      delete [] (static_cast<::TArtEventStore*>(p));
   }
   static void destruct_TArtEventStore(void *p) {
      typedef ::TArtEventStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtEventStore

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtFileDataSource(void *p) {
      return  p ? new(p) ::TArtFileDataSource : new ::TArtFileDataSource;
   }
   static void *newArray_TArtFileDataSource(Long_t nElements, void *p) {
      return p ? new(p) ::TArtFileDataSource[nElements] : new ::TArtFileDataSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtFileDataSource(void *p) {
      delete (static_cast<::TArtFileDataSource*>(p));
   }
   static void deleteArray_TArtFileDataSource(void *p) {
      delete [] (static_cast<::TArtFileDataSource*>(p));
   }
   static void destruct_TArtFileDataSource(void *p) {
      typedef ::TArtFileDataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtFileDataSource

//______________________________________________________________________________
void TArtRIDFMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtRIDFMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtRIDFMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtRIDFMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtRIDFMap(void *p) {
      return  p ? new(p) ::TArtRIDFMap : new ::TArtRIDFMap;
   }
   static void *newArray_TArtRIDFMap(Long_t nElements, void *p) {
      return p ? new(p) ::TArtRIDFMap[nElements] : new ::TArtRIDFMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtRIDFMap(void *p) {
      delete (static_cast<::TArtRIDFMap*>(p));
   }
   static void deleteArray_TArtRIDFMap(void *p) {
      delete [] (static_cast<::TArtRIDFMap*>(p));
   }
   static void destruct_TArtRIDFMap(void *p) {
      typedef ::TArtRIDFMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtRIDFMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtMath(void *p) {
      return  p ? new(p) ::TArtMath : new ::TArtMath;
   }
   static void *newArray_TArtMath(Long_t nElements, void *p) {
      return p ? new(p) ::TArtMath[nElements] : new ::TArtMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtMath(void *p) {
      delete (static_cast<::TArtMath*>(p));
   }
   static void deleteArray_TArtMath(void *p) {
      delete [] (static_cast<::TArtMath*>(p));
   }
   static void destruct_TArtMath(void *p) {
      typedef ::TArtMath current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtMath

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtParserFactory(void *p) {
      delete (static_cast<::TArtParserFactory*>(p));
   }
   static void deleteArray_TArtParserFactory(void *p) {
      delete [] (static_cast<::TArtParserFactory*>(p));
   }
   static void destruct_TArtParserFactory(void *p) {
      typedef ::TArtParserFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtParserFactory

//______________________________________________________________________________
void TArtParserRDF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtParserRDF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtParserRDF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtParserRDF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtParserRDF(void *p) {
      return  p ? new(p) ::TArtParserRDF : new ::TArtParserRDF;
   }
   static void *newArray_TArtParserRDF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtParserRDF[nElements] : new ::TArtParserRDF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtParserRDF(void *p) {
      delete (static_cast<::TArtParserRDF*>(p));
   }
   static void deleteArray_TArtParserRDF(void *p) {
      delete [] (static_cast<::TArtParserRDF*>(p));
   }
   static void destruct_TArtParserRDF(void *p) {
      typedef ::TArtParserRDF current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtParserRDF

//______________________________________________________________________________
void TArtParserRIDF::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtParserRIDF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtParserRIDF::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtParserRIDF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtParserRIDF(void *p) {
      return  p ? new(p) ::TArtParserRIDF : new ::TArtParserRIDF;
   }
   static void *newArray_TArtParserRIDF(Long_t nElements, void *p) {
      return p ? new(p) ::TArtParserRIDF[nElements] : new ::TArtParserRIDF[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtParserRIDF(void *p) {
      delete (static_cast<::TArtParserRIDF*>(p));
   }
   static void deleteArray_TArtParserRIDF(void *p) {
      delete [] (static_cast<::TArtParserRIDF*>(p));
   }
   static void destruct_TArtParserRIDF(void *p) {
      typedef ::TArtParserRIDF current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtParserRIDF

//______________________________________________________________________________
void TArtReconstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtReconstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtReconstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtReconstruction::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtReconstruction(void *p) {
      delete (static_cast<::TArtReconstruction*>(p));
   }
   static void deleteArray_TArtReconstruction(void *p) {
      delete [] (static_cast<::TArtReconstruction*>(p));
   }
   static void destruct_TArtReconstruction(void *p) {
      typedef ::TArtReconstruction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtReconstruction

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtSemaphore(void *p) {
      delete (static_cast<::TArtSemaphore*>(p));
   }
   static void deleteArray_TArtSemaphore(void *p) {
      delete [] (static_cast<::TArtSemaphore*>(p));
   }
   static void destruct_TArtSemaphore(void *p) {
      typedef ::TArtSemaphore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSemaphore

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArtSharedMemory(void *p) {
      delete (static_cast<::TArtSharedMemory*>(p));
   }
   static void deleteArray_TArtSharedMemory(void *p) {
      delete [] (static_cast<::TArtSharedMemory*>(p));
   }
   static void destruct_TArtSharedMemory(void *p) {
      typedef ::TArtSharedMemory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSharedMemory

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtSharedMemoryDataSource(void *p) {
      return  p ? new(p) ::TArtSharedMemoryDataSource : new ::TArtSharedMemoryDataSource;
   }
   static void *newArray_TArtSharedMemoryDataSource(Long_t nElements, void *p) {
      return p ? new(p) ::TArtSharedMemoryDataSource[nElements] : new ::TArtSharedMemoryDataSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtSharedMemoryDataSource(void *p) {
      delete (static_cast<::TArtSharedMemoryDataSource*>(p));
   }
   static void deleteArray_TArtSharedMemoryDataSource(void *p) {
      delete [] (static_cast<::TArtSharedMemoryDataSource*>(p));
   }
   static void destruct_TArtSharedMemoryDataSource(void *p) {
      typedef ::TArtSharedMemoryDataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtSharedMemoryDataSource

//______________________________________________________________________________
void TArtStreamingDataSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArtStreamingDataSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArtStreamingDataSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArtStreamingDataSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtStreamingDataSource(void *p) {
      return  p ? new(p) ::TArtStreamingDataSource : new ::TArtStreamingDataSource;
   }
   static void *newArray_TArtStreamingDataSource(Long_t nElements, void *p) {
      return p ? new(p) ::TArtStreamingDataSource[nElements] : new ::TArtStreamingDataSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtStreamingDataSource(void *p) {
      delete (static_cast<::TArtStreamingDataSource*>(p));
   }
   static void deleteArray_TArtStreamingDataSource(void *p) {
      delete [] (static_cast<::TArtStreamingDataSource*>(p));
   }
   static void destruct_TArtStreamingDataSource(void *p) {
      typedef ::TArtStreamingDataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtStreamingDataSource

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArtUtil(void *p) {
      return  p ? new(p) ::TArtUtil : new ::TArtUtil;
   }
   static void *newArray_TArtUtil(Long_t nElements, void *p) {
      return p ? new(p) ::TArtUtil[nElements] : new ::TArtUtil[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArtUtil(void *p) {
      delete (static_cast<::TArtUtil*>(p));
   }
   static void deleteArray_TArtUtil(void *p) {
      delete [] (static_cast<::TArtUtil*>(p));
   }
   static void destruct_TArtUtil(void *p) {
      typedef ::TArtUtil current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArtUtil

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 389,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

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
   static TClass *vectorlETArtRawTacquilaDataObjectmUgR_Dictionary();
   static void vectorlETArtRawTacquilaDataObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRawTacquilaDataObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETArtRawTacquilaDataObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRawTacquilaDataObjectmUgR(void *p);
   static void deleteArray_vectorlETArtRawTacquilaDataObjectmUgR(void *p);
   static void destruct_vectorlETArtRawTacquilaDataObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRawTacquilaDataObject*>*)
   {
      vector<TArtRawTacquilaDataObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRawTacquilaDataObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRawTacquilaDataObject*>", -2, "vector", 389,
                  typeid(vector<TArtRawTacquilaDataObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRawTacquilaDataObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRawTacquilaDataObject*>) );
      instance.SetNew(&new_vectorlETArtRawTacquilaDataObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRawTacquilaDataObjectmUgR);
      instance.SetDelete(&delete_vectorlETArtRawTacquilaDataObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRawTacquilaDataObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRawTacquilaDataObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRawTacquilaDataObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtRawTacquilaDataObject*>","std::vector<TArtRawTacquilaDataObject*, std::allocator<TArtRawTacquilaDataObject*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtRawTacquilaDataObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRawTacquilaDataObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtRawTacquilaDataObject*>*>(nullptr))->GetClass();
      vectorlETArtRawTacquilaDataObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRawTacquilaDataObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRawTacquilaDataObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawTacquilaDataObject*> : new vector<TArtRawTacquilaDataObject*>;
   }
   static void *newArray_vectorlETArtRawTacquilaDataObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawTacquilaDataObject*>[nElements] : new vector<TArtRawTacquilaDataObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRawTacquilaDataObjectmUgR(void *p) {
      delete (static_cast<vector<TArtRawTacquilaDataObject*>*>(p));
   }
   static void deleteArray_vectorlETArtRawTacquilaDataObjectmUgR(void *p) {
      delete [] (static_cast<vector<TArtRawTacquilaDataObject*>*>(p));
   }
   static void destruct_vectorlETArtRawTacquilaDataObjectmUgR(void *p) {
      typedef vector<TArtRawTacquilaDataObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRawTacquilaDataObject*>

namespace ROOT {
   static TClass *vectorlETArtRawSegmentObjectmUgR_Dictionary();
   static void vectorlETArtRawSegmentObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRawSegmentObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETArtRawSegmentObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRawSegmentObjectmUgR(void *p);
   static void deleteArray_vectorlETArtRawSegmentObjectmUgR(void *p);
   static void destruct_vectorlETArtRawSegmentObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRawSegmentObject*>*)
   {
      vector<TArtRawSegmentObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRawSegmentObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRawSegmentObject*>", -2, "vector", 389,
                  typeid(vector<TArtRawSegmentObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRawSegmentObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRawSegmentObject*>) );
      instance.SetNew(&new_vectorlETArtRawSegmentObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRawSegmentObjectmUgR);
      instance.SetDelete(&delete_vectorlETArtRawSegmentObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRawSegmentObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRawSegmentObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRawSegmentObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtRawSegmentObject*>","std::vector<TArtRawSegmentObject*, std::allocator<TArtRawSegmentObject*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtRawSegmentObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRawSegmentObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtRawSegmentObject*>*>(nullptr))->GetClass();
      vectorlETArtRawSegmentObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRawSegmentObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRawSegmentObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawSegmentObject*> : new vector<TArtRawSegmentObject*>;
   }
   static void *newArray_vectorlETArtRawSegmentObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawSegmentObject*>[nElements] : new vector<TArtRawSegmentObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRawSegmentObjectmUgR(void *p) {
      delete (static_cast<vector<TArtRawSegmentObject*>*>(p));
   }
   static void deleteArray_vectorlETArtRawSegmentObjectmUgR(void *p) {
      delete [] (static_cast<vector<TArtRawSegmentObject*>*>(p));
   }
   static void destruct_vectorlETArtRawSegmentObjectmUgR(void *p) {
      typedef vector<TArtRawSegmentObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRawSegmentObject*>

namespace ROOT {
   static TClass *vectorlETArtRawScalerObjectmUgR_Dictionary();
   static void vectorlETArtRawScalerObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRawScalerObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETArtRawScalerObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRawScalerObjectmUgR(void *p);
   static void deleteArray_vectorlETArtRawScalerObjectmUgR(void *p);
   static void destruct_vectorlETArtRawScalerObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRawScalerObject*>*)
   {
      vector<TArtRawScalerObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRawScalerObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRawScalerObject*>", -2, "vector", 389,
                  typeid(vector<TArtRawScalerObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRawScalerObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRawScalerObject*>) );
      instance.SetNew(&new_vectorlETArtRawScalerObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRawScalerObjectmUgR);
      instance.SetDelete(&delete_vectorlETArtRawScalerObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRawScalerObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRawScalerObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRawScalerObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtRawScalerObject*>","std::vector<TArtRawScalerObject*, std::allocator<TArtRawScalerObject*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtRawScalerObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRawScalerObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtRawScalerObject*>*>(nullptr))->GetClass();
      vectorlETArtRawScalerObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRawScalerObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRawScalerObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawScalerObject*> : new vector<TArtRawScalerObject*>;
   }
   static void *newArray_vectorlETArtRawScalerObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawScalerObject*>[nElements] : new vector<TArtRawScalerObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRawScalerObjectmUgR(void *p) {
      delete (static_cast<vector<TArtRawScalerObject*>*>(p));
   }
   static void deleteArray_vectorlETArtRawScalerObjectmUgR(void *p) {
      delete [] (static_cast<vector<TArtRawScalerObject*>*>(p));
   }
   static void destruct_vectorlETArtRawScalerObjectmUgR(void *p) {
      typedef vector<TArtRawScalerObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRawScalerObject*>

namespace ROOT {
   static TClass *vectorlETArtRawFADCDataObjectmUgR_Dictionary();
   static void vectorlETArtRawFADCDataObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRawFADCDataObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETArtRawFADCDataObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRawFADCDataObjectmUgR(void *p);
   static void deleteArray_vectorlETArtRawFADCDataObjectmUgR(void *p);
   static void destruct_vectorlETArtRawFADCDataObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRawFADCDataObject*>*)
   {
      vector<TArtRawFADCDataObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRawFADCDataObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRawFADCDataObject*>", -2, "vector", 389,
                  typeid(vector<TArtRawFADCDataObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRawFADCDataObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRawFADCDataObject*>) );
      instance.SetNew(&new_vectorlETArtRawFADCDataObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRawFADCDataObjectmUgR);
      instance.SetDelete(&delete_vectorlETArtRawFADCDataObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRawFADCDataObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRawFADCDataObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRawFADCDataObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtRawFADCDataObject*>","std::vector<TArtRawFADCDataObject*, std::allocator<TArtRawFADCDataObject*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtRawFADCDataObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRawFADCDataObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtRawFADCDataObject*>*>(nullptr))->GetClass();
      vectorlETArtRawFADCDataObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRawFADCDataObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRawFADCDataObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawFADCDataObject*> : new vector<TArtRawFADCDataObject*>;
   }
   static void *newArray_vectorlETArtRawFADCDataObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawFADCDataObject*>[nElements] : new vector<TArtRawFADCDataObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRawFADCDataObjectmUgR(void *p) {
      delete (static_cast<vector<TArtRawFADCDataObject*>*>(p));
   }
   static void deleteArray_vectorlETArtRawFADCDataObjectmUgR(void *p) {
      delete [] (static_cast<vector<TArtRawFADCDataObject*>*>(p));
   }
   static void destruct_vectorlETArtRawFADCDataObjectmUgR(void *p) {
      typedef vector<TArtRawFADCDataObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRawFADCDataObject*>

namespace ROOT {
   static TClass *vectorlETArtRawDataObjectmUgR_Dictionary();
   static void vectorlETArtRawDataObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETArtRawDataObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETArtRawDataObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETArtRawDataObjectmUgR(void *p);
   static void deleteArray_vectorlETArtRawDataObjectmUgR(void *p);
   static void destruct_vectorlETArtRawDataObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArtRawDataObject*>*)
   {
      vector<TArtRawDataObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArtRawDataObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArtRawDataObject*>", -2, "vector", 389,
                  typeid(vector<TArtRawDataObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArtRawDataObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArtRawDataObject*>) );
      instance.SetNew(&new_vectorlETArtRawDataObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETArtRawDataObjectmUgR);
      instance.SetDelete(&delete_vectorlETArtRawDataObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArtRawDataObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETArtRawDataObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArtRawDataObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArtRawDataObject*>","std::vector<TArtRawDataObject*, std::allocator<TArtRawDataObject*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArtRawDataObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArtRawDataObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArtRawDataObject*>*>(nullptr))->GetClass();
      vectorlETArtRawDataObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArtRawDataObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArtRawDataObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawDataObject*> : new vector<TArtRawDataObject*>;
   }
   static void *newArray_vectorlETArtRawDataObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArtRawDataObject*>[nElements] : new vector<TArtRawDataObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArtRawDataObjectmUgR(void *p) {
      delete (static_cast<vector<TArtRawDataObject*>*>(p));
   }
   static void deleteArray_vectorlETArtRawDataObjectmUgR(void *p) {
      delete [] (static_cast<vector<TArtRawDataObject*>*>(p));
   }
   static void destruct_vectorlETArtRawDataObjectmUgR(void *p) {
      typedef vector<TArtRawDataObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArtRawDataObject*>

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = nullptr);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "vector", 389,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<Long64_t>","std::vector<long long, std::allocator<long long> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr))->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete (static_cast<vector<Long64_t>*>(p));
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] (static_cast<vector<Long64_t>*>(p));
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace {
  void TriggerDictionaryInitialization_anacore_dict_Impl() {
    static const char* headers[] = {
"include/TArtCore.hh",
"include/TArtDataObject.hh",
"include/TArtDataSource.hh",
"include/TArtDecoder.hh",
"include/TArtDecoderA3100.hh",
"include/TArtDecoderA3400.hh",
"include/TArtDecoderAD413A.hh",
"include/TArtDecoderAMTTDC.hh",
"include/TArtDecoderBigEndianV7XX.hh",
"include/TArtDecoderCTM405.hh",
"include/TArtDecoderDSP.hh",
"include/TArtDecoderFactory.hh",
"include/TArtDecoderFixed16.hh",
"include/TArtDecoderFixed24.hh",
"include/TArtDecoderFixed32.hh",
"include/TArtDecoderHINP.hh",
"include/TArtDecoderL3377d.hh",
"include/TArtDecoderLUPO.hh",
"include/TArtDecoderMADC32.hh",
"include/TArtDecoderMDPP16.hh",
"include/TArtDecoderMQDC32.hh",
"include/TArtDecoderMTDC32.hh",
"include/TArtDecoderNeulandTS.hh",
"include/TArtDecoderP716X.hh",
"include/TArtDecoderP716XZ.hh",
"include/TArtDecoderRICHADCM.hh",
"include/TArtDecoderSIS3301.hh",
"include/TArtDecoderTacquila.hh",
"include/TArtDecoderV1190.hh",
"include/TArtDecoderV1190C.hh",
"include/TArtDecoderV1290.hh",
"include/TArtDecoderV1740.hh",
"include/TArtDecoderV550.hh",
"include/TArtDecoderV767.hh",
"include/TArtDecoderV7XX.hh",
"include/TArtDecoderV830.hh",
"include/TArtDecoderVmeEasyroc.hh",
"include/TArtEventInfo.hh",
"include/TArtEventStore.hh",
"include/TArtFileDataSource.hh",
"include/TArtMap.hh",
"include/TArtMath.hh",
"include/TArtParser.hh",
"include/TArtParserFactory.hh",
"include/TArtParserRDF.hh",
"include/TArtParserRIDF.hh",
"include/TArtRawDataObject.hh",
"include/TArtRawEventObject.hh",
"include/TArtRawFADCDataObject.hh",
"include/TArtRawScalerObject.hh",
"include/TArtRawSegmentObject.hh",
"include/TArtRawTacquilaDataObject.hh",
"include/TArtReconstruction.hh",
"include/TArtRunInfo.hh",
"include/TArtSemaphore.hh",
"include/TArtSharedMemory.hh",
"include/TArtSharedMemoryDataSource.hh",
"include/TArtStoreManager.hh",
"include/TArtStreamingDataSource.hh",
"include/TArtUtil.hh",
"include/segidlist.hh",
nullptr
    };
    static const char* includePaths[] = {
"/opt/root/root-6.30.06-install/include",
"/raid/R111/opt/root/root-6.30.06-install/include/",
"/raid/R111/home/s057/svn/2025SAMURAI.s057/sources/Core/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "anacore_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$include/TArtCore.hh")))  TArtCore;
class __attribute__((annotate("$clingAutoload$include/TArtDataObject.hh")))  TArtDataObject;
class __attribute__((annotate("$clingAutoload$include/TArtDataSource.hh")))  TArtDataSource;
class __attribute__((annotate("$clingAutoload$TArtRawDataObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtDecoder.hh")))  TArtRawDataObject;
class __attribute__((annotate("$clingAutoload$TArtRawFADCDataObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtDecoder.hh")))  TArtRawFADCDataObject;
class __attribute__((annotate("$clingAutoload$TArtRawTacquilaDataObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtDecoder.hh")))  TArtRawTacquilaDataObject;
class __attribute__((annotate("$clingAutoload$TArtRawSegmentObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtDecoder.hh")))  TArtRawSegmentObject;
class __attribute__((annotate("$clingAutoload$include/TArtDecoder.hh")))  TArtDecoder;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderA3100.hh")))  TArtDecoderA3100;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderA3400.hh")))  TArtDecoderA3400;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderAD413A.hh")))  TArtDecoderAD413A;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderAMTTDC.hh")))  TArtDecoderAMTTDC;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderBigEndianV7XX.hh")))  TArtDecoderBigEndianV7XX;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderCTM405.hh")))  TArtDecoderCTM405;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderDSP.hh")))  TArtDecoderDSP;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderFactory.hh")))  TArtDecoderFactory;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderFixed16.hh")))  TArtDecoderFixed16;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderFixed24.hh")))  TArtDecoderFixed24;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderFixed32.hh")))  TArtDecoderFixed32;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderHINP.hh")))  TArtDecoderHINP;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderL3377d.hh")))  TArtDecoderL3377d;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderLUPO.hh")))  TArtDecoderLUPO;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderMADC32.hh")))  TArtDecoderMADC32;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderMDPP16.hh")))  TArtDecoderMDPP16;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderMQDC32.hh")))  TArtDecoderMQDC32;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderMTDC32.hh")))  TArtDecoderMTDC32;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderNeulandTS.hh")))  TArtDecoderNeulandTS;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderP716X.hh")))  TArtDecoderP716X;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderP716XZ.hh")))  TArtDecoderP716XZ;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderRICHADCM.hh")))  TArtDecoderRICHADCM;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderSIS3301.hh")))  TArtDecoderSIS3301;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderTacquila.hh")))  TArtDecoderTacquila;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV1190.hh")))  TArtDecoderV1190;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV1190C.hh")))  TArtDecoderV1190C;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV1290.hh")))  TArtDecoderV1290;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV1740.hh")))  TArtDecoderV1740;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV550.hh")))  TArtDecoderV550;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV767.hh")))  TArtDecoderV767;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderV7XX.hh")))  TArtDecoderV7XX;
class __attribute__((annotate("$clingAutoload$include/TArtDecoderVmeEasyroc.hh")))  TArtDecoderVmeEasyroc;
class __attribute__((annotate("$clingAutoload$include/TArtEventInfo.hh")))  TArtEventInfo;
class __attribute__((annotate("$clingAutoload$TArtRawScalerObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtRawScalerObject;
class __attribute__((annotate("$clingAutoload$TArtRawEventObject.hh")))  __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtRawEventObject;
class __attribute__((annotate("$clingAutoload$TArtParser.hh")))  __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtParser;
class __attribute__((annotate("$clingAutoload$TArtRunInfo.hh")))  __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtRunInfo;
class __attribute__((annotate("$clingAutoload$TArtStoreManager.hh")))  __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtStoreManager;
class __attribute__((annotate("$clingAutoload$include/TArtEventStore.hh")))  TArtEventStore;
class __attribute__((annotate("$clingAutoload$include/TArtFileDataSource.hh")))  TArtFileDataSource;
class __attribute__((annotate("$clingAutoload$include/TArtMap.hh")))  TArtRIDFMap;
class __attribute__((annotate("$clingAutoload$include/TArtMath.hh")))  TArtMath;
class __attribute__((annotate("$clingAutoload$include/TArtParserFactory.hh")))  TArtParserFactory;
class __attribute__((annotate("$clingAutoload$include/TArtParserRDF.hh")))  TArtParserRDF;
class __attribute__((annotate("$clingAutoload$include/TArtParserRIDF.hh")))  TArtParserRIDF;
class __attribute__((annotate("$clingAutoload$include/TArtReconstruction.hh")))  TArtReconstruction;
class __attribute__((annotate("$clingAutoload$include/TArtSemaphore.hh")))  TArtSemaphore;
class __attribute__((annotate("$clingAutoload$include/TArtSharedMemory.hh")))  TArtSharedMemory;
class __attribute__((annotate("$clingAutoload$include/TArtSharedMemoryDataSource.hh")))  TArtSharedMemoryDataSource;
class __attribute__((annotate("$clingAutoload$include/TArtStreamingDataSource.hh")))  TArtStreamingDataSource;
class __attribute__((annotate("$clingAutoload$include/TArtUtil.hh")))  TArtUtil;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "anacore_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/TArtCore.hh"
#include "include/TArtDataObject.hh"
#include "include/TArtDataSource.hh"
#include "include/TArtDecoder.hh"
#include "include/TArtDecoderA3100.hh"
#include "include/TArtDecoderA3400.hh"
#include "include/TArtDecoderAD413A.hh"
#include "include/TArtDecoderAMTTDC.hh"
#include "include/TArtDecoderBigEndianV7XX.hh"
#include "include/TArtDecoderCTM405.hh"
#include "include/TArtDecoderDSP.hh"
#include "include/TArtDecoderFactory.hh"
#include "include/TArtDecoderFixed16.hh"
#include "include/TArtDecoderFixed24.hh"
#include "include/TArtDecoderFixed32.hh"
#include "include/TArtDecoderHINP.hh"
#include "include/TArtDecoderL3377d.hh"
#include "include/TArtDecoderLUPO.hh"
#include "include/TArtDecoderMADC32.hh"
#include "include/TArtDecoderMDPP16.hh"
#include "include/TArtDecoderMQDC32.hh"
#include "include/TArtDecoderMTDC32.hh"
#include "include/TArtDecoderNeulandTS.hh"
#include "include/TArtDecoderP716X.hh"
#include "include/TArtDecoderP716XZ.hh"
#include "include/TArtDecoderRICHADCM.hh"
#include "include/TArtDecoderSIS3301.hh"
#include "include/TArtDecoderTacquila.hh"
#include "include/TArtDecoderV1190.hh"
#include "include/TArtDecoderV1190C.hh"
#include "include/TArtDecoderV1290.hh"
#include "include/TArtDecoderV1740.hh"
#include "include/TArtDecoderV550.hh"
#include "include/TArtDecoderV767.hh"
#include "include/TArtDecoderV7XX.hh"
#include "include/TArtDecoderV830.hh"
#include "include/TArtDecoderVmeEasyroc.hh"
#include "include/TArtEventInfo.hh"
#include "include/TArtEventStore.hh"
#include "include/TArtFileDataSource.hh"
#include "include/TArtMap.hh"
#include "include/TArtMath.hh"
#include "include/TArtParser.hh"
#include "include/TArtParserFactory.hh"
#include "include/TArtParserRDF.hh"
#include "include/TArtParserRIDF.hh"
#include "include/TArtRawDataObject.hh"
#include "include/TArtRawEventObject.hh"
#include "include/TArtRawFADCDataObject.hh"
#include "include/TArtRawScalerObject.hh"
#include "include/TArtRawSegmentObject.hh"
#include "include/TArtRawTacquilaDataObject.hh"
#include "include/TArtReconstruction.hh"
#include "include/TArtRunInfo.hh"
#include "include/TArtSemaphore.hh"
#include "include/TArtSharedMemory.hh"
#include "include/TArtSharedMemoryDataSource.hh"
#include "include/TArtStoreManager.hh"
#include "include/TArtStreamingDataSource.hh"
#include "include/TArtUtil.hh"
#include "include/segidlist.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TArtCore", payloadCode, "@",
"TArtDataObject", payloadCode, "@",
"TArtDataSource", payloadCode, "@",
"TArtDecoder", payloadCode, "@",
"TArtDecoderA3100", payloadCode, "@",
"TArtDecoderA3400", payloadCode, "@",
"TArtDecoderAD413A", payloadCode, "@",
"TArtDecoderAMTTDC", payloadCode, "@",
"TArtDecoderBigEndianV7XX", payloadCode, "@",
"TArtDecoderCTM405", payloadCode, "@",
"TArtDecoderDSP", payloadCode, "@",
"TArtDecoderFactory", payloadCode, "@",
"TArtDecoderFixed16", payloadCode, "@",
"TArtDecoderFixed24", payloadCode, "@",
"TArtDecoderFixed32", payloadCode, "@",
"TArtDecoderHINP", payloadCode, "@",
"TArtDecoderL3377d", payloadCode, "@",
"TArtDecoderLUPO", payloadCode, "@",
"TArtDecoderMADC32", payloadCode, "@",
"TArtDecoderMDPP16", payloadCode, "@",
"TArtDecoderMQDC32", payloadCode, "@",
"TArtDecoderMTDC32", payloadCode, "@",
"TArtDecoderNeulandTS", payloadCode, "@",
"TArtDecoderP716X", payloadCode, "@",
"TArtDecoderP716XZ", payloadCode, "@",
"TArtDecoderRICHADCM", payloadCode, "@",
"TArtDecoderSIS3301", payloadCode, "@",
"TArtDecoderTacquila", payloadCode, "@",
"TArtDecoderV1190", payloadCode, "@",
"TArtDecoderV1190C", payloadCode, "@",
"TArtDecoderV1290", payloadCode, "@",
"TArtDecoderV1740", payloadCode, "@",
"TArtDecoderV550", payloadCode, "@",
"TArtDecoderV767", payloadCode, "@",
"TArtDecoderV7XX", payloadCode, "@",
"TArtDecoderVmeEasyroc", payloadCode, "@",
"TArtEventInfo", payloadCode, "@",
"TArtEventStore", payloadCode, "@",
"TArtFileDataSource", payloadCode, "@",
"TArtMath", payloadCode, "@",
"TArtParser", payloadCode, "@",
"TArtParserFactory", payloadCode, "@",
"TArtParserRDF", payloadCode, "@",
"TArtParserRIDF", payloadCode, "@",
"TArtRIDFMap", payloadCode, "@",
"TArtRawDataObject", payloadCode, "@",
"TArtRawEventObject", payloadCode, "@",
"TArtRawFADCDataObject", payloadCode, "@",
"TArtRawScalerObject", payloadCode, "@",
"TArtRawSegmentObject", payloadCode, "@",
"TArtRawTacquilaDataObject", payloadCode, "@",
"TArtReconstruction", payloadCode, "@",
"TArtRunInfo", payloadCode, "@",
"TArtSemaphore", payloadCode, "@",
"TArtSharedMemory", payloadCode, "@",
"TArtSharedMemoryDataSource", payloadCode, "@",
"TArtStoreManager", payloadCode, "@",
"TArtStreamingDataSource", payloadCode, "@",
"TArtUtil", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("anacore_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_anacore_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_anacore_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_anacore_dict() {
  TriggerDictionaryInitialization_anacore_dict_Impl();
}
