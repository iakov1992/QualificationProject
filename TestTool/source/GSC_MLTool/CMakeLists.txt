# The name of the package:
atlas_subdir (GSC_MLTool)

# Extra dependencies, based on the environment:
set( extra_deps )
if( XAOD_STANDALONE )
   set( extra_deps Control/xAODRootAccess )
else()
   set( extra_deps GaudiKernel )
endif()

# Declare the package's dependencies:
atlas_depends_on_subdirs(
   PUBLIC
   Control/AthToolSupport/AsgTools
   Event/xAOD/xAODEventInfo
   Event/xAOD/xAODEventShape
   Event/xAOD/xAODJet
   Event/xAOD/xAODTracking
   PhysicsAnalysis/AnalysisCommon/PATInterfaces
	 PhysicsAnalysis/Interfaces/JetAnalysisInterfaces
   Reconstruction/Jet/JetInterface
 	 Reconstruction/Jet/JetCalibTools
   Reconstruction/Jet/JetUncertainties
   Reconstruction/Jet/JetRec
   PRIVATE
   Event/xAOD/xAODMuon
   Tools/PathResolver
   PhysicsAnalysis/POOLRootAccess
   ${extra_deps} )

# External dependencies:
find_package( ROOT COMPONENTS Core Tree MathCore Hist RIO Graf Gpad  Matrix TMVA)
find_package( lwtnn )

# Add the shared library:
atlas_add_library (GSC_MLToolLib
  GSC_MLTool/*.h Root/*.cxx
  PUBLIC_HEADERS GSC_MLTool
	INCLUDE_DIRS ${ROOT_INCLUDE_DIRS} ${LWTNN_INCLUDE_DIRS}
  LINK_LIBRARIES ${ROOT_LIBRARIES} ${LWTNN_LIBRARIES} AnaAlgorithmLib AsgTools xAODEventInfo xAODEventShape xAODJet xAODCore xAODTracking PATInterfaces JetInterface JetResolutionLib PRIVATE_LINK_LIBRARIES xAODMuon PathResolver JetCalibToolsLib)

if (XAOD_STANDALONE)
 # Add the dictionary (for AnalysisBase only):
 atlas_add_dictionary (GSC_MLToolDict
  GSC_MLTool/GSC_MLToolDict.h
  GSC_MLTool/selection.xml
  LINK_LIBRARIES GSC_MLToolLib)
endif ()

if (NOT XAOD_STANDALONE)
  # Add a component library for AthAnalysis only:
  atlas_add_component (GSC_MLTool
    src/components/*.cxx
    LINK_LIBRARIES GSC_MLTool)
endif ()




# Install files from the package:
atlas_install_joboptions( share/*_jobOptions.py )
atlas_install_scripts( share/*_eljob.py )
# Install files from the package:
atlas_install_data( share/* )

