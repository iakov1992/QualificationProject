#ifndef MyAnalysis_MyxAODAnalysis_H
#define MyAnalysis_MyxAODAnalysis_H

#include <AnaAlgorithm/AnaAlgorithm.h>
#include "GSC_MLTool/IGSC_MLTool.h"
#include <AsgTools/ToolHandle.h>
#include <AsgTools/AnaToolHandle.h>
//#include <AsgAnalysisInterfaces/IGSC_MLTool.h>

class MyxAODAnalysis : public EL::AnaAlgorithm
{
public:
  // this is a standard algorithm constructor
  MyxAODAnalysis (const std::string& name, ISvcLocator* pSvcLocator);

  // these are the functions inherited from Algorithm
  virtual StatusCode initialize () override;
  virtual StatusCode execute () override;
  virtual StatusCode finalize () override;

private:
  // Configuration, and any other types of variables go here.
  //float m_cutValue;
  //TTree *m_myTree;
  //TH1 *m_myHist;
	ToolHandle<IGCS_MLTOOL> m_myTool;
};

#endif
