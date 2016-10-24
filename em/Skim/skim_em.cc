#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include "TMath.h"
#include "TSystem.h"
#include "TRandom.h"
#include "TLorentzVector.h"
#include "TRandom3.h"
#include "makeHisto.h"
#include "emu_Tree_em.h"
//#include "LumiReweightingStandAlone.h"

int main(int argc, char** argv) {

    using namespace std;
    myMap1 = new map<string, TH1F*>();
    myMap2 = new map<string, TH2F*>();
    string status_sample = *(argv + 1);
    bool isMC = false;
    bool isData = false;
    if (status_sample.compare("mc") == 0) isMC = true;
    if (status_sample.compare("data") == 0) isData = true;
    string out = *(argv + 2);
    string outname= out;
    TFile *fout = TFile::Open(outname.c_str(), "RECREATE");

    string in = *(argv + 3);
    string inname= in;
    TFile *fIn = TFile::Open(inname.c_str());

    TTree* treePtr = (TTree*) fIn->Get("em/final/Ntuple");
    TH1F *evCounter = (TH1F*) fIn->Get("em/eventCount");
    TH1F *evCounterW = (TH1F*) fIn->Get("em/summedWeights");
    HTauTauTree_em* tree = new HTauTauTree_em (treePtr);

    TTree *Run_Tree = new TTree("emu_tree", "emu_tree");
    Run_Tree->SetDirectory(0);
    Run_Tree->Branch("run", &run, "run/I");
    Run_Tree->Branch("lumi", &lumi, "lumi/I");
    Run_Tree->Branch("evt", &evt, "evt/I");

    Run_Tree->Branch("isZtt", &isZtt, "isZtt/O");
    Run_Tree->Branch("NUP", &NUP, "NUP/I");
    Run_Tree->Branch("puweight", &puweight, "puweight/F");
    Run_Tree->Branch("npv", &npv, "npv/F");
    Run_Tree->Branch("npu", &npu, "npu/F");
    //Run_Tree->Branch("extratau_veto", &extratau_veto, "extratau_veto/F");

    Run_Tree->Branch("pt_1", &pt_1, "pt_1/F");
    Run_Tree->Branch("px_1", &px_1, "px_1/F");
    Run_Tree->Branch("py_1", &py_1, "py_1/F");
    Run_Tree->Branch("pz_1", &pz_1, "pz_1/F");
    Run_Tree->Branch("phi_1", &phi_1, "phi_1/F");
    Run_Tree->Branch("eta_1", &eta_1, "eta_1/F");
    Run_Tree->Branch("m_1", &m_1, "m_1/F");
    Run_Tree->Branch("e_1", &e_1, "e_1/F");
    Run_Tree->Branch("q_1", &q_1, "q_1/F");
    Run_Tree->Branch("d0_1", &d0_1, "d0_1/F");
    Run_Tree->Branch("dZ_1", &dZ_1, "dZ_1/F");
    Run_Tree->Branch("mt_1", &mt_1, "mt_1/F");
    Run_Tree->Branch("iso_1", &iso_1, "iso_1/F");
    Run_Tree->Branch("matchE23Mu8_1", &matchE23Mu8_1, "matchE23Mu8_1/F");
    Run_Tree->Branch("matchMu23E12_1", &matchMu23E12_1, "matchMu23E12_1/F");
    Run_Tree->Branch("filterE23Mu8_1", &filterE23Mu8_1, "filterE23Mu8_1/F");
    Run_Tree->Branch("filterMu23E12_1", &filterMu23E12_1, "filterMu23E12_1/F");

    Run_Tree->Branch("pt_2", &pt_2, "pt_2/F");
    Run_Tree->Branch("phi_2", &phi_2, "phi_2/F");
    Run_Tree->Branch("eta_2", &eta_2, "eta_2/F");
    Run_Tree->Branch("px_2", &px_2, "px_2/F");
    Run_Tree->Branch("py_2", &py_2, "py_2/F");
    Run_Tree->Branch("pz_2", &pz_2, "pz_2/F");
    Run_Tree->Branch("m_2", &m_2, "m_2/F");
    Run_Tree->Branch("e_2", &e_2, "e_2/F");
    Run_Tree->Branch("q_2", &q_2, "q_2/F");
    Run_Tree->Branch("d0_2", &d0_2, "d0_2/F");
    Run_Tree->Branch("dZ_2", &dZ_2, "dZ_2/F");
    Run_Tree->Branch("mt_2", &mt_2, "mt_2/F");
    Run_Tree->Branch("iso_2", &iso_2, "iso_2/F");
    Run_Tree->Branch("id_m_tight_2", &id_m_tight_2, "id_m_tight_2/F");
    Run_Tree->Branch("matchE23Mu8_2", &matchE23Mu8_2, "matchE23Mu8_2/F");
    Run_Tree->Branch("matchMu23E12_2", &matchMu23E12_2, "matchMu23E12_2/F");

    Run_Tree->Branch("amcatnlo_weight", &amcatnlo_weight, "amcatnlo_weight/F");

    Run_Tree->Branch("passMu23E12", &passMu23E12, "passMu23E12/F");
    Run_Tree->Branch("passE23Mu8", &passE23Mu8, "passE23Mu8/F");
    Run_Tree->Branch("passEle27", &passEle27, "passEle27/F");
    Run_Tree->Branch("passEle25", &passEle25, "passEle25/F");
    Run_Tree->Branch("passMu22", &passMu22, "passMu22/F");
    Run_Tree->Branch("passMuTk22", &passMuTk22, "passMuTk22/F");
    Run_Tree->Branch("filterMu22", &filterMu22, "filterMu22/F");
    Run_Tree->Branch("filterMuTk22", &filterMuTk22, "filterMuTk22/F");
    Run_Tree->Branch("filterEle25", &filterEle25, "filterEle25/F");

    Run_Tree->Branch("pt_tt", &pt_tt, "pt_tt/F");
    Run_Tree->Branch("m_vis", &m_vis, "m_vis/F");
    //Run_Tree->Branch("m_coll", &m_coll, "m_coll/F");
    //Run_Tree->Branch("m_coll_uesD", &m_coll_uesD, "m_coll_uesD/F");
    //Run_Tree->Branch("m_coll_uesU", &m_coll_uesU, "m_coll_uesU/F");
    //Run_Tree->Branch("m_coll_tesD", &m_coll_tesD, "m_coll_tesD/F");
    //Run_Tree->Branch("m_coll_tesU", &m_coll_tesU, "m_coll_tesU/F");
    //Run_Tree->Branch("m_coll_jesU", &m_coll_jesU, "m_coll_jesU/F");
    //Run_Tree->Branch("m_coll_jesD", &m_coll_jesD, "m_coll_jesD/F");
    Run_Tree->Branch("pt_top1", &pt_top1, "pt_top1/F");
    Run_Tree->Branch("pt_top2", &pt_top2, "pt_top2/F");
    Run_Tree->Branch("eid80", &eid80, "eid80/F");

    Run_Tree->Branch("met", &met, "met/F");
    Run_Tree->Branch("metphi", &metphi, "metphi/F");
    Run_Tree->Branch("metSig", &metSig, "metSig/F");
    Run_Tree->Branch("metcov00", &metcov00, "metcov00/F");
    Run_Tree->Branch("metcov10", &metcov10, "metcov10/F");
    Run_Tree->Branch("metcov11", &metcov11, "metcov11/F");
    Run_Tree->Branch("metcov01", &metcov01, "metcov01/F");
    Run_Tree->Branch("metphi", &metphi, "metphi/F");
    Run_Tree->Branch("mvaMet", &mvaMet, "mvaMet/F");
    Run_Tree->Branch("mvaMetcov00", &mvaMetcov00, "mvaMetcov00/F");
    Run_Tree->Branch("mvaMetcov10", &mvaMetcov10, "mvaMetcov10/F");
    Run_Tree->Branch("mvaMetcov11", &mvaMetcov11, "mvaMetcov11/F");
    Run_Tree->Branch("mvaMetcov01", &mvaMetcov01, "mvaMetcov01/F");
    Run_Tree->Branch("mvaMetphi", &mvaMetphi, "mvaMetphi/F");
    Run_Tree->Branch("pzetavis", &pzetavis, "pzetavis/F");
    Run_Tree->Branch("pzetamiss", &pzetamiss, "pzetamiss/F");

    Run_Tree->Branch("met_JESDown", &met_JESDown, "met_JESDown/F");
    Run_Tree->Branch("met_JERDown", &met_JERDown, "met_JERDown/F");
    Run_Tree->Branch("met_MESDown", &met_MESDown, "met_MESDown/F");
    Run_Tree->Branch("met_EESDown", &met_EESDown, "met_EESDown/F");
    Run_Tree->Branch("met_TESDown", &met_TESDown, "met_TESDown/F");
    Run_Tree->Branch("met_PESDown", &met_PESDown, "met_PESDown/F");
    Run_Tree->Branch("met_UESDown", &met_UESDown, "met_UESDown/F");
    Run_Tree->Branch("met_JESUp", &met_JESUp, "met_JESUp/F");
    Run_Tree->Branch("met_JERUp", &met_JERUp, "met_JERUp/F");
    Run_Tree->Branch("met_MESUp", &met_MESUp, "met_MESUp/F");
    Run_Tree->Branch("met_EESUp", &met_EESUp, "met_EESUp/F");
    Run_Tree->Branch("met_TESUp", &met_TESUp, "met_TESUp/F");
    Run_Tree->Branch("met_PESUp", &met_PESUp, "met_PESUp/F");
    Run_Tree->Branch("met_UESUp", &met_UESUp, "met_UESUp/F");
    Run_Tree->Branch("metphi_JESDown", &metphi_JESDown, "metphi_JESDown/F");
    Run_Tree->Branch("metphi_JERDown", &metphi_JERDown, "metphi_JERDown/F");
    Run_Tree->Branch("metphi_MESDown", &metphi_MESDown, "metphi_MESDown/F");
    Run_Tree->Branch("metphi_EESDown", &metphi_EESDown, "metphi_EESDown/F");
    Run_Tree->Branch("metphi_TESDown", &metphi_TESDown, "metphi_TESDown/F");
    Run_Tree->Branch("metphi_PESDown", &metphi_PESDown, "metphi_PESDown/F");
    Run_Tree->Branch("metphi_UESDown", &metphi_UESDown, "metphi_UESDown/F");
    Run_Tree->Branch("metphi_JESUp", &metphi_JESUp, "metphi_JESUp/F");
    Run_Tree->Branch("metphi_JERUp", &metphi_JERUp, "metphi_JERUp/F");
    Run_Tree->Branch("metphi_MESUp", &metphi_MESUp, "metphi_MESUp/F");
    Run_Tree->Branch("metphi_EESUp", &metphi_EESUp, "metphi_EESUp/F");
    Run_Tree->Branch("metphi_TESUp", &metphi_TESUp, "metphi_TESUp/F");
    Run_Tree->Branch("metphi_PESUp", &metphi_PESUp, "metphi_PESUp/F");
    Run_Tree->Branch("metphi_UESUp", &metphi_UESUp, "metphi_UESUp/F");

    Run_Tree->Branch("mjj", &mjj, "mjj/F");
    Run_Tree->Branch("jdeta", &jdeta, "jdeta/F");
    Run_Tree->Branch("njetingap", &njetingap, "njetingap/I");
    Run_Tree->Branch("njetingap20", &njetingap20, "njetingap20/I");
    Run_Tree->Branch("mjj_JESUp", &mjj_JESUp, "mjj_JESUp/F");
    Run_Tree->Branch("jdeta_JESUp", &jdeta_JESUp, "jdeta_JESUp/F");
    Run_Tree->Branch("njetingap_JESUp", &njetingap_JESUp, "njetingap_JESUp/I");
    Run_Tree->Branch("njetingap20_JESUp", &njetingap20_JESUp, "njetingap20_JESUp/I");
    Run_Tree->Branch("mjj_JESDown", &mjj_JESDown, "mjj_JESDown/F");
    Run_Tree->Branch("jdeta_JESDown", &jdeta_JESDown, "jdeta_JESDown/F");
    Run_Tree->Branch("njetingap_JESDown", &njetingap_JESDown, "njetingap_JESDown/I");
    Run_Tree->Branch("njetingap20_JESDown", &njetingap20_JESDown, "njetingap20_JESDown/I");
    Run_Tree->Branch("gen_match_1", &gen_match_1, "gen_match_1/I");
    Run_Tree->Branch("gen_match_2", &gen_match_2, "gen_match_2/I");
    //Run_Tree->Branch("jdphi", &jdphi, "jdphi/F");
    //Run_Tree->Branch("dijetpt", &dijetpt, "dijetpt/F");
    //Run_Tree->Branch("dijetphi", &dijetphi, "dijetphi/F");
    //Run_Tree->Branch("hdijetphi", &hdijetphi, "hdijetphi/F");
    //Run_Tree->Branch("visjeteta", &visjeteta, "visjeteta/F");
    //Run_Tree->Branch("ptvis", &ptvis, "ptvis/F");
    //Run_Tree->Branch("dphi_12", &dphi_12, "dphi_12/F");
    //Run_Tree->Branch("dphi_emet", &dphi_emet, "dphi_emet/F");
    //Run_Tree->Branch("dphi_mumet", &dphi_mumet, "dphi_mumet/F");

    Run_Tree->Branch("nbtag", &nbtag, "nbtag/I");
    Run_Tree->Branch("njets", &njets, "njets/I");
    Run_Tree->Branch("njetspt20", &njetspt20, "njetspt20/I");
    Run_Tree->Branch("njets_JESDown", &njets_JESDown, "njets_JESDown/I");
    Run_Tree->Branch("njetspt20_JESDown", &njetspt20_JESDown, "njetspt20_JESDown/I");
    Run_Tree->Branch("njets_JESUp", &njets_JESUp, "njets_JESUp/I");
    Run_Tree->Branch("njetspt20_JESUp", &njetspt20_JESUp, "njetspt20_JESUp/I");
    Run_Tree->Branch("jpt_1", &jpt_1, "jpt_1/F");
    Run_Tree->Branch("jeta_1", &jeta_1, "jeta_1/F");
    Run_Tree->Branch("jphi_1", &jphi_1, "jphi_1/F");
    Run_Tree->Branch("jcsv_1", &jcsv_1, "jcsv_1/F");

    Run_Tree->Branch("jpt_2", &jpt_2, "jpt_2/F");
    Run_Tree->Branch("jeta_2", &jeta_2, "jeta_2/F");
    Run_Tree->Branch("jphi_2", &jphi_2, "jphi_2/F");
    Run_Tree->Branch("jcsv_2", &jcsv_2, "jcsv_2/F");

    Run_Tree->Branch("bpt_1", &bpt_1, "bpt_1/F");
    Run_Tree->Branch("beta_1", &beta_1, "beta_1/F");
    Run_Tree->Branch("bphi_1", &bphi_1, "bphi_1/F");
    Run_Tree->Branch("bcsv_1", &bcsv_1, "bcsv_1/F");

    Run_Tree->Branch("bpt_2", &bpt_2, "bpt_2/F");
    Run_Tree->Branch("beta_2", &beta_2, "beta_2/F");
    Run_Tree->Branch("bphi_2", &bphi_2, "bphi_2/F");
    Run_Tree->Branch("bcsv_2", &bcsv_2, "bcsv_2/F");

    Run_Tree->Branch("genpX", &genpX, "genpX/F");
    Run_Tree->Branch("genpY", &genpY, "genpY/F");
    Run_Tree->Branch("genM", &genM, "genM/F");
    Run_Tree->Branch("genpT", &genpT, "genpT/F");
    Run_Tree->Branch("vispX", &vispX, "vispX/F");
    Run_Tree->Branch("vispY", &vispY, "vispY/F");

    Run_Tree->Branch("gen_Higgs_pt", &gen_Higgs_pt, "gen_Higgs_pt/F");
    Run_Tree->Branch("gen_Higgs_mass", &gen_Higgs_mass, "gen_Higgs_mass/F");

    //reweight::LumiReWeighting* LumiWeights_12;
    //LumiWeights_12 = new reweight::LumiReWeighting("pileup-hists/MC_Spring15_PU25_Startup.root", "pileup-hists/Data_Pileup_2015D_Nov17.root", "pileup", "pileup");
    int bestEntry=-1;
    ULong64_t evt_now=0;
    ULong64_t evt_before=-1;
    float muiso_before=100;
    float tauiso_before=100;
    float mupt_before=0;
    float taupt_before=0;
    bool print=false;
    plotFill("nevents",0,9,0,9,evCounter->GetBinContent(1));
    plotFill("nevents",1,9,0,9,evCounterW->GetBinContent(1));
    for (int iEntry = 0; iEntry < tree->GetEntries() ; iEntry++)
    {
        float pu=1.0;
        tree->GetEntry(iEntry);
        bool print=false;
        if (iEntry % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d ", iEntry);
        fflush(stdout);
        //print=(tree->evt==409276);
        if (print) cout<<"All"<<endl;
        //if (isData && !tree->singleE23SingleMu8Pass && !tree->singleMu23SingleE12Pass) continue;
        TLorentzVector dau1;
        TLorentzVector dau2;
        dau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
        dau2.SetPtEtaPhiM(tree->mPt,tree->mEta,tree->mPhi,tree->mMass);
        if (tree->e_m_DR<0.3) continue;
	if (print) cout<<"DR"<<endl;
	if (fabs(tree->ePVDXY)>0.045) continue;
	if (print) cout<<"muon dxy"<<endl;
        if (fabs(tree->ePVDZ)>0.2) continue;
	if (print) cout<<"muon dz"<<endl;
        if (fabs(tree->mPVDXY)>0.045) continue;
        if (fabs(tree->mPVDZ)>0.2) continue;
	if (print) cout<<"tau dz"<<endl;
        if (dau1.Pt()<12.5 or dau2.Pt()<9.5) continue;
	if (dau1.Pt()<23.5 && dau2.Pt()<23.5) continue;
	if (print) cout<<"lepton pt"<<endl;
        if (fabs(dau1.Eta())>2.5 or fabs(dau2.Eta())>2.4) continue;
	if (print) cout<<"lepton eta"<<endl;
	bool goodglob=tree->mIsGlobal && tree->mNormalizedChi2 < 3 && tree->mChi2LocalPosition < 12 && tree->mTrkKink < 20; 
	bool isMedium = tree->mPFIDLoose && tree->mValidFraction> 0.49 && tree->mSegmentCompatibility > (goodglob ? 0.303 : 0.451); 
        if (!isMedium) continue;
        if (print) cout<<"muon ID"<<endl;
        if (!tree->eMVANonTrigWP80 or !tree->ePassesConversionVeto or tree->eMissingHits>1) continue;
	evt_now=tree->evt;
	if (tree->eVetoZTTp001dxyzR0>1) continue;
	if (tree->muVetoZTTp001dxyzR0>1) continue;

        if (evt_now!=evt_before){
           mupt_before=tree->mPt;
           muiso_before=tree->mRelPFIsoDBDefault;
           taupt_before=tree->ePt;
           tauiso_before=tree->eIsoDB03;
        }
        if (evt_now!=evt_before){
           if (bestEntry>-1){
              fillTree(Run_Tree,tree,bestEntry);
           }
           bestEntry=iEntry;
        }
        if (evt_now==evt_before){
           if (tree->mRelPFIsoDBDefault<muiso_before or (tree->mRelPFIsoDBDefault==muiso_before && tree->mPt>mupt_before) or (tree->mRelPFIsoDBDefault==muiso_before && tree->mPt==mupt_before && tree->eIsoDB03<tauiso_before) or (tree->mRelPFIsoDBDefault==muiso_before && tree->mPt==mupt_before && tree->eIsoDB03==tauiso_before && tree->ePt>taupt_before) ){
                bestEntry=iEntry;
                tauiso_before=tree->eIsoDB03;
                taupt_before=tree->ePt;
                muiso_before=tree->mRelPFIsoDBDefault;
                mupt_before=tree->mPt;
           }
        }

	evt_before=evt_now;
    }
    fillTree(Run_Tree,tree,bestEntry);
    fout->cd();
    Run_Tree->Write();
    map<string, TH1F*>::const_iterator iMap1 = myMap1->begin();
    map<string, TH1F*>::const_iterator jMap1 = myMap1->end();
    for (; iMap1 != jMap1; ++iMap1)
        nplot1(iMap1->first)->Write();
    map<string, TH2F*>::const_iterator iMap2 = myMap2->begin();
    map<string, TH2F*>::const_iterator jMap2 = myMap2->end();
    for (; iMap2 != jMap2; ++iMap2)
        nplot2(iMap2->first)->Write();

    fout->Close();
    return 0;
}

