#ifndef GSC_MLTool_H
#define GSC_MLTool_H


#include <TEnv.h>
#include <TAxis.h>
#include <TH2F.h>


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <tuple>

#include "AsgTools/AsgTool.h"
#include "AsgTools/ToolHandle.h"
#include "AsgTools/AnaToolHandle.h"

#include "JetCalibTools/IJetCalibrationTool.h"
#include "JetCalibTools/JetCalibrationToolBase.h"

#include "xAODEventInfo/EventInfo.h"
#include "xAODJet/JetContainer.h"

#include "xAODRootAccess/tools/Message.h"
#include "xAODRootAccess/tools/ReturnCheck.h"
#include "xAODCore/tools/IOStats.h"
#include "xAODCore/tools/ReadStats.h"
#include "xAODCore/ShallowCopy.h"
// Tool Interface
#include "GSC_MLTool/IGSC_MLTool.h"

// for NN
#include "lwtnn/LightweightNeuralNetwork.hh"
#include "lwtnn/parse_json.hh"

//#include "xAODTruth/TruthParticleContainer.h"


using namespace std;

class GSC_MLTool : public asg::AsgTool
{
	ASG_TOOL_CLASS(GSC_MLTool, IGSC_MLTOOL)
	//ASG_TOOL_CLASS(GSC_MLTool, IJetCalibrationTool)
public:
	GSC_MLTool();
	GSC_MLTool(const std::string& name);

	virtual ~GSC_MLTool();

	//virtual StatusCode initializeGSC_MLTool();
	virtual StatusCode initializeGSC_MLTool(const std::string& name);
	StatusCode ApplyGSC_MLTool(xAOD::Jet& jet_reco);

protected:

private:	
	// NN tools
    std::unique_ptr<lwt::LightweightNeuralNetwork> m_lwnn;
	// config files
    std::string m_configFile;
    std::string m_tagType;
    std::string m_kerasConfigFileName;
    std::string m_kerasConfigFilePath;
    std::string m_kerasConfigOutputName;
    std::string m_calibarea_keras;

	// functions to get features
	tuple<double,double,double,double> getEMs(xAOD::Jet& jet_reco);
	tuple<double,double,double> getTILEs(xAOD::Jet& jet_reco);
	tuple<double,double> getJetTrkNcas(xAOD::Jet& jet_reco);
	tuple<double,double> GetJetRgAndZg(xAOD::Jet& jet_reco);
	double getJetChargedFraction(xAOD::Jet& jet_reco);
	double getJetDetEta(xAOD::Jet& jet_reco);
	int getJetNtrk1000(xAOD::Jet& jet_reco);
	double getJetWtrk1000(xAOD::Jet& jet_reco);
	double getJetTrkC1Beta02(xAOD::Jet& jet_reco);
	double getJESPt(xAOD::Jet& jet_reco);
	double getJESEta(xAOD::Jet& jet_reco);
	double getJESPhi(xAOD::Jet& jet_reco);
	double getJESE(xAOD::Jet& jet_reco);
	std::map<std::string,double> getJetFeatures(xAOD::Jet& jet_reco);
	double predictPt(xAOD::Jet& jet_reco);

	// Scalers
	double ApplyStandardScaler(double X, double Xmean, double Xstd);
	double ApplyMinMaxScaler(double X, double Xmin, double Xmax);
	double ApplyMaxScaler(double X, double Xmax);

	// Unscalers
	double ApplyStandardUnscaler(double X_scaled, double Xmean, double Xstd);
	double ApplyMinMaxUnscaler(double X_scaled, double Xmin, double Xmax);
	double ApplyMaxUnscaler(double X_scaled, double Xmax);

	// to  scale features (if = 0. - not used yet)
	const double meanEM0 = 0.;
	const double meanEM1 = 0.;
	const double meanEM2 = 0;
	const double meanEM3 = 0;
	const double meanAverageInteractionsPerCrossing = 0.;
	const double meanJetChargedFraction = 0.5757803916931152;
	const double meanJetTrkRg = 0.;
	const double meanJetTrkZg = 0.;
	const double meanTILE0 = 0.;
	const double meanTILE1 = 0.;
	const double meanTILE2 = 0.;
	const double meanJetPt = 0.;
	const double meanJetNtrk1000 = 4.703240871429443;
	const double meanNPV = 0.;	
	const double meanJetTrkNCASD = 0.;
	const double meanJetTrkNCA = 0.;
	const double meanJetJESPt = 33.46187973022461;
	const double meanJetJESEta = 0.;
	const double meanJetJESPhi = 0.;
	const double meanJetJESE = 0.;
	const double meanJetTrkC1beta02 = 0.;
	const double meanJetWtrk1000 = 0.11784162372350693;
	const double meanJetDetEta = 0.0004372381663415581;

	const double stdEM0 = 0.;
	const double stdEM1 = 0.;
	const double stdEM2 = 0;
	const double stdEM3 = 0;
	const double stdAverageInteractionsPerCrossing = 0.;
	const double stdJetChargedFraction = 0.19824273884296417;
	const double stdJetTrkRg = 0.;
	const double stdJetTrkZg = 0.;
	const double stdTILE0 = 0.;
	const double stdTILE1 = 0.;
	const double stdTILE2 = 0.;
	const double stdJetPt = 0.;
	const double stdJetNtrk1000 = 2.2097485065460205;
	const double stdNPV = 0.;	
	const double stdJetTrkNCASD = 0.;
	const double stdJetTrkNCA = 0.;
	const double stdJetJESPt = 14.25036907196045;
	const double stdJetJESEta = 0.;
	const double stdJetJESPhi = 0.;
	const double stdJetJESE = 0.;
	const double stdJetTrkC1beta02 = 0.;
	const double stdJetWtrk1000 = 0.09247464686632156;
	const double stdJetDetEta = 0.4716143012046814;

	const double maxCalibJetPt = 59.999798;
	const double meanCalibJetPt = 32.07650375366211;
	const double stdCalibJetPt = 13.592426300048828;
};

#endif
