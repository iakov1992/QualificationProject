#include <AsgTools/MessageCheck.h>
#include <MyAnalysis/MyxAODAnalysis.h>
#include <xAODEventInfo/EventInfo.h>
#include <xAODJet/JetContainer.h>
#include <xAODJet/JetAuxContainer.h>
#include <xAODCore/AuxContainerBase.h>


using namespace std;


MyxAODAnalysis :: MyxAODAnalysis (const std::string& name,
                                  ISvcLocator *pSvcLocator)
    : EL::AnaAlgorithm (name, pSvcLocator)
{
	
}



StatusCode MyxAODAnalysis :: initialize ()
{
	//m_myTool.retrieve();
	//m_myTool->initializeGCS_MLTOOL("MY_GSC_MLTOOL");
    return StatusCode::SUCCESS;
}



StatusCode MyxAODAnalysis :: execute ()
{
	const xAOD::EventInfo* ei = nullptr;
	ANA_CHECK (evtStore()->retrieve (ei, "EventInfo"));
    auto m_runNumber = ei->runNumber ();
    auto m_eventNumber = ei->eventNumber ();
	// loop over the jets in the container
	const xAOD::JetContainer* jets = 0;
    ANA_CHECK(evtStore()->retrieve(jets,"AntiKt4EMTopoJets"));

	for(auto *ijet : *jets){
    cout<<"RunNumber = "<<m_runNumber<<", EventNumber = "<<m_eventNumber<<", before GSC jet_pt in GeV :"<<(ijet->jetP4().pt() / 1.e3)<<" "; // GeV
		/*m_myTool->applyGCS_MLTOOL(*ijet);
		cout<<", after GSC jet_pt in GeV :"<<(ijet->pt() * 0.001)<<endl;*/
		cout<<endl;
    } // end for loop over jets

    return StatusCode::SUCCESS;
}



StatusCode MyxAODAnalysis :: finalize ()
{

  return StatusCode::SUCCESS;
}
