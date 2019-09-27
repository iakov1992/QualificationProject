#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WorkDir::GSC_MLToolLib" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::GSC_MLToolLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::GSC_MLToolLib PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "xAODMuon;PathResolver;JetCalibToolsLib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libGSC_MLToolLib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libGSC_MLToolLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS WorkDir::GSC_MLToolLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_WorkDir::GSC_MLToolLib "${_IMPORT_PREFIX}/lib/libGSC_MLToolLib.so" )

# Import target "WorkDir::MyAnalysisLib" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::MyAnalysisLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::MyAnalysisLib PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libMyAnalysisLib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libMyAnalysisLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS WorkDir::MyAnalysisLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_WorkDir::MyAnalysisLib "${_IMPORT_PREFIX}/lib/libMyAnalysisLib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
