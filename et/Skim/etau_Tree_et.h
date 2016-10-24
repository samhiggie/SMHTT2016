#ifndef THTH_TREE_H
#define	THTH_TREE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include "TTree.h"
#include "TFile.h"
#include "TSystem.h"
#include "HTauTauTree_et.h"
//#include "myHelper.h"

using namespace std;

unsigned int run, lumi, evt, NUP = -10;
bool secondMuon=false;
int gen_match_1, gen_match_2=0;
float npu, rho, npv=-1, puweight, weight;
bool isZtt, isZmt, isZet, isZee, isZmm, isZem, isZEE, isZMM, isZLL, isFake;
float e_1, px_1, py_1, pz_1, pt_1, phi_1, eta_1, m_1, q_1, d0_1, dZ_1, mt_1, iso_1, l1_decayMode;
float id_m_highpt_1, id_m_loose_1, id_m_medium_1, id_m_tight_1, id_m_tightnovtx_1, id_m_hihghpt_1, id_e_mva_nt_loose_1, id_e_mva_nt_tight_1, id_e_cut_veto_1, id_e_cut_loose_1, id_e_cut_medium_1, id_e_cut_tight_1, againstElectronLooseMVA6_1, againstElectronMediumMVA6_1, againstElectronTightMVA6_1, againstElectronVLooseMVA6_1, againstElectronVTightMVA6_1, againstMuonLoose3_1, againstMuonTight3_1, decayModeFinding_1, decayModeFindingNewDMs_1;
float trigweight_1, byCombinedIsolationDeltaBetaCorrRaw3Hits_1, byIsolationMVA3oldDMwoLTraw_1, byIsolationMVA3oldDMwLTraw_1, byIsolationMVA3newDMwoLTraw_1, byIsolationMVA3newDMwLTraw_1, chargedIsoPtSum_1, neutralIsoPtSum_1, puCorrPtSum_1;
float e_2, px_2, py_2, pz_2, pt_2, phi_2, eta_2, m_2, q_2, d0_2, dZ_2, mt_2, iso_2, l2_decayMode;
float id_m_highpt_2, id_m_loose_2, id_m_medium_2, id_m_tight_2, id_m_tightnovtx_2, id_m_hihghpt_2, id_e_mva_nt_loose_2, id_e_mva_nt_tight_2, id_e_cut_veto_2, id_e_cut_loose_2, id_e_cut_medium_2, id_e_cut_tight_2, againstElectronLooseMVA6_2, againstElectronMediumMVA6_2, againstElectronTightMVA6_2, againstElectronVLooseMVA6_2, againstElectronVTightMVA6_2, againstMuonLoose3_2, againstMuonTight3_2, decayModeFinding_2, decayModeFindingNewDMs_2;
float trigweight_2, byCombinedIsolationDeltaBetaCorrRaw3Hits_2, byIsolationMVA3oldDMwoLTraw_2, byIsolationMVA3oldDMwLTraw_2, byIsolationMVA3newDMwoLTraw_2, byIsolationMVA3newDMwLTraw_2, chargedIsoPtSum_2, neutralIsoPtSum_2, puCorrPtSum_2;
float sigmaIetaIeta_1, deltaPhiSuperCluster_1, deltaEtaSuperCluster_1, depositR03tracker_1, depositR03ecal_1, depositR03hcal_1, trackIso_1, ecalIso_1, hcalIso_1; 
float sigmaIetaIeta_2, deltaPhiSuperCluster_2, deltaEtaSuperCluster_2, depositR03tracker_2, depositR03ecal_2, depositR03hcal_2, trackIso_2, ecalIso_2, hcalIso_2;
float pt_tt, m_vis, m_sv, pt_sv, eta_sv, phi_sv, met_sv, mjj, jdeta, jdphi, dijetpt, dijetphi, hdijetphi, visjeteta, ptvis;
int njetingap, njetingap20, nbtag, njets, njetspt20;
float je_1, jmass_1, jpt_1, jpx_1, jpy_1, jpz_1, jeta_1, jphi_1, jrawf_1, jmva_1, jpfid_1, jpuid_1, jcsv_1;
float je_2, jmass_2, jpx_2, jpy_2, jpz_2, jpt_2, jeta_2, jphi_2, jrawf_2, jmva_2, jpfid_2, jpuid_2, jcsv_2;
float bpt_1, beta_1, bphi_1, brawf_1, bmva_1, bpfid_1, bpuid_1, bcsv_1;
float bpt_2, beta_2, bphi_2, brawf_2, bmva_2, bpfid_2, bpuid_2, bcsv_2;
float met, metphi, metcov00,metcov01,metcov10,metcov11,mvaMet, mvaMetphi, pzetavis, pzetamiss, mvaMetcov00, mvaMetcov01, mvaMetcov11, mvaMetcov10;
int nb_extra_electrons, nb_extra_muons=0;
float top_reweighting, gen_Higgs_pt, gen_Higgs_mass=1.0;
float extraelec_veto, extramuon_veto, dilepton_veto=false;
float byLooseCombinedIsolationDeltaBetaCorr3Hits_2, byMediumCombinedIsolationDeltaBetaCorr3Hits_2, byTightCombinedIsolationDeltaBetaCorr3Hits_2;
float byVLooseIsolationMVArun2v1DBoldDMwLT_2, byVTightIsolationMVArun2v1DBoldDMwLT_2, byLooseIsolationMVArun2v1DBoldDMwLT_2, byMediumIsolationMVArun2v1DBoldDMwLT_2, byTightIsolationMVArun2v1DBoldDMwLT_2, byVVTightIsolationMVArun2v1DBoldDMwLT_2;
float filterEle25, filterEle27, passEle25, passEle27, pt_top1, pt_top2, dphi_12, dphi_emet, dphi_taumet, genweight;
float m_coll, m_coll_uesU, m_coll_uesD, m_coll_jesU, m_coll_jesD, m_coll_tesU, m_coll_tesD, extratau_veto, met_px, met_py,genpX,genpY,vispX,vispY,metSig,genpT,genM;
float mjj_JESDown, jdeta_JESDown,mjj_JESUp,jdeta_JESUp;
float met_JERDown,met_JESDown,met_UESDown,met_MESDown,met_EESDown,met_TESDown,met_PESDown;
float met_JERUp,met_JESUp,met_UESUp,met_MESUp,met_EESUp,met_TESUp,met_PESUp;
float metphi_JERDown,metphi_JESDown,metphi_UESDown,metphi_MESDown,metphi_EESDown,metphi_TESDown,metphi_PESDown;
float metphi_JERUp,metphi_JESUp,metphi_UESUp,metphi_MESUp,metphi_EESUp,metphi_TESUp,metphi_PESUp;
int njetingap_JESDown, njetingap20_JESDown, njets_JESDown, njetspt20_JESDown;
int njetingap_JESUp, njetingap20_JESUp, njets_JESUp, njetspt20_JESUp;

