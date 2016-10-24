#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TGraph.h>
#include <TGraphAsymmErrors.h>
#include "TMultiGraph.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <stdio.h>
#include <TF1.h>
#include <TDirectoryFile.h>
#include <TRandom3.h>
#include "TLorentzVector.h"
#include "TString.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TKey.h"
#include "THashList.h"
#include "THStack.h"
#include "TPaveLabel.h"
#include "TFile.h"
#include "myHelper.h"
#include "tr_Tree.h"
#include "ScaleFactor.h"
#include "LumiReweightingStandAlone.h"

using namespace std;

int main(int argc, char** argv) {

    std::string input = *(argv + 1);
    std::string output = *(argv + 2);
    std::string sample = *(argv + 3);
    std::string name = *(argv + 4);

    float tes=0;
    if (argc > 1) {
        tes = atof(argv[5]);
    }

    TFile *f_Double = new TFile(input.c_str());
    cout<<"XXXXXXXXXXXXX "<<input.c_str()<<" XXXXXXXXXXXX"<<endl;
    TTree *arbre = (TTree*) f_Double->Get("RLE_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);

    TFile *f_Trk=new TFile("ratios.root");
    TGraph *h_Trk=(TGraph*) f_Trk->Get("ratio_eta");

    reweight::LumiReWeighting* LumiWeights_12;
    LumiWeights_12 = new reweight::LumiReWeighting("MC_Spring16_PU25ns_V1.root", "MyDataPileupHistogram.root", "pileup", "pileup");

    float xs=1.0; float weight=1.0; float luminosity=20100.0;
    if (sample=="ZL" or sample=="ZTT" or sample=="ZJ" or sample=="ZLL"){ xs=5765.4; weight=luminosity*xs/ngen;}
    else if (sample=="TT") {xs=831.76; weight=luminosity*xs/ngen;}
    else if (sample=="W") {xs=61526.7; weight=luminosity*xs/ngen;}
    else if (sample=="QCD") {xs=720648000*0.00042; weight=luminosity*xs/ngen;}
    else if (sample=="data_obs"){weight=1.0;}
    else if (sample=="WZ1L1Nu2Q") {xs=10.71; weight=luminosity*xs/ngen;}
    else if (sample=="WZ1L3Nu") {xs=3.05; weight=luminosity*xs/ngen;}
    else if (sample=="WZJets") {xs=5.26; weight=luminosity*xs/ngen;}
    else if (sample=="WZ2L2Q") {xs=5.595; weight=luminosity*xs/ngen;}
    else if (sample=="WW1L1Nu2Q") {xs=49.997; weight=luminosity*xs/ngen;}
    else if (sample=="ZZ4L") {xs=1.212; weight=luminosity*xs/ngen;}
    else if (sample=="ZZ2L2Q") {xs=3.22; weight=luminosity*xs/ngen;}
    else if (sample=="VV2L2Nu") {xs=11.95; weight=luminosity*xs/ngen;}
    else if (sample=="ST_tW_antitop") {xs=35.6; weight=luminosity*xs/ngen;}
    else if (sample=="ST_tW_top") {xs=35.6; weight=luminosity*xs/ngen;}
    else if (sample=="ST_t_antitop") {xs=80.95; weight=luminosity*xs/ngen;}
    else if (sample=="ST_t_top") {xs=136.02; weight=luminosity*xs/ngen;}
    else if (sample=="ggh") {xs=44.14*0.0627; weight=luminosity*xs/ngen;}
    else if (sample=="VBF") {xs=3.782*0.0627; weight=luminosity*xs/ngen;}
    else if (sample=="ggH125") {xs=44.14*0.0627; weight=luminosity*xs/ngen;}
    else if (sample=="VBF125") {xs=3.782*0.0627; weight=luminosity*xs/ngen;}
    else if (sample=="ggH120") {xs=47.38*0.0698; weight=luminosity*xs/ngen;}
    else if (sample=="VBF120") {xs=3.935*0.0698; weight=luminosity*xs/ngen;}
    else if (sample=="ggH130") {xs=41.23*0.0541; weight=luminosity*xs/ngen;}
    else if (sample=="VBF130") {xs=3.637*0.0541; weight=luminosity*xs/ngen;}
    else if (sample=="ZZ") {xs=16.523; weight=luminosity*xs/ngen;}
    else if (sample=="WZ") {xs=47.13; weight=luminosity*xs/ngen;}
    else if (sample=="WW") {xs=118.7; weight=luminosity*xs/ngen;}

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(10);
    arbre->SetBranchAddress("run", &run);
    arbre->SetBranchAddress("lumi", &lumi);
    arbre->SetBranchAddress("evt", &evt);
    arbre->SetBranchAddress("NUP", &NUP);
    arbre->SetBranchAddress("npv", &npv);
    arbre->SetBranchAddress("px_1", &px_1);
    arbre->SetBranchAddress("py_1", &py_1);
    arbre->SetBranchAddress("pz_1", &pz_1);
    arbre->SetBranchAddress("pt_1", &pt_1);
    arbre->SetBranchAddress("phi_1", &phi_1);
    arbre->SetBranchAddress("eta_1", &eta_1);
    arbre->SetBranchAddress("iso_1", &iso_1);
    arbre->SetBranchAddress("m_1", &m_1);
    arbre->SetBranchAddress("q_1", &q_1);
    arbre->SetBranchAddress("nbtag", &nbtag);
    arbre->SetBranchAddress("q_2", &q_2);
    arbre->SetBranchAddress("trackpt_2", &trackpt_2);
    arbre->SetBranchAddress("px_2", &px_2);
    arbre->SetBranchAddress("py_2", &py_2);
    arbre->SetBranchAddress("pz_2", &pz_2);
    arbre->SetBranchAddress("pt_2", &pt_2);
    arbre->SetBranchAddress("eta_2", &eta_2);
    arbre->SetBranchAddress("m_2", &m_2);
    arbre->SetBranchAddress("mt_2", &mt_2);
    arbre->SetBranchAddress("phi_2", &phi_2);
    arbre->SetBranchAddress("met", &met);
    arbre->SetBranchAddress("metphi", &metphi);
    arbre->SetBranchAddress("m_sv", &m_sv);
    arbre->SetBranchAddress("m_sv_DOWN", &m_sv_DOWN);
    arbre->SetBranchAddress("m_sv_UP", &m_sv_UP);
    arbre->SetBranchAddress("pt_sv", &pt_sv);
    arbre->SetBranchAddress("pt_sv_DOWN", &pt_sv_DOWN);
    arbre->SetBranchAddress("pt_sv_UP", &pt_sv_UP);
    arbre->SetBranchAddress("njets", &njets);
    arbre->SetBranchAddress("pt_tt", &pt_tt);
    arbre->SetBranchAddress("jpt_1", &jpt_1);
    arbre->SetBranchAddress("jdeta", &jdeta);
    arbre->SetBranchAddress("mjj", &mjj);
    //arbre->SetBranchAddress("met_px", &met_px);
    //arbre->SetBranchAddress("met_py", &met_py);
    arbre->SetBranchAddress("byLooseCombinedIsolationDeltaBetaCorr3Hits_2",&byLooseCombinedIsolationDeltaBetaCorr3Hits_2);
    arbre->SetBranchAddress("byMediumCombinedIsolationDeltaBetaCorr3Hits_2",&byMediumCombinedIsolationDeltaBetaCorr3Hits_2);
    arbre->SetBranchAddress("byTightCombinedIsolationDeltaBetaCorr3Hits_2",&byTightCombinedIsolationDeltaBetaCorr3Hits_2);
    arbre->SetBranchAddress("byLooseCombinedIsolationDeltaBetaCorr3HitsdR03_2",&byLooseCombinedIsolationDeltaBetaCorr3HitsdR03_2);
    arbre->SetBranchAddress("byMediumCombinedIsolationDeltaBetaCorr3HitsdR03_2",&byMediumCombinedIsolationDeltaBetaCorr3HitsdR03_2);
    arbre->SetBranchAddress("byTightCombinedIsolationDeltaBetaCorr3HitsdR03_2",&byTightCombinedIsolationDeltaBetaCorr3HitsdR03_2);
    arbre->SetBranchAddress("byVLooseIsolationMVArun2v1DBdR03oldDMwLT_2",&byVLooseIsolationMVArun2v1DBdR03oldDMwLT_2);
    arbre->SetBranchAddress("byVLooseIsolationMVArun2v1DBoldDMwLT_2",&byVLooseIsolationMVArun2v1DBoldDMwLT_2);
    arbre->SetBranchAddress("byVLooseIsolationMVArun2v1DBnewDMwLT_2",&byVLooseIsolationMVArun2v1DBnewDMwLT_2);
    arbre->SetBranchAddress("byLooseIsolationMVArun2v1DBdR03oldDMwLT_2",&byLooseIsolationMVArun2v1DBdR03oldDMwLT_2);
    arbre->SetBranchAddress("byLooseIsolationMVArun2v1DBoldDMwLT_2",&byLooseIsolationMVArun2v1DBoldDMwLT_2);
    arbre->SetBranchAddress("byLooseIsolationMVArun2v1DBnewDMwLT_2",&byLooseIsolationMVArun2v1DBnewDMwLT_2);
    arbre->SetBranchAddress("byMediumIsolationMVArun2v1DBdR03oldDMwLT_2",&byMediumIsolationMVArun2v1DBdR03oldDMwLT_2);
    arbre->SetBranchAddress("byMediumIsolationMVArun2v1DBoldDMwLT_2",&byMediumIsolationMVArun2v1DBoldDMwLT_2);
    arbre->SetBranchAddress("byMediumIsolationMVArun2v1DBnewDMwLT_2",&byMediumIsolationMVArun2v1DBnewDMwLT_2);
    arbre->SetBranchAddress("byTightIsolationMVArun2v1DBdR03oldDMwLT_2",&byTightIsolationMVArun2v1DBdR03oldDMwLT_2);
    arbre->SetBranchAddress("byTightIsolationMVArun2v1DBoldDMwLT_2",&byTightIsolationMVArun2v1DBoldDMwLT_2);
    arbre->SetBranchAddress("byTightIsolationMVArun2v1DBnewDMwLT_2",&byTightIsolationMVArun2v1DBnewDMwLT_2);
    arbre->SetBranchAddress("byVTightIsolationMVArun2v1DBdR03oldDMwLT_2",&byVTightIsolationMVArun2v1DBdR03oldDMwLT_2);
    arbre->SetBranchAddress("byVTightIsolationMVArun2v1DBoldDMwLT_2",&byVTightIsolationMVArun2v1DBoldDMwLT_2);
    arbre->SetBranchAddress("byVTightIsolationMVArun2v1DBnewDMwLT_2",&byVTightIsolationMVArun2v1DBnewDMwLT_2);
    arbre->SetBranchAddress("byIsolationMVA3oldDMwLTraw_2",&byIsolationMVA3oldDMwLTraw_2);
    arbre->SetBranchAddress("byCombinedIsolationDeltaBetaCorrRaw3Hits_2", &byCombinedIsolationDeltaBetaCorrRaw3Hits_2);
    //arbre->SetBranchAddress("e_2",&e_2);
    arbre->SetBranchAddress("decayModeFindingNewDMs_2",&decayModeFindingNewDMs_2);
    arbre->SetBranchAddress("decayModeFinding_2",&decayModeFinding_2);
    arbre->SetBranchAddress("numChargedSignalCone_2",&numChargedSignalCone_2);
    arbre->SetBranchAddress("numChargedIsoCone_2",&numChargedIsoCone_2);
    arbre->SetBranchAddress("decayMode_2",&decayMode_2);
    arbre->SetBranchAddress("againstElectronVLooseMVA6_2",&againstElectronVLooseMVA6_2);
    arbre->SetBranchAddress("againstElectronLooseMVA6_2",&againstElectronLooseMVA6_2);
    arbre->SetBranchAddress("againstElectronMediumMVA6_2",&againstElectronMediumMVA6_2);
    arbre->SetBranchAddress("againstElectronTightMVA6_2",&againstElectronTightMVA6_2);
    arbre->SetBranchAddress("againstElectronVTightMVA6_2",&againstElectronVTightMVA6_2);
    arbre->SetBranchAddress("againstMuonLoose3_2",&againstMuonLoose3_2);
    arbre->SetBranchAddress("againstMuonTight3_2",&againstMuonTight3_2);
    arbre->SetBranchAddress("isZet",&isZet);
    arbre->SetBranchAddress("gen_match_1",&gen_match_1);
    arbre->SetBranchAddress("gen_match_2",&gen_match_2);
    arbre->SetBranchAddress("passEle25",&passEle25);
    arbre->SetBranchAddress("metcor", &metcor);
    arbre->SetBranchAddress("metcorphi", &metcorphi);
    arbre->SetBranchAddress("m_vis",&m_vis);
    arbre->SetBranchAddress("npu",&npu);
    arbre->SetBranchAddress("neutralIso_2",&neutralIso_2);
    arbre->SetBranchAddress("chargedIso_2",&chargedIso_2);
    arbre->SetBranchAddress("puIso_2",&puIso_2);
    arbre->SetBranchAddress("photonIso_2",&photonIso_2);

   float bins0[] = {0,60,65,70,75,80,85,90,95,100,105,110,115,400};
   float bins1[] = {0,70,80,90,100,110,120,130,140,150,180,300};
   float bins2[] = {0,90,105,120,135,150,400};

   float bins_pth[] = {0,60,100,140,180,220,500};
   float bins_mjj[] = {300,600,900,1200,1700,3000};
   float bins_taupt[] = {30,35,40,45,50,55,300};

   int  binnum1 = sizeof(bins1)/sizeof(Float_t) - 1;
   int  binnum2 = sizeof(bins2)/sizeof(Float_t) - 1;
   int  binnum0 = sizeof(bins0)/sizeof(Float_t) - 1;
   int  binnum_pth = sizeof(bins_pth)/sizeof(Float_t) - 1;
   int  binnum_taupt = sizeof(bins_taupt)/sizeof(Float_t) - 1;
   int  binnum_mjj = sizeof(bins_mjj)/sizeof(Float_t) - 1;


   TH1F *n70=new TH1F ("n70", "n70", 6,0,6);

   TH2F *h0_OS=new TH2F ("h0_OS","Invariant mass",binnum_taupt,bins_taupt,binnum0,bins0);h0_OS->Sumw2();
   TH2F *h1_OS=new TH2F ("h1_OS","Invariant mass",binnum_pth,bins_pth,binnum1,bins1);h1_OS->Sumw2();
   TH2F *h2_OS=new TH2F ("h2_OS","Invariant mass",binnum_mjj,bins_mjj,binnum2,bins2);h2_OS->Sumw2();
   TH2F *h0_SS=new TH2F ("h0_SS","Invariant mass",binnum_taupt,bins_taupt,binnum0,bins0);h0_SS->Sumw2();
   TH2F *h1_SS=new TH2F ("h1_SS","Invariant mass",binnum_pth,bins_pth,binnum1,bins1);h1_SS->Sumw2();
   TH2F *h2_SS=new TH2F ("h2_SS","Invariant mass",binnum_mjj,bins_mjj,binnum2,bins2);h2_SS->Sumw2();
   TH2F *h0_QCD=new TH2F ("h0_QCD","Invariant mass",binnum_taupt,bins_taupt,binnum0,bins0);h0_QCD->Sumw2();
   TH2F *h1_QCD=new TH2F ("h1_QCD","Invariant mass",binnum_pth,bins_pth,binnum1,bins1);h1_QCD->Sumw2();
   TH2F *h2_QCD=new TH2F ("h2_QCD","Invariant mass",binnum_mjj,bins_mjj,binnum2,bins2);h2_QCD->Sumw2();
   TH2F *h0_WOS=new TH2F ("h0_WOS","Invariant mass",binnum_taupt,bins_taupt,binnum0,bins0);h0_WOS->Sumw2();
   TH2F *h1_WOS=new TH2F ("h1_WOS","Invariant mass",binnum_pth,bins_pth,binnum1,bins1);h1_WOS->Sumw2();
   TH2F *h2_WOS=new TH2F ("h2_WOS","Invariant mass",binnum_mjj,bins_mjj,binnum2,bins2);h2_WOS->Sumw2();
   TH2F *h0_WSS=new TH2F ("h0_WSS","Invariant mass",binnum_taupt,bins_taupt,binnum0,bins0);h0_WSS->Sumw2();
   TH2F *h1_WSS=new TH2F ("h1_WSS","Invariant mass",binnum_pth,bins_pth,binnum1,bins1);h1_WSS->Sumw2();
   TH2F *h2_WSS=new TH2F ("h2_WSS","Invariant mass",binnum_mjj,bins_mjj,binnum2,bins2);h2_WSS->Sumw2();

   ScaleFactor * myScaleFactor_trg = new ScaleFactor();
   myScaleFactor_trg->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_Ele25eta2p1WPTight_eff.root");
   ScaleFactor * myScaleFactor_id = new ScaleFactor();
   myScaleFactor_id->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_IdIso0p10_eff.root");

   float n70passOS=0; 
   Int_t nentries_wtn = (Int_t) arbre->GetEntries();
   for (Int_t i = 0; i < nentries_wtn; i++) {
        arbre->GetEntry(i);
        if (i % 20000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
        fflush(stdout);
	if (pt_1<27) continue;
        if (sample=="data_obs" && !passEle25) continue;
        //bool tauIsolation=byTightIsolationMVArun2v1DBoldDMwLT_2;

        float sf_trg=1.0;
        float sf_id=1.0;

        if (sample!="data_obs"){
           sf_trg=myScaleFactor_trg->get_EfficiencyData(pt_1,eta_1);
           sf_id=myScaleFactor_id->get_ScaleFactor(pt_1,eta_1);
        }

	//if (iso_1>0.10) continue;
	//if (!againstElectronTightMVA6_2) continue;
	//if (!againstMuonLoose3_2) continue;
	if (!decayModeFinding_2) continue;
	if (fabs(eta_2)>2.3) continue;
	//if (!tauIsolation) continue;

        float signalRegion=(byTightIsolationMVArun2v1DBoldDMwLT_2 && iso_1<0.10 && againstElectronTightMVA6_2 && againstMuonLoose3_2);
        float qcdRegion=(byMediumIsolationMVArun2v1DBoldDMwLT_2 && iso_1<0.30 && againstElectronTightMVA6_2);
        float wRegion=(byMediumIsolationMVArun2v1DBoldDMwLT_2 && iso_1<0.10 && againstElectronTightMVA6_2 && againstMuonLoose3_2);

	TLorentzVector mytau; 
	mytau.SetPtEtaPhiM(pt_2,eta_2,phi_2,m_2);
        TLorentzVector myele;
        myele.SetPtEtaPhiM(pt_1,eta_1,phi_1,m_1);

	//****************** Tau energy scale corrections ************************
	if (tes==1 && gen_match_2==5){
	   mytau*=1.03;
	}
	if (tes==-1 && gen_match_2==5){
           mytau*=0.97;
        }

	//***************** Visible mass between the muon and the tau **************
	/*if (sample=="W"){
	    if (NUP==5) weight=13.516;
	    else if (NUP==6) weight=4.126;
            else if (NUP==7) weight=2.162;
            else if (NUP==8) weight=1.665;
            else if (NUP==9) weight=1.814;
  	}*/
        if (sample=="W"){
            if (NUP==5) weight=12.43;
            else if (NUP==6) weight=4.019;
            else if (NUP==7) weight=2.222;
            else if (NUP==8) weight=1.077;
            else if (NUP==9) weight=1.176;
        }

        if (sample=="ZTT" or sample=="ZLL" or sample=="ZL" or sample=="ZJ"){
            if (NUP==5)
                weight=1.281;
            if (NUP==6)
                weight=0.2825;
            if (NUP==7)
                weight=0.3021;
            if (NUP==8)
                weight=0.3127;
            if (NUP==9)
                weight=0.2511;
        }

	float correction=sf_trg*sf_id*h_Trk->Eval(eta_1)*LumiWeights_12->weight(npu);
	float aweight=weight*correction;
        if (gen_match_2==5 && l2_decayMode==0) aweight=aweight*0.97;
        if (gen_match_2==5 && l2_decayMode==1) aweight=aweight*0.92;
        if (gen_match_2==5 && l2_decayMode<2) aweight=aweight*0.94;
        if (gen_match_2==5 && l2_decayMode==10) aweight=aweight*0.80;
	if (sample=="data_obs") aweight=1.0;
	float poidsW=1.0;

	//********************* Separation between signal and DY others *******************
        if (sample=="ZL" && gen_match_2>4) continue;
        if (sample=="ZTT" && gen_match_2!=5) continue;
        if (sample=="ZLL" && gen_match_2==5) continue;
        if (sample=="ZJ" && gen_match_2!=6) continue;
        if (sample=="ZL" or (sample=="ZLL" && gen_match_2<5)){
            if (fabs(eta_2)<1.460) aweight=aweight*1.80;
            else if (fabs(eta_2)>1.558) aweight=aweight*1.30;
        }

        //********************** MT between muon and MET ***********************************
        float mt=0;
	float mex=metcor*cos(metcorphi); float mey=metcor*sin(metcorphi);
	if (tes==-1 && gen_match_2==5){
	   mex=mex+0.03*(mytau.Px()/0.97);
           mey=mey+0.03*(mytau.Py()/0.97);
	}
        if (tes==1 && gen_match_2==5){
           mex=mex-0.03*(mytau.Px()/1.03);
           mey=mey-0.03*(mytau.Py()/1.03);
        }
	float met_pt2=sqrt(mex*mex+mey*mey);
	mt=TMass_F(myele.Pt(),met_pt2,myele.Px(),mex,myele.Py(),mey);

	//******************** W reweighting in high MT sideband ****************************
        if (q_1*q_2<0 && mt>80 && signalRegion) n70passOS+=poidsW*aweight;

	//************************* Pzeta variable ***********************
	float norm_zeta=norm_F(mytau.Px()/mytau.Pt()+px_1/pt_1,mytau.Py()/mytau.Pt()+py_1/pt_1);
	float x_zeta= (mytau.Px()/mytau.Pt()+px_1/pt_1)/norm_zeta;
	float y_zeta= (mytau.Py()/mytau.Pt()+py_1/pt_1)/norm_zeta;
	float p_zeta_mis=mex*x_zeta+mey*y_zeta;
	float pzeta_vis=(mytau.Px()+px_1)*x_zeta+(mytau.Py()+py_1)*y_zeta;
	bool cut_zeta=p_zeta_mis-0.85*pzeta_vis>-30;

	//************************* Fill histograms **********************
	float var2=m_sv;
	if (tes==1 && gen_match_2==5)
	   var2=m_sv_UP;
        if (tes==-1 && gen_match_2==5)
           var2=m_sv_DOWN;
        if (njets==0) var2=(myele+mytau).M();

        float var1_1=pt_sv;
        if (tes==1 && gen_match_2==5)
           var1_1=pt_sv_UP;
        if (tes==-1 && gen_match_2==5)
           var1_1=pt_sv_DOWN;
	float var1_0=mytau.Pt();
	float var1_2=mjj;

        if (njets==0 && mt<50 && mytau.Pt()>30){
            if (signalRegion && q_1*q_2<0)
                h0_OS->Fill(var1_0,var2,aweight*poidsW);
            if (signalRegion && q_1*q_2>0)
                h0_SS->Fill(var1_0,var2,aweight*poidsW);
            if (wRegion && q_1*q_2<0)
                h0_WOS->Fill(var1_0,var2,aweight*poidsW);
            if (wRegion && q_1*q_2>0)
                h0_WSS->Fill(var1_0,var2,aweight*poidsW);
            if (qcdRegion && q_1*q_2>0)
                h0_QCD->Fill(var1_0,var2,aweight*poidsW);
        }
        if ((njets==1 or (njets>=2 && mjj<300)) && mt<50 && mytau.Pt()>30){
            if (signalRegion && q_1*q_2<0)
                h1_OS->Fill(var1_1,var2,aweight*poidsW);
            if (signalRegion && q_1*q_2>0)
                h1_SS->Fill(var1_1,var2,aweight*poidsW);
            if (wRegion && q_1*q_2<0)
                h1_WOS->Fill(var1_1,var2,aweight*poidsW);
            if (wRegion && q_1*q_2>0)
                h1_WSS->Fill(var1_1,var2,aweight*poidsW);
            if (qcdRegion && q_1*q_2>0)
                h1_QCD->Fill(var1_1,var2,aweight*poidsW);
        }
        if ((njets==2 && (mjj>300)) && mt<50 && mytau.Pt()>30){
            if (signalRegion && q_1*q_2<0)
                h2_OS->Fill(var1_2,var2,aweight*poidsW);
            if (signalRegion && q_1*q_2>0)
                h2_SS->Fill(var1_2,var2,aweight*poidsW);
            if (wRegion && q_1*q_2<0)
                h2_WOS->Fill(var1_2,var2,aweight*poidsW);
            if (wRegion && q_1*q_2>0)
                h2_WSS->Fill(var1_2,var2,aweight*poidsW);
            if (qcdRegion && q_1*q_2>0)
                h2_QCD->Fill(var1_2,var2,aweight*poidsW);
        }

    } // end of loop over events
    cout<<"n70: "<<n70passOS<<endl;
    n70->SetBinContent(1,n70passOS);
    h0_WOS->Scale(h0_OS->Integral()/h0_WOS->Integral());
    h1_WOS->Scale(h1_OS->Integral()/h1_WOS->Integral());
    h2_WOS->Scale(h2_OS->Integral()/h2_WOS->Integral());
    h0_WSS->Scale(h0_SS->Integral()/h0_WSS->Integral());
    h1_WSS->Scale(h1_SS->Integral()/h1_WSS->Integral());
    h2_WSS->Scale(h2_SS->Integral()/h2_WSS->Integral());

    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    n70->Write();

    TString postfix="";
    if (tes==1)
	postfix="_TESUp";
    if (tes==-1)
        postfix="_TESDown";

    TDirectory *OS0jet =fout->mkdir("et_0jet");
    OS0jet->cd();
    h0_OS->SetName(name.c_str()+postfix);
    h0_WOS->SetName(name.c_str()+postfix);
    h0_OS->Write();
    TDirectory *SS0jet =fout->mkdir("SS0jet");
    SS0jet->cd();
    h0_SS->SetName(name.c_str()+postfix);
    h0_WSS->SetName(name.c_str()+postfix);
    h0_SS->Write();
    TDirectory *QCD0jet =fout->mkdir("QCD0jet");
    QCD0jet->cd();
    h0_QCD->SetName(name.c_str()+postfix);
    h0_QCD->Write();

    TDirectory *OS1jet =fout->mkdir("et_1jet");
    OS1jet->cd();
    h1_OS->SetName(name.c_str()+postfix);
    h1_WOS->SetName(name.c_str()+postfix);
    if (sample=="W")
       h1_WOS->Write();
    else
       h1_OS->Write();
    TDirectory *SS1jet =fout->mkdir("SS1jet");
    SS1jet->cd();
    h1_SS->SetName(name.c_str()+postfix);
    h1_WSS->SetName(name.c_str()+postfix);
    if (sample=="W")
       h1_WSS->Write();
    else
       h1_SS->Write();
    TDirectory *QCD1jet =fout->mkdir("QCD1jet");
    QCD1jet->cd();
    h1_QCD->SetName(name.c_str()+postfix);
    h1_QCD->Write();

    TDirectory *OS2jet =fout->mkdir("et_vbf");
    OS2jet->cd();
    h2_OS->SetName(name.c_str()+postfix);
    h2_WOS->SetName(name.c_str()+postfix);
    if (sample=="W")
       h2_WOS->Write();
    else
       h2_OS->Write();
    TDirectory *SS2jet =fout->mkdir("SSvbf");
    SS2jet->cd();
    h2_SS->SetName(name.c_str()+postfix);
    h2_WSS->SetName(name.c_str()+postfix);
    if (sample=="W")
       h2_WSS->Write();
    else
       h2_SS->Write();
    TDirectory *QCD2jet =fout->mkdir("QCDvbf");
    QCD2jet->cd();
    h2_QCD->SetName(name.c_str()+postfix);
    h2_QCD->Write();

    fout->Close();
} 


