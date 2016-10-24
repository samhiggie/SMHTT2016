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
    if (sample=="DYtt" or sample=="DYll"){ xs=5765.4; weight=luminosity*xs/ngen;}
    else if (sample=="DYlowtt" or sample=="DYlowll"){ xs=18610.0; weight=luminosity*xs/ngen;}
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
    arbre->SetBranchAddress("iso_2", &iso_2);
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
    arbre->SetBranchAddress("mt_1", &mt_1);
    arbre->SetBranchAddress("mt_2", &mt_2);
    arbre->SetBranchAddress("phi_2", &phi_2);
    arbre->SetBranchAddress("met", &met);
    arbre->SetBranchAddress("metphi", &metphi);
    arbre->SetBranchAddress("metcor", &metcor);
    arbre->SetBranchAddress("metcorphi", &metcorphi);
    arbre->SetBranchAddress("njets", &njets);
    arbre->SetBranchAddress("pt_tt", &pt_tt);
    arbre->SetBranchAddress("jpt_1", &jpt_1);
    arbre->SetBranchAddress("jpt_2", &jpt_2);
    arbre->SetBranchAddress("jdeta", &jdeta);
    arbre->SetBranchAddress("mjj", &mjj);
    arbre->SetBranchAddress("pt_top1", &pt_top1);
    arbre->SetBranchAddress("pt_top2", &pt_top2);
    //arbre->SetBranchAddress("met_px", &met_px);
    //arbre->SetBranchAddress("met_py", &met_py);
    arbre->SetBranchAddress("isZtt",&isZtt);
    arbre->SetBranchAddress("m_vis",&m_vis);
    arbre->SetBranchAddress("gen_match_1",&gen_match_1);
    arbre->SetBranchAddress("gen_match_2",&gen_match_2);
    arbre->SetBranchAddress("npu",&npu);
    arbre->SetBranchAddress("passE23Mu8",&passE23Mu8);
    arbre->SetBranchAddress("passMu23E12",&passMu23E12);
    arbre->SetBranchAddress("m_sv", &m_sv);
    arbre->SetBranchAddress("m_sv_UP", &m_sv_UP);
    arbre->SetBranchAddress("m_sv_DOWN", &m_sv_DOWN);
    arbre->SetBranchAddress("met_sv_UP", &met_sv_UP);
    arbre->SetBranchAddress("met_sv_DOWN", &met_sv_DOWN);

   float bins0_cat1[] = {50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225};
   float bins0_cat2[] = {70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,350};
   float bins1_cat1[] = {0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,280};
   float bins1_cat2[] = {0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,360};
   float bins2_cat1[] = {0,30,60,90,120,150,180,210,240,270,350};
   float bins2_cat2[] = {0,30,60,90,120,150,180,210,240,270,350};

   int  binnum1_cat1 = sizeof(bins1_cat1)/sizeof(Float_t) - 1;
   int  binnum2_cat1 = sizeof(bins2_cat1)/sizeof(Float_t) - 1;
   int  binnum0_cat1 = sizeof(bins0_cat1)/sizeof(Float_t) - 1;
   int  binnum1_cat2 = sizeof(bins1_cat2)/sizeof(Float_t) - 1;
   int  binnum2_cat2 = sizeof(bins2_cat2)/sizeof(Float_t) - 1;
   int  binnum0_cat2 = sizeof(bins0_cat2)/sizeof(Float_t) - 1;

   TH1F *n70=new TH1F ("n70", "n70", 6,0,6);
   TH1F *h0_1OS=new TH1F ("h0_1OS","Invariant mass",binnum0_cat1,bins0_cat1);h0_1OS->Sumw2();
   TH1F *h0_2OS=new TH1F ("h0_2OS","Invariant mass",binnum0_cat2,bins0_cat2);h0_2OS->Sumw2();
   TH1F *h1_1OS=new TH1F ("h1_1OS","Invariant mass",binnum1_cat1,bins1_cat1);h1_1OS->Sumw2();
   TH1F *h1_2OS=new TH1F ("h1_2OS","Invariant mass",binnum1_cat2,bins1_cat2);h1_2OS->Sumw2();
   TH1F *h2_1OS=new TH1F ("h2_1OS","Invariant mass",binnum2_cat1,bins2_cat1);h2_1OS->Sumw2();
   TH1F *h2_2OS=new TH1F ("h2_2OS","Invariant mass",binnum2_cat2,bins2_cat2);h2_2OS->Sumw2();
   TH1F *h0_1SS=new TH1F ("h0_1SS","Invariant mass",binnum0_cat1,bins0_cat1);h0_1SS->Sumw2();
   TH1F *h0_2SS=new TH1F ("h0_2SS","Invariant mass",binnum0_cat2,bins0_cat2);h0_2SS->Sumw2();
   TH1F *h1_1SS=new TH1F ("h1_1SS","Invariant mass",binnum1_cat1,bins1_cat1);h1_1SS->Sumw2();
   TH1F *h1_2SS=new TH1F ("h1_2SS","Invariant mass",binnum1_cat2,bins1_cat2);h1_2SS->Sumw2();
   TH1F *h2_1SS=new TH1F ("h2_1SS","Invariant mass",binnum2_cat1,bins2_cat1);h2_1SS->Sumw2();
   TH1F *h2_2SS=new TH1F ("h2_2SS","Invariant mass",binnum2_cat2,bins2_cat2);h2_2SS->Sumw2();

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
	//if (pt_1<24 && pt_2<24) continue;
	//if (run>276811) continue;
	//if (nbtag>0) continue;

        float sf_trg=1.0;
        float sf_id=1.0;
	//if (pt_1<13) continue;
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

	//****************** Electron energy scale corrections ************************
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
	/*if (tes==-1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
	   if (fabs(eta_1)<1.479){
	      mex=mex+0.01*(myele.Px()/0.99);
              mey=mey+0.01*(myele.Py()/0.99);
	   }
	   else {
              mex=mex+0.025*(myele.Px()/0.975);
              mey=mey+0.025*(myele.Py()/0.975);
           }
	}
        if (tes==1 && sample!="data_obs" && (gen_match_1==1 or gen_match_1==3)){
           if (fabs(eta_1)<1.479){
              mex=mex-0.01*(myele.Px()/1.01);
              mey=mey-0.01*(myele.Py()/1.01);
	   }
	   else {
              mex=mex-0.025*(myele.Px()/1.025);
              mey=mey-0.025*(myele.Py()/1.025);
           }
        }*/
	float met_pt2=sqrt(mex*mex+mey*mey);
	mt=TMass_F(pt_1,met_pt2,px_1,mex,py_1,mey);

	//******************** W reweighting in high MT sideband ****************************
        if (q_1*q_2<0 && mt>80) n70passOS+=poidsW*aweight;

	//************************* Pzeta variable ***********************
	float norm_zeta=norm_F(myele.Px()/myele.Pt()+px_2/pt_2,myele.Py()/myele.Pt()+py_2/pt_2);
	float x_zeta= (myele.Px()/myele.Pt()+px_2/pt_2)/norm_zeta;
	float y_zeta= (myele.Py()/myele.Pt()+py_2/pt_2)/norm_zeta;
	float p_zeta_mis=mex*x_zeta+mey*y_zeta;
	float pzeta_vis=(myele.Px()+px_2)*x_zeta+(myele.Py()+py_2)*y_zeta;
	bool cut_zeta35=p_zeta_mis-0.85*pzeta_vis>-35;
        bool cut_zeta10=p_zeta_mis-0.85*pzeta_vis>-10;

	//************************* Fill histograms **********************$
	float var=m_sv;//m_sv;//m_vis;//jdeta;//(myele+mymu).Pt()/(pt_1+pt_2);//m_vis;
	if (tes==-1) var=m_sv_DOWN;
	if (tes==1) var=m_sv_UP;
	//float mttot=TMass_F((myele+mymu).Pt(),(myele+mymu).Px(),(myele+mymu).Py(),met,metphi);//m_vis;//p_zeta_mis-0.85*pzeta_vis;//m_vis;
	if (pt_2<15) continue;
	if (myele.Pt()<13) continue;
	if (myele.Pt()<24 && pt_2<24) continue;
	//if (mttot>60) continue;
	if (njets==0 && cut_zeta35){
            if (q_1*q_2<0 && pt_2<35)
		h0_1OS->Fill(var,aweight*poidsW);
            if (q_1*q_2<0 && pt_2>35)
                h0_2OS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && pt_2<35)
                h0_1SS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && pt_2>35)
                h0_2SS->Fill(var,aweight*poidsW);
	}
        if ((njets==1 or (njets==2 && mjj<500)) && cut_zeta35){
            if (q_1*q_2<0 && pt_2<35)
                h1_1OS->Fill(var,aweight*poidsW);
            if (q_1*q_2<0 && pt_2>35)
                h1_2OS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && pt_2<35)
                h1_1SS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && pt_2>35)
                h1_2SS->Fill(var,aweight*poidsW);
        }
        if (njets==2 && cut_zeta10){// && (myele+mymu).Pt()/(pt_1+pt_2)>0.3){
            if (q_1*q_2<0 && mjj>800)
                h2_1OS->Fill(var,aweight*poidsW);
            if (q_1*q_2<0 && mjj>500 && mjj<800)
                h2_2OS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && mjj>800)
                h2_1SS->Fill(var,aweight*poidsW);
            if (q_1*q_2>0 && mjj>500 && mjj<800)
                h2_2SS->Fill(var,aweight*poidsW);
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
    TDirectory *OS0jet_cat1 =fout->mkdir("em_0jet_low");
    OS0jet_cat1->cd();
    h0_1OS->SetName(name.c_str()+postfix);
    h0_1OS->Write();
    TDirectory *SS0jet_cat1 =fout->mkdir("SS0jet_cat1");
    SS0jet_cat1->cd();
    h0_1SS->SetName(name.c_str()+postfix);
    h0_1SS->Write();
    TDirectory *OS0jet_cat2 =fout->mkdir("em_0jet_high");
    OS0jet_cat2->cd();
    h0_2OS->SetName(name.c_str()+postfix);
    h0_2OS->Write();
    TDirectory *SS0jet_cat2 =fout->mkdir("SS0jet_cat2");
    SS0jet_cat2->cd();
    h0_2SS->SetName(name.c_str()+postfix);
    h0_2SS->Write();
    TDirectory *OS1jet_cat1 =fout->mkdir("em_1jet_low");
    OS1jet_cat1->cd();
    h1_1OS->SetName(name.c_str()+postfix);
    h1_1OS->Write();
    TDirectory *SS1jet_cat1 =fout->mkdir("SS1jet_cat1");
    SS1jet_cat1->cd();
    h1_1SS->SetName(name.c_str()+postfix);
    h1_1SS->Write();
    TDirectory *OS1jet_cat2 =fout->mkdir("em_1jet_high");
    OS1jet_cat2->cd();
    h1_2OS->SetName(name.c_str()+postfix);
    h1_2OS->Write();
    TDirectory *SS1jet_cat2 =fout->mkdir("SS1jet_cat2");
    SS1jet_cat2->cd();
    h1_2SS->SetName(name.c_str()+postfix);
    h1_2SS->Write();
    TDirectory *OS2jet_cat1 =fout->mkdir("em_vbf_low");
    OS2jet_cat1->cd();
    h2_1OS->SetName(name.c_str()+postfix);
    h2_1OS->Write();
    TDirectory *SS2jet_cat1 =fout->mkdir("SS2jet_cat1");
    SS2jet_cat1->cd();
    h2_1SS->SetName(name.c_str()+postfix);
    h2_1SS->Write();
    TDirectory *OS2jet_cat2 =fout->mkdir("em_vbf_high");
    OS2jet_cat2->cd();
    h2_2OS->SetName(name.c_str()+postfix);
    h2_2OS->Write();
    TDirectory *SS2jet_cat2 =fout->mkdir("SS2jet_cat2");
    SS2jet_cat2->cd();
    h2_2SS->SetName(name.c_str()+postfix);
    h2_2SS->Write();
    fout->Close();
} 


