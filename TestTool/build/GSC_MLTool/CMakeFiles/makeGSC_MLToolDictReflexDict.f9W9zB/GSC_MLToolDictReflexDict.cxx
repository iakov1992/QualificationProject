// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GSC_MLToolDictReflexDict

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
#include "/afs/cern.ch/user/i/iaizenbe/QualificationTask/TestTool/source/GSC_MLTool/GSC_MLTool/GSC_MLToolDict.h"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_libGSC_MLToolDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGSC_MLToolDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGSC_MLToolDict dictionary payload"

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
  #define PACKAGE_VERSION "GSC_MLTool-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ GSC_MLTool-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef GSC_MLTool_GSC_MLTool_DICT_H
#define GSC_MLTool_GSC_MLTool_DICT_H

// This file includes all the header files that you need to create
// dictionaries for.

#include <GSC_MLTool/GSC_MLTool.h>

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGSC_MLToolDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGSC_MLToolDict_Impl, {{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1},{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1}}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGSC_MLToolDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGSC_MLToolDict() {
  TriggerDictionaryInitialization_libGSC_MLToolDict_Impl();
}
