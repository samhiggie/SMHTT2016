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
    TTree *arbre = (TTree*) f_Double->Get("emu_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);

    TFile *f_Trk=new TFile("ratios.root");
    TGraph *h_Trk=(TGraph*) f_Trk->Get("ratio_eta");

    reweight::LumiReWeighting* LumiWeights_12;
    LumiWeights_12 = new reweight::LumiReWeighting("MC_Spring16_PU25ns_V1.root", "MyDataPileupHistogram.root", "pileup", "pileup");

    float xs=1.0; float weight=1.0; float luminosity=20100.0;
    if (sample=="DYtt" or sample=="DYll" or sample=="ZL" or sample=="ZTT" or sample=="ZJ" or sample=="ZLL"){ xs=5765.4; weight=luminosity*xs/ngen;}
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
    arbre->SetBranchAddress("iso_2", &iso_2);
    arbre->SetBranchAddress("met", &met);
    arbre->SetBranchAddress("met_sv", &met_sv);
    arbre->SetBranchAddress("met_sv_DOWN", &met_sv_DOWN);
    arbre->SetBranchAddress("met_sv_UP", &met_sv_UP);
    arbre->SetBranchAddress("metcor", &metcor);
    arbre->SetBranchAddress("metcorphi", &metcorphi);
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
    arbre->SetBranchAddress("gen_match_1",&gen_match_1);
    arbre->SetBranchAddress("gen_match_2",&gen_match_2);
    arbre->SetBranchAddress("m_vis",&m_vis);
    arbre->SetBranchAddress("npu",&npu);
    arbre->SetBranchAddress("passE23Mu8",&passE23Mu8);
    arbre->SetBranchAddress("passMu23E12",&passMu23E12);
    arbre->SetBranchAddress("pt_top1",&pt_top1);
    arbre->SetBranchAddress("pt_top2",&pt_top2);

   float bins0[] = {0,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,170,200,400};
   float bins1[] = {0,70,90,100,110,120,130,140,150,180,220,300};
   float bins2[] = {0,90,105,120,135,150,200,280,400};

   float bins_pth[] = {0,60,100,140,180,500};
   float bins_mjj[] = {300,500,700,1000,1400,3000};
   float bins_taupt[] = {15,25,35,45,300};

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

   ScaleFactor * myScaleFactor_trgMu23 = new ScaleFactor();
   myScaleFactor_trgMu23->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BCD/Muon_Mu23leg_eff.root");
   ScaleFactor * myScaleFactor_trgMu8 = new ScaleFactor();
   myScaleFactor_trgMu8->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BCD/Muon_Mu8leg_eff.root");
   ScaleFactor * myScaleFactor_trgEle12 = new ScaleFactor();
   myScaleFactor_trgEle12->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_Ele12leg_eff.root");
   ScaleFactor * myScaleFactor_trgEle23 = new ScaleFactor();
   myScaleFactor_trgEle23->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_Ele23leg_eff.root");
   ScaleFactor * myScaleFactor_idMu = new ScaleFactor();
   myScaleFactor_idMu->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BCD/Muon_IdIso0p20_eff.root");
   ScaleFactor * myScaleFactor_idEle = new ScaleFactor();
   myScaleFactor_idEle->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_IdIso0p15_eff.root");

   float n70passOS=0;
   Int_t nentries_wtn = (Int_t) arbre->GetEntries();
   for (Int_t i = 0; i < nentries_wtn; i++) {
        arbre->GetEntry(i);
        if (i % 20000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
        fflush(stdout);
        if (sample=="data_obs" && !passE23Mu8 && !passMu23E12) continue;
        if (sample=="data_obs" && !passE23Mu8 && passMu23E12 && pt_2<24) continue;
        if (sample=="data_obs" && passE23Mu8 && !passMu23E12 && pt_1<24) continue;

        float sf_trg=1.0;
        float sf_id=1.0;

        if (pt_2<10) continue;
        float wtt=1.0;
        if (sample=="TT") wtt=sqrt(exp(0.156-0.00137*pt_top1)*exp(0.156-0.00137*pt_top2));

        if (sample!="data_obs"){
           sf_trg=(myScaleFactor_trgMu23->get_EfficiencyData(pt_2,eta_2)*myScaleFactor_trgEle12->get_EfficiencyData(pt_1,eta_1))+(myScaleFactor_trgMu8->get_EfficiencyData(pt_2,eta_2)*myScaleFactor_trgEle23->get_EfficiencyData(pt_1,eta_1))-(myScaleFactor_trgMu23->get_EfficiencyData(pt_2,eta_2)*myScaleFactor_trgEle23->get_EfficiencyData(pt_1,eta_1));
           sf_id=myScaleFactor_idEle->get_ScaleFactor(pt_1,eta_1)*myScaleFactor_idMu->get_ScaleFactor(pt_2,eta_2);
        }

        if (iso_1>0.15) continue;
        if (iso_2>0.20) continue;

        TLorentzVector myele;
        myele.SetPtEtaPhiM(pt_1,eta_1,phi_1,m_1);
        TLorentzVector mymu;
        mymu.SetPtEtaPhiM(pt_2,eta_2,phi_2,m_2);


        if (tes==1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
           if (fabs(myele.Eta()<1.479))
                myele*=1.01;
           else
                myele*=1.025;
        }
        if (tes==-1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
           if (fabs(myele.Eta()<1.479))
                myele*=0.99;
           else
                myele*=0.975;
        }


	//***************** Visible mass between the muon and the tau **************
        if (sample=="W"){
            if (NUP==5) weight=12.43;
            else if (NUP==6) weight=4.019;
            else if (NUP==7) weight=2.133;
            else if (NUP==8) weight=1.077;
            else if (NUP==9) weight=1.176;
        }

        if (sample=="DYtt" or sample=="DYll" or sample=="ZTT" or sample=="ZLL" or sample=="ZL" or sample=="ZJ"){
            if (NUP==5)
                weight=1.281;
            if (NUP==6)
                weight=0.282;
            if (NUP==7)
                weight=0.3021;
            if (NUP==8)
                weight=0.3127;
            if (NUP==9)
                weight=0.2511;
        }

        float correction=wtt*sf_trg*sf_id*h_Trk->Eval(eta_2)*LumiWeights_12->weight(npu);
        float aweight=weight*correction;
        if (sample=="data_obs") aweight=1.0;
        float poidsW=1.0;

	//********************* Separation between signal and DY others *******************
 
        if ((sample=="DYtt" or sample=="DYlowtt") && (gen_match_1<3 or gen_match_2<4)) continue;
        if ((sample=="DYll" or sample=="DYlowll") && gen_match_1>2 && gen_match_2>3) continue;

        //********************** MT between muon and MET ***********************************
        float mt=0;
        float mex=metcor*cos(metcorphi); float mey=metcor*sin(metcorphi);
        if (tes==1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
            mex=met_sv_UP*cos(metcorphi);
            mey=met_sv_UP*sin(metcorphi);
        }
        if (tes==-1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
            mex=met_sv_DOWN*cos(metcorphi);
            mey=met_sv_DOWN*sin(metcorphi);
        }
        float met_pt2=sqrt(mex*mex+mey*mey);
        mt=TMass_F(pt_1,met_pt2,myele.Px(),mex,myele.Py(),mey);

	//******************** W reweighting in high MT sideband ****************************
        if (q_1*q_2<0 && mt>80) n70passOS+=poidsW*aweight;

	//************************* Pzeta variable ***********************
	//
        float norm_zeta=norm_F(myele.Px()/myele.Pt()+px_2/pt_2,myele.Py()/myele.Pt()+py_2/pt_2);
        float x_zeta= (myele.Px()/myele.Pt()+px_2/pt_2)/norm_zeta;
        float y_zeta= (myele.Py()/myele.Pt()+py_2/pt_2)/norm_zeta;
        float p_zeta_mis=mex*x_zeta+mey*y_zeta;
        float pzeta_vis=(myele.Px()+px_2)*x_zeta+(myele.Py()+py_2)*y_zeta;
        bool cut_zeta35=p_zeta_mis-0.85*pzeta_vis>-35;
        bool cut_zeta10=p_zeta_mis-0.85*pzeta_vis>-10;

	//************************* Fill histograms **********************
	
        if (myele.Pt()<13) continue;
        if (mymu.Pt()<15) continue;
        if (myele.Pt()<24 && mymu.Pt()<24) continue;

	float var2=m_sv;
	if (tes==1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3))
	   var2=m_sv_UP;
        if (tes==-1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3))
           var2=m_sv_DOWN;

        float var1_1=pt_sv;
        if (tes==1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3))
           var1_1=pt_sv_UP;
        if (tes==-1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3))
           var1_1=pt_sv_DOWN;
	float var1_0=mymu.Pt();
	float var1_2=mjj;

	if (njets==0 && cut_zeta35){
            if (q_1*q_2<0 )
		h0_OS->Fill(var1_0,var2,aweight*poidsW);
            if (q_1*q_2>0 )
                h0_SS->Fill(var1_0,var2,aweight*poidsW);
	}
        if ((njets==1 or (njets==2 && mjj<300)) && cut_zeta35){
            if (q_1*q_2<0 )
                h1_OS->Fill(var1_1,var2,aweight*poidsW);
            if (q_1*q_2>0 )
                h1_SS->Fill(var1_1,var2,aweight*poidsW);
        }
        if ((njets==2 && (mjj>300)) && cut_zeta10){
            if (q_1*q_2<0)
                h2_OS->Fill(var1_2,var2,aweight*poidsW);
            if (q_1*q_2>0)
                h2_SS->Fill(var1_2,var2,aweight*poidsW);
        }
				
    } // end of loop over events
    cout<<"n70: "<<n70passOS<<endl;
    n70->SetBinContent(1,n70passOS);
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    n70->Write();

    TString postfix="";
    if (tes==1)
	postfix="_EESUp";
    if (tes==-1)
        postfix="_EESDown";
    TDirectory *OS0jet_cat1 =fout->mkdir("em_0jet");
    OS0jet_cat1->cd();
    h0_OS->SetName(name.c_str()+postfix);
    h0_OS->Write();
    TDirectory *SS0jet_cat1 =fout->mkdir("SS0jet");
    SS0jet_cat1->cd();
    h0_SS->SetName(name.c_str()+postfix);
    h0_SS->Write();
    TDirectory *OS1jet_cat1 =fout->mkdir("em_1jet");
    OS1jet_cat1->cd();
    h1_OS->SetName(name.c_str()+postfix);
    h1_OS->Write();
    TDirectory *SS1jet_cat1 =fout->mkdir("SS1jet");
    SS1jet_cat1->cd();
    h1_SS->SetName(name.c_str()+postfix);
    h1_SS->Write();
    TDirectory *OS2jet_cat1 =fout->mkdir("em_vbf");
    OS2jet_cat1->cd();
    h2_OS->SetName(name.c_str()+postfix);
    h2_OS->Write();
    TDirectory *SS2jet_cat1 =fout->mkdir("SS2jet");
    SS2jet_cat1->cd();
    h2_SS->SetName(name.c_str()+postfix);
    h2_SS->Write();
    fout->Close();
} 


