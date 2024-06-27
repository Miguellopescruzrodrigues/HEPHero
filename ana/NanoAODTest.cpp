#include "HEPHero.h"

//-------------------------------------------------------------------------------------------------
// Description:
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Define output variables
//-------------------------------------------------------------------------------------------------
namespace NanoAODTest{

    //int variable1Name;   [example]
}

//-------------------------------------------------------------------------------------------------
// Define output derivatives
//-------------------------------------------------------------------------------------------------
void HEPHero::SetupNanoAODTest() {

	HDF_insert("MET_pt",&MET_pt);
	HDF_insert("MET_phi",&MET_phi);
	HDF_insert("nMuon",&nMuon);
	//HDF_insert("Nbjets",&Nbjets);
	HDF_insert("nIsoTrack",&nIsoTrack);
	HDF_insert("nJet",&nJet);
	HDF_insert("nFatJet",&nFatJet);
	HDF_insert("GenMET_pt",&GenMET_pt);
	HDF_insert("GenMET_phi",&GenMET_phi);
	HDF_insert("Pileup_nTrueInt",&Pileup_nTrueInt);
	HDF_insert("nTau",&nTau);
	HDF_insert("nSV",&nSV);
	HDF_insert( "nElectron",&nElectron);
        HDF_insert("LepLep_deltaR",&LepLep_deltaR);
        HDF_insert("LeadingLep_pt", &LeadingLep_pt);
	HDF_insert("TrailingLep_pt", &TrailingLep_pt);



    //_cutFlow.insert(pair<string,double>("CutName", 0) );   [example]

    //======SETUP HISTOGRAMS=======================================================================
    //makeHist( "histogram1DName", 40, 0., 40., "xlabel", "ylabel" );   [example]
    //makeHist( "histogram2DName", 40, 0., 40., 100, 0., 50., "xlabel",  "ylabel", "zlabel", "COLZ" );   [example]

    //======SETUP SYSTEMATIC HISTOGRAMS============================================================
    //sys_regions = { 0, 1, 2 }; [example] // Choose regions as defined in RegionID. Empty vector means that all events will be used.
    //makeSysHist( "histogram1DSysName", 40, 0., 40., "xlabel", "ylabel" );   [example]
    //makeSysHist( "histogram2DSysName", 40, 0., 40., 100, 0., 50., "xlabel",  "ylabel", "zlabel", "COLZ" );   [example]

    //======SETUP OUTPUT BRANCHES==================================================================
    //_outputTree->Branch("variable1NameInTheTree", &TestNanoAOD::variable1Name );  [example]

    //======SETUP INFORMATION IN OUTPUT HDF5 FILE==================================================
    //HDF_insert("variable1NameInTheTree", &TestNanoAOD::variable1Name );  [example]

    return;
}


//-------------------------------------------------------------------------------------------------
// Define the selection region
//-------------------------------------------------------------------------------------------------
bool HEPHero::NanoAODTestRegion() {

    LeptonSelection();
    Get_Leptonic_Info(true, true);
    Get_LepLep_Variables(true, true);
    //-------------------------------------------------------------------------
    // Cut description
    //-------------------------------------------------------------------------
    //if( !(CutCondition) ) return false;           [Example]
    //_cutFlow.at("CutName") += evtWeight;          [Example]

    return true;
}


//-------------------------------------------------------------------------------------------------
// Write your analysis code here
//-------------------------------------------------------------------------------------------------
void HEPHero::NanoAODTestSelection() {

    //======ASSIGN VALUES TO THE OUTPUT VARIABLES==================================================
    //TestNanoAOD::variable1Name = 100;      [Example]

    //======FILL THE HISTOGRAMS====================================================================
    //_histograms1D.at("histogram1DName").Fill( var, evtWeight );               [Example]
    //_histograms2D.at("histogram2DName").Fill( var1, var2, evtWeight );        [Example]

    //======FILL THE OUTPUT TREE===================================================================
    //_outputTree->Fill();

    //======FILL THE OUTPUT HDF5 INFO===============================================================
    HDF_fill();

    return;
}


//-------------------------------------------------------------------------------------------------
// Produce systematic histograms
//-------------------------------------------------------------------------------------------------
void HEPHero::NanoAODTestSystematic() {

    //FillSystematic( "histogram1DSysName", var, evtWeight );  [Example]
    //FillSystematic( "histogram2DSysName", var1, var2, evtWeight );  [Example]
}


//-------------------------------------------------------------------------------------------------
// Make efficiency plots
//-------------------------------------------------------------------------------------------------
void HEPHero::FinishNanoAODTest() {

    //MakeEfficiencyPlot( _histograms1D.at("Matched_pt"), _histograms1D.at("all_pt"), "Match_pt" );   [example]

    return;
}
