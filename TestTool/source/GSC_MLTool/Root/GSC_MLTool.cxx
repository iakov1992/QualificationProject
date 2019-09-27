#include <iostream>
#include "GSC_MLTool/GSC_MLTool.h"
#include <tuple>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <TKey.h>
#include "xAODMuon/MuonSegmentContainer.h"
#include "PathResolver/PathResolver.h"

// Include several headers. See the files for more documentation.
// First include the class that does the computation
#include "lwtnn/LightweightGraph.hh"
// Then include the json parsing functions
#include "lwtnn/parse_json.hh"

using namespace std;

GSC_MLTool::GSC_MLTool(const std::string& name) : asg::AsgTool(name), m_lwnn(nullptr)
{

}

GSC_MLTool::~GSC_MLTool()
{

}

StatusCode GSC_MLTool::initializeGSC_MLTool(const std::string& name)
{
	ATH_MSG_INFO("Initializing the GSC_MLTool");
	std::ifstream input("GSC_MLTool/neural_net.json");

	if(!input.is_open()){
    ATH_MSG_INFO( ("Error openning config file"));
    ATH_MSG_INFO( ("Are you sure that the file exists at this path?" ));
    return StatusCode::FAILURE;
  }

	// build the graph
	//LightweightGraph graph(parse_json_graph(input));
	lwt::JSONConfig cfg = lwt::parse_json( input );

    ATH_MSG_INFO( ("Keras Network NLayers : "+cfg.layers.size() ));

    m_lwnn = std::unique_ptr<lwt::LightweightNeuralNetwork>
              (new lwt::LightweightNeuralNetwork(cfg.inputs, cfg.layers, cfg.outputs) );
	return StatusCode::SUCCESS;
}

StatusCode GSC_MLTool::ApplyGSC_MLTool(xAOD::Jet& jet_reco)
{
	ATH_MSG_INFO("Apply the GSC_MLTool");
	double calibratedPt = predictPt(jet_reco);
	double ScaleFactor = calibratedPt / getJESPt(jet_reco);

    xAOD::JetFourMom_t jetStartP4;
    //ATH_CHECK( setStartP4(jet_reco) );
    jetStartP4 = jet_reco.jetP4();


	xAOD::JetFourMom_t calibP4 = ScaleFactor * jetStartP4;
	//Transfer calibrated jet properties to the Jet object
    jet_reco.setAttribute<xAOD::JetFourMom_t>("JetGSCScaleMomentum",calibP4);
    jet_reco.setJetP4(calibP4);

	return StatusCode::SUCCESS;
}

/*
tuple<double,double,double,double> GSC_MLTool::getEMs(xAOD::Jet& jet_reco)
{

}

tuple<double,double,double> GSC_MLTool::getTILEs(xAOD::Jet& jet_reco)
{

}

tuple<double,double> GSC_MLTool::getJetTrkNcas(xAOD::Jet& jet_reco)
{

}

tuple<double,double> GSC_MLTool::GetJetRgAndZg(xAOD::Jet& jet_reco)
{

}
*/
double GSC_MLTool::getJetChargedFraction(xAOD::Jet& jet_reco)
{
	if( jet_reco.isAvailable<std::vector<double> >("SumPtChargedPFOPt500") ){
      double thisChargedFraction =  jet_reco.getAttribute<std::vector<double> >("SumPtChargedPFOPt500").at(0);
      thisChargedFraction /= jet_reco.jetP4(xAOD::JetConstitScaleMomentum).Pt();
      return thisChargedFraction;
    } 

	return -999.;
}

double GSC_MLTool::getJetDetEta(xAOD::Jet& jet_reco)
{
	if(jet_reco.isAvailable<double>("DetectorEta")) return jet_reco.getAttribute<double>("DetectorEta");
	return -999.;
}

int GSC_MLTool::getJetNtrk1000(xAOD::Jet& jet_reco)
{
	if(jet_reco.isAvailable<std::vector<int> >("NumTrkPt1000")) return jet_reco.getAttribute<std::vector<int> >("NumTrkPt1000").at(0);
	return -999;
}

