// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GlobalSequentialCorrectionToolMLDictReflexDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
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

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/GSC_MLTool/GlobalSequentialCorrectionToolML/GlobalSequentialCorrectionToolMLDict.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *GlobalSequentialCorrectionToolML_Dictionary();
   static void GlobalSequentialCorrectionToolML_TClassManip(TClass*);
   static void *new_GlobalSequentialCorrectionToolML(void *p = 0);
   static void *newArray_GlobalSequentialCorrectionToolML(Long_t size, void *p);
   static void delete_GlobalSequentialCorrectionToolML(void *p);
   static void deleteArray_GlobalSequentialCorrectionToolML(void *p);
   static void destruct_GlobalSequentialCorrectionToolML(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalSequentialCorrectionToolML*)
   {
      ::GlobalSequentialCorrectionToolML *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GlobalSequentialCorrectionToolML));
      static ::ROOT::TGenericClassInfo 
         instance("GlobalSequentialCorrectionToolML", "GlobalSequentialCorrectionToolML.h", 36,
                  typeid(::GlobalSequentialCorrectionToolML), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GlobalSequentialCorrectionToolML_Dictionary, isa_proxy, 4,
                  sizeof(::GlobalSequentialCorrectionToolML) );
      instance.SetNew(&new_GlobalSequentialCorrectionToolML);
      instance.SetNewArray(&newArray_GlobalSequentialCorrectionToolML);
      instance.SetDelete(&delete_GlobalSequentialCorrectionToolML);
      instance.SetDeleteArray(&deleteArray_GlobalSequentialCorrectionToolML);
      instance.SetDestructor(&destruct_GlobalSequentialCorrectionToolML);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalSequentialCorrectionToolML*)
   {
      return GenerateInitInstanceLocal((::GlobalSequentialCorrectionToolML*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GlobalSequentialCorrectionToolML*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GlobalSequentialCorrectionToolML_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GlobalSequentialCorrectionToolML*)0x0)->GetClass();
      GlobalSequentialCorrectionToolML_TClassManip(theClass);
   return theClass;
   }

   static void GlobalSequentialCorrectionToolML_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalSequentialCorrectionToolML(void *p) {
      return  p ? new(p) ::GlobalSequentialCorrectionToolML : new ::GlobalSequentialCorrectionToolML;
   }
   static void *newArray_GlobalSequentialCorrectionToolML(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalSequentialCorrectionToolML[nElements] : new ::GlobalSequentialCorrectionToolML[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalSequentialCorrectionToolML(void *p) {
      delete ((::GlobalSequentialCorrectionToolML*)p);
   }
   static void deleteArray_GlobalSequentialCorrectionToolML(void *p) {
      delete [] ((::GlobalSequentialCorrectionToolML*)p);
   }
   static void destruct_GlobalSequentialCorrectionToolML(void *p) {
      typedef ::GlobalSequentialCorrectionToolML current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GlobalSequentialCorrectionToolML

namespace {
  void TriggerDictionaryInitialization_libGlobalSequentialCorrectionToolMLDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGlobalSequentialCorrectionToolMLDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$GlobalSequentialCorrectionToolML/GlobalSequentialCorrectionToolML.h")))  GlobalSequentialCorrectionToolML;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGlobalSequentialCorrectionToolMLDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HAVE_PRETTY_FUNCTION
  #define HAVE_PRETTY_FUNCTION 1
#endif
#ifndef HAVE_64_BITS
  #define HAVE_64_BITS 1
#endif
#ifndef __IDENTIFIER_64BIT__
  #define __IDENTIFIER_64BIT__ 1
#endif
#ifndef ATLAS
  #define ATLAS 1
#endif
#ifndef ROOTCORE
  #define ROOTCORE 1
#endif
#ifndef XAOD_STANDALONE
  #define XAOD_STANDALONE 1
#endif
#ifndef XAOD_ANALYSIS
  #define XAOD_ANALYSIS 1
#endif
#ifndef ROOTCORE_RELEASE_SERIES
  #define ROOTCORE_RELEASE_SERIES 25
#endif
#ifndef PACKAGE_VERSION
  #define PACKAGE_VERSION "GlobalSequentialCorrectionToolML-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ GlobalSequentialCorrectionToolML-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef GlobalSequentialCorrectionToolML_GlobalSequentialCorrectionToolML_DICT_H
#define GlobalSequentialCorrectionToolML_GlobalSequentialCorrectionToolML_DICT_H

// This file includes all the header files that you need to create
// dictionaries for.

#include <GlobalSequentialCorrectionToolML/GlobalSequentialCorrectionToolML.h>

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GlobalSequentialCorrectionToolML", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGlobalSequentialCorrectionToolMLDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGlobalSequentialCorrectionToolMLDict_Impl, {{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1},{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1}}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGlobalSequentialCorrectionToolMLDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGlobalSequentialCorrectionToolMLDict() {
  TriggerDictionaryInitialization_libGlobalSequentialCorrectionToolMLDict_Impl();
}