void fillTree(TTree *Run_Tree, HTauTauTree_et *tree, int entry_tree){
    tree->GetEntry(entry_tree);
    run = tree->run;
    lumi = tree->lumi;
    evt =tree->evt;
    genweight = tree->GenWeight;

    genpX=tree->genpX;
    genpY=tree->genpY;
    vispX=tree->vispX;
    vispY=tree->vispY;
    genpT=tree->genpT;
    genM=tree->genM;

    met=tree->type1_pfMetEt;
    metphi=tree->type1_pfMetPhi;
    met_px=met*cos(metphi);
    met_py=met*sin(metphi);

    metSig=tree->metSig;
    metcov00=tree->metcov00;
    metcov01=tree->metcov01;
    metcov10=tree->metcov10;
    metcov11=tree->metcov11;

    met_EESDown=tree->type1_pfMet_shiftedPt_ElectronEnDown;
    met_EESUp=tree->type1_pfMet_shiftedPt_ElectronEnUp;
    met_JESUp=tree->type1_pfMet_shiftedPt_JetEnUp;
    met_JESDown=tree->type1_pfMet_shiftedPt_JetEnDown;
    met_MESDown=tree->type1_pfMet_shiftedPt_MuonEnDown;
    met_MESUp=tree->type1_pfMet_shiftedPt_MuonEnUp;
    met_PESUp=tree->type1_pfMet_shiftedPt_PhotonEnUp;
    met_PESDown=tree->type1_pfMet_shiftedPt_PhotonEnDown;
    met_TESUp=tree->type1_pfMet_shiftedPt_TauEnUp;
    met_TESDown=tree->type1_pfMet_shiftedPt_TauEnDown;
    met_UESUp=tree->type1_pfMet_shiftedPt_UnclusteredEnUp;
    met_UESDown=tree->type1_pfMet_shiftedPt_UnclusteredEnDown;
    met_JERDown=tree->type1_pfMet_shiftedPt_JetResDown;
    met_JERUp=tree->type1_pfMet_shiftedPt_JetResUp;

    metphi_EESDown=tree->type1_pfMet_shiftedPhi_ElectronEnDown;
    metphi_EESUp=tree->type1_pfMet_shiftedPhi_ElectronEnUp;
    metphi_JESUp=tree->type1_pfMet_shiftedPhi_JetEnUp;
    metphi_JESDown=tree->type1_pfMet_shiftedPhi_JetEnDown;
    metphi_MESDown=tree->type1_pfMet_shiftedPhi_MuonEnDown;
    metphi_MESUp=tree->type1_pfMet_shiftedPhi_MuonEnUp;
    metphi_PESUp=tree->type1_pfMet_shiftedPhi_PhotonEnUp;
    metphi_PESDown=tree->type1_pfMet_shiftedPhi_PhotonEnDown;
    metphi_TESUp=tree->type1_pfMet_shiftedPhi_TauEnUp;
    metphi_TESDown=tree->type1_pfMet_shiftedPhi_TauEnDown;
    metphi_UESUp=tree->type1_pfMet_shiftedPhi_UnclusteredEnUp;
    metphi_UESDown=tree->type1_pfMet_shiftedPhi_UnclusteredEnDown;
    metphi_JERDown=tree->type1_pfMet_shiftedPhi_JetResDown;
    metphi_JERUp=tree->type1_pfMet_shiftedPhi_JetResUp;

    mvaMet=tree->e_t_MvaMet;
    mvaMetcov00=tree->e_t_MvaMetCovMatrix00;
    mvaMetcov11=tree->e_t_MvaMetCovMatrix11;
    mvaMetcov10=tree->e_t_MvaMetCovMatrix10;
    mvaMetcov01=tree->e_t_MvaMetCovMatrix01;
    mvaMetphi=tree->e_t_MvaMetPhi;

    gen_Higgs_pt=tree->genpT;
    gen_Higgs_mass=tree->genM;

    dphi_12=tree->e_t_DPhi;
    dphi_emet=tree->eDPhiToPfMet_type1;
    dphi_taumet=tree->tDPhiToPfMet_type1;

    passEle25=tree->singleE25eta2p1TightPass;
    passEle27=tree->singleEPass;
    filterEle25=tree->eMatchesEle25TightFilter;
    pt_top1=tree->topQuarkPt1;
    pt_top2=tree->topQuarkPt2;

    weight=tree->GenWeight;

    njets = tree->jetVeto30;
    nbtag = tree->bjetCISVVeto20Medium;
    njetspt20=tree->jetVeto20;

    njets_JESDown = tree->jetVeto30_JetEnDown;
    njetspt20_JESDown=tree->jetVeto20_JetEnDown;
    njets_JESUp = tree->jetVeto30_JetEnUp;
    njetspt20_JESUp=tree->jetVeto20_JetEnUp;

    gen_match_1=tree->eZTTGenMatching;
    gen_match_2=tree->tZTTGenMatching;
    pt_tt=tree->e_t_pt_tt;
    pzetavis=tree->e_t_PZetaVis;
    pzetamiss=tree->e_t_PZeta;

    //emb_Weight = tree->EmbPtWeight;
    TLorentzVector tau1;
    TLorentzVector tau2;
    tau1.SetPtEtaPhiM(tree->ePt,tree->eEta,tree->ePhi,tree->eMass);
    tau2.SetPtEtaPhiM(tree->tPt,tree->tEta,tree->tPhi,tree->tMass);

    extraelec_veto=(tree->eVetoZTTp001dxyzR0>1);
    extramuon_veto=(tree->muVetoZTTp001dxyzR0>0);
    dilepton_veto=(tree->dielectronVeto>0);
 
    m_vis=tree->e_t_Mass;

    l2_decayMode=tree->tDecayMode;

    m_1 = tau1.M();
    px_1 = tau1.Px();
    py_1 = tau1.Py();
    pz_1 = tau1.Pz();
    e_1 = tau1.E();
    pt_1 = tau1.Pt();
    phi_1 = tau1.Phi();
    eta_1 = tau1.Eta();
    mt_1 = tree->eMtToPfMet_type1;
    dZ_1 = tree->ePVDZ;
    d0_1 = tree->ePVDXY;
    iso_1 = tree->eIsoDB03;
    q_1 = tree->eCharge;

    m_2 = tau2.M();
    px_2 = tau2.Px();
    py_2 = tau2.Py();
    pz_2 = tau2.Pz();
    e_2 = tau2.E();
    pt_2 = tau2.Pt();
    phi_2 = tau2.Phi();
    eta_2 = tau2.Eta();
    mt_2 = tree->tMtToPfMet_type1;
    dZ_2 = tree->tPVDZ;
    d0_2=tree->tPVDXY;
    iso_2=tree->tByIsolationMVArun2v1DBoldDMwLTraw;
    q_2 = tree->tCharge;

    m_coll=tree->e_t_collinearmass;
    m_coll_uesU=tree->e_t_collinearmass_UnclusteredEnUp;
    m_coll_uesD=tree->e_t_collinearmass_UnclusteredEnDown;
    m_coll_jesU=tree->e_t_collinearmass_JetEnUp;
    m_coll_jesD=tree->e_t_collinearmass_JetEnDown;
    m_coll_tesU=tree->e_t_collinearmass_TauEnUp;
    m_coll_tesD=tree->e_t_collinearmass_TauEnDown;

    againstMuonTight3_2 = tree->tAgainstMuonTight3;
    againstMuonLoose3_2 = tree->tAgainstMuonLoose3;
    againstElectronVLooseMVA6_2 = tree->tAgainstElectronVLooseMVA6;
    againstElectronLooseMVA6_2 = tree->tAgainstElectronLooseMVA6;
    againstElectronMediumMVA6_2 = tree->tAgainstElectronMediumMVA6;
    againstElectronTightMVA6_2 = tree->tAgainstElectronTightMVA6;
    againstElectronVTightMVA6_2 = tree->tAgainstElectronVTightMVA6;
    byLooseCombinedIsolationDeltaBetaCorr3Hits_2 = tree->tByLooseCombinedIsolationDeltaBetaCorr3Hits;
    byMediumCombinedIsolationDeltaBetaCorr3Hits_2 = tree->tByMediumCombinedIsolationDeltaBetaCorr3Hits;
    byTightCombinedIsolationDeltaBetaCorr3Hits_2 = tree->tByTightCombinedIsolationDeltaBetaCorr3Hits;
    byCombinedIsolationDeltaBetaCorrRaw3Hits_2=tree->tByCombinedIsolationDeltaBetaCorrRaw3Hits;
    byIsolationMVA3oldDMwLTraw_2=tree->tByIsolationMVArun2v1DBoldDMwLTraw;
    byIsolationMVA3newDMwLTraw_2=tree->tByIsolationMVArun2v1DBnewDMwLTraw;
    byVLooseIsolationMVArun2v1DBoldDMwLT_2 = tree->tByVLooseIsolationMVArun2v1DBoldDMwLT;
    byLooseIsolationMVArun2v1DBoldDMwLT_2 = tree->tByLooseIsolationMVArun2v1DBoldDMwLT;
    byMediumIsolationMVArun2v1DBoldDMwLT_2 = tree->tByMediumIsolationMVArun2v1DBoldDMwLT;
    byTightIsolationMVArun2v1DBoldDMwLT_2 = tree->tByTightIsolationMVArun2v1DBoldDMwLT;
    byVTightIsolationMVArun2v1DBoldDMwLT_2 = tree->tByVTightIsolationMVArun2v1DBoldDMwLT;
    byVVTightIsolationMVArun2v1DBoldDMwLT_2 = tree->tByVVTightIsolationMVArun2v1DBoldDMwLT;
    neutralIsoPtSum_2=tree->tNeutralIsoPtSum;
    chargedIsoPtSum_2=tree->tChargedIsoPtSum;
    puCorrPtSum_2=tree->tPuCorrPtSum;
    decayModeFinding_2=tree->tDecayModeFinding;
    decayModeFindingNewDMs_2=tree->tDecayModeFindingNewDMs;
    jpt_1=tree->j1pt;
    jpt_2=tree->j2pt;
    jeta_1=tree->j1eta;
    jeta_2=tree->j2eta;
    jphi_1=tree->j1phi;
    jphi_2=tree->j2phi;
    jcsv_1=tree->j1csv;
    jcsv_2=tree->j2csv;
    bpt_1=tree->jb1pt;
    bpt_2=tree->jb2pt;
    beta_1=tree->jb1eta;
    beta_2=tree->jb2eta;
    bphi_1=tree->jb1phi;
    bphi_2=tree->jb2phi;
    bcsv_1=tree->jb1csv;
    bcsv_2=tree->jb2csv;
        
   TLorentzVector h=tau1+tau2;
   TLorentzVector jet1;
   if (njetspt20 > 0 && jpt_1>0)
      jet1.SetPtEtaPhiM(jpt_1,jeta_1,jphi_1,0);
   TLorentzVector jet2;
   if (njetspt20 > 1 && jpt_2>0)
      jet2.SetPtEtaPhiM(jpt_2,jeta_2,jphi_2,0);
   TLorentzVector dijet=jet1+jet2;

   if (njetspt20 > 1){
      jdeta=tree->vbfDeta;
      jdphi=tree->vbfDphi;
      dijetphi=dijet.Phi();
      hdijetphi=h.DeltaPhi(dijet);
      visjeteta=h.Eta()-dijet.Eta();
      mjj=tree->vbfMass;
      njetingap20=tree->vbfJetVeto20;
      njetingap=tree->vbfJetVeto30;
   }
   else{
      jdphi=-10000;
      jdeta=-10000;
      dijetpt=-10000;
      dijetphi=-10000;
      hdijetphi=-10000;
      visjeteta=-10000;
      mjj=-10000;
      njetingap20=-10000;
      njetingap=-100000;
   }
   if (njetspt20_JESUp > 1){
      njetingap20_JESUp=tree->vbfJetVeto20_JetEnUp;
      njetingap_JESUp=tree->vbfJetVeto30_JetEnUp;
      mjj_JESUp=tree->vbfMass_JetEnUp;
      jdeta_JESUp=tree->vbfDeta_JetEnUp;
   }
   else{
      jdeta_JESUp=-10000;
      mjj_JESUp=-10000;
      njetingap20_JESUp=-10000;
      njetingap_JESUp=-100000;
   }
   if (njetspt20_JESDown > 1){
      njetingap20_JESDown=tree->vbfJetVeto20_JetEnDown;
      njetingap_JESDown=tree->vbfJetVeto30_JetEnDown;
      mjj_JESDown=tree->vbfMass_JetEnDown;
      jdeta_JESDown=tree->vbfDeta_JetEnDown;
   }
   else{
      jdeta_JESDown=-10000;
      mjj_JESDown=-10000;
      njetingap20_JESDown=-10000;
      njetingap_JESDown=-100000;
   }

  ptvis=h.Pt();

  NUP=tree->NUP;
  npu=tree->nTruePU;
  npv=tree->nvtx;
  rho=tree->rho;

  extratau_veto=tree->tauVetoPt20Loose3HitsVtx;
  isZet=tree->isZtautau && fabs(tree->eGenPdgId)==11;
  isZtt=tree->isZtautau;

  Run_Tree->Fill();
}

#endif