double GSC_MLTool::getJetWtrk1000(xAOD::Jet& jet_reco)
{
	if(jet_reco.isAvailable<std::vector<double> >("TrackWidthPt1000")) return jet_reco.getAttribute<std::vector<double> >("TrackWidthPt1000").at(0);
	return -999.;
}
/*
double GSC_MLTool::getJetTrkC1Beta02(xAOD::Jet& jet_reco)
{

}*/

double GSC_MLTool::getJESPt(xAOD::Jet& jet_reco)
{
	return jet_reco.jetP4("JetEtaJESScaleMomentum").pt() / 1.e3;
}

double GSC_MLTool::getJESEta(xAOD::Jet& jet_reco)
{
	return jet_reco.jetP4("JetEtaJESScaleMomentum").eta();
}

double GSC_MLTool::getJESPhi(xAOD::Jet& jet_reco)
{
	return jet_reco.jetP4("JetEtaJESScaleMomentum").phi();
}

double GSC_MLTool::getJESE(xAOD::Jet& jet_reco)
{
	return jet_reco.jetP4("JetEtaJESScaleMomentum").e() / 1.e3;
}

double GSC_MLTool::ApplyStandardScaler(double X, double Xmean, double Xstd)
{
	return (X - Xmean)/Xstd;
}

double GSC_MLTool::ApplyMaxScaler(double X, double Xmax)
{
	return X/Xmax;
}

double GSC_MLTool::ApplyMinMaxScaler(double X, double Xmin, double Xmax)
{
	return (X - Xmin)/(Xmax - Xmin);
}


double GSC_MLTool::ApplyStandardUnscaler(double X_scaled, double Xmean, double Xstd)
{
	return  (X_scaled * Xstd + Xmean);
}

double GSC_MLTool::ApplyMinMaxUnscaler(double X_scaled, double Xmin, double Xmax)
{
	return ((Xmax - Xmin)*X_scaled + Xmin);
}

double GSC_MLTool::ApplyMaxUnscaler(double X_scaled, double Xmax)
{
	return X_scaled * Xmax;
}



std::map<std::string,double> GSC_MLTool::getJetFeatures(xAOD::Jet& jet_reco)
{
	std::map<std::string,double> NNinputValues;
	NNinputValues["JetChargedFraction"] = ApplyStandardScaler(getJetChargedFraction(jet_reco),meanJetChargedFraction,stdJetChargedFraction);
	NNinputValues["JetDetEta"] = ApplyStandardScaler(getJetDetEta(jet_reco),meanJetDetEta,stdJetDetEta);
	NNinputValues["JetNtrk1000"] = ApplyStandardScaler(getJetNtrk1000(jet_reco),meanJetNtrk1000,stdJetNtrk1000);
	NNinputValues["JetWtrk1000"] = ApplyStandardScaler(getJetWtrk1000(jet_reco),meanJetWtrk1000,stdJetWtrk1000);
	NNinputValues["JESPt"] = ApplyStandardScaler(getJESPt(jet_reco),meanJetJESPt,stdJetJESPt);
	//NNinputValues["JESEta"] = ApplyStandardScaler(getJESEta(jet_reco),meanJetJESEta,stdJetJESEta);
	//NNinputValues["JESPhi"] = ApplyStandardScaler(getJESPhi(jet_reco),meanJetJESPhi,stdJetJESPhi);
	//NNinputValues["JESE"] = ApplyStandardScaler(getJESE(jet_reco),meanJetJESE,stdJetJESE);

	return NNinputValues;
}


double GSC_MLTool::predictPt(xAOD::Jet& jet_reco)
{
	std::map<string,double> NN_inputValues = getJetFeatures(jet_reco);
	// evaluate the network
    lwt::ValueMap outputs = m_lwnn->compute(NN_inputValues);
	double predictedPt = ApplyStandardUnscaler(outputs["out_0"], meanCalibJetPt, stdCalibJetPt);
	cout<<"Predicted pT is:"<<predictedPt<<endl;
	return predictedPt;
}
