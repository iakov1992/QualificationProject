#ifndef GCS_MLTOOL_IGCS_MLTOOL_H
#define GCS_MLTOOL_IGCS_MLTOOL_H

#include "PATInterfaces/CorrectionCode.h"
#include "AsgTools/IAsgTool.h"
#include "JetInterface/IJetModifier.h"
#include "JetInterface/ISingleJetModifier.h"

//EDM includes
#include "xAODJet/Jet.h"

//Package includes
#include "JetCalibTools/JetEventInfo.h"
#include "JetCalibTools/JetCalibUtils.h"

class IGCS_MLTOOL : virtual public asg::IAsgTool {

  ASG_TOOL_INTERFACE( IGCS_MLTOOL )

public:
	/// Virtual destructor
  virtual ~IGCS_MLTOOL(){};

  /// Initialize the GCS_MLTOOL
  virtual StatusCode initializeGCS_MLTOOL(const std::string& name) = 0;
  /// Apply GCS_MLTOOL to a jet
  virtual StatusCode applyGCS_MLTOOL(const xAOD::Jet& jet) const = 0;
};

#endif

