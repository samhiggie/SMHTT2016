#ifndef HTAUTAUTREE_MT_H
#define HTAUTAUTREE_MT_H

#include <TROOT.h>
#include <TChain.h>
#include <TTree.h>
#include <vector>

using namespace std;

class HTauTauTree_et {
public :
   TTree          *_tree;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types

   Float_t         EmbPtWeight;
   Float_t         Eta;
   Float_t         GenWeight;
   Float_t         Ht;
   Float_t         LT;
   Float_t         Mass;
   Float_t         MassError;
   Float_t         MassErrord1;
   Float_t         MassErrord2;
   Float_t         MassErrord3;
   Float_t         MassErrord4;
   Float_t         Mt;
   Float_t         NUP;
   Float_t         Phi;
   Float_t         Pt;
   Float_t         bjetCISVVeto20Loose;
   Float_t         bjetCISVVeto20Medium;
   Float_t         bjetCISVVeto20Tight;
   Float_t         bjetCISVVeto30Loose;
   Float_t         bjetCISVVeto30Medium;
   Float_t         bjetCISVVeto30Tight;
   Float_t         charge;
   Float_t         dielectronVeto;
   Float_t         dimuonVeto;
   Float_t         doubleEGroup;
   Float_t         doubleEPass;
   Float_t         doubleEPrescale;
   Float_t         doubleESingleMuGroup;
   Float_t         doubleESingleMuPass;
   Float_t         doubleESingleMuPrescale;
   Float_t         doubleE_23_12Group;
   Float_t         doubleE_23_12Pass;
   Float_t         doubleE_23_12Prescale;
   Float_t         doubleMuGroup;
   Float_t         doubleMuPass;
   Float_t         doubleMuPrescale;
   Float_t         doubleMuSingleEGroup;
   Float_t         doubleMuSingleEPass;
   Float_t         doubleMuSingleEPrescale;
   Float_t         doubleTau32Group;
   Float_t         doubleTau32Pass;
   Float_t         doubleTau32Prescale;
   Float_t         doubleTau35Group;
   Float_t         doubleTau35Pass;
   Float_t         doubleTau35Prescale;
   Float_t         doubleTau40Group;
   Float_t         doubleTau40Pass;
   Float_t         doubleTau40Prescale;
   Float_t         eAbsEta;
   Float_t         eCBIDLoose;
   Float_t         eCBIDLooseNoIso;
   Float_t         eCBIDMedium;
   Float_t         eCBIDMediumNoIso;
   Float_t         eCBIDTight;
   Float_t         eCBIDTightNoIso;
   Float_t         eCBIDVeto;
   Float_t         eCBIDVetoNoIso;
   Float_t         eCharge;
   Float_t         eChargeIdLoose;
   Float_t         eChargeIdMed;
   Float_t         eChargeIdTight;
   Float_t         eComesFromHiggs;
   Float_t         eDPhiToPfMet_ElectronEnDown;
   Float_t         eDPhiToPfMet_ElectronEnUp;
   Float_t         eDPhiToPfMet_JetEnDown;
   Float_t         eDPhiToPfMet_JetEnUp;
   Float_t         eDPhiToPfMet_JetResDown;
   Float_t         eDPhiToPfMet_JetResUp;
   Float_t         eDPhiToPfMet_MuonEnDown;
   Float_t         eDPhiToPfMet_MuonEnUp;
   Float_t         eDPhiToPfMet_PhotonEnDown;
   Float_t         eDPhiToPfMet_PhotonEnUp;
   Float_t         eDPhiToPfMet_TauEnDown;
   Float_t         eDPhiToPfMet_TauEnUp;
   Float_t         eDPhiToPfMet_UnclusteredEnDown;
   Float_t         eDPhiToPfMet_UnclusteredEnUp;
   Float_t         eDPhiToPfMet_type1;
   Float_t         eE1x5;
   Float_t         eE2x5Max;
   Float_t         eE5x5;
   Float_t         eEcalIsoDR03;
   Float_t         eEffectiveArea2012Data;
   Float_t         eEffectiveAreaSpring15;
   Float_t         eEnergyError;
   Float_t         eEta;
   Float_t         eEta_ElectronEnDown;
   Float_t         eEta_ElectronEnUp;
   Float_t         eGenCharge;
   Float_t         eGenDirectPromptTauDecay;
   Float_t         eGenEnergy;
   Float_t         eGenEta;
   Float_t         eGenIsPrompt;
   Float_t         eGenMotherPdgId;
   Float_t         eGenParticle;
   Float_t         eGenPdgId;
   Float_t         eGenPhi;
   Float_t         eGenPrompt;
   Float_t         eGenPromptTauDecay;
   Float_t         eGenPt;
   Float_t         eGenTauDecay;
   Float_t         eGenVZ;
   Float_t         eGenVtxPVMatch;
   Float_t         eHadronicDepth1OverEm;
   Float_t         eHadronicDepth2OverEm;
   Float_t         eHadronicOverEM;
   Float_t         eHcalIsoDR03;
   Float_t         eIP3D;
   Float_t         eIP3DErr;
   Float_t         eIsoDB03;
   Float_t         eJetArea;
   Float_t         eJetBtag;
   Float_t         eJetEtaEtaMoment;
   Float_t         eJetEtaPhiMoment;
   Float_t         eJetEtaPhiSpread;
   Float_t         eJetHadronFlavour;
   Float_t         eJetPFCISVBtag;
   Float_t         eJetPartonFlavour;
   Float_t         eJetPhiPhiMoment;
   Float_t         eJetPt;
   Float_t         eLowestMll;
   Float_t         eMVANonTrigCategory;
   Float_t         eMVANonTrigID;
   Float_t         eMVANonTrigWP80;
   Float_t         eMVANonTrigWP90;
   Float_t         eMVATrigCategory;
   Float_t         eMVATrigID;
   Float_t         eMVATrigWP80;
   Float_t         eMVATrigWP90;
   Float_t         eMass;
   Float_t         eMatchesDoubleE;
   Float_t         eMatchesDoubleESingleMu;
   Float_t         eMatchesDoubleMuSingleE;
   Float_t         eMatchesEle22Filter;
   Float_t         eMatchesEle22Path;
   Float_t         eMatchesEle23Filter;
   Float_t         eMatchesEle23Path;
   Float_t         eMatchesEle25LooseFilter;
   Float_t         eMatchesEle25TightFilter;
   Float_t         eMatchesMu17Ele12Filter;
   Float_t         eMatchesMu17Ele12Path;
   Float_t         eMatchesMu23Ele12Filter;
   Float_t         eMatchesMu23Ele12Path;
   Float_t         eMatchesMu8Ele17Filter;
   Float_t         eMatchesMu8Ele17Path;
   Float_t         eMatchesMu8Ele23Filter;
   Float_t         eMatchesMu8Ele23Path;
   Float_t         eMatchesSingleE;
   Float_t         eMatchesSingleESingleMu;
   Float_t         eMatchesSingleE_leg1;
   Float_t         eMatchesSingleE_leg2;
   Float_t         eMatchesSingleMuSingleE;
   Float_t         eMatchesTripleE;
   Float_t         eMissingHits;
   Float_t         eMtToPfMet_ElectronEnDown;
   Float_t         eMtToPfMet_ElectronEnUp;
   Float_t         eMtToPfMet_JetEnDown;
   Float_t         eMtToPfMet_JetEnUp;
   Float_t         eMtToPfMet_JetResDown;
   Float_t         eMtToPfMet_JetResUp;
   Float_t         eMtToPfMet_MuonEnDown;
   Float_t         eMtToPfMet_MuonEnUp;
   Float_t         eMtToPfMet_PhotonEnDown;
   Float_t         eMtToPfMet_PhotonEnUp;
   Float_t         eMtToPfMet_Raw;
   Float_t         eMtToPfMet_TauEnDown;
   Float_t         eMtToPfMet_TauEnUp;
   Float_t         eMtToPfMet_UnclusteredEnDown;
   Float_t         eMtToPfMet_UnclusteredEnUp;
   Float_t         eMtToPfMet_type1;
   Float_t         eNearMuonVeto;
   Float_t         eNearestMuonDR;
   Float_t         eNearestZMass;
   Float_t         ePFChargedIso;
   Float_t         ePFNeutralIso;
   Float_t         ePFPUChargedIso;
   Float_t         ePFPhotonIso;
   Float_t         ePVDXY;
   Float_t         ePVDZ;
   Float_t         ePassesConversionVeto;
   Float_t         ePhi;
   Float_t         ePhi_ElectronEnDown;
   Float_t         ePhi_ElectronEnUp;
   Float_t         ePt;
   Float_t         ePt_ElectronEnDown;
   Float_t         ePt_ElectronEnUp;
   Float_t         eRank;
   Float_t         eRelIso;
   Float_t         eRelPFIsoDB;
   Float_t         eRelPFIsoRho;
   Float_t         eRho;
   Float_t         eSCEnergy;
   Float_t         eSCEta;
   Float_t         eSCEtaWidth;
   Float_t         eSCPhi;
   Float_t         eSCPhiWidth;
   Float_t         eSCPreshowerEnergy;
   Float_t         eSCRawEnergy;
   Float_t         eSIP2D;
   Float_t         eSIP3D;
   Float_t         eSigmaIEtaIEta;
   Float_t         eTrkIsoDR03;
   Float_t         eVZ;
   Float_t         eVetoMVAIso;
   Float_t         eVetoMVAIsoVtx;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
   Float_t         eWWLoose;
   Float_t         eZTTGenMatching;
   Float_t         e_t_CosThetaStar;
   Float_t         e_t_DPhi;
   Float_t         e_t_DR;
   Float_t         e_t_Eta;
   Float_t         e_t_Mass;
   Float_t         e_t_Mass_TauEnDown;
   Float_t         e_t_Mass_TauEnUp;
   Float_t         e_t_Mt;
   Float_t         e_t_MtTotal;
   Float_t         e_t_Mt_TauEnDown;
   Float_t         e_t_Mt_TauEnUp;
   Float_t         e_t_MvaMet;
   Float_t         e_t_MvaMetCovMatrix00;
   Float_t         e_t_MvaMetCovMatrix01;
   Float_t         e_t_MvaMetCovMatrix10;
   Float_t         e_t_MvaMetCovMatrix11;
   Float_t         e_t_MvaMetPhi;
   Float_t         e_t_PZeta;
   Float_t         e_t_PZetaLess0p85PZetaVis;
   Float_t         e_t_PZetaVis;
   Float_t         e_t_Phi;
   Float_t         e_t_Pt;
   Float_t         e_t_SS;
   Float_t         e_t_ToMETDPhi_Ty1;
   Float_t         e_t_collinearmass;
   Float_t         e_t_collinearmass_JetEnDown;
   Float_t         e_t_collinearmass_JetEnUp;
   Float_t         e_t_collinearmass_TauEnDown;
   Float_t         e_t_collinearmass_TauEnUp;
   Float_t         e_t_collinearmass_UnclusteredEnDown;
   Float_t         e_t_collinearmass_UnclusteredEnUp;
   Float_t         e_t_pt_tt;
   Float_t         edeltaEtaSuperClusterTrackAtVtx;
   Float_t         edeltaPhiSuperClusterTrackAtVtx;
   Float_t         eeSuperClusterOverP;
   Float_t         eecalEnergy;
   Float_t         efBrem;
   Float_t         etrackMomentumAtVtxP;
   ULong64_t       evt;
   Float_t         genHTT;
   Float_t         genM;
   Float_t         genMass;
   Float_t         genpT;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         isGtautau;
   Float_t         isWenu;
   Float_t         isWmunu;
   Float_t         isWtaunu;
   Float_t         isZee;
   Float_t         isZmumu;
   Float_t         isZtautau;
   Int_t           isdata;
   Float_t         j1csv;
   Float_t         j1eta;
   Float_t         j1hadronflavor;
   Float_t         j1partonflavor;
   Float_t         j1phi;
   Float_t         j1pt;
   Float_t         j1ptDown;
   Float_t         j1ptUp;
   Float_t         j1pu;
   Float_t         j1rawf;
   Float_t         j2csv;
   Float_t         j2eta;
   Float_t         j2hadronflavor;
   Float_t         j2partonflavor;
   Float_t         j2phi;
   Float_t         j2pt;
   Float_t         j2ptDown;
   Float_t         j2ptUp;
   Float_t         j2pu;
   Float_t         j2rawf;
   Float_t         jb1csv;
   Float_t         jb1eta;
   Float_t         jb1hadronflavor;
   Float_t         jb1partonflavor;
   Float_t         jb1phi;
   Float_t         jb1pt;
   Float_t         jb1ptDown;
   Float_t         jb1ptUp;
   Float_t         jb1pu;
   Float_t         jb1rawf;
   Float_t         jb2csv;
   Float_t         jb2eta;
   Float_t         jb2hadronflavor;
   Float_t         jb2partonflavor;
   Float_t         jb2phi;
   Float_t         jb2pt;
   Float_t         jb2ptDown;
   Float_t         jb2ptUp;
   Float_t         jb2pu;
   Float_t         jb2rawf;
   Float_t         jetVeto20;
   Float_t         jetVeto20_JetEnDown;
   Float_t         jetVeto20_JetEnUp;
   Float_t         jetVeto30;
   Float_t         jetVeto30_JetEnDown;
   Float_t         jetVeto30_JetEnUp;
   Float_t         lheweight0;
/*   Float_t         lheweight1;
   Float_t         lheweight10;
   Float_t         lheweight100;
   Float_t         lheweight101;
   Float_t         lheweight102;
   Float_t         lheweight103;
   Float_t         lheweight104;
   Float_t         lheweight105;
   Float_t         lheweight106;
   Float_t         lheweight107;
   Float_t         lheweight108;
   Float_t         lheweight109;
   Float_t         lheweight11;
   Float_t         lheweight110;
   Float_t         lheweight12;
   Float_t         lheweight13;
   Float_t         lheweight14;
   Float_t         lheweight15;
   Float_t         lheweight16;
   Float_t         lheweight17;
   Float_t         lheweight18;
   Float_t         lheweight19;
   Float_t         lheweight2;
   Float_t         lheweight20;
   Float_t         lheweight21;
   Float_t         lheweight22;
   Float_t         lheweight23;
   Float_t         lheweight24;
   Float_t         lheweight25;
   Float_t         lheweight26;
   Float_t         lheweight27;
   Float_t         lheweight28;
   Float_t         lheweight29;
   Float_t         lheweight3;
   Float_t         lheweight30;
   Float_t         lheweight31;
   Float_t         lheweight32;
   Float_t         lheweight33;
   Float_t         lheweight34;
   Float_t         lheweight35;
   Float_t         lheweight36;
   Float_t         lheweight37;
   Float_t         lheweight38;
   Float_t         lheweight39;
   Float_t         lheweight4;
   Float_t         lheweight40;
   Float_t         lheweight41;
   Float_t         lheweight42;
   Float_t         lheweight43;
   Float_t         lheweight44;
   Float_t         lheweight45;
   Float_t         lheweight46;
   Float_t         lheweight47;
   Float_t         lheweight48;
   Float_t         lheweight49;
   Float_t         lheweight5;
   Float_t         lheweight50;
   Float_t         lheweight51;
   Float_t         lheweight52;
   Float_t         lheweight53;
   Float_t         lheweight54;
   Float_t         lheweight55;
   Float_t         lheweight56;
   Float_t         lheweight57;
   Float_t         lheweight58;
   Float_t         lheweight59;
   Float_t         lheweight6;
   Float_t         lheweight60;
   Float_t         lheweight61;
   Float_t         lheweight62;
   Float_t         lheweight63;
   Float_t         lheweight64;
   Float_t         lheweight65;
   Float_t         lheweight66;
   Float_t         lheweight67;
   Float_t         lheweight68;
   Float_t         lheweight69;
   Float_t         lheweight7;
   Float_t         lheweight70;
   Float_t         lheweight71;
   Float_t         lheweight72;
   Float_t         lheweight73;
   Float_t         lheweight74;
   Float_t         lheweight75;
   Float_t         lheweight76;
   Float_t         lheweight77;
   Float_t         lheweight78;
   Float_t         lheweight79;
   Float_t         lheweight8;
   Float_t         lheweight80;
   Float_t         lheweight81;
   Float_t         lheweight82;
   Float_t         lheweight83;
   Float_t         lheweight84;
   Float_t         lheweight85;
   Float_t         lheweight86;
   Float_t         lheweight87;
   Float_t         lheweight88;
   Float_t         lheweight89;
   Float_t         lheweight9;
   Float_t         lheweight90;
   Float_t         lheweight91;
   Float_t         lheweight92;
   Float_t         lheweight93;
   Float_t         lheweight94;
   Float_t         lheweight95;
   Float_t         lheweight96;
   Float_t         lheweight97;
   Float_t         lheweight98;
   Float_t         lheweight99;*/
   Int_t           lumi;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov01;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         muGlbIsoVetoPt10;
   Float_t         muVetoPt15IsoIdVtx;
   Float_t         muVetoPt5;
   Float_t         muVetoPt5IsoIdVtx;
   Float_t         muVetoZTTp001dxyz;
   Float_t         muVetoZTTp001dxyzR0;
   Float_t         nTruePU;
   Float_t         numGenJets;
   Float_t         nvtx;
   Float_t         processID;
   Float_t         puppiMetEt;
   Float_t         puppiMetPhi;
   Float_t         pvChi2;
   Float_t         pvDX;
   Float_t         pvDY;
   Float_t         pvDZ;
   Int_t           pvIsFake;
   Int_t           pvIsValid;
   Float_t         pvNormChi2;
   Float_t         pvRho;
   Float_t         pvX;
   Float_t         pvY;
   Float_t         pvZ;
   Float_t         pvndof;
   Float_t         raw_pfMetEt;
   Float_t         raw_pfMetPhi;
   Float_t         recoilDaught;
   Float_t         recoilWithMet;
   Float_t         rho;
   Int_t           run;
   Float_t         singleE17SingleMu8Group;
   Float_t         singleE17SingleMu8Pass;
   Float_t         singleE17SingleMu8Prescale;
   Float_t         singleE20SingleTau28Group;
   Float_t         singleE20SingleTau28Pass;
   Float_t         singleE20SingleTau28Prescale;
   Float_t         singleE22SingleTau20SingleL1Group;
   Float_t         singleE22SingleTau20SingleL1Pass;
   Float_t         singleE22SingleTau20SingleL1Prescale;
   Float_t         singleE22SingleTau29Group;
   Float_t         singleE22SingleTau29Pass;
   Float_t         singleE22SingleTau29Prescale;
   Float_t         singleE23SingleMu8Group;
   Float_t         singleE23SingleMu8Pass;
   Float_t         singleE23SingleMu8Prescale;
   Float_t         singleE24SingleTau20Group;
   Float_t         singleE24SingleTau20Pass;
   Float_t         singleE24SingleTau20Prescale;
   Float_t         singleE24SingleTau20SingleL1Group;
   Float_t         singleE24SingleTau20SingleL1Pass;
   Float_t         singleE24SingleTau20SingleL1Prescale;
   Float_t         singleE24SingleTau30Group;
   Float_t         singleE24SingleTau30Pass;
   Float_t         singleE24SingleTau30Prescale;
   Float_t         singleE25eta2p1TightGroup;
   Float_t         singleE25eta2p1TightPass;
   Float_t         singleE25eta2p1TightPrescale;
   Float_t         singleE27SingleTau20SingleL1Group;
   Float_t         singleE27SingleTau20SingleL1Pass;
   Float_t         singleE27SingleTau20SingleL1Prescale;
   Float_t         singleE32SingleTau20SingleL1Group;
   Float_t         singleE32SingleTau20SingleL1Pass;
   Float_t         singleE32SingleTau20SingleL1Prescale;
   Float_t         singleE36SingleTau30Group;
   Float_t         singleE36SingleTau30Pass;
   Float_t         singleE36SingleTau30Prescale;
   Float_t         singleEGroup;
   Float_t         singleEPass;
   Float_t         singleEPrescale;
   Float_t         singleESingleMuGroup;
   Float_t         singleESingleMuPass;
   Float_t         singleESingleMuPrescale;
   Float_t         singleE_leg1Group;
   Float_t         singleE_leg1Pass;
   Float_t         singleE_leg1Prescale;
   Float_t         singleE_leg2Group;
   Float_t         singleE_leg2Pass;
   Float_t         singleE_leg2Prescale;
   Float_t         singleEeta2p1LooseGroup;
   Float_t         singleEeta2p1LoosePass;
   Float_t         singleEeta2p1LoosePrescale;
   Float_t         singleIsoMu20Group;
   Float_t         singleIsoMu20Pass;
   Float_t         singleIsoMu20Prescale;
   Float_t         singleIsoMu22Group;
   Float_t         singleIsoMu22Pass;
   Float_t         singleIsoMu22Prescale;
   Float_t         singleIsoMu24Group;
   Float_t         singleIsoMu24Pass;
   Float_t         singleIsoMu24Prescale;
   Float_t         singleIsoMu27Group;
   Float_t         singleIsoMu27Pass;
   Float_t         singleIsoMu27Prescale;
   Float_t         singleIsoTkMu20Group;
   Float_t         singleIsoTkMu20Pass;
   Float_t         singleIsoTkMu20Prescale;
   Float_t         singleIsoTkMu22Group;
   Float_t         singleIsoTkMu22Pass;
   Float_t         singleIsoTkMu22Prescale;
   Float_t         singleMu17SingleE12Group;
   Float_t         singleMu17SingleE12Pass;
   Float_t         singleMu17SingleE12Prescale;
   Float_t         singleMu23SingleE12Group;
   Float_t         singleMu23SingleE12Pass;
   Float_t         singleMu23SingleE12Prescale;
   Float_t         singleMuGroup;
   Float_t         singleMuPass;
   Float_t         singleMuPrescale;
   Float_t         singleMuSingleEGroup;
   Float_t         singleMuSingleEPass;
   Float_t         singleMuSingleEPrescale;
   Float_t         singleMu_leg1Group;
   Float_t         singleMu_leg1Pass;
   Float_t         singleMu_leg1Prescale;
   Float_t         singleMu_leg1_noisoGroup;
   Float_t         singleMu_leg1_noisoPass;
   Float_t         singleMu_leg1_noisoPrescale;
   Float_t         singleMu_leg2Group;
   Float_t         singleMu_leg2Pass;
   Float_t         singleMu_leg2Prescale;
   Float_t         singleMu_leg2_noisoGroup;
   Float_t         singleMu_leg2_noisoPass;
   Float_t         singleMu_leg2_noisoPrescale;
   Float_t         tAbsEta;
   Float_t         tAgainstElectronLooseMVA6;
   Float_t         tAgainstElectronMVA6Raw;
   Float_t         tAgainstElectronMVA6category;
   Float_t         tAgainstElectronMediumMVA6;
   Float_t         tAgainstElectronTightMVA6;
   Float_t         tAgainstElectronVLooseMVA6;
   Float_t         tAgainstElectronVTightMVA6;
   Float_t         tAgainstMuonLoose3;
   Float_t         tAgainstMuonTight3;
   Float_t         tByCombinedIsolationDeltaBetaCorrRaw3Hits;
   Float_t         tByIsolationMVArun2v1DBdR03oldDMwLTraw;
   Float_t         tByIsolationMVArun2v1DBnewDMwLTraw;
   Float_t         tByIsolationMVArun2v1DBoldDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWdR03oldDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWnewDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWoldDMwLTraw;
   Float_t         tByLooseCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByMediumCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByMediumIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByMediumIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByPhotonPtSumOutsideSignalCone;
   Float_t         tByTightCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tCharge;
   Float_t         tChargedIsoPtSum;
   Float_t         tChargedIsoPtSumdR03;
   Float_t         tComesFromHiggs;
   Float_t         tDPhiToPfMet_ElectronEnDown;
   Float_t         tDPhiToPfMet_ElectronEnUp;
   Float_t         tDPhiToPfMet_JetEnDown;
   Float_t         tDPhiToPfMet_JetEnUp;
   Float_t         tDPhiToPfMet_JetResDown;
   Float_t         tDPhiToPfMet_JetResUp;
   Float_t         tDPhiToPfMet_MuonEnDown;
   Float_t         tDPhiToPfMet_MuonEnUp;
   Float_t         tDPhiToPfMet_PhotonEnDown;
   Float_t         tDPhiToPfMet_PhotonEnUp;
   Float_t         tDPhiToPfMet_TauEnDown;
   Float_t         tDPhiToPfMet_TauEnUp;
   Float_t         tDPhiToPfMet_UnclusteredEnDown;
   Float_t         tDPhiToPfMet_UnclusteredEnUp;
   Float_t         tDPhiToPfMet_type1;
   Float_t         tDecayMode;
   Float_t         tDecayModeFinding;
   Float_t         tDecayModeFindingNewDMs;
   Float_t         tElecOverlap;
   Float_t         tEta;
   Float_t         tEta_TauEnDown;
   Float_t         tEta_TauEnUp;
   Float_t         tFootprintCorrection;
   Float_t         tFootprintCorrectiondR03;
   Float_t         tGenCharge;
   Float_t         tGenDecayMode;
   Float_t         tGenEnergy;
   Float_t         tGenEta;
   Float_t         tGenIsPrompt;
   Float_t         tGenJetEta;
   Float_t         tGenJetPt;
   Float_t         tGenMotherEnergy;
   Float_t         tGenMotherEta;
   Float_t         tGenMotherPdgId;
   Float_t         tGenMotherPhi;
   Float_t         tGenMotherPt;
   Float_t         tGenPdgId;
   Float_t         tGenPhi;
   Float_t         tGenPt;
   Float_t         tGenStatus;
   Float_t         tGlobalMuonVtxOverlap;
   Float_t         tJetArea;
   Float_t         tJetBtag;
   Float_t         tJetEtaEtaMoment;
   Float_t         tJetEtaPhiMoment;
   Float_t         tJetEtaPhiSpread;
   Float_t         tJetHadronFlavour;
   Float_t         tJetPFCISVBtag;
   Float_t         tJetPartonFlavour;
   Float_t         tJetPhiPhiMoment;
   Float_t         tJetPt;
   Float_t         tLeadTrackPt;
   Float_t         tLowestMll;
   Float_t         tMass;
   Float_t         tMass_TauEnDown;
   Float_t         tMass_TauEnUp;
   Float_t         tMatchesDoubleTau32Filter;
   Float_t         tMatchesDoubleTau32Path;
   Float_t         tMatchesDoubleTau35Filter;
   Float_t         tMatchesDoubleTau35Path;
   Float_t         tMatchesDoubleTau40Filter;
   Float_t         tMatchesDoubleTau40Path;
   Float_t         tMtToPfMet_ElectronEnDown;
   Float_t         tMtToPfMet_ElectronEnUp;
   Float_t         tMtToPfMet_JetEnDown;
   Float_t         tMtToPfMet_JetEnUp;
   Float_t         tMtToPfMet_JetResDown;
   Float_t         tMtToPfMet_JetResUp;
   Float_t         tMtToPfMet_MuonEnDown;
   Float_t         tMtToPfMet_MuonEnUp;
   Float_t         tMtToPfMet_PhotonEnDown;
   Float_t         tMtToPfMet_PhotonEnUp;
   Float_t         tMtToPfMet_Raw;
   Float_t         tMtToPfMet_TauEnDown;
   Float_t         tMtToPfMet_TauEnUp;
   Float_t         tMtToPfMet_UnclusteredEnDown;
   Float_t         tMtToPfMet_UnclusteredEnUp;
   Float_t         tMtToPfMet_type1;
   Float_t         tMuOverlap;
   Float_t         tMuonIdIsoStdVtxOverlap;
   Float_t         tMuonIdIsoVtxOverlap;
   Float_t         tMuonIdVtxOverlap;
   Float_t         tNChrgHadrIsolationCands;
   Float_t         tNChrgHadrSignalCands;
   Float_t         tNGammaSignalCands;
   Float_t         tNNeutralHadrSignalCands;
   Float_t         tNSignalCands;
   Float_t         tNearestZMass;
   Float_t         tNeutralIsoPtSum;
   Float_t         tNeutralIsoPtSumWeight;
   Float_t         tNeutralIsoPtSumWeightdR03;
   Float_t         tNeutralIsoPtSumdR03;
   Float_t         tPVDXY;
   Float_t         tPVDZ;
   Float_t         tPhi;
   Float_t         tPhi_TauEnDown;
   Float_t         tPhi_TauEnUp;
   Float_t         tPhotonPtSumOutsideSignalCone;
   Float_t         tPhotonPtSumOutsideSignalConedR03;
   Float_t         tPt;
   Float_t         tPt_TauEnDown;
   Float_t         tPt_TauEnUp;
   Float_t         tPuCorrPtSum;
   Float_t         tRank;
   Float_t         tVZ;
   Float_t         tZTTGenDR;
   Float_t         tZTTGenEta;
   Float_t         tZTTGenMatching;
   Float_t         tZTTGenPhi;
   Float_t         tZTTGenPt;
   Float_t         t_e_collinearmass;
   Float_t         t_e_collinearmass_JetEnDown;
   Float_t         t_e_collinearmass_JetEnUp;
   Float_t         t_e_collinearmass_UnclusteredEnDown;
   Float_t         t_e_collinearmass_UnclusteredEnUp;
   Float_t         tauVetoPt20Loose3HitsVtx;
   Float_t         tauVetoPt20TightMVALTVtx;
   Float_t         topQuarkPt1;
   Float_t         topQuarkPt2;
   Float_t         tripleEGroup;
   Float_t         tripleEPass;
   Float_t         tripleEPrescale;
   Float_t         tripleMuGroup;
   Float_t         tripleMuPass;
   Float_t         tripleMuPrescale;
   Float_t         type1_pfMetEt;
   Float_t         type1_pfMetPhi;
   Float_t         type1_pfMet_shiftedPhi_ElectronEnDown;
   Float_t         type1_pfMet_shiftedPhi_ElectronEnUp;
   Float_t         type1_pfMet_shiftedPhi_JetEnDown;
   Float_t         type1_pfMet_shiftedPhi_JetEnUp;
   Float_t         type1_pfMet_shiftedPhi_JetResDown;
   Float_t         type1_pfMet_shiftedPhi_JetResUp;
   Float_t         type1_pfMet_shiftedPhi_MuonEnDown;
   Float_t         type1_pfMet_shiftedPhi_MuonEnUp;
   Float_t         type1_pfMet_shiftedPhi_PhotonEnDown;
   Float_t         type1_pfMet_shiftedPhi_PhotonEnUp;
   Float_t         type1_pfMet_shiftedPhi_TauEnDown;
   Float_t         type1_pfMet_shiftedPhi_TauEnUp;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPhi_UnclusteredEnUp;
   Float_t         type1_pfMet_shiftedPt_ElectronEnDown;
   Float_t         type1_pfMet_shiftedPt_ElectronEnUp;
   Float_t         type1_pfMet_shiftedPt_JetEnDown;
   Float_t         type1_pfMet_shiftedPt_JetEnUp;
   Float_t         type1_pfMet_shiftedPt_JetResDown;
   Float_t         type1_pfMet_shiftedPt_JetResUp;
   Float_t         type1_pfMet_shiftedPt_MuonEnDown;
   Float_t         type1_pfMet_shiftedPt_MuonEnUp;
   Float_t         type1_pfMet_shiftedPt_PhotonEnDown;
   Float_t         type1_pfMet_shiftedPt_PhotonEnUp;
   Float_t         type1_pfMet_shiftedPt_TauEnDown;
   Float_t         type1_pfMet_shiftedPt_TauEnUp;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnDown;
   Float_t         type1_pfMet_shiftedPt_UnclusteredEnUp;
   Float_t         vbfDeta;
   Float_t         vbfDeta_JetEnDown;
   Float_t         vbfDeta_JetEnUp;
   Float_t         vbfDijetrap;
   Float_t         vbfDijetrap_JetEnDown;
   Float_t         vbfDijetrap_JetEnUp;
   Float_t         vbfDphi;
   Float_t         vbfDphi_JetEnDown;
   Float_t         vbfDphi_JetEnUp;
   Float_t         vbfDphihj;
   Float_t         vbfDphihj_JetEnDown;
   Float_t         vbfDphihj_JetEnUp;
   Float_t         vbfDphihjnomet;
   Float_t         vbfDphihjnomet_JetEnDown;
   Float_t         vbfDphihjnomet_JetEnUp;
   Float_t         vbfHrap;
   Float_t         vbfHrap_JetEnDown;
   Float_t         vbfHrap_JetEnUp;
   Float_t         vbfJetVeto20;
   Float_t         vbfJetVeto20_JetEnDown;
   Float_t         vbfJetVeto20_JetEnUp;
   Float_t         vbfJetVeto30;
   Float_t         vbfJetVeto30_JetEnDown;
   Float_t         vbfJetVeto30_JetEnUp;
   Float_t         vbfMVA;
   Float_t         vbfMVA_JetEnDown;
   Float_t         vbfMVA_JetEnUp;
   Float_t         vbfMass;
   Float_t         vbfMass_JetEnDown;
   Float_t         vbfMass_JetEnUp;
   Float_t         vbfNJets20;
   Float_t         vbfNJets20_JetEnDown;
   Float_t         vbfNJets20_JetEnUp;
   Float_t         vbfNJets30;
   Float_t         vbfNJets30_JetEnDown;
   Float_t         vbfNJets30_JetEnUp;
   Float_t         vbfVispt;
   Float_t         vbfVispt_JetEnDown;
   Float_t         vbfVispt_JetEnUp;
   Float_t         vbfdijetpt;
   Float_t         vbfdijetpt_JetEnDown;
   Float_t         vbfdijetpt_JetEnUp;
   Float_t         vbfj1eta;
   Float_t         vbfj1eta_JetEnDown;
   Float_t         vbfj1eta_JetEnUp;
   Float_t         vbfj1pt;
   Float_t         vbfj1pt_JetEnDown;
   Float_t         vbfj1pt_JetEnUp;
   Float_t         vbfj2eta;
   Float_t         vbfj2eta_JetEnDown;
   Float_t         vbfj2eta_JetEnUp;
   Float_t         vbfj2pt;
   Float_t         vbfj2pt_JetEnDown;
   Float_t         vbfj2pt_JetEnUp;
   Float_t         vispX;
   Float_t         vispY;
   Int_t           idx;

   // List of branches
   
   TBranch        *b_EmbPtWeight;   //!
   TBranch        *b_Eta;   //!
   TBranch        *b_GenWeight;   //!
   TBranch        *b_Ht;   //!
   TBranch        *b_LT;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_MassError;   //!
   TBranch        *b_MassErrord1;   //!
   TBranch        *b_MassErrord2;   //!
   TBranch        *b_MassErrord3;   //!
   TBranch        *b_MassErrord4;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_NUP;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Pt;   //!
   TBranch        *b_bjetCISVVeto20Loose;   //!
   TBranch        *b_bjetCISVVeto20Medium;   //!
   TBranch        *b_bjetCISVVeto20Tight;   //!
   TBranch        *b_bjetCISVVeto30Loose;   //!
   TBranch        *b_bjetCISVVeto30Medium;   //!
   TBranch        *b_bjetCISVVeto30Tight;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_dielectronVeto;   //!
   TBranch        *b_dimuonVeto;   //!
   TBranch        *b_doubleEGroup;   //!
   TBranch        *b_doubleEPass;   //!
   TBranch        *b_doubleEPrescale;   //!
   TBranch        *b_doubleESingleMuGroup;   //!
   TBranch        *b_doubleESingleMuPass;   //!
   TBranch        *b_doubleESingleMuPrescale;   //!
   TBranch        *b_doubleE_23_12Group;   //!
   TBranch        *b_doubleE_23_12Pass;   //!
   TBranch        *b_doubleE_23_12Prescale;   //!
   TBranch        *b_doubleMuGroup;   //!
   TBranch        *b_doubleMuPass;   //!
   TBranch        *b_doubleMuPrescale;   //!
   TBranch        *b_doubleMuSingleEGroup;   //!
   TBranch        *b_doubleMuSingleEPass;   //!
   TBranch        *b_doubleMuSingleEPrescale;   //!
   TBranch        *b_doubleTau32Group;   //!
   TBranch        *b_doubleTau32Pass;   //!
   TBranch        *b_doubleTau32Prescale;   //!
   TBranch        *b_doubleTau35Group;   //!
   TBranch        *b_doubleTau35Pass;   //!
   TBranch        *b_doubleTau35Prescale;   //!
   TBranch        *b_doubleTau40Group;   //!
   TBranch        *b_doubleTau40Pass;   //!
   TBranch        *b_doubleTau40Prescale;   //!
   TBranch        *b_eAbsEta;   //!
   TBranch        *b_eCBIDLoose;   //!
   TBranch        *b_eCBIDLooseNoIso;   //!
   TBranch        *b_eCBIDMedium;   //!
   TBranch        *b_eCBIDMediumNoIso;   //!
   TBranch        *b_eCBIDTight;   //!
   TBranch        *b_eCBIDTightNoIso;   //!
   TBranch        *b_eCBIDVeto;   //!
   TBranch        *b_eCBIDVetoNoIso;   //!
   TBranch        *b_eCharge;   //!
   TBranch        *b_eChargeIdLoose;   //!
   TBranch        *b_eChargeIdMed;   //!
   TBranch        *b_eChargeIdTight;   //!
   TBranch        *b_eComesFromHiggs;   //!
   TBranch        *b_eDPhiToPfMet_ElectronEnDown;   //!
   TBranch        *b_eDPhiToPfMet_ElectronEnUp;   //!
   TBranch        *b_eDPhiToPfMet_JetEnDown;   //!
   TBranch        *b_eDPhiToPfMet_JetEnUp;   //!
   TBranch        *b_eDPhiToPfMet_JetResDown;   //!
   TBranch        *b_eDPhiToPfMet_JetResUp;   //!
   TBranch        *b_eDPhiToPfMet_MuonEnDown;   //!
   TBranch        *b_eDPhiToPfMet_MuonEnUp;   //!
   TBranch        *b_eDPhiToPfMet_PhotonEnDown;   //!
   TBranch        *b_eDPhiToPfMet_PhotonEnUp;   //!
   TBranch        *b_eDPhiToPfMet_TauEnDown;   //!
   TBranch        *b_eDPhiToPfMet_TauEnUp;   //!
   TBranch        *b_eDPhiToPfMet_UnclusteredEnDown;   //!
   TBranch        *b_eDPhiToPfMet_UnclusteredEnUp;   //!
   TBranch        *b_eDPhiToPfMet_type1;   //!
   TBranch        *b_eE1x5;   //!
   TBranch        *b_eE2x5Max;   //!
   TBranch        *b_eE5x5;   //!
   TBranch        *b_eEcalIsoDR03;   //!
   TBranch        *b_eEffectiveArea2012Data;   //!
   TBranch        *b_eEffectiveAreaSpring15;   //!
   TBranch        *b_eEnergyError;   //!
   TBranch        *b_eEta;   //!
   TBranch        *b_eEta_ElectronEnDown;   //!
   TBranch        *b_eEta_ElectronEnUp;   //!
   TBranch        *b_eGenCharge;   //!
   TBranch        *b_eGenDirectPromptTauDecay;   //!
   TBranch        *b_eGenEnergy;   //!
   TBranch        *b_eGenEta;   //!
   TBranch        *b_eGenIsPrompt;   //!
   TBranch        *b_eGenMotherPdgId;   //!
   TBranch        *b_eGenParticle;   //!
   TBranch        *b_eGenPdgId;   //!
   TBranch        *b_eGenPhi;   //!
   TBranch        *b_eGenPrompt;   //!
   TBranch        *b_eGenPromptTauDecay;   //!
   TBranch        *b_eGenPt;   //!
   TBranch        *b_eGenTauDecay;   //!
   TBranch        *b_eGenVZ;   //!
   TBranch        *b_eGenVtxPVMatch;   //!
   TBranch        *b_eHadronicDepth1OverEm;   //!
   TBranch        *b_eHadronicDepth2OverEm;   //!
   TBranch        *b_eHadronicOverEM;   //!
   TBranch        *b_eHcalIsoDR03;   //!
   TBranch        *b_eIP3D;   //!
   TBranch        *b_eIP3DErr;   //!
   TBranch        *b_eIsoDB03;   //!
   TBranch        *b_eJetArea;   //!
   TBranch        *b_eJetBtag;   //!
   TBranch        *b_eJetEtaEtaMoment;   //!
   TBranch        *b_eJetEtaPhiMoment;   //!
   TBranch        *b_eJetEtaPhiSpread;   //!
   TBranch        *b_eJetHadronFlavour;   //!
   TBranch        *b_eJetPFCISVBtag;   //!
   TBranch        *b_eJetPartonFlavour;   //!
   TBranch        *b_eJetPhiPhiMoment;   //!
   TBranch        *b_eJetPt;   //!
   TBranch        *b_eLowestMll;   //!
   TBranch        *b_eMVANonTrigCategory;   //!
   TBranch        *b_eMVANonTrigID;   //!
   TBranch        *b_eMVANonTrigWP80;   //!
   TBranch        *b_eMVANonTrigWP90;   //!
   TBranch        *b_eMVATrigCategory;   //!
   TBranch        *b_eMVATrigID;   //!
   TBranch        *b_eMVATrigWP80;   //!
   TBranch        *b_eMVATrigWP90;   //!
   TBranch        *b_eMass;   //!
   TBranch        *b_eMatchesDoubleE;   //!
   TBranch        *b_eMatchesDoubleESingleMu;   //!
   TBranch        *b_eMatchesDoubleMuSingleE;   //!
   TBranch        *b_eMatchesEle22Filter;   //!
   TBranch        *b_eMatchesEle22Path;   //!
   TBranch        *b_eMatchesEle23Filter;   //!
   TBranch        *b_eMatchesEle23Path;   //!
   TBranch        *b_eMatchesEle25LooseFilter;   //!
   TBranch        *b_eMatchesEle25TightFilter;   //!
   TBranch        *b_eMatchesMu17Ele12Filter;   //!
   TBranch        *b_eMatchesMu17Ele12Path;   //!
   TBranch        *b_eMatchesMu23Ele12Filter;   //!
   TBranch        *b_eMatchesMu23Ele12Path;   //!
   TBranch        *b_eMatchesMu8Ele17Filter;   //!
   TBranch        *b_eMatchesMu8Ele17Path;   //!
   TBranch        *b_eMatchesMu8Ele23Filter;   //!
   TBranch        *b_eMatchesMu8Ele23Path;   //!
   TBranch        *b_eMatchesSingleE;   //!
   TBranch        *b_eMatchesSingleESingleMu;   //!
   TBranch        *b_eMatchesSingleE_leg1;   //!
   TBranch        *b_eMatchesSingleE_leg2;   //!
   TBranch        *b_eMatchesSingleMuSingleE;   //!
   TBranch        *b_eMatchesTripleE;   //!
   TBranch        *b_eMissingHits;   //!
   TBranch        *b_eMtToPfMet_ElectronEnDown;   //!
   TBranch        *b_eMtToPfMet_ElectronEnUp;   //!
   TBranch        *b_eMtToPfMet_JetEnDown;   //!
   TBranch        *b_eMtToPfMet_JetEnUp;   //!
   TBranch        *b_eMtToPfMet_JetResDown;   //!
   TBranch        *b_eMtToPfMet_JetResUp;   //!
   TBranch        *b_eMtToPfMet_MuonEnDown;   //!
   TBranch        *b_eMtToPfMet_MuonEnUp;   //!
   TBranch        *b_eMtToPfMet_PhotonEnDown;   //!
   TBranch        *b_eMtToPfMet_PhotonEnUp;   //!
   TBranch        *b_eMtToPfMet_Raw;   //!
   TBranch        *b_eMtToPfMet_TauEnDown;   //!
   TBranch        *b_eMtToPfMet_TauEnUp;   //!
   TBranch        *b_eMtToPfMet_UnclusteredEnDown;   //!
   TBranch        *b_eMtToPfMet_UnclusteredEnUp;   //!
   TBranch        *b_eMtToPfMet_type1;   //!
   TBranch        *b_eNearMuonVeto;   //!
   TBranch        *b_eNearestMuonDR;   //!
   TBranch        *b_eNearestZMass;   //!
   TBranch        *b_ePFChargedIso;   //!
   TBranch        *b_ePFNeutralIso;   //!
   TBranch        *b_ePFPUChargedIso;   //!
   TBranch        *b_ePFPhotonIso;   //!
   TBranch        *b_ePVDXY;   //!
   TBranch        *b_ePVDZ;   //!
   TBranch        *b_ePassesConversionVeto;   //!
   TBranch        *b_ePhi;   //!
   TBranch        *b_ePhi_ElectronEnDown;   //!
   TBranch        *b_ePhi_ElectronEnUp;   //!
   TBranch        *b_ePt;   //!
   TBranch        *b_ePt_ElectronEnDown;   //!
   TBranch        *b_ePt_ElectronEnUp;   //!
   TBranch        *b_eRank;   //!
   TBranch        *b_eRelIso;   //!
   TBranch        *b_eRelPFIsoDB;   //!
   TBranch        *b_eRelPFIsoRho;   //!
   TBranch        *b_eRho;   //!
   TBranch        *b_eSCEnergy;   //!
   TBranch        *b_eSCEta;   //!
   TBranch        *b_eSCEtaWidth;   //!
   TBranch        *b_eSCPhi;   //!
   TBranch        *b_eSCPhiWidth;   //!
   TBranch        *b_eSCPreshowerEnergy;   //!
   TBranch        *b_eSCRawEnergy;   //!
   TBranch        *b_eSIP2D;   //!
   TBranch        *b_eSIP3D;   //!
   TBranch        *b_eSigmaIEtaIEta;   //!
   TBranch        *b_eTrkIsoDR03;   //!
   TBranch        *b_eVZ;   //!
   TBranch        *b_eVetoMVAIso;   //!
   TBranch        *b_eVetoMVAIsoVtx;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
   TBranch        *b_eWWLoose;   //!
   TBranch        *b_eZTTGenMatching;   //!
   TBranch        *b_e_t_CosThetaStar;   //!
   TBranch        *b_e_t_DPhi;   //!
   TBranch        *b_e_t_DR;   //!
   TBranch        *b_e_t_Eta;   //!
   TBranch        *b_e_t_Mass;   //!
   TBranch        *b_e_t_Mass_TauEnDown;   //!
   TBranch        *b_e_t_Mass_TauEnUp;   //!
   TBranch        *b_e_t_Mt;   //!
   TBranch        *b_e_t_MtTotal;   //!
   TBranch        *b_e_t_Mt_TauEnDown;   //!
   TBranch        *b_e_t_Mt_TauEnUp;   //!
   TBranch        *b_e_t_MvaMet;   //!
   TBranch        *b_e_t_MvaMetCovMatrix00;   //!
   TBranch        *b_e_t_MvaMetCovMatrix01;   //!
   TBranch        *b_e_t_MvaMetCovMatrix10;   //!
   TBranch        *b_e_t_MvaMetCovMatrix11;   //!
   TBranch        *b_e_t_MvaMetPhi;   //!
   TBranch        *b_e_t_PZeta;   //!
   TBranch        *b_e_t_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e_t_PZetaVis;   //!
   TBranch        *b_e_t_Phi;   //!
   TBranch        *b_e_t_Pt;   //!
   TBranch        *b_e_t_SS;   //!
   TBranch        *b_e_t_ToMETDPhi_Ty1;   //!
   TBranch        *b_e_t_collinearmass;   //!
   TBranch        *b_e_t_collinearmass_JetEnDown;   //!
   TBranch        *b_e_t_collinearmass_JetEnUp;   //!
   TBranch        *b_e_t_collinearmass_TauEnDown;   //!
   TBranch        *b_e_t_collinearmass_TauEnUp;   //!
   TBranch        *b_e_t_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e_t_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e_t_pt_tt;   //!
   TBranch        *b_edeltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_edeltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_eeSuperClusterOverP;   //!
   TBranch        *b_eecalEnergy;   //!
   TBranch        *b_efBrem;   //!
   TBranch        *b_etrackMomentumAtVtxP;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_genHTT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_genMass;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_isGtautau;   //!
   TBranch        *b_isWenu;   //!
   TBranch        *b_isWmunu;   //!
   TBranch        *b_isWtaunu;   //!
   TBranch        *b_isZee;   //!
   TBranch        *b_isZmumu;   //!
   TBranch        *b_isZtautau;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_j1csv;   //!
   TBranch        *b_j1eta;   //!
   TBranch        *b_j1hadronflavor;   //!
   TBranch        *b_j1partonflavor;   //!
   TBranch        *b_j1phi;   //!
   TBranch        *b_j1pt;   //!
   TBranch        *b_j1ptDown;   //!
   TBranch        *b_j1ptUp;   //!
   TBranch        *b_j1pu;   //!
   TBranch        *b_j1rawf;   //!
   TBranch        *b_j2csv;   //!
   TBranch        *b_j2eta;   //!
   TBranch        *b_j2hadronflavor;   //!
   TBranch        *b_j2partonflavor;   //!
   TBranch        *b_j2phi;   //!
   TBranch        *b_j2pt;   //!
   TBranch        *b_j2ptDown;   //!
   TBranch        *b_j2ptUp;   //!
   TBranch        *b_j2pu;   //!
   TBranch        *b_j2rawf;   //!
   TBranch        *b_jb1csv;   //!
   TBranch        *b_jb1eta;   //!
   TBranch        *b_jb1hadronflavor;   //!
   TBranch        *b_jb1partonflavor;   //!
   TBranch        *b_jb1phi;   //!
   TBranch        *b_jb1pt;   //!
   TBranch        *b_jb1ptDown;   //!
   TBranch        *b_jb1ptUp;   //!
   TBranch        *b_jb1pu;   //!
   TBranch        *b_jb1rawf;   //!
   TBranch        *b_jb2csv;   //!
   TBranch        *b_jb2eta;   //!
   TBranch        *b_jb2hadronflavor;   //!
   TBranch        *b_jb2partonflavor;   //!
   TBranch        *b_jb2phi;   //!
   TBranch        *b_jb2pt;   //!
   TBranch        *b_jb2ptDown;   //!
   TBranch        *b_jb2ptUp;   //!
   TBranch        *b_jb2pu;   //!
   TBranch        *b_jb2rawf;   //!
   TBranch        *b_jetVeto20;   //!
   TBranch        *b_jetVeto20_JetEnDown;   //!
   TBranch        *b_jetVeto20_JetEnUp;   //!
   TBranch        *b_jetVeto30;   //!
   TBranch        *b_jetVeto30_JetEnDown;   //!
   TBranch        *b_jetVeto30_JetEnUp;   //!
/*   TBranch        *b_lheweight0;   //!
   TBranch        *b_lheweight1;   //!
   TBranch        *b_lheweight10;   //!
   TBranch        *b_lheweight100;   //!
   TBranch        *b_lheweight101;   //!
   TBranch        *b_lheweight102;   //!
   TBranch        *b_lheweight103;   //!
   TBranch        *b_lheweight104;   //!
   TBranch        *b_lheweight105;   //!
   TBranch        *b_lheweight106;   //!
   TBranch        *b_lheweight107;   //!
   TBranch        *b_lheweight108;   //!
   TBranch        *b_lheweight109;   //!
   TBranch        *b_lheweight11;   //!
   TBranch        *b_lheweight110;   //!
   TBranch        *b_lheweight12;   //!
   TBranch        *b_lheweight13;   //!
   TBranch        *b_lheweight14;   //!
   TBranch        *b_lheweight15;   //!
   TBranch        *b_lheweight16;   //!
   TBranch        *b_lheweight17;   //!
   TBranch        *b_lheweight18;   //!
   TBranch        *b_lheweight19;   //!
   TBranch        *b_lheweight2;   //!
   TBranch        *b_lheweight20;   //!
   TBranch        *b_lheweight21;   //!
   TBranch        *b_lheweight22;   //!
   TBranch        *b_lheweight23;   //!
   TBranch        *b_lheweight24;   //!
   TBranch        *b_lheweight25;   //!
   TBranch        *b_lheweight26;   //!
   TBranch        *b_lheweight27;   //!
   TBranch        *b_lheweight28;   //!
   TBranch        *b_lheweight29;   //!
   TBranch        *b_lheweight3;   //!
   TBranch        *b_lheweight30;   //!
   TBranch        *b_lheweight31;   //!
   TBranch        *b_lheweight32;   //!
   TBranch        *b_lheweight33;   //!
   TBranch        *b_lheweight34;   //!
   TBranch        *b_lheweight35;   //!
   TBranch        *b_lheweight36;   //!
   TBranch        *b_lheweight37;   //!
   TBranch        *b_lheweight38;   //!
   TBranch        *b_lheweight39;   //!
   TBranch        *b_lheweight4;   //!
   TBranch        *b_lheweight40;   //!
   TBranch        *b_lheweight41;   //!
   TBranch        *b_lheweight42;   //!
   TBranch        *b_lheweight43;   //!
   TBranch        *b_lheweight44;   //!
   TBranch        *b_lheweight45;   //!
   TBranch        *b_lheweight46;   //!
   TBranch        *b_lheweight47;   //!
   TBranch        *b_lheweight48;   //!
   TBranch        *b_lheweight49;   //!
   TBranch        *b_lheweight5;   //!
   TBranch        *b_lheweight50;   //!
   TBranch        *b_lheweight51;   //!
   TBranch        *b_lheweight52;   //!
   TBranch        *b_lheweight53;   //!
   TBranch        *b_lheweight54;   //!
   TBranch        *b_lheweight55;   //!
   TBranch        *b_lheweight56;   //!
   TBranch        *b_lheweight57;   //!
   TBranch        *b_lheweight58;   //!
   TBranch        *b_lheweight59;   //!
   TBranch        *b_lheweight6;   //!
   TBranch        *b_lheweight60;   //!
   TBranch        *b_lheweight61;   //!
   TBranch        *b_lheweight62;   //!
   TBranch        *b_lheweight63;   //!
   TBranch        *b_lheweight64;   //!
   TBranch        *b_lheweight65;   //!
   TBranch        *b_lheweight66;   //!
   TBranch        *b_lheweight67;   //!
   TBranch        *b_lheweight68;   //!
   TBranch        *b_lheweight69;   //!
   TBranch        *b_lheweight7;   //!
   TBranch        *b_lheweight70;   //!
   TBranch        *b_lheweight71;   //!
   TBranch        *b_lheweight72;   //!
   TBranch        *b_lheweight73;   //!
   TBranch        *b_lheweight74;   //!
   TBranch        *b_lheweight75;   //!
   TBranch        *b_lheweight76;   //!
   TBranch        *b_lheweight77;   //!
   TBranch        *b_lheweight78;   //!
   TBranch        *b_lheweight79;   //!
   TBranch        *b_lheweight8;   //!
   TBranch        *b_lheweight80;   //!
   TBranch        *b_lheweight81;   //!
   TBranch        *b_lheweight82;   //!
   TBranch        *b_lheweight83;   //!
   TBranch        *b_lheweight84;   //!
   TBranch        *b_lheweight85;   //!
   TBranch        *b_lheweight86;   //!
   TBranch        *b_lheweight87;   //!
   TBranch        *b_lheweight88;   //!
   TBranch        *b_lheweight89;   //!
   TBranch        *b_lheweight9;   //!
   TBranch        *b_lheweight90;   //!
   TBranch        *b_lheweight91;   //!
   TBranch        *b_lheweight92;   //!
   TBranch        *b_lheweight93;   //!
   TBranch        *b_lheweight94;   //!
   TBranch        *b_lheweight95;   //!
   TBranch        *b_lheweight96;   //!
   TBranch        *b_lheweight97;   //!
   TBranch        *b_lheweight98;   //!
   TBranch        *b_lheweight99;   //!*/
   TBranch        *b_lumi;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_muGlbIsoVetoPt10;   //!
   TBranch        *b_muVetoPt15IsoIdVtx;   //!
   TBranch        *b_muVetoPt5;   //!
   TBranch        *b_muVetoPt5IsoIdVtx;   //!
   TBranch        *b_muVetoZTTp001dxyz;   //!
   TBranch        *b_muVetoZTTp001dxyzR0;   //!
   TBranch        *b_nTruePU;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_processID;   //!
   TBranch        *b_puppiMetEt;   //!
   TBranch        *b_puppiMetPhi;   //!
   TBranch        *b_pvChi2;   //!
   TBranch        *b_pvDX;   //!
   TBranch        *b_pvDY;   //!
   TBranch        *b_pvDZ;   //!
   TBranch        *b_pvIsFake;   //!
   TBranch        *b_pvIsValid;   //!
   TBranch        *b_pvNormChi2;   //!
   TBranch        *b_pvRho;   //!
   TBranch        *b_pvX;   //!
   TBranch        *b_pvY;   //!
   TBranch        *b_pvZ;   //!
   TBranch        *b_pvndof;   //!
   TBranch        *b_raw_pfMetEt;   //!
   TBranch        *b_raw_pfMetPhi;   //!
   TBranch        *b_recoilDaught;   //!
   TBranch        *b_recoilWithMet;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_run;   //!
   TBranch        *b_singleE17SingleMu8Group;   //!
   TBranch        *b_singleE17SingleMu8Pass;   //!
   TBranch        *b_singleE17SingleMu8Prescale;   //!
   TBranch        *b_singleE20SingleTau28Group;   //!
   TBranch        *b_singleE20SingleTau28Pass;   //!
   TBranch        *b_singleE20SingleTau28Prescale;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE22SingleTau29Group;   //!
   TBranch        *b_singleE22SingleTau29Pass;   //!
   TBranch        *b_singleE22SingleTau29Prescale;   //!
   TBranch        *b_singleE23SingleMu8Group;   //!
   TBranch        *b_singleE23SingleMu8Pass;   //!
   TBranch        *b_singleE23SingleMu8Prescale;   //!
   TBranch        *b_singleE24SingleTau20Group;   //!
   TBranch        *b_singleE24SingleTau20Pass;   //!
   TBranch        *b_singleE24SingleTau20Prescale;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE24SingleTau30Group;   //!
   TBranch        *b_singleE24SingleTau30Pass;   //!
   TBranch        *b_singleE24SingleTau30Prescale;   //!
   TBranch        *b_singleE25eta2p1TightGroup;   //!
   TBranch        *b_singleE25eta2p1TightPass;   //!
   TBranch        *b_singleE25eta2p1TightPrescale;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE36SingleTau30Group;   //!
   TBranch        *b_singleE36SingleTau30Pass;   //!
   TBranch        *b_singleE36SingleTau30Prescale;   //!
   TBranch        *b_singleEGroup;   //!
   TBranch        *b_singleEPass;   //!
   TBranch        *b_singleEPrescale;   //!
   TBranch        *b_singleESingleMuGroup;   //!
   TBranch        *b_singleESingleMuPass;   //!
   TBranch        *b_singleESingleMuPrescale;   //!
   TBranch        *b_singleE_leg1Group;   //!
   TBranch        *b_singleE_leg1Pass;   //!
   TBranch        *b_singleE_leg1Prescale;   //!
   TBranch        *b_singleE_leg2Group;   //!
   TBranch        *b_singleE_leg2Pass;   //!
   TBranch        *b_singleE_leg2Prescale;   //!
   TBranch        *b_singleEeta2p1LooseGroup;   //!
   TBranch        *b_singleEeta2p1LoosePass;   //!
   TBranch        *b_singleEeta2p1LoosePrescale;   //!
   TBranch        *b_singleIsoMu20Group;   //!
   TBranch        *b_singleIsoMu20Pass;   //!
   TBranch        *b_singleIsoMu20Prescale;   //!
   TBranch        *b_singleIsoMu22Group;   //!
   TBranch        *b_singleIsoMu22Pass;   //!
   TBranch        *b_singleIsoMu22Prescale;   //!
   TBranch        *b_singleIsoMu24Group;   //!
   TBranch        *b_singleIsoMu24Pass;   //!
   TBranch        *b_singleIsoMu24Prescale;   //!
   TBranch        *b_singleIsoMu27Group;   //!
   TBranch        *b_singleIsoMu27Pass;   //!
   TBranch        *b_singleIsoMu27Prescale;   //!
   TBranch        *b_singleIsoTkMu20Group;   //!
   TBranch        *b_singleIsoTkMu20Pass;   //!
   TBranch        *b_singleIsoTkMu20Prescale;   //!
   TBranch        *b_singleIsoTkMu22Group;   //!
   TBranch        *b_singleIsoTkMu22Pass;   //!
   TBranch        *b_singleIsoTkMu22Prescale;   //!
   TBranch        *b_singleMu17SingleE12Group;   //!
   TBranch        *b_singleMu17SingleE12Pass;   //!
   TBranch        *b_singleMu17SingleE12Prescale;   //!
   TBranch        *b_singleMu23SingleE12Group;   //!
   TBranch        *b_singleMu23SingleE12Pass;   //!
   TBranch        *b_singleMu23SingleE12Prescale;   //!
   TBranch        *b_singleMuGroup;   //!
   TBranch        *b_singleMuPass;   //!
   TBranch        *b_singleMuPrescale;   //!
   TBranch        *b_singleMuSingleEGroup;   //!
   TBranch        *b_singleMuSingleEPass;   //!
   TBranch        *b_singleMuSingleEPrescale;   //!
   TBranch        *b_singleMu_leg1Group;   //!
   TBranch        *b_singleMu_leg1Pass;   //!
   TBranch        *b_singleMu_leg1Prescale;   //!
   TBranch        *b_singleMu_leg1_noisoGroup;   //!
   TBranch        *b_singleMu_leg1_noisoPass;   //!
   TBranch        *b_singleMu_leg1_noisoPrescale;   //!
   TBranch        *b_singleMu_leg2Group;   //!
   TBranch        *b_singleMu_leg2Pass;   //!
   TBranch        *b_singleMu_leg2Prescale;   //!
   TBranch        *b_singleMu_leg2_noisoGroup;   //!
   TBranch        *b_singleMu_leg2_noisoPass;   //!
   TBranch        *b_singleMu_leg2_noisoPrescale;   //!
   TBranch        *b_tAbsEta;   //!
   TBranch        *b_tAgainstElectronLooseMVA6;   //!
   TBranch        *b_tAgainstElectronMVA6Raw;   //!
   TBranch        *b_tAgainstElectronMVA6category;   //!
   TBranch        *b_tAgainstElectronMediumMVA6;   //!
   TBranch        *b_tAgainstElectronTightMVA6;   //!
   TBranch        *b_tAgainstElectronVLooseMVA6;   //!
   TBranch        *b_tAgainstElectronVTightMVA6;   //!
   TBranch        *b_tAgainstMuonLoose3;   //!
   TBranch        *b_tAgainstMuonTight3;   //!
   TBranch        *b_tByCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_tByIsolationMVArun2v1DBdR03oldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1DBnewDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1DBoldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWdR03oldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWnewDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWoldDMwLTraw;   //!
   TBranch        *b_tByLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_tByTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tCharge;   //!
   TBranch        *b_tChargedIsoPtSum;   //!
   TBranch        *b_tChargedIsoPtSumdR03;   //!
   TBranch        *b_tComesFromHiggs;   //!
   TBranch        *b_tDPhiToPfMet_ElectronEnDown;   //!
   TBranch        *b_tDPhiToPfMet_ElectronEnUp;   //!
   TBranch        *b_tDPhiToPfMet_JetEnDown;   //!
   TBranch        *b_tDPhiToPfMet_JetEnUp;   //!
   TBranch        *b_tDPhiToPfMet_JetResDown;   //!
   TBranch        *b_tDPhiToPfMet_JetResUp;   //!
   TBranch        *b_tDPhiToPfMet_MuonEnDown;   //!
   TBranch        *b_tDPhiToPfMet_MuonEnUp;   //!
   TBranch        *b_tDPhiToPfMet_PhotonEnDown;   //!
   TBranch        *b_tDPhiToPfMet_PhotonEnUp;   //!
   TBranch        *b_tDPhiToPfMet_TauEnDown;   //!
   TBranch        *b_tDPhiToPfMet_TauEnUp;   //!
   TBranch        *b_tDPhiToPfMet_UnclusteredEnDown;   //!
   TBranch        *b_tDPhiToPfMet_UnclusteredEnUp;   //!
   TBranch        *b_tDPhiToPfMet_type1;   //!
   TBranch        *b_tDecayMode;   //!
   TBranch        *b_tDecayModeFinding;   //!
   TBranch        *b_tDecayModeFindingNewDMs;   //!
   TBranch        *b_tElecOverlap;   //!
   TBranch        *b_tEta;   //!
   TBranch        *b_tEta_TauEnDown;   //!
   TBranch        *b_tEta_TauEnUp;   //!
   TBranch        *b_tFootprintCorrection;   //!
   TBranch        *b_tFootprintCorrectiondR03;   //!
   TBranch        *b_tGenCharge;   //!
   TBranch        *b_tGenDecayMode;   //!
   TBranch        *b_tGenEnergy;   //!
   TBranch        *b_tGenEta;   //!
   TBranch        *b_tGenIsPrompt;   //!
   TBranch        *b_tGenJetEta;   //!
   TBranch        *b_tGenJetPt;   //!
   TBranch        *b_tGenMotherEnergy;   //!
   TBranch        *b_tGenMotherEta;   //!
   TBranch        *b_tGenMotherPdgId;   //!
   TBranch        *b_tGenMotherPhi;   //!
   TBranch        *b_tGenMotherPt;   //!
   TBranch        *b_tGenPdgId;   //!
   TBranch        *b_tGenPhi;   //!
   TBranch        *b_tGenPt;   //!
   TBranch        *b_tGenStatus;   //!
   TBranch        *b_tGlobalMuonVtxOverlap;   //!
   TBranch        *b_tJetArea;   //!
   TBranch        *b_tJetBtag;   //!
   TBranch        *b_tJetEtaEtaMoment;   //!
   TBranch        *b_tJetEtaPhiMoment;   //!
   TBranch        *b_tJetEtaPhiSpread;   //!
   TBranch        *b_tJetHadronFlavour;   //!
   TBranch        *b_tJetPFCISVBtag;   //!
   TBranch        *b_tJetPartonFlavour;   //!
   TBranch        *b_tJetPhiPhiMoment;   //!
   TBranch        *b_tJetPt;   //!
   TBranch        *b_tLeadTrackPt;   //!
   TBranch        *b_tLowestMll;   //!
   TBranch        *b_tMass;   //!
   TBranch        *b_tMass_TauEnDown;   //!
   TBranch        *b_tMass_TauEnUp;   //!
   TBranch        *b_tMatchesDoubleTau32Filter;   //!
   TBranch        *b_tMatchesDoubleTau32Path;   //!
   TBranch        *b_tMatchesDoubleTau35Filter;   //!
   TBranch        *b_tMatchesDoubleTau35Path;   //!
   TBranch        *b_tMatchesDoubleTau40Filter;   //!
   TBranch        *b_tMatchesDoubleTau40Path;   //!
   TBranch        *b_tMtToPfMet_ElectronEnDown;   //!
   TBranch        *b_tMtToPfMet_ElectronEnUp;   //!
   TBranch        *b_tMtToPfMet_JetEnDown;   //!
   TBranch        *b_tMtToPfMet_JetEnUp;   //!
   TBranch        *b_tMtToPfMet_JetResDown;   //!
   TBranch        *b_tMtToPfMet_JetResUp;   //!
   TBranch        *b_tMtToPfMet_MuonEnDown;   //!
   TBranch        *b_tMtToPfMet_MuonEnUp;   //!
   TBranch        *b_tMtToPfMet_PhotonEnDown;   //!
   TBranch        *b_tMtToPfMet_PhotonEnUp;   //!
   TBranch        *b_tMtToPfMet_Raw;   //!
   TBranch        *b_tMtToPfMet_TauEnDown;   //!
   TBranch        *b_tMtToPfMet_TauEnUp;   //!
   TBranch        *b_tMtToPfMet_UnclusteredEnDown;   //!
   TBranch        *b_tMtToPfMet_UnclusteredEnUp;   //!
   TBranch        *b_tMtToPfMet_type1;   //!
   TBranch        *b_tMuOverlap;   //!
   TBranch        *b_tMuonIdIsoStdVtxOverlap;   //!
   TBranch        *b_tMuonIdIsoVtxOverlap;   //!
   TBranch        *b_tMuonIdVtxOverlap;   //!
   TBranch        *b_tNChrgHadrIsolationCands;   //!
   TBranch        *b_tNChrgHadrSignalCands;   //!
   TBranch        *b_tNGammaSignalCands;   //!
   TBranch        *b_tNNeutralHadrSignalCands;   //!
   TBranch        *b_tNSignalCands;   //!
   TBranch        *b_tNearestZMass;   //!
   TBranch        *b_tNeutralIsoPtSum;   //!
   TBranch        *b_tNeutralIsoPtSumWeight;   //!
   TBranch        *b_tNeutralIsoPtSumWeightdR03;   //!
   TBranch        *b_tNeutralIsoPtSumdR03;   //!
   TBranch        *b_tPVDXY;   //!
   TBranch        *b_tPVDZ;   //!
   TBranch        *b_tPhi;   //!
   TBranch        *b_tPhi_TauEnDown;   //!
   TBranch        *b_tPhi_TauEnUp;   //!
   TBranch        *b_tPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_tPhotonPtSumOutsideSignalConedR03;   //!
   TBranch        *b_tPt;   //!
   TBranch        *b_tPt_TauEnDown;   //!
   TBranch        *b_tPt_TauEnUp;   //!
   TBranch        *b_tPuCorrPtSum;   //!
   TBranch        *b_tRank;   //!
   TBranch        *b_tVZ;   //!
   TBranch        *b_tZTTGenDR;   //!
   TBranch        *b_tZTTGenEta;   //!
   TBranch        *b_tZTTGenMatching;   //!
   TBranch        *b_tZTTGenPhi;   //!
   TBranch        *b_tZTTGenPt;   //!
   TBranch        *b_t_e_collinearmass;   //!
   TBranch        *b_t_e_collinearmass_JetEnDown;   //!
   TBranch        *b_t_e_collinearmass_JetEnUp;   //!
   TBranch        *b_t_e_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t_e_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_tauVetoPt20Loose3HitsVtx;   //!
   TBranch        *b_tauVetoPt20TightMVALTVtx;   //!
   TBranch        *b_topQuarkPt1;   //!
   TBranch        *b_topQuarkPt2;   //!
   TBranch        *b_tripleEGroup;   //!
   TBranch        *b_tripleEPass;   //!
   TBranch        *b_tripleEPrescale;   //!
   TBranch        *b_tripleMuGroup;   //!
   TBranch        *b_tripleMuPass;   //!
   TBranch        *b_tripleMuPrescale;   //!
   TBranch        *b_type1_pfMetEt;   //!
   TBranch        *b_type1_pfMetPhi;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_ElectronEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_ElectronEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_MuonEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_MuonEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_PhotonEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_PhotonEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_TauEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_TauEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPhi_UnclusteredEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_ElectronEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_ElectronEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_JetResUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_MuonEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_MuonEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_PhotonEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_PhotonEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_TauEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_TauEnUp;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnDown;   //!
   TBranch        *b_type1_pfMet_shiftedPt_UnclusteredEnUp;   //!
   TBranch        *b_vbfDeta;   //!
   TBranch        *b_vbfDeta_JetEnDown;   //!
   TBranch        *b_vbfDeta_JetEnUp;   //!
   TBranch        *b_vbfDijetrap;   //!
   TBranch        *b_vbfDijetrap_JetEnDown;   //!
   TBranch        *b_vbfDijetrap_JetEnUp;   //!
   TBranch        *b_vbfDphi;   //!
   TBranch        *b_vbfDphi_JetEnDown;   //!
   TBranch        *b_vbfDphi_JetEnUp;   //!
   TBranch        *b_vbfDphihj;   //!
   TBranch        *b_vbfDphihj_JetEnDown;   //!
   TBranch        *b_vbfDphihj_JetEnUp;   //!
   TBranch        *b_vbfDphihjnomet;   //!
   TBranch        *b_vbfDphihjnomet_JetEnDown;   //!
   TBranch        *b_vbfDphihjnomet_JetEnUp;   //!
   TBranch        *b_vbfHrap;   //!
   TBranch        *b_vbfHrap_JetEnDown;   //!
   TBranch        *b_vbfHrap_JetEnUp;   //!
   TBranch        *b_vbfJetVeto20;   //!
   TBranch        *b_vbfJetVeto20_JetEnDown;   //!
   TBranch        *b_vbfJetVeto20_JetEnUp;   //!
   TBranch        *b_vbfJetVeto30;   //!
   TBranch        *b_vbfJetVeto30_JetEnDown;   //!
   TBranch        *b_vbfJetVeto30_JetEnUp;   //!
   TBranch        *b_vbfMVA;   //!
   TBranch        *b_vbfMVA_JetEnDown;   //!
   TBranch        *b_vbfMVA_JetEnUp;   //!
   TBranch        *b_vbfMass;   //!
   TBranch        *b_vbfMass_JetEnDown;   //!
   TBranch        *b_vbfMass_JetEnUp;   //!
   TBranch        *b_vbfNJets20;   //!
   TBranch        *b_vbfNJets20_JetEnDown;   //!
   TBranch        *b_vbfNJets20_JetEnUp;   //!
   TBranch        *b_vbfNJets30;   //!
   TBranch        *b_vbfNJets30_JetEnDown;   //!
   TBranch        *b_vbfNJets30_JetEnUp;   //!
   TBranch        *b_vbfVispt;   //!
   TBranch        *b_vbfVispt_JetEnDown;   //!
   TBranch        *b_vbfVispt_JetEnUp;   //!
   TBranch        *b_vbfdijetpt;   //!
   TBranch        *b_vbfdijetpt_JetEnDown;   //!
   TBranch        *b_vbfdijetpt_JetEnUp;   //!
   TBranch        *b_vbfj1eta;   //!
   TBranch        *b_vbfj1eta_JetEnDown;   //!
   TBranch        *b_vbfj1eta_JetEnUp;   //!
   TBranch        *b_vbfj1pt;   //!
   TBranch        *b_vbfj1pt_JetEnDown;   //!
   TBranch        *b_vbfj1pt_JetEnUp;   //!
   TBranch        *b_vbfj2eta;   //!
   TBranch        *b_vbfj2eta_JetEnDown;   //!
   TBranch        *b_vbfj2eta_JetEnUp;   //!
   TBranch        *b_vbfj2pt;   //!
   TBranch        *b_vbfj2pt_JetEnDown;   //!
   TBranch        *b_vbfj2pt_JetEnUp;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_idx;   //!

   // methods
   HTauTauTree_et (TTree* tree); //ctor
   ~HTauTauTree_et();
   void Init(TTree* tree);
   Int_t GetEntry(int entry);
   Long64_t GetEntries();
   TTree* GetTree();
};

HTauTauTree_et::HTauTauTree_et (TTree* tree)
{
    Init(tree);
}

HTauTauTree_et::~HTauTauTree_et() {}

void HTauTauTree_et::Init(TTree* tree)
{
   // Set object pointer

   // Set branch addresses and branch pointers
   if (!tree) return;
   _tree = tree;  
   _tree->SetMakeClass(1); // needed especially when compiling

   _tree->SetBranchAddress("EmbPtWeight", &EmbPtWeight, &b_EmbPtWeight);
   _tree->SetBranchAddress("Eta", &Eta, &b_Eta);
   _tree->SetBranchAddress("GenWeight", &GenWeight, &b_GenWeight);
   _tree->SetBranchAddress("Ht", &Ht, &b_Ht);
   _tree->SetBranchAddress("LT", &LT, &b_LT);
   _tree->SetBranchAddress("Mass", &Mass, &b_Mass);
   _tree->SetBranchAddress("MassError", &MassError, &b_MassError);
   _tree->SetBranchAddress("MassErrord1", &MassErrord1, &b_MassErrord1);
   _tree->SetBranchAddress("MassErrord2", &MassErrord2, &b_MassErrord2);
   _tree->SetBranchAddress("MassErrord3", &MassErrord3, &b_MassErrord3);
   _tree->SetBranchAddress("MassErrord4", &MassErrord4, &b_MassErrord4);
   _tree->SetBranchAddress("Mt", &Mt, &b_Mt);
   _tree->SetBranchAddress("NUP", &NUP, &b_NUP);
   _tree->SetBranchAddress("Phi", &Phi, &b_Phi);
   _tree->SetBranchAddress("Pt", &Pt, &b_Pt);
   _tree->SetBranchAddress("bjetCISVVeto20Loose", &bjetCISVVeto20Loose, &b_bjetCISVVeto20Loose);
   _tree->SetBranchAddress("bjetCISVVeto20Medium", &bjetCISVVeto20Medium, &b_bjetCISVVeto20Medium);
   _tree->SetBranchAddress("bjetCISVVeto20Tight", &bjetCISVVeto20Tight, &b_bjetCISVVeto20Tight);
   _tree->SetBranchAddress("bjetCISVVeto30Loose", &bjetCISVVeto30Loose, &b_bjetCISVVeto30Loose);
   _tree->SetBranchAddress("bjetCISVVeto30Medium", &bjetCISVVeto30Medium, &b_bjetCISVVeto30Medium);
   _tree->SetBranchAddress("bjetCISVVeto30Tight", &bjetCISVVeto30Tight, &b_bjetCISVVeto30Tight);
   _tree->SetBranchAddress("charge", &charge, &b_charge);
   _tree->SetBranchAddress("dielectronVeto", &dielectronVeto, &b_dielectronVeto);
   _tree->SetBranchAddress("dimuonVeto", &dimuonVeto, &b_dimuonVeto);
   _tree->SetBranchAddress("doubleEGroup", &doubleEGroup, &b_doubleEGroup);
   _tree->SetBranchAddress("doubleEPass", &doubleEPass, &b_doubleEPass);
   _tree->SetBranchAddress("doubleEPrescale", &doubleEPrescale, &b_doubleEPrescale);
   _tree->SetBranchAddress("doubleESingleMuGroup", &doubleESingleMuGroup, &b_doubleESingleMuGroup);
   _tree->SetBranchAddress("doubleESingleMuPass", &doubleESingleMuPass, &b_doubleESingleMuPass);
   _tree->SetBranchAddress("doubleESingleMuPrescale", &doubleESingleMuPrescale, &b_doubleESingleMuPrescale);
   _tree->SetBranchAddress("doubleE_23_12Group", &doubleE_23_12Group, &b_doubleE_23_12Group);
   _tree->SetBranchAddress("doubleE_23_12Pass", &doubleE_23_12Pass, &b_doubleE_23_12Pass);
   _tree->SetBranchAddress("doubleE_23_12Prescale", &doubleE_23_12Prescale, &b_doubleE_23_12Prescale);
   _tree->SetBranchAddress("doubleMuGroup", &doubleMuGroup, &b_doubleMuGroup);
   _tree->SetBranchAddress("doubleMuPass", &doubleMuPass, &b_doubleMuPass);
   _tree->SetBranchAddress("doubleMuPrescale", &doubleMuPrescale, &b_doubleMuPrescale);
   _tree->SetBranchAddress("doubleMuSingleEGroup", &doubleMuSingleEGroup, &b_doubleMuSingleEGroup);
   _tree->SetBranchAddress("doubleMuSingleEPass", &doubleMuSingleEPass, &b_doubleMuSingleEPass);
   _tree->SetBranchAddress("doubleMuSingleEPrescale", &doubleMuSingleEPrescale, &b_doubleMuSingleEPrescale);
   _tree->SetBranchAddress("doubleTau32Group", &doubleTau32Group, &b_doubleTau32Group);
   _tree->SetBranchAddress("doubleTau32Pass", &doubleTau32Pass, &b_doubleTau32Pass);
   _tree->SetBranchAddress("doubleTau32Prescale", &doubleTau32Prescale, &b_doubleTau32Prescale);
   _tree->SetBranchAddress("doubleTau35Group", &doubleTau35Group, &b_doubleTau35Group);
   _tree->SetBranchAddress("doubleTau35Pass", &doubleTau35Pass, &b_doubleTau35Pass);
   _tree->SetBranchAddress("doubleTau35Prescale", &doubleTau35Prescale, &b_doubleTau35Prescale);
   _tree->SetBranchAddress("doubleTau40Group", &doubleTau40Group, &b_doubleTau40Group);
   _tree->SetBranchAddress("doubleTau40Pass", &doubleTau40Pass, &b_doubleTau40Pass);
   _tree->SetBranchAddress("doubleTau40Prescale", &doubleTau40Prescale, &b_doubleTau40Prescale);
   _tree->SetBranchAddress("eAbsEta", &eAbsEta, &b_eAbsEta);
   _tree->SetBranchAddress("eCBIDLoose", &eCBIDLoose, &b_eCBIDLoose);
   _tree->SetBranchAddress("eCBIDLooseNoIso", &eCBIDLooseNoIso, &b_eCBIDLooseNoIso);
   _tree->SetBranchAddress("eCBIDMedium", &eCBIDMedium, &b_eCBIDMedium);
   _tree->SetBranchAddress("eCBIDMediumNoIso", &eCBIDMediumNoIso, &b_eCBIDMediumNoIso);
   _tree->SetBranchAddress("eCBIDTight", &eCBIDTight, &b_eCBIDTight);
   _tree->SetBranchAddress("eCBIDTightNoIso", &eCBIDTightNoIso, &b_eCBIDTightNoIso);
   _tree->SetBranchAddress("eCBIDVeto", &eCBIDVeto, &b_eCBIDVeto);
   _tree->SetBranchAddress("eCBIDVetoNoIso", &eCBIDVetoNoIso, &b_eCBIDVetoNoIso);
   _tree->SetBranchAddress("eCharge", &eCharge, &b_eCharge);
   _tree->SetBranchAddress("eChargeIdLoose", &eChargeIdLoose, &b_eChargeIdLoose);
   _tree->SetBranchAddress("eChargeIdMed", &eChargeIdMed, &b_eChargeIdMed);
   _tree->SetBranchAddress("eChargeIdTight", &eChargeIdTight, &b_eChargeIdTight);
   _tree->SetBranchAddress("eComesFromHiggs", &eComesFromHiggs, &b_eComesFromHiggs);
   _tree->SetBranchAddress("eDPhiToPfMet_ElectronEnDown", &eDPhiToPfMet_ElectronEnDown, &b_eDPhiToPfMet_ElectronEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_ElectronEnUp", &eDPhiToPfMet_ElectronEnUp, &b_eDPhiToPfMet_ElectronEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_JetEnDown", &eDPhiToPfMet_JetEnDown, &b_eDPhiToPfMet_JetEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_JetEnUp", &eDPhiToPfMet_JetEnUp, &b_eDPhiToPfMet_JetEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_JetResDown", &eDPhiToPfMet_JetResDown, &b_eDPhiToPfMet_JetResDown);
   _tree->SetBranchAddress("eDPhiToPfMet_JetResUp", &eDPhiToPfMet_JetResUp, &b_eDPhiToPfMet_JetResUp);
   _tree->SetBranchAddress("eDPhiToPfMet_MuonEnDown", &eDPhiToPfMet_MuonEnDown, &b_eDPhiToPfMet_MuonEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_MuonEnUp", &eDPhiToPfMet_MuonEnUp, &b_eDPhiToPfMet_MuonEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_PhotonEnDown", &eDPhiToPfMet_PhotonEnDown, &b_eDPhiToPfMet_PhotonEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_PhotonEnUp", &eDPhiToPfMet_PhotonEnUp, &b_eDPhiToPfMet_PhotonEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_TauEnDown", &eDPhiToPfMet_TauEnDown, &b_eDPhiToPfMet_TauEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_TauEnUp", &eDPhiToPfMet_TauEnUp, &b_eDPhiToPfMet_TauEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_UnclusteredEnDown", &eDPhiToPfMet_UnclusteredEnDown, &b_eDPhiToPfMet_UnclusteredEnDown);
   _tree->SetBranchAddress("eDPhiToPfMet_UnclusteredEnUp", &eDPhiToPfMet_UnclusteredEnUp, &b_eDPhiToPfMet_UnclusteredEnUp);
   _tree->SetBranchAddress("eDPhiToPfMet_type1", &eDPhiToPfMet_type1, &b_eDPhiToPfMet_type1);
   _tree->SetBranchAddress("eE1x5", &eE1x5, &b_eE1x5);
   _tree->SetBranchAddress("eE2x5Max", &eE2x5Max, &b_eE2x5Max);
   _tree->SetBranchAddress("eE5x5", &eE5x5, &b_eE5x5);
   _tree->SetBranchAddress("eEcalIsoDR03", &eEcalIsoDR03, &b_eEcalIsoDR03);
   _tree->SetBranchAddress("eEffectiveArea2012Data", &eEffectiveArea2012Data, &b_eEffectiveArea2012Data);
   _tree->SetBranchAddress("eEffectiveAreaSpring15", &eEffectiveAreaSpring15, &b_eEffectiveAreaSpring15);
   _tree->SetBranchAddress("eEnergyError", &eEnergyError, &b_eEnergyError);
   _tree->SetBranchAddress("eEta", &eEta, &b_eEta);
   _tree->SetBranchAddress("eEta_ElectronEnDown", &eEta_ElectronEnDown, &b_eEta_ElectronEnDown);
   _tree->SetBranchAddress("eEta_ElectronEnUp", &eEta_ElectronEnUp, &b_eEta_ElectronEnUp);
   _tree->SetBranchAddress("eGenCharge", &eGenCharge, &b_eGenCharge);
   _tree->SetBranchAddress("eGenDirectPromptTauDecay", &eGenDirectPromptTauDecay, &b_eGenDirectPromptTauDecay);
   _tree->SetBranchAddress("eGenEnergy", &eGenEnergy, &b_eGenEnergy);
   _tree->SetBranchAddress("eGenEta", &eGenEta, &b_eGenEta);
   _tree->SetBranchAddress("eGenIsPrompt", &eGenIsPrompt, &b_eGenIsPrompt);
   _tree->SetBranchAddress("eGenMotherPdgId", &eGenMotherPdgId, &b_eGenMotherPdgId);
   _tree->SetBranchAddress("eGenParticle", &eGenParticle, &b_eGenParticle);
   _tree->SetBranchAddress("eGenPdgId", &eGenPdgId, &b_eGenPdgId);
   _tree->SetBranchAddress("eGenPhi", &eGenPhi, &b_eGenPhi);
   _tree->SetBranchAddress("eGenPrompt", &eGenPrompt, &b_eGenPrompt);
   _tree->SetBranchAddress("eGenPromptTauDecay", &eGenPromptTauDecay, &b_eGenPromptTauDecay);
   _tree->SetBranchAddress("eGenPt", &eGenPt, &b_eGenPt);
   _tree->SetBranchAddress("eGenTauDecay", &eGenTauDecay, &b_eGenTauDecay);
   _tree->SetBranchAddress("eGenVZ", &eGenVZ, &b_eGenVZ);
   _tree->SetBranchAddress("eGenVtxPVMatch", &eGenVtxPVMatch, &b_eGenVtxPVMatch);
   _tree->SetBranchAddress("eHadronicDepth1OverEm", &eHadronicDepth1OverEm, &b_eHadronicDepth1OverEm);
   _tree->SetBranchAddress("eHadronicDepth2OverEm", &eHadronicDepth2OverEm, &b_eHadronicDepth2OverEm);
   _tree->SetBranchAddress("eHadronicOverEM", &eHadronicOverEM, &b_eHadronicOverEM);
   _tree->SetBranchAddress("eHcalIsoDR03", &eHcalIsoDR03, &b_eHcalIsoDR03);
   _tree->SetBranchAddress("eIP3D", &eIP3D, &b_eIP3D);
   _tree->SetBranchAddress("eIP3DErr", &eIP3DErr, &b_eIP3DErr);
   _tree->SetBranchAddress("eIsoDB03", &eIsoDB03, &b_eIsoDB03);
   _tree->SetBranchAddress("eJetArea", &eJetArea, &b_eJetArea);
   _tree->SetBranchAddress("eJetBtag", &eJetBtag, &b_eJetBtag);
   _tree->SetBranchAddress("eJetEtaEtaMoment", &eJetEtaEtaMoment, &b_eJetEtaEtaMoment);
   _tree->SetBranchAddress("eJetEtaPhiMoment", &eJetEtaPhiMoment, &b_eJetEtaPhiMoment);
   _tree->SetBranchAddress("eJetEtaPhiSpread", &eJetEtaPhiSpread, &b_eJetEtaPhiSpread);
   _tree->SetBranchAddress("eJetHadronFlavour", &eJetHadronFlavour, &b_eJetHadronFlavour);
   _tree->SetBranchAddress("eJetPFCISVBtag", &eJetPFCISVBtag, &b_eJetPFCISVBtag);
   _tree->SetBranchAddress("eJetPartonFlavour", &eJetPartonFlavour, &b_eJetPartonFlavour);
   _tree->SetBranchAddress("eJetPhiPhiMoment", &eJetPhiPhiMoment, &b_eJetPhiPhiMoment);
   _tree->SetBranchAddress("eJetPt", &eJetPt, &b_eJetPt);
   _tree->SetBranchAddress("eLowestMll", &eLowestMll, &b_eLowestMll);
   _tree->SetBranchAddress("eMVANonTrigCategory", &eMVANonTrigCategory, &b_eMVANonTrigCategory);
   _tree->SetBranchAddress("eMVANonTrigID", &eMVANonTrigID, &b_eMVANonTrigID);
   _tree->SetBranchAddress("eMVANonTrigWP80", &eMVANonTrigWP80, &b_eMVANonTrigWP80);
   _tree->SetBranchAddress("eMVANonTrigWP90", &eMVANonTrigWP90, &b_eMVANonTrigWP90);
   _tree->SetBranchAddress("eMVATrigCategory", &eMVATrigCategory, &b_eMVATrigCategory);
   _tree->SetBranchAddress("eMVATrigID", &eMVATrigID, &b_eMVATrigID);
   _tree->SetBranchAddress("eMVATrigWP80", &eMVATrigWP80, &b_eMVATrigWP80);
   _tree->SetBranchAddress("eMVATrigWP90", &eMVATrigWP90, &b_eMVATrigWP90);
   _tree->SetBranchAddress("eMass", &eMass, &b_eMass);
   _tree->SetBranchAddress("eMatchesDoubleE", &eMatchesDoubleE, &b_eMatchesDoubleE);
   _tree->SetBranchAddress("eMatchesDoubleESingleMu", &eMatchesDoubleESingleMu, &b_eMatchesDoubleESingleMu);
   _tree->SetBranchAddress("eMatchesDoubleMuSingleE", &eMatchesDoubleMuSingleE, &b_eMatchesDoubleMuSingleE);
   _tree->SetBranchAddress("eMatchesEle22Filter", &eMatchesEle22Filter, &b_eMatchesEle22Filter);
   _tree->SetBranchAddress("eMatchesEle22Path", &eMatchesEle22Path, &b_eMatchesEle22Path);
   _tree->SetBranchAddress("eMatchesEle23Filter", &eMatchesEle23Filter, &b_eMatchesEle23Filter);
   _tree->SetBranchAddress("eMatchesEle23Path", &eMatchesEle23Path, &b_eMatchesEle23Path);
   _tree->SetBranchAddress("eMatchesEle25LooseFilter", &eMatchesEle25LooseFilter, &b_eMatchesEle25LooseFilter);
   _tree->SetBranchAddress("eMatchesEle25TightFilter", &eMatchesEle25TightFilter, &b_eMatchesEle25TightFilter);
   _tree->SetBranchAddress("eMatchesMu17Ele12Filter", &eMatchesMu17Ele12Filter, &b_eMatchesMu17Ele12Filter);
   _tree->SetBranchAddress("eMatchesMu17Ele12Path", &eMatchesMu17Ele12Path, &b_eMatchesMu17Ele12Path);
   _tree->SetBranchAddress("eMatchesMu23Ele12Filter", &eMatchesMu23Ele12Filter, &b_eMatchesMu23Ele12Filter);
   _tree->SetBranchAddress("eMatchesMu23Ele12Path", &eMatchesMu23Ele12Path, &b_eMatchesMu23Ele12Path);
   _tree->SetBranchAddress("eMatchesMu8Ele17Filter", &eMatchesMu8Ele17Filter, &b_eMatchesMu8Ele17Filter);
   _tree->SetBranchAddress("eMatchesMu8Ele17Path", &eMatchesMu8Ele17Path, &b_eMatchesMu8Ele17Path);
   _tree->SetBranchAddress("eMatchesMu8Ele23Filter", &eMatchesMu8Ele23Filter, &b_eMatchesMu8Ele23Filter);
   _tree->SetBranchAddress("eMatchesMu8Ele23Path", &eMatchesMu8Ele23Path, &b_eMatchesMu8Ele23Path);
   _tree->SetBranchAddress("eMatchesSingleE", &eMatchesSingleE, &b_eMatchesSingleE);
   _tree->SetBranchAddress("eMatchesSingleESingleMu", &eMatchesSingleESingleMu, &b_eMatchesSingleESingleMu);
   _tree->SetBranchAddress("eMatchesSingleE_leg1", &eMatchesSingleE_leg1, &b_eMatchesSingleE_leg1);
   _tree->SetBranchAddress("eMatchesSingleE_leg2", &eMatchesSingleE_leg2, &b_eMatchesSingleE_leg2);
   _tree->SetBranchAddress("eMatchesSingleMuSingleE", &eMatchesSingleMuSingleE, &b_eMatchesSingleMuSingleE);
   _tree->SetBranchAddress("eMatchesTripleE", &eMatchesTripleE, &b_eMatchesTripleE);
   _tree->SetBranchAddress("eMissingHits", &eMissingHits, &b_eMissingHits);
   _tree->SetBranchAddress("eMtToPfMet_ElectronEnDown", &eMtToPfMet_ElectronEnDown, &b_eMtToPfMet_ElectronEnDown);
   _tree->SetBranchAddress("eMtToPfMet_ElectronEnUp", &eMtToPfMet_ElectronEnUp, &b_eMtToPfMet_ElectronEnUp);
   _tree->SetBranchAddress("eMtToPfMet_JetEnDown", &eMtToPfMet_JetEnDown, &b_eMtToPfMet_JetEnDown);
   _tree->SetBranchAddress("eMtToPfMet_JetEnUp", &eMtToPfMet_JetEnUp, &b_eMtToPfMet_JetEnUp);
   _tree->SetBranchAddress("eMtToPfMet_JetResDown", &eMtToPfMet_JetResDown, &b_eMtToPfMet_JetResDown);
   _tree->SetBranchAddress("eMtToPfMet_JetResUp", &eMtToPfMet_JetResUp, &b_eMtToPfMet_JetResUp);
   _tree->SetBranchAddress("eMtToPfMet_MuonEnDown", &eMtToPfMet_MuonEnDown, &b_eMtToPfMet_MuonEnDown);
   _tree->SetBranchAddress("eMtToPfMet_MuonEnUp", &eMtToPfMet_MuonEnUp, &b_eMtToPfMet_MuonEnUp);
   _tree->SetBranchAddress("eMtToPfMet_PhotonEnDown", &eMtToPfMet_PhotonEnDown, &b_eMtToPfMet_PhotonEnDown);
   _tree->SetBranchAddress("eMtToPfMet_PhotonEnUp", &eMtToPfMet_PhotonEnUp, &b_eMtToPfMet_PhotonEnUp);
   _tree->SetBranchAddress("eMtToPfMet_Raw", &eMtToPfMet_Raw, &b_eMtToPfMet_Raw);
   _tree->SetBranchAddress("eMtToPfMet_TauEnDown", &eMtToPfMet_TauEnDown, &b_eMtToPfMet_TauEnDown);
   _tree->SetBranchAddress("eMtToPfMet_TauEnUp", &eMtToPfMet_TauEnUp, &b_eMtToPfMet_TauEnUp);
   _tree->SetBranchAddress("eMtToPfMet_UnclusteredEnDown", &eMtToPfMet_UnclusteredEnDown, &b_eMtToPfMet_UnclusteredEnDown);
   _tree->SetBranchAddress("eMtToPfMet_UnclusteredEnUp", &eMtToPfMet_UnclusteredEnUp, &b_eMtToPfMet_UnclusteredEnUp);
   _tree->SetBranchAddress("eMtToPfMet_type1", &eMtToPfMet_type1, &b_eMtToPfMet_type1);
   _tree->SetBranchAddress("eNearMuonVeto", &eNearMuonVeto, &b_eNearMuonVeto);
   _tree->SetBranchAddress("eNearestMuonDR", &eNearestMuonDR, &b_eNearestMuonDR);
   _tree->SetBranchAddress("eNearestZMass", &eNearestZMass, &b_eNearestZMass);
   _tree->SetBranchAddress("ePFChargedIso", &ePFChargedIso, &b_ePFChargedIso);
   _tree->SetBranchAddress("ePFNeutralIso", &ePFNeutralIso, &b_ePFNeutralIso);
   _tree->SetBranchAddress("ePFPUChargedIso", &ePFPUChargedIso, &b_ePFPUChargedIso);
   _tree->SetBranchAddress("ePFPhotonIso", &ePFPhotonIso, &b_ePFPhotonIso);
   _tree->SetBranchAddress("ePVDXY", &ePVDXY, &b_ePVDXY);
   _tree->SetBranchAddress("ePVDZ", &ePVDZ, &b_ePVDZ);
   _tree->SetBranchAddress("ePassesConversionVeto", &ePassesConversionVeto, &b_ePassesConversionVeto);
   _tree->SetBranchAddress("ePhi", &ePhi, &b_ePhi);
   _tree->SetBranchAddress("ePhi_ElectronEnDown", &ePhi_ElectronEnDown, &b_ePhi_ElectronEnDown);
   _tree->SetBranchAddress("ePhi_ElectronEnUp", &ePhi_ElectronEnUp, &b_ePhi_ElectronEnUp);
   _tree->SetBranchAddress("ePt", &ePt, &b_ePt);
   _tree->SetBranchAddress("ePt_ElectronEnDown", &ePt_ElectronEnDown, &b_ePt_ElectronEnDown);
   _tree->SetBranchAddress("ePt_ElectronEnUp", &ePt_ElectronEnUp, &b_ePt_ElectronEnUp);
   _tree->SetBranchAddress("eRank", &eRank, &b_eRank);
   _tree->SetBranchAddress("eRelIso", &eRelIso, &b_eRelIso);
   _tree->SetBranchAddress("eRelPFIsoDB", &eRelPFIsoDB, &b_eRelPFIsoDB);
   _tree->SetBranchAddress("eRelPFIsoRho", &eRelPFIsoRho, &b_eRelPFIsoRho);
   _tree->SetBranchAddress("eRho", &eRho, &b_eRho);
   _tree->SetBranchAddress("eSCEnergy", &eSCEnergy, &b_eSCEnergy);
   _tree->SetBranchAddress("eSCEta", &eSCEta, &b_eSCEta);
   _tree->SetBranchAddress("eSCEtaWidth", &eSCEtaWidth, &b_eSCEtaWidth);
   _tree->SetBranchAddress("eSCPhi", &eSCPhi, &b_eSCPhi);
   _tree->SetBranchAddress("eSCPhiWidth", &eSCPhiWidth, &b_eSCPhiWidth);
   _tree->SetBranchAddress("eSCPreshowerEnergy", &eSCPreshowerEnergy, &b_eSCPreshowerEnergy);
   _tree->SetBranchAddress("eSCRawEnergy", &eSCRawEnergy, &b_eSCRawEnergy);
   _tree->SetBranchAddress("eSIP2D", &eSIP2D, &b_eSIP2D);
   _tree->SetBranchAddress("eSIP3D", &eSIP3D, &b_eSIP3D);
   _tree->SetBranchAddress("eSigmaIEtaIEta", &eSigmaIEtaIEta, &b_eSigmaIEtaIEta);
   _tree->SetBranchAddress("eTrkIsoDR03", &eTrkIsoDR03, &b_eTrkIsoDR03);
   _tree->SetBranchAddress("eVZ", &eVZ, &b_eVZ);
   _tree->SetBranchAddress("eVetoMVAIso", &eVetoMVAIso, &b_eVetoMVAIso);
   _tree->SetBranchAddress("eVetoMVAIsoVtx", &eVetoMVAIsoVtx, &b_eVetoMVAIsoVtx);
   _tree->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   _tree->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("eWWLoose", &eWWLoose, &b_eWWLoose);
   _tree->SetBranchAddress("eZTTGenMatching", &eZTTGenMatching, &b_eZTTGenMatching);
   _tree->SetBranchAddress("e_t_CosThetaStar", &e_t_CosThetaStar, &b_e_t_CosThetaStar);
   _tree->SetBranchAddress("e_t_DPhi", &e_t_DPhi, &b_e_t_DPhi);
   _tree->SetBranchAddress("e_t_DR", &e_t_DR, &b_e_t_DR);
   _tree->SetBranchAddress("e_t_Eta", &e_t_Eta, &b_e_t_Eta);
   _tree->SetBranchAddress("e_t_Mass", &e_t_Mass, &b_e_t_Mass);
   _tree->SetBranchAddress("e_t_Mass_TauEnDown", &e_t_Mass_TauEnDown, &b_e_t_Mass_TauEnDown);
   _tree->SetBranchAddress("e_t_Mass_TauEnUp", &e_t_Mass_TauEnUp, &b_e_t_Mass_TauEnUp);
   _tree->SetBranchAddress("e_t_Mt", &e_t_Mt, &b_e_t_Mt);
   _tree->SetBranchAddress("e_t_MtTotal", &e_t_MtTotal, &b_e_t_MtTotal);
   _tree->SetBranchAddress("e_t_Mt_TauEnDown", &e_t_Mt_TauEnDown, &b_e_t_Mt_TauEnDown);
   _tree->SetBranchAddress("e_t_Mt_TauEnUp", &e_t_Mt_TauEnUp, &b_e_t_Mt_TauEnUp);
   _tree->SetBranchAddress("e_t_MvaMet", &e_t_MvaMet, &b_e_t_MvaMet);
   _tree->SetBranchAddress("e_t_MvaMetCovMatrix00", &e_t_MvaMetCovMatrix00, &b_e_t_MvaMetCovMatrix00);
   _tree->SetBranchAddress("e_t_MvaMetCovMatrix01", &e_t_MvaMetCovMatrix01, &b_e_t_MvaMetCovMatrix01);
   _tree->SetBranchAddress("e_t_MvaMetCovMatrix10", &e_t_MvaMetCovMatrix10, &b_e_t_MvaMetCovMatrix10);
   _tree->SetBranchAddress("e_t_MvaMetCovMatrix11", &e_t_MvaMetCovMatrix11, &b_e_t_MvaMetCovMatrix11);
   _tree->SetBranchAddress("e_t_MvaMetPhi", &e_t_MvaMetPhi, &b_e_t_MvaMetPhi);
   _tree->SetBranchAddress("e_t_PZeta", &e_t_PZeta, &b_e_t_PZeta);
   _tree->SetBranchAddress("e_t_PZetaLess0p85PZetaVis", &e_t_PZetaLess0p85PZetaVis, &b_e_t_PZetaLess0p85PZetaVis);
   _tree->SetBranchAddress("e_t_PZetaVis", &e_t_PZetaVis, &b_e_t_PZetaVis);
   _tree->SetBranchAddress("e_t_Phi", &e_t_Phi, &b_e_t_Phi);
   _tree->SetBranchAddress("e_t_Pt", &e_t_Pt, &b_e_t_Pt);
   _tree->SetBranchAddress("e_t_SS", &e_t_SS, &b_e_t_SS);
   _tree->SetBranchAddress("e_t_ToMETDPhi_Ty1", &e_t_ToMETDPhi_Ty1, &b_e_t_ToMETDPhi_Ty1);
   _tree->SetBranchAddress("e_t_collinearmass", &e_t_collinearmass, &b_e_t_collinearmass);
   _tree->SetBranchAddress("e_t_collinearmass_JetEnDown", &e_t_collinearmass_JetEnDown, &b_e_t_collinearmass_JetEnDown);
   _tree->SetBranchAddress("e_t_collinearmass_JetEnUp", &e_t_collinearmass_JetEnUp, &b_e_t_collinearmass_JetEnUp);
   _tree->SetBranchAddress("e_t_collinearmass_TauEnDown", &e_t_collinearmass_TauEnDown, &b_e_t_collinearmass_TauEnDown);
   _tree->SetBranchAddress("e_t_collinearmass_TauEnUp", &e_t_collinearmass_TauEnUp, &b_e_t_collinearmass_TauEnUp);
   _tree->SetBranchAddress("e_t_collinearmass_UnclusteredEnDown", &e_t_collinearmass_UnclusteredEnDown, &b_e_t_collinearmass_UnclusteredEnDown);
   _tree->SetBranchAddress("e_t_collinearmass_UnclusteredEnUp", &e_t_collinearmass_UnclusteredEnUp, &b_e_t_collinearmass_UnclusteredEnUp);
   _tree->SetBranchAddress("e_t_pt_tt", &e_t_pt_tt, &b_e_t_pt_tt);
   _tree->SetBranchAddress("edeltaEtaSuperClusterTrackAtVtx", &edeltaEtaSuperClusterTrackAtVtx, &b_edeltaEtaSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("edeltaPhiSuperClusterTrackAtVtx", &edeltaPhiSuperClusterTrackAtVtx, &b_edeltaPhiSuperClusterTrackAtVtx);
   _tree->SetBranchAddress("eeSuperClusterOverP", &eeSuperClusterOverP, &b_eeSuperClusterOverP);
   _tree->SetBranchAddress("eecalEnergy", &eecalEnergy, &b_eecalEnergy);
   _tree->SetBranchAddress("efBrem", &efBrem, &b_efBrem);
   _tree->SetBranchAddress("etrackMomentumAtVtxP", &etrackMomentumAtVtxP, &b_etrackMomentumAtVtxP);
   _tree->SetBranchAddress("evt", &evt, &b_evt);
   _tree->SetBranchAddress("genHTT", &genHTT, &b_genHTT);
   _tree->SetBranchAddress("genM", &genM, &b_genM);
   _tree->SetBranchAddress("genMass", &genMass, &b_genMass);
   _tree->SetBranchAddress("genpT", &genpT, &b_genpT);
   _tree->SetBranchAddress("genpX", &genpX, &b_genpX);
   _tree->SetBranchAddress("genpY", &genpY, &b_genpY);
   _tree->SetBranchAddress("isGtautau", &isGtautau, &b_isGtautau);
   _tree->SetBranchAddress("isWenu", &isWenu, &b_isWenu);
   _tree->SetBranchAddress("isWmunu", &isWmunu, &b_isWmunu);
   _tree->SetBranchAddress("isWtaunu", &isWtaunu, &b_isWtaunu);
   _tree->SetBranchAddress("isZee", &isZee, &b_isZee);
   _tree->SetBranchAddress("isZmumu", &isZmumu, &b_isZmumu);
   _tree->SetBranchAddress("isZtautau", &isZtautau, &b_isZtautau);
   _tree->SetBranchAddress("isdata", &isdata, &b_isdata);
   _tree->SetBranchAddress("j1csv", &j1csv, &b_j1csv);
   _tree->SetBranchAddress("j1eta", &j1eta, &b_j1eta);
   _tree->SetBranchAddress("j1hadronflavor", &j1hadronflavor, &b_j1hadronflavor);
   _tree->SetBranchAddress("j1partonflavor", &j1partonflavor, &b_j1partonflavor);
   _tree->SetBranchAddress("j1phi", &j1phi, &b_j1phi);
   _tree->SetBranchAddress("j1pt", &j1pt, &b_j1pt);
   _tree->SetBranchAddress("j1ptDown", &j1ptDown, &b_j1ptDown);
   _tree->SetBranchAddress("j1ptUp", &j1ptUp, &b_j1ptUp);
   _tree->SetBranchAddress("j1pu", &j1pu, &b_j1pu);
   _tree->SetBranchAddress("j1rawf", &j1rawf, &b_j1rawf);
   _tree->SetBranchAddress("j2csv", &j2csv, &b_j2csv);
   _tree->SetBranchAddress("j2eta", &j2eta, &b_j2eta);
   _tree->SetBranchAddress("j2hadronflavor", &j2hadronflavor, &b_j2hadronflavor);
   _tree->SetBranchAddress("j2partonflavor", &j2partonflavor, &b_j2partonflavor);
   _tree->SetBranchAddress("j2phi", &j2phi, &b_j2phi);
   _tree->SetBranchAddress("j2pt", &j2pt, &b_j2pt);
   _tree->SetBranchAddress("j2ptDown", &j2ptDown, &b_j2ptDown);
   _tree->SetBranchAddress("j2ptUp", &j2ptUp, &b_j2ptUp);
   _tree->SetBranchAddress("j2pu", &j2pu, &b_j2pu);
   _tree->SetBranchAddress("j2rawf", &j2rawf, &b_j2rawf);
   _tree->SetBranchAddress("jb1csv", &jb1csv, &b_jb1csv);
   _tree->SetBranchAddress("jb1eta", &jb1eta, &b_jb1eta);
   _tree->SetBranchAddress("jb1hadronflavor", &jb1hadronflavor, &b_jb1hadronflavor);
   _tree->SetBranchAddress("jb1partonflavor", &jb1partonflavor, &b_jb1partonflavor);
   _tree->SetBranchAddress("jb1phi", &jb1phi, &b_jb1phi);
   _tree->SetBranchAddress("jb1pt", &jb1pt, &b_jb1pt);
   _tree->SetBranchAddress("jb1ptDown", &jb1ptDown, &b_jb1ptDown);
   _tree->SetBranchAddress("jb1ptUp", &jb1ptUp, &b_jb1ptUp);
   _tree->SetBranchAddress("jb1pu", &jb1pu, &b_jb1pu);
   _tree->SetBranchAddress("jb1rawf", &jb1rawf, &b_jb1rawf);
   _tree->SetBranchAddress("jb2csv", &jb2csv, &b_jb2csv);
   _tree->SetBranchAddress("jb2eta", &jb2eta, &b_jb2eta);
   _tree->SetBranchAddress("jb2hadronflavor", &jb2hadronflavor, &b_jb2hadronflavor);
   _tree->SetBranchAddress("jb2partonflavor", &jb2partonflavor, &b_jb2partonflavor);
   _tree->SetBranchAddress("jb2phi", &jb2phi, &b_jb2phi);
   _tree->SetBranchAddress("jb2pt", &jb2pt, &b_jb2pt);
   _tree->SetBranchAddress("jb2ptDown", &jb2ptDown, &b_jb2ptDown);
   _tree->SetBranchAddress("jb2ptUp", &jb2ptUp, &b_jb2ptUp);
   _tree->SetBranchAddress("jb2pu", &jb2pu, &b_jb2pu);
   _tree->SetBranchAddress("jb2rawf", &jb2rawf, &b_jb2rawf);
   _tree->SetBranchAddress("jetVeto20", &jetVeto20, &b_jetVeto20);
   _tree->SetBranchAddress("jetVeto20_JetEnDown", &jetVeto20_JetEnDown, &b_jetVeto20_JetEnDown);
   _tree->SetBranchAddress("jetVeto20_JetEnUp", &jetVeto20_JetEnUp, &b_jetVeto20_JetEnUp);
   _tree->SetBranchAddress("jetVeto30", &jetVeto30, &b_jetVeto30);
   _tree->SetBranchAddress("jetVeto30_JetEnDown", &jetVeto30_JetEnDown, &b_jetVeto30_JetEnDown);
   _tree->SetBranchAddress("jetVeto30_JetEnUp", &jetVeto30_JetEnUp, &b_jetVeto30_JetEnUp);
   /*_tree->SetBranchAddress("lheweight0", &lheweight0, &b_lheweight0);
   _tree->SetBranchAddress("lheweight1", &lheweight1, &b_lheweight1);
   _tree->SetBranchAddress("lheweight10", &lheweight10, &b_lheweight10);
   _tree->SetBranchAddress("lheweight100", &lheweight100, &b_lheweight100);
   _tree->SetBranchAddress("lheweight101", &lheweight101, &b_lheweight101);
   _tree->SetBranchAddress("lheweight102", &lheweight102, &b_lheweight102);
   _tree->SetBranchAddress("lheweight103", &lheweight103, &b_lheweight103);
   _tree->SetBranchAddress("lheweight104", &lheweight104, &b_lheweight104);
   _tree->SetBranchAddress("lheweight105", &lheweight105, &b_lheweight105);
   _tree->SetBranchAddress("lheweight106", &lheweight106, &b_lheweight106);
   _tree->SetBranchAddress("lheweight107", &lheweight107, &b_lheweight107);
   _tree->SetBranchAddress("lheweight108", &lheweight108, &b_lheweight108);
   _tree->SetBranchAddress("lheweight109", &lheweight109, &b_lheweight109);
   _tree->SetBranchAddress("lheweight11", &lheweight11, &b_lheweight11);
   _tree->SetBranchAddress("lheweight110", &lheweight110, &b_lheweight110);
   _tree->SetBranchAddress("lheweight12", &lheweight12, &b_lheweight12);
   _tree->SetBranchAddress("lheweight13", &lheweight13, &b_lheweight13);
   _tree->SetBranchAddress("lheweight14", &lheweight14, &b_lheweight14);
   _tree->SetBranchAddress("lheweight15", &lheweight15, &b_lheweight15);
   _tree->SetBranchAddress("lheweight16", &lheweight16, &b_lheweight16);
   _tree->SetBranchAddress("lheweight17", &lheweight17, &b_lheweight17);
   _tree->SetBranchAddress("lheweight18", &lheweight18, &b_lheweight18);
   _tree->SetBranchAddress("lheweight19", &lheweight19, &b_lheweight19);
   _tree->SetBranchAddress("lheweight2", &lheweight2, &b_lheweight2);
   _tree->SetBranchAddress("lheweight20", &lheweight20, &b_lheweight20);
   _tree->SetBranchAddress("lheweight21", &lheweight21, &b_lheweight21);
   _tree->SetBranchAddress("lheweight22", &lheweight22, &b_lheweight22);
   _tree->SetBranchAddress("lheweight23", &lheweight23, &b_lheweight23);
   _tree->SetBranchAddress("lheweight24", &lheweight24, &b_lheweight24);
   _tree->SetBranchAddress("lheweight25", &lheweight25, &b_lheweight25);
   _tree->SetBranchAddress("lheweight26", &lheweight26, &b_lheweight26);
   _tree->SetBranchAddress("lheweight27", &lheweight27, &b_lheweight27);
   _tree->SetBranchAddress("lheweight28", &lheweight28, &b_lheweight28);
   _tree->SetBranchAddress("lheweight29", &lheweight29, &b_lheweight29);
   _tree->SetBranchAddress("lheweight3", &lheweight3, &b_lheweight3);
   _tree->SetBranchAddress("lheweight30", &lheweight30, &b_lheweight30);
   _tree->SetBranchAddress("lheweight31", &lheweight31, &b_lheweight31);
   _tree->SetBranchAddress("lheweight32", &lheweight32, &b_lheweight32);
   _tree->SetBranchAddress("lheweight33", &lheweight33, &b_lheweight33);
   _tree->SetBranchAddress("lheweight34", &lheweight34, &b_lheweight34);
   _tree->SetBranchAddress("lheweight35", &lheweight35, &b_lheweight35);
   _tree->SetBranchAddress("lheweight36", &lheweight36, &b_lheweight36);
   _tree->SetBranchAddress("lheweight37", &lheweight37, &b_lheweight37);
   _tree->SetBranchAddress("lheweight38", &lheweight38, &b_lheweight38);
   _tree->SetBranchAddress("lheweight39", &lheweight39, &b_lheweight39);
   _tree->SetBranchAddress("lheweight4", &lheweight4, &b_lheweight4);
   _tree->SetBranchAddress("lheweight40", &lheweight40, &b_lheweight40);
   _tree->SetBranchAddress("lheweight41", &lheweight41, &b_lheweight41);
   _tree->SetBranchAddress("lheweight42", &lheweight42, &b_lheweight42);
   _tree->SetBranchAddress("lheweight43", &lheweight43, &b_lheweight43);
   _tree->SetBranchAddress("lheweight44", &lheweight44, &b_lheweight44);
   _tree->SetBranchAddress("lheweight45", &lheweight45, &b_lheweight45);
   _tree->SetBranchAddress("lheweight46", &lheweight46, &b_lheweight46);
   _tree->SetBranchAddress("lheweight47", &lheweight47, &b_lheweight47);
   _tree->SetBranchAddress("lheweight48", &lheweight48, &b_lheweight48);
   _tree->SetBranchAddress("lheweight49", &lheweight49, &b_lheweight49);
   _tree->SetBranchAddress("lheweight5", &lheweight5, &b_lheweight5);
   _tree->SetBranchAddress("lheweight50", &lheweight50, &b_lheweight50);
   _tree->SetBranchAddress("lheweight51", &lheweight51, &b_lheweight51);
   _tree->SetBranchAddress("lheweight52", &lheweight52, &b_lheweight52);
   _tree->SetBranchAddress("lheweight53", &lheweight53, &b_lheweight53);
   _tree->SetBranchAddress("lheweight54", &lheweight54, &b_lheweight54);
   _tree->SetBranchAddress("lheweight55", &lheweight55, &b_lheweight55);
   _tree->SetBranchAddress("lheweight56", &lheweight56, &b_lheweight56);
   _tree->SetBranchAddress("lheweight57", &lheweight57, &b_lheweight57);
   _tree->SetBranchAddress("lheweight58", &lheweight58, &b_lheweight58);
   _tree->SetBranchAddress("lheweight59", &lheweight59, &b_lheweight59);
   _tree->SetBranchAddress("lheweight6", &lheweight6, &b_lheweight6);
   _tree->SetBranchAddress("lheweight60", &lheweight60, &b_lheweight60);
   _tree->SetBranchAddress("lheweight61", &lheweight61, &b_lheweight61);
   _tree->SetBranchAddress("lheweight62", &lheweight62, &b_lheweight62);
   _tree->SetBranchAddress("lheweight63", &lheweight63, &b_lheweight63);
   _tree->SetBranchAddress("lheweight64", &lheweight64, &b_lheweight64);
   _tree->SetBranchAddress("lheweight65", &lheweight65, &b_lheweight65);
   _tree->SetBranchAddress("lheweight66", &lheweight66, &b_lheweight66);
   _tree->SetBranchAddress("lheweight67", &lheweight67, &b_lheweight67);
   _tree->SetBranchAddress("lheweight68", &lheweight68, &b_lheweight68);
   _tree->SetBranchAddress("lheweight69", &lheweight69, &b_lheweight69);
   _tree->SetBranchAddress("lheweight7", &lheweight7, &b_lheweight7);
   _tree->SetBranchAddress("lheweight70", &lheweight70, &b_lheweight70);
   _tree->SetBranchAddress("lheweight71", &lheweight71, &b_lheweight71);
   _tree->SetBranchAddress("lheweight72", &lheweight72, &b_lheweight72);
   _tree->SetBranchAddress("lheweight73", &lheweight73, &b_lheweight73);
   _tree->SetBranchAddress("lheweight74", &lheweight74, &b_lheweight74);
   _tree->SetBranchAddress("lheweight75", &lheweight75, &b_lheweight75);
   _tree->SetBranchAddress("lheweight76", &lheweight76, &b_lheweight76);
   _tree->SetBranchAddress("lheweight77", &lheweight77, &b_lheweight77);
   _tree->SetBranchAddress("lheweight78", &lheweight78, &b_lheweight78);
   _tree->SetBranchAddress("lheweight79", &lheweight79, &b_lheweight79);
   _tree->SetBranchAddress("lheweight8", &lheweight8, &b_lheweight8);
   _tree->SetBranchAddress("lheweight80", &lheweight80, &b_lheweight80);
   _tree->SetBranchAddress("lheweight81", &lheweight81, &b_lheweight81);
   _tree->SetBranchAddress("lheweight82", &lheweight82, &b_lheweight82);
   _tree->SetBranchAddress("lheweight83", &lheweight83, &b_lheweight83);
   _tree->SetBranchAddress("lheweight84", &lheweight84, &b_lheweight84);
   _tree->SetBranchAddress("lheweight85", &lheweight85, &b_lheweight85);
   _tree->SetBranchAddress("lheweight86", &lheweight86, &b_lheweight86);
   _tree->SetBranchAddress("lheweight87", &lheweight87, &b_lheweight87);
   _tree->SetBranchAddress("lheweight88", &lheweight88, &b_lheweight88);
   _tree->SetBranchAddress("lheweight89", &lheweight89, &b_lheweight89);
   _tree->SetBranchAddress("lheweight9", &lheweight9, &b_lheweight9);
   _tree->SetBranchAddress("lheweight90", &lheweight90, &b_lheweight90);
   _tree->SetBranchAddress("lheweight91", &lheweight91, &b_lheweight91);
   _tree->SetBranchAddress("lheweight92", &lheweight92, &b_lheweight92);
   _tree->SetBranchAddress("lheweight93", &lheweight93, &b_lheweight93);
   _tree->SetBranchAddress("lheweight94", &lheweight94, &b_lheweight94);
   _tree->SetBranchAddress("lheweight95", &lheweight95, &b_lheweight95);
   _tree->SetBranchAddress("lheweight96", &lheweight96, &b_lheweight96);
   _tree->SetBranchAddress("lheweight97", &lheweight97, &b_lheweight97);
   _tree->SetBranchAddress("lheweight98", &lheweight98, &b_lheweight98);
   _tree->SetBranchAddress("lheweight99", &lheweight99, &b_lheweight99);*/
   _tree->SetBranchAddress("lumi", &lumi, &b_lumi);
   _tree->SetBranchAddress("metSig", &metSig, &b_metSig);
   _tree->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   _tree->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   _tree->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   _tree->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   _tree->SetBranchAddress("muGlbIsoVetoPt10", &muGlbIsoVetoPt10, &b_muGlbIsoVetoPt10);
   _tree->SetBranchAddress("muVetoPt15IsoIdVtx", &muVetoPt15IsoIdVtx, &b_muVetoPt15IsoIdVtx);
   _tree->SetBranchAddress("muVetoPt5", &muVetoPt5, &b_muVetoPt5);
   _tree->SetBranchAddress("muVetoPt5IsoIdVtx", &muVetoPt5IsoIdVtx, &b_muVetoPt5IsoIdVtx);
   _tree->SetBranchAddress("muVetoZTTp001dxyz", &muVetoZTTp001dxyz, &b_muVetoZTTp001dxyz);
   _tree->SetBranchAddress("muVetoZTTp001dxyzR0", &muVetoZTTp001dxyzR0, &b_muVetoZTTp001dxyzR0);
   _tree->SetBranchAddress("nTruePU", &nTruePU, &b_nTruePU);
   _tree->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   _tree->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   _tree->SetBranchAddress("processID", &processID, &b_processID);
   _tree->SetBranchAddress("puppiMetEt", &puppiMetEt, &b_puppiMetEt);
   _tree->SetBranchAddress("puppiMetPhi", &puppiMetPhi, &b_puppiMetPhi);
   _tree->SetBranchAddress("pvChi2", &pvChi2, &b_pvChi2);
   _tree->SetBranchAddress("pvDX", &pvDX, &b_pvDX);
   _tree->SetBranchAddress("pvDY", &pvDY, &b_pvDY);
   _tree->SetBranchAddress("pvDZ", &pvDZ, &b_pvDZ);
   _tree->SetBranchAddress("pvIsFake", &pvIsFake, &b_pvIsFake);
   _tree->SetBranchAddress("pvIsValid", &pvIsValid, &b_pvIsValid);
   _tree->SetBranchAddress("pvNormChi2", &pvNormChi2, &b_pvNormChi2);
   _tree->SetBranchAddress("pvRho", &pvRho, &b_pvRho);
   _tree->SetBranchAddress("pvX", &pvX, &b_pvX);
   _tree->SetBranchAddress("pvY", &pvY, &b_pvY);
   _tree->SetBranchAddress("pvZ", &pvZ, &b_pvZ);
   _tree->SetBranchAddress("pvndof", &pvndof, &b_pvndof);
   _tree->SetBranchAddress("raw_pfMetEt", &raw_pfMetEt, &b_raw_pfMetEt);
   _tree->SetBranchAddress("raw_pfMetPhi", &raw_pfMetPhi, &b_raw_pfMetPhi);
   _tree->SetBranchAddress("recoilDaught", &recoilDaught, &b_recoilDaught);
   _tree->SetBranchAddress("recoilWithMet", &recoilWithMet, &b_recoilWithMet);
   _tree->SetBranchAddress("rho", &rho, &b_rho);
   _tree->SetBranchAddress("run", &run, &b_run);
   _tree->SetBranchAddress("singleE17SingleMu8Group", &singleE17SingleMu8Group, &b_singleE17SingleMu8Group);
   _tree->SetBranchAddress("singleE17SingleMu8Pass", &singleE17SingleMu8Pass, &b_singleE17SingleMu8Pass);
   _tree->SetBranchAddress("singleE17SingleMu8Prescale", &singleE17SingleMu8Prescale, &b_singleE17SingleMu8Prescale);
   _tree->SetBranchAddress("singleE20SingleTau28Group", &singleE20SingleTau28Group, &b_singleE20SingleTau28Group);
   _tree->SetBranchAddress("singleE20SingleTau28Pass", &singleE20SingleTau28Pass, &b_singleE20SingleTau28Pass);
   _tree->SetBranchAddress("singleE20SingleTau28Prescale", &singleE20SingleTau28Prescale, &b_singleE20SingleTau28Prescale);
   _tree->SetBranchAddress("singleE22SingleTau20SingleL1Group", &singleE22SingleTau20SingleL1Group, &b_singleE22SingleTau20SingleL1Group);
   _tree->SetBranchAddress("singleE22SingleTau20SingleL1Pass", &singleE22SingleTau20SingleL1Pass, &b_singleE22SingleTau20SingleL1Pass);
   _tree->SetBranchAddress("singleE22SingleTau20SingleL1Prescale", &singleE22SingleTau20SingleL1Prescale, &b_singleE22SingleTau20SingleL1Prescale);
   _tree->SetBranchAddress("singleE22SingleTau29Group", &singleE22SingleTau29Group, &b_singleE22SingleTau29Group);
   _tree->SetBranchAddress("singleE22SingleTau29Pass", &singleE22SingleTau29Pass, &b_singleE22SingleTau29Pass);
   _tree->SetBranchAddress("singleE22SingleTau29Prescale", &singleE22SingleTau29Prescale, &b_singleE22SingleTau29Prescale);
   _tree->SetBranchAddress("singleE23SingleMu8Group", &singleE23SingleMu8Group, &b_singleE23SingleMu8Group);
   _tree->SetBranchAddress("singleE23SingleMu8Pass", &singleE23SingleMu8Pass, &b_singleE23SingleMu8Pass);
   _tree->SetBranchAddress("singleE23SingleMu8Prescale", &singleE23SingleMu8Prescale, &b_singleE23SingleMu8Prescale);
   _tree->SetBranchAddress("singleE24SingleTau20Group", &singleE24SingleTau20Group, &b_singleE24SingleTau20Group);
   _tree->SetBranchAddress("singleE24SingleTau20Pass", &singleE24SingleTau20Pass, &b_singleE24SingleTau20Pass);
   _tree->SetBranchAddress("singleE24SingleTau20Prescale", &singleE24SingleTau20Prescale, &b_singleE24SingleTau20Prescale);
   _tree->SetBranchAddress("singleE24SingleTau20SingleL1Group", &singleE24SingleTau20SingleL1Group, &b_singleE24SingleTau20SingleL1Group);
   _tree->SetBranchAddress("singleE24SingleTau20SingleL1Pass", &singleE24SingleTau20SingleL1Pass, &b_singleE24SingleTau20SingleL1Pass);
   _tree->SetBranchAddress("singleE24SingleTau20SingleL1Prescale", &singleE24SingleTau20SingleL1Prescale, &b_singleE24SingleTau20SingleL1Prescale);
   _tree->SetBranchAddress("singleE24SingleTau30Group", &singleE24SingleTau30Group, &b_singleE24SingleTau30Group);
   _tree->SetBranchAddress("singleE24SingleTau30Pass", &singleE24SingleTau30Pass, &b_singleE24SingleTau30Pass);
   _tree->SetBranchAddress("singleE24SingleTau30Prescale", &singleE24SingleTau30Prescale, &b_singleE24SingleTau30Prescale);
   _tree->SetBranchAddress("singleE25eta2p1TightGroup", &singleE25eta2p1TightGroup, &b_singleE25eta2p1TightGroup);
   _tree->SetBranchAddress("singleE25eta2p1TightPass", &singleE25eta2p1TightPass, &b_singleE25eta2p1TightPass);
   _tree->SetBranchAddress("singleE25eta2p1TightPrescale", &singleE25eta2p1TightPrescale, &b_singleE25eta2p1TightPrescale);
   _tree->SetBranchAddress("singleE27SingleTau20SingleL1Group", &singleE27SingleTau20SingleL1Group, &b_singleE27SingleTau20SingleL1Group);
   _tree->SetBranchAddress("singleE27SingleTau20SingleL1Pass", &singleE27SingleTau20SingleL1Pass, &b_singleE27SingleTau20SingleL1Pass);
   _tree->SetBranchAddress("singleE27SingleTau20SingleL1Prescale", &singleE27SingleTau20SingleL1Prescale, &b_singleE27SingleTau20SingleL1Prescale);
   _tree->SetBranchAddress("singleE32SingleTau20SingleL1Group", &singleE32SingleTau20SingleL1Group, &b_singleE32SingleTau20SingleL1Group);
   _tree->SetBranchAddress("singleE32SingleTau20SingleL1Pass", &singleE32SingleTau20SingleL1Pass, &b_singleE32SingleTau20SingleL1Pass);
   _tree->SetBranchAddress("singleE32SingleTau20SingleL1Prescale", &singleE32SingleTau20SingleL1Prescale, &b_singleE32SingleTau20SingleL1Prescale);
   _tree->SetBranchAddress("singleE36SingleTau30Group", &singleE36SingleTau30Group, &b_singleE36SingleTau30Group);
   _tree->SetBranchAddress("singleE36SingleTau30Pass", &singleE36SingleTau30Pass, &b_singleE36SingleTau30Pass);
   _tree->SetBranchAddress("singleE36SingleTau30Prescale", &singleE36SingleTau30Prescale, &b_singleE36SingleTau30Prescale);
   _tree->SetBranchAddress("singleEGroup", &singleEGroup, &b_singleEGroup);
   _tree->SetBranchAddress("singleEPass", &singleEPass, &b_singleEPass);
   _tree->SetBranchAddress("singleEPrescale", &singleEPrescale, &b_singleEPrescale);
   _tree->SetBranchAddress("singleESingleMuGroup", &singleESingleMuGroup, &b_singleESingleMuGroup);
   _tree->SetBranchAddress("singleESingleMuPass", &singleESingleMuPass, &b_singleESingleMuPass);
   _tree->SetBranchAddress("singleESingleMuPrescale", &singleESingleMuPrescale, &b_singleESingleMuPrescale);
   _tree->SetBranchAddress("singleE_leg1Group", &singleE_leg1Group, &b_singleE_leg1Group);
   _tree->SetBranchAddress("singleE_leg1Pass", &singleE_leg1Pass, &b_singleE_leg1Pass);
   _tree->SetBranchAddress("singleE_leg1Prescale", &singleE_leg1Prescale, &b_singleE_leg1Prescale);
   _tree->SetBranchAddress("singleE_leg2Group", &singleE_leg2Group, &b_singleE_leg2Group);
   _tree->SetBranchAddress("singleE_leg2Pass", &singleE_leg2Pass, &b_singleE_leg2Pass);
   _tree->SetBranchAddress("singleE_leg2Prescale", &singleE_leg2Prescale, &b_singleE_leg2Prescale);
   _tree->SetBranchAddress("singleEeta2p1LooseGroup", &singleEeta2p1LooseGroup, &b_singleEeta2p1LooseGroup);
   _tree->SetBranchAddress("singleEeta2p1LoosePass", &singleEeta2p1LoosePass, &b_singleEeta2p1LoosePass);
   _tree->SetBranchAddress("singleEeta2p1LoosePrescale", &singleEeta2p1LoosePrescale, &b_singleEeta2p1LoosePrescale);
   _tree->SetBranchAddress("singleIsoMu20Group", &singleIsoMu20Group, &b_singleIsoMu20Group);
   _tree->SetBranchAddress("singleIsoMu20Pass", &singleIsoMu20Pass, &b_singleIsoMu20Pass);
   _tree->SetBranchAddress("singleIsoMu20Prescale", &singleIsoMu20Prescale, &b_singleIsoMu20Prescale);
   _tree->SetBranchAddress("singleIsoMu22Group", &singleIsoMu22Group, &b_singleIsoMu22Group);
   _tree->SetBranchAddress("singleIsoMu22Pass", &singleIsoMu22Pass, &b_singleIsoMu22Pass);
   _tree->SetBranchAddress("singleIsoMu22Prescale", &singleIsoMu22Prescale, &b_singleIsoMu22Prescale);
   _tree->SetBranchAddress("singleIsoMu24Group", &singleIsoMu24Group, &b_singleIsoMu24Group);
   _tree->SetBranchAddress("singleIsoMu24Pass", &singleIsoMu24Pass, &b_singleIsoMu24Pass);
   _tree->SetBranchAddress("singleIsoMu24Prescale", &singleIsoMu24Prescale, &b_singleIsoMu24Prescale);
   _tree->SetBranchAddress("singleIsoMu27Group", &singleIsoMu27Group, &b_singleIsoMu27Group);
   _tree->SetBranchAddress("singleIsoMu27Pass", &singleIsoMu27Pass, &b_singleIsoMu27Pass);
   _tree->SetBranchAddress("singleIsoMu27Prescale", &singleIsoMu27Prescale, &b_singleIsoMu27Prescale);
   _tree->SetBranchAddress("singleIsoTkMu20Group", &singleIsoTkMu20Group, &b_singleIsoTkMu20Group);
   _tree->SetBranchAddress("singleIsoTkMu20Pass", &singleIsoTkMu20Pass, &b_singleIsoTkMu20Pass);
   _tree->SetBranchAddress("singleIsoTkMu20Prescale", &singleIsoTkMu20Prescale, &b_singleIsoTkMu20Prescale);
   _tree->SetBranchAddress("singleIsoTkMu22Group", &singleIsoTkMu22Group, &b_singleIsoTkMu22Group);
   _tree->SetBranchAddress("singleIsoTkMu22Pass", &singleIsoTkMu22Pass, &b_singleIsoTkMu22Pass);
   _tree->SetBranchAddress("singleIsoTkMu22Prescale", &singleIsoTkMu22Prescale, &b_singleIsoTkMu22Prescale);
   _tree->SetBranchAddress("singleMu17SingleE12Group", &singleMu17SingleE12Group, &b_singleMu17SingleE12Group);
   _tree->SetBranchAddress("singleMu17SingleE12Pass", &singleMu17SingleE12Pass, &b_singleMu17SingleE12Pass);
   _tree->SetBranchAddress("singleMu17SingleE12Prescale", &singleMu17SingleE12Prescale, &b_singleMu17SingleE12Prescale);
   _tree->SetBranchAddress("singleMu23SingleE12Group", &singleMu23SingleE12Group, &b_singleMu23SingleE12Group);
   _tree->SetBranchAddress("singleMu23SingleE12Pass", &singleMu23SingleE12Pass, &b_singleMu23SingleE12Pass);
   _tree->SetBranchAddress("singleMu23SingleE12Prescale", &singleMu23SingleE12Prescale, &b_singleMu23SingleE12Prescale);
   _tree->SetBranchAddress("singleMuGroup", &singleMuGroup, &b_singleMuGroup);
   _tree->SetBranchAddress("singleMuPass", &singleMuPass, &b_singleMuPass);
   _tree->SetBranchAddress("singleMuPrescale", &singleMuPrescale, &b_singleMuPrescale);
   _tree->SetBranchAddress("singleMuSingleEGroup", &singleMuSingleEGroup, &b_singleMuSingleEGroup);
   _tree->SetBranchAddress("singleMuSingleEPass", &singleMuSingleEPass, &b_singleMuSingleEPass);
   _tree->SetBranchAddress("singleMuSingleEPrescale", &singleMuSingleEPrescale, &b_singleMuSingleEPrescale);
   _tree->SetBranchAddress("singleMu_leg1Group", &singleMu_leg1Group, &b_singleMu_leg1Group);
   _tree->SetBranchAddress("singleMu_leg1Pass", &singleMu_leg1Pass, &b_singleMu_leg1Pass);
   _tree->SetBranchAddress("singleMu_leg1Prescale", &singleMu_leg1Prescale, &b_singleMu_leg1Prescale);
   _tree->SetBranchAddress("singleMu_leg1_noisoGroup", &singleMu_leg1_noisoGroup, &b_singleMu_leg1_noisoGroup);
   _tree->SetBranchAddress("singleMu_leg1_noisoPass", &singleMu_leg1_noisoPass, &b_singleMu_leg1_noisoPass);
   _tree->SetBranchAddress("singleMu_leg1_noisoPrescale", &singleMu_leg1_noisoPrescale, &b_singleMu_leg1_noisoPrescale);
   _tree->SetBranchAddress("singleMu_leg2Group", &singleMu_leg2Group, &b_singleMu_leg2Group);
   _tree->SetBranchAddress("singleMu_leg2Pass", &singleMu_leg2Pass, &b_singleMu_leg2Pass);
   _tree->SetBranchAddress("singleMu_leg2Prescale", &singleMu_leg2Prescale, &b_singleMu_leg2Prescale);
   _tree->SetBranchAddress("singleMu_leg2_noisoGroup", &singleMu_leg2_noisoGroup, &b_singleMu_leg2_noisoGroup);
   _tree->SetBranchAddress("singleMu_leg2_noisoPass", &singleMu_leg2_noisoPass, &b_singleMu_leg2_noisoPass);
   _tree->SetBranchAddress("singleMu_leg2_noisoPrescale", &singleMu_leg2_noisoPrescale, &b_singleMu_leg2_noisoPrescale);
   _tree->SetBranchAddress("tAbsEta", &tAbsEta, &b_tAbsEta);
   _tree->SetBranchAddress("tAgainstElectronLooseMVA6", &tAgainstElectronLooseMVA6, &b_tAgainstElectronLooseMVA6);
   _tree->SetBranchAddress("tAgainstElectronMVA6Raw", &tAgainstElectronMVA6Raw, &b_tAgainstElectronMVA6Raw);
   _tree->SetBranchAddress("tAgainstElectronMVA6category", &tAgainstElectronMVA6category, &b_tAgainstElectronMVA6category);
   _tree->SetBranchAddress("tAgainstElectronMediumMVA6", &tAgainstElectronMediumMVA6, &b_tAgainstElectronMediumMVA6);
   _tree->SetBranchAddress("tAgainstElectronTightMVA6", &tAgainstElectronTightMVA6, &b_tAgainstElectronTightMVA6);
   _tree->SetBranchAddress("tAgainstElectronVLooseMVA6", &tAgainstElectronVLooseMVA6, &b_tAgainstElectronVLooseMVA6);
   _tree->SetBranchAddress("tAgainstElectronVTightMVA6", &tAgainstElectronVTightMVA6, &b_tAgainstElectronVTightMVA6);
   _tree->SetBranchAddress("tAgainstMuonLoose3", &tAgainstMuonLoose3, &b_tAgainstMuonLoose3);
   _tree->SetBranchAddress("tAgainstMuonTight3", &tAgainstMuonTight3, &b_tAgainstMuonTight3);
   _tree->SetBranchAddress("tByCombinedIsolationDeltaBetaCorrRaw3Hits", &tByCombinedIsolationDeltaBetaCorrRaw3Hits, &b_tByCombinedIsolationDeltaBetaCorrRaw3Hits);
   _tree->SetBranchAddress("tByIsolationMVArun2v1DBdR03oldDMwLTraw", &tByIsolationMVArun2v1DBdR03oldDMwLTraw, &b_tByIsolationMVArun2v1DBdR03oldDMwLTraw);
   _tree->SetBranchAddress("tByIsolationMVArun2v1DBnewDMwLTraw", &tByIsolationMVArun2v1DBnewDMwLTraw, &b_tByIsolationMVArun2v1DBnewDMwLTraw);
   _tree->SetBranchAddress("tByIsolationMVArun2v1DBoldDMwLTraw", &tByIsolationMVArun2v1DBoldDMwLTraw, &b_tByIsolationMVArun2v1DBoldDMwLTraw);
   _tree->SetBranchAddress("tByIsolationMVArun2v1PWdR03oldDMwLTraw", &tByIsolationMVArun2v1PWdR03oldDMwLTraw, &b_tByIsolationMVArun2v1PWdR03oldDMwLTraw);
   _tree->SetBranchAddress("tByIsolationMVArun2v1PWnewDMwLTraw", &tByIsolationMVArun2v1PWnewDMwLTraw, &b_tByIsolationMVArun2v1PWnewDMwLTraw);
   _tree->SetBranchAddress("tByIsolationMVArun2v1PWoldDMwLTraw", &tByIsolationMVArun2v1PWoldDMwLTraw, &b_tByIsolationMVArun2v1PWoldDMwLTraw);
   _tree->SetBranchAddress("tByLooseCombinedIsolationDeltaBetaCorr3Hits", &tByLooseCombinedIsolationDeltaBetaCorr3Hits, &b_tByLooseCombinedIsolationDeltaBetaCorr3Hits);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1DBdR03oldDMwLT", &tByLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_tByLooseIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1DBnewDMwLT", &tByLooseIsolationMVArun2v1DBnewDMwLT, &b_tByLooseIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1DBoldDMwLT", &tByLooseIsolationMVArun2v1DBoldDMwLT, &b_tByLooseIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1PWdR03oldDMwLT", &tByLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_tByLooseIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1PWnewDMwLT", &tByLooseIsolationMVArun2v1PWnewDMwLT, &b_tByLooseIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByLooseIsolationMVArun2v1PWoldDMwLT", &tByLooseIsolationMVArun2v1PWoldDMwLT, &b_tByLooseIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tByMediumCombinedIsolationDeltaBetaCorr3Hits", &tByMediumCombinedIsolationDeltaBetaCorr3Hits, &b_tByMediumCombinedIsolationDeltaBetaCorr3Hits);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1DBdR03oldDMwLT", &tByMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_tByMediumIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1DBnewDMwLT", &tByMediumIsolationMVArun2v1DBnewDMwLT, &b_tByMediumIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1DBoldDMwLT", &tByMediumIsolationMVArun2v1DBoldDMwLT, &b_tByMediumIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1PWdR03oldDMwLT", &tByMediumIsolationMVArun2v1PWdR03oldDMwLT, &b_tByMediumIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1PWnewDMwLT", &tByMediumIsolationMVArun2v1PWnewDMwLT, &b_tByMediumIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByMediumIsolationMVArun2v1PWoldDMwLT", &tByMediumIsolationMVArun2v1PWoldDMwLT, &b_tByMediumIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tByPhotonPtSumOutsideSignalCone", &tByPhotonPtSumOutsideSignalCone, &b_tByPhotonPtSumOutsideSignalCone);
   _tree->SetBranchAddress("tByTightCombinedIsolationDeltaBetaCorr3Hits", &tByTightCombinedIsolationDeltaBetaCorr3Hits, &b_tByTightCombinedIsolationDeltaBetaCorr3Hits);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1DBdR03oldDMwLT", &tByTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByTightIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1DBnewDMwLT", &tByTightIsolationMVArun2v1DBnewDMwLT, &b_tByTightIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1DBoldDMwLT", &tByTightIsolationMVArun2v1DBoldDMwLT, &b_tByTightIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1PWdR03oldDMwLT", &tByTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByTightIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1PWnewDMwLT", &tByTightIsolationMVArun2v1PWnewDMwLT, &b_tByTightIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByTightIsolationMVArun2v1PWoldDMwLT", &tByTightIsolationMVArun2v1PWoldDMwLT, &b_tByTightIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1DBdR03oldDMwLT", &tByVLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVLooseIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1DBnewDMwLT", &tByVLooseIsolationMVArun2v1DBnewDMwLT, &b_tByVLooseIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1DBoldDMwLT", &tByVLooseIsolationMVArun2v1DBoldDMwLT, &b_tByVLooseIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1PWdR03oldDMwLT", &tByVLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVLooseIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1PWnewDMwLT", &tByVLooseIsolationMVArun2v1PWnewDMwLT, &b_tByVLooseIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByVLooseIsolationMVArun2v1PWoldDMwLT", &tByVLooseIsolationMVArun2v1PWoldDMwLT, &b_tByVLooseIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1DBdR03oldDMwLT", &tByVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVTightIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1DBnewDMwLT", &tByVTightIsolationMVArun2v1DBnewDMwLT, &b_tByVTightIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1DBoldDMwLT", &tByVTightIsolationMVArun2v1DBoldDMwLT, &b_tByVTightIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1PWdR03oldDMwLT", &tByVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVTightIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1PWnewDMwLT", &tByVTightIsolationMVArun2v1PWnewDMwLT, &b_tByVTightIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByVTightIsolationMVArun2v1PWoldDMwLT", &tByVTightIsolationMVArun2v1PWoldDMwLT, &b_tByVTightIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1DBdR03oldDMwLT", &tByVVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVVTightIsolationMVArun2v1DBdR03oldDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1DBnewDMwLT", &tByVVTightIsolationMVArun2v1DBnewDMwLT, &b_tByVVTightIsolationMVArun2v1DBnewDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1DBoldDMwLT", &tByVVTightIsolationMVArun2v1DBoldDMwLT, &b_tByVVTightIsolationMVArun2v1DBoldDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1PWdR03oldDMwLT", &tByVVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVVTightIsolationMVArun2v1PWdR03oldDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1PWnewDMwLT", &tByVVTightIsolationMVArun2v1PWnewDMwLT, &b_tByVVTightIsolationMVArun2v1PWnewDMwLT);
   _tree->SetBranchAddress("tByVVTightIsolationMVArun2v1PWoldDMwLT", &tByVVTightIsolationMVArun2v1PWoldDMwLT, &b_tByVVTightIsolationMVArun2v1PWoldDMwLT);
   _tree->SetBranchAddress("tCharge", &tCharge, &b_tCharge);
   _tree->SetBranchAddress("tChargedIsoPtSum", &tChargedIsoPtSum, &b_tChargedIsoPtSum);
   _tree->SetBranchAddress("tChargedIsoPtSumdR03", &tChargedIsoPtSumdR03, &b_tChargedIsoPtSumdR03);
   _tree->SetBranchAddress("tComesFromHiggs", &tComesFromHiggs, &b_tComesFromHiggs);
   _tree->SetBranchAddress("tDPhiToPfMet_ElectronEnDown", &tDPhiToPfMet_ElectronEnDown, &b_tDPhiToPfMet_ElectronEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_ElectronEnUp", &tDPhiToPfMet_ElectronEnUp, &b_tDPhiToPfMet_ElectronEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_JetEnDown", &tDPhiToPfMet_JetEnDown, &b_tDPhiToPfMet_JetEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_JetEnUp", &tDPhiToPfMet_JetEnUp, &b_tDPhiToPfMet_JetEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_JetResDown", &tDPhiToPfMet_JetResDown, &b_tDPhiToPfMet_JetResDown);
   _tree->SetBranchAddress("tDPhiToPfMet_JetResUp", &tDPhiToPfMet_JetResUp, &b_tDPhiToPfMet_JetResUp);
   _tree->SetBranchAddress("tDPhiToPfMet_MuonEnDown", &tDPhiToPfMet_MuonEnDown, &b_tDPhiToPfMet_MuonEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_MuonEnUp", &tDPhiToPfMet_MuonEnUp, &b_tDPhiToPfMet_MuonEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_PhotonEnDown", &tDPhiToPfMet_PhotonEnDown, &b_tDPhiToPfMet_PhotonEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_PhotonEnUp", &tDPhiToPfMet_PhotonEnUp, &b_tDPhiToPfMet_PhotonEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_TauEnDown", &tDPhiToPfMet_TauEnDown, &b_tDPhiToPfMet_TauEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_TauEnUp", &tDPhiToPfMet_TauEnUp, &b_tDPhiToPfMet_TauEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_UnclusteredEnDown", &tDPhiToPfMet_UnclusteredEnDown, &b_tDPhiToPfMet_UnclusteredEnDown);
   _tree->SetBranchAddress("tDPhiToPfMet_UnclusteredEnUp", &tDPhiToPfMet_UnclusteredEnUp, &b_tDPhiToPfMet_UnclusteredEnUp);
   _tree->SetBranchAddress("tDPhiToPfMet_type1", &tDPhiToPfMet_type1, &b_tDPhiToPfMet_type1);
   _tree->SetBranchAddress("tDecayMode", &tDecayMode, &b_tDecayMode);
   _tree->SetBranchAddress("tDecayModeFinding", &tDecayModeFinding, &b_tDecayModeFinding);
   _tree->SetBranchAddress("tDecayModeFindingNewDMs", &tDecayModeFindingNewDMs, &b_tDecayModeFindingNewDMs);
   _tree->SetBranchAddress("tElecOverlap", &tElecOverlap, &b_tElecOverlap);
   _tree->SetBranchAddress("tEta", &tEta, &b_tEta);
   _tree->SetBranchAddress("tEta_TauEnDown", &tEta_TauEnDown, &b_tEta_TauEnDown);
   _tree->SetBranchAddress("tEta_TauEnUp", &tEta_TauEnUp, &b_tEta_TauEnUp);
   _tree->SetBranchAddress("tFootprintCorrection", &tFootprintCorrection, &b_tFootprintCorrection);
   _tree->SetBranchAddress("tFootprintCorrectiondR03", &tFootprintCorrectiondR03, &b_tFootprintCorrectiondR03);
   _tree->SetBranchAddress("tGenCharge", &tGenCharge, &b_tGenCharge);
   _tree->SetBranchAddress("tGenDecayMode", &tGenDecayMode, &b_tGenDecayMode);
   _tree->SetBranchAddress("tGenEnergy", &tGenEnergy, &b_tGenEnergy);
   _tree->SetBranchAddress("tGenEta", &tGenEta, &b_tGenEta);
   _tree->SetBranchAddress("tGenIsPrompt", &tGenIsPrompt, &b_tGenIsPrompt);
   _tree->SetBranchAddress("tGenJetEta", &tGenJetEta, &b_tGenJetEta);
   _tree->SetBranchAddress("tGenJetPt", &tGenJetPt, &b_tGenJetPt);
   _tree->SetBranchAddress("tGenMotherEnergy", &tGenMotherEnergy, &b_tGenMotherEnergy);
   _tree->SetBranchAddress("tGenMotherEta", &tGenMotherEta, &b_tGenMotherEta);
   _tree->SetBranchAddress("tGenMotherPdgId", &tGenMotherPdgId, &b_tGenMotherPdgId);
   _tree->SetBranchAddress("tGenMotherPhi", &tGenMotherPhi, &b_tGenMotherPhi);
   _tree->SetBranchAddress("tGenMotherPt", &tGenMotherPt, &b_tGenMotherPt);
   _tree->SetBranchAddress("tGenPdgId", &tGenPdgId, &b_tGenPdgId);
   _tree->SetBranchAddress("tGenPhi", &tGenPhi, &b_tGenPhi);
   _tree->SetBranchAddress("tGenPt", &tGenPt, &b_tGenPt);
   _tree->SetBranchAddress("tGenStatus", &tGenStatus, &b_tGenStatus);
   _tree->SetBranchAddress("tGlobalMuonVtxOverlap", &tGlobalMuonVtxOverlap, &b_tGlobalMuonVtxOverlap);
   _tree->SetBranchAddress("tJetArea", &tJetArea, &b_tJetArea);
   _tree->SetBranchAddress("tJetBtag", &tJetBtag, &b_tJetBtag);
   _tree->SetBranchAddress("tJetEtaEtaMoment", &tJetEtaEtaMoment, &b_tJetEtaEtaMoment);
   _tree->SetBranchAddress("tJetEtaPhiMoment", &tJetEtaPhiMoment, &b_tJetEtaPhiMoment);
   _tree->SetBranchAddress("tJetEtaPhiSpread", &tJetEtaPhiSpread, &b_tJetEtaPhiSpread);
   _tree->SetBranchAddress("tJetHadronFlavour", &tJetHadronFlavour, &b_tJetHadronFlavour);
   _tree->SetBranchAddress("tJetPFCISVBtag", &tJetPFCISVBtag, &b_tJetPFCISVBtag);
   _tree->SetBranchAddress("tJetPartonFlavour", &tJetPartonFlavour, &b_tJetPartonFlavour);
   _tree->SetBranchAddress("tJetPhiPhiMoment", &tJetPhiPhiMoment, &b_tJetPhiPhiMoment);
   _tree->SetBranchAddress("tJetPt", &tJetPt, &b_tJetPt);
   _tree->SetBranchAddress("tLeadTrackPt", &tLeadTrackPt, &b_tLeadTrackPt);
   _tree->SetBranchAddress("tLowestMll", &tLowestMll, &b_tLowestMll);
   _tree->SetBranchAddress("tMass", &tMass, &b_tMass);
   _tree->SetBranchAddress("tMass_TauEnDown", &tMass_TauEnDown, &b_tMass_TauEnDown);
   _tree->SetBranchAddress("tMass_TauEnUp", &tMass_TauEnUp, &b_tMass_TauEnUp);
   _tree->SetBranchAddress("tMatchesDoubleTau32Filter", &tMatchesDoubleTau32Filter, &b_tMatchesDoubleTau32Filter);
   _tree->SetBranchAddress("tMatchesDoubleTau32Path", &tMatchesDoubleTau32Path, &b_tMatchesDoubleTau32Path);
   _tree->SetBranchAddress("tMatchesDoubleTau35Filter", &tMatchesDoubleTau35Filter, &b_tMatchesDoubleTau35Filter);
   _tree->SetBranchAddress("tMatchesDoubleTau35Path", &tMatchesDoubleTau35Path, &b_tMatchesDoubleTau35Path);
   _tree->SetBranchAddress("tMatchesDoubleTau40Filter", &tMatchesDoubleTau40Filter, &b_tMatchesDoubleTau40Filter);
   _tree->SetBranchAddress("tMatchesDoubleTau40Path", &tMatchesDoubleTau40Path, &b_tMatchesDoubleTau40Path);
   _tree->SetBranchAddress("tMtToPfMet_ElectronEnDown", &tMtToPfMet_ElectronEnDown, &b_tMtToPfMet_ElectronEnDown);
   _tree->SetBranchAddress("tMtToPfMet_ElectronEnUp", &tMtToPfMet_ElectronEnUp, &b_tMtToPfMet_ElectronEnUp);
   _tree->SetBranchAddress("tMtToPfMet_JetEnDown", &tMtToPfMet_JetEnDown, &b_tMtToPfMet_JetEnDown);
   _tree->SetBranchAddress("tMtToPfMet_JetEnUp", &tMtToPfMet_JetEnUp, &b_tMtToPfMet_JetEnUp);
   _tree->SetBranchAddress("tMtToPfMet_JetResDown", &tMtToPfMet_JetResDown, &b_tMtToPfMet_JetResDown);
   _tree->SetBranchAddress("tMtToPfMet_JetResUp", &tMtToPfMet_JetResUp, &b_tMtToPfMet_JetResUp);
   _tree->SetBranchAddress("tMtToPfMet_MuonEnDown", &tMtToPfMet_MuonEnDown, &b_tMtToPfMet_MuonEnDown);
   _tree->SetBranchAddress("tMtToPfMet_MuonEnUp", &tMtToPfMet_MuonEnUp, &b_tMtToPfMet_MuonEnUp);
   _tree->SetBranchAddress("tMtToPfMet_PhotonEnDown", &tMtToPfMet_PhotonEnDown, &b_tMtToPfMet_PhotonEnDown);
   _tree->SetBranchAddress("tMtToPfMet_PhotonEnUp", &tMtToPfMet_PhotonEnUp, &b_tMtToPfMet_PhotonEnUp);
   _tree->SetBranchAddress("tMtToPfMet_Raw", &tMtToPfMet_Raw, &b_tMtToPfMet_Raw);
   _tree->SetBranchAddress("tMtToPfMet_TauEnDown", &tMtToPfMet_TauEnDown, &b_tMtToPfMet_TauEnDown);
   _tree->SetBranchAddress("tMtToPfMet_TauEnUp", &tMtToPfMet_TauEnUp, &b_tMtToPfMet_TauEnUp);
   _tree->SetBranchAddress("tMtToPfMet_UnclusteredEnDown", &tMtToPfMet_UnclusteredEnDown, &b_tMtToPfMet_UnclusteredEnDown);
   _tree->SetBranchAddress("tMtToPfMet_UnclusteredEnUp", &tMtToPfMet_UnclusteredEnUp, &b_tMtToPfMet_UnclusteredEnUp);
   _tree->SetBranchAddress("tMtToPfMet_type1", &tMtToPfMet_type1, &b_tMtToPfMet_type1);
   _tree->SetBranchAddress("tMuOverlap", &tMuOverlap, &b_tMuOverlap);
   _tree->SetBranchAddress("tMuonIdIsoStdVtxOverlap", &tMuonIdIsoStdVtxOverlap, &b_tMuonIdIsoStdVtxOverlap);
   _tree->SetBranchAddress("tMuonIdIsoVtxOverlap", &tMuonIdIsoVtxOverlap, &b_tMuonIdIsoVtxOverlap);
   _tree->SetBranchAddress("tMuonIdVtxOverlap", &tMuonIdVtxOverlap, &b_tMuonIdVtxOverlap);
   _tree->SetBranchAddress("tNChrgHadrIsolationCands", &tNChrgHadrIsolationCands, &b_tNChrgHadrIsolationCands);
   _tree->SetBranchAddress("tNChrgHadrSignalCands", &tNChrgHadrSignalCands, &b_tNChrgHadrSignalCands);
   _tree->SetBranchAddress("tNGammaSignalCands", &tNGammaSignalCands, &b_tNGammaSignalCands);
   _tree->SetBranchAddress("tNNeutralHadrSignalCands", &tNNeutralHadrSignalCands, &b_tNNeutralHadrSignalCands);
   _tree->SetBranchAddress("tNSignalCands", &tNSignalCands, &b_tNSignalCands);
   _tree->SetBranchAddress("tNearestZMass", &tNearestZMass, &b_tNearestZMass);
   _tree->SetBranchAddress("tNeutralIsoPtSum", &tNeutralIsoPtSum, &b_tNeutralIsoPtSum);
   _tree->SetBranchAddress("tNeutralIsoPtSumWeight", &tNeutralIsoPtSumWeight, &b_tNeutralIsoPtSumWeight);
   _tree->SetBranchAddress("tNeutralIsoPtSumWeightdR03", &tNeutralIsoPtSumWeightdR03, &b_tNeutralIsoPtSumWeightdR03);
   _tree->SetBranchAddress("tNeutralIsoPtSumdR03", &tNeutralIsoPtSumdR03, &b_tNeutralIsoPtSumdR03);
   _tree->SetBranchAddress("tPVDXY", &tPVDXY, &b_tPVDXY);
   _tree->SetBranchAddress("tPVDZ", &tPVDZ, &b_tPVDZ);
   _tree->SetBranchAddress("tPhi", &tPhi, &b_tPhi);
   _tree->SetBranchAddress("tPhi_TauEnDown", &tPhi_TauEnDown, &b_tPhi_TauEnDown);
   _tree->SetBranchAddress("tPhi_TauEnUp", &tPhi_TauEnUp, &b_tPhi_TauEnUp);
   _tree->SetBranchAddress("tPhotonPtSumOutsideSignalCone", &tPhotonPtSumOutsideSignalCone, &b_tPhotonPtSumOutsideSignalCone);
   _tree->SetBranchAddress("tPhotonPtSumOutsideSignalConedR03", &tPhotonPtSumOutsideSignalConedR03, &b_tPhotonPtSumOutsideSignalConedR03);
   _tree->SetBranchAddress("tPt", &tPt, &b_tPt);
   _tree->SetBranchAddress("tPt_TauEnDown", &tPt_TauEnDown, &b_tPt_TauEnDown);
   _tree->SetBranchAddress("tPt_TauEnUp", &tPt_TauEnUp, &b_tPt_TauEnUp);
   _tree->SetBranchAddress("tPuCorrPtSum", &tPuCorrPtSum, &b_tPuCorrPtSum);
   _tree->SetBranchAddress("tRank", &tRank, &b_tRank);
   _tree->SetBranchAddress("tVZ", &tVZ, &b_tVZ);
   _tree->SetBranchAddress("tZTTGenDR", &tZTTGenDR, &b_tZTTGenDR);
   _tree->SetBranchAddress("tZTTGenEta", &tZTTGenEta, &b_tZTTGenEta);
   _tree->SetBranchAddress("tZTTGenMatching", &tZTTGenMatching, &b_tZTTGenMatching);
   _tree->SetBranchAddress("tZTTGenPhi", &tZTTGenPhi, &b_tZTTGenPhi);
   _tree->SetBranchAddress("tZTTGenPt", &tZTTGenPt, &b_tZTTGenPt);
   _tree->SetBranchAddress("t_e_collinearmass", &t_e_collinearmass, &b_t_e_collinearmass);
   _tree->SetBranchAddress("t_e_collinearmass_JetEnDown", &t_e_collinearmass_JetEnDown, &b_t_e_collinearmass_JetEnDown);
   _tree->SetBranchAddress("t_e_collinearmass_JetEnUp", &t_e_collinearmass_JetEnUp, &b_t_e_collinearmass_JetEnUp);
   _tree->SetBranchAddress("t_e_collinearmass_UnclusteredEnDown", &t_e_collinearmass_UnclusteredEnDown, &b_t_e_collinearmass_UnclusteredEnDown);
   _tree->SetBranchAddress("t_e_collinearmass_UnclusteredEnUp", &t_e_collinearmass_UnclusteredEnUp, &b_t_e_collinearmass_UnclusteredEnUp);
   _tree->SetBranchAddress("tauVetoPt20Loose3HitsVtx", &tauVetoPt20Loose3HitsVtx, &b_tauVetoPt20Loose3HitsVtx);
   _tree->SetBranchAddress("tauVetoPt20TightMVALTVtx", &tauVetoPt20TightMVALTVtx, &b_tauVetoPt20TightMVALTVtx);
   _tree->SetBranchAddress("topQuarkPt1", &topQuarkPt1, &b_topQuarkPt1);
   _tree->SetBranchAddress("topQuarkPt2", &topQuarkPt2, &b_topQuarkPt2);
   _tree->SetBranchAddress("tripleEGroup", &tripleEGroup, &b_tripleEGroup);
   _tree->SetBranchAddress("tripleEPass", &tripleEPass, &b_tripleEPass);
   _tree->SetBranchAddress("tripleEPrescale", &tripleEPrescale, &b_tripleEPrescale);
   _tree->SetBranchAddress("tripleMuGroup", &tripleMuGroup, &b_tripleMuGroup);
   _tree->SetBranchAddress("tripleMuPass", &tripleMuPass, &b_tripleMuPass);
   _tree->SetBranchAddress("tripleMuPrescale", &tripleMuPrescale, &b_tripleMuPrescale);
   _tree->SetBranchAddress("type1_pfMetEt", &type1_pfMetEt, &b_type1_pfMetEt);
   _tree->SetBranchAddress("type1_pfMetPhi", &type1_pfMetPhi, &b_type1_pfMetPhi);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_ElectronEnDown", &type1_pfMet_shiftedPhi_ElectronEnDown, &b_type1_pfMet_shiftedPhi_ElectronEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_ElectronEnUp", &type1_pfMet_shiftedPhi_ElectronEnUp, &b_type1_pfMet_shiftedPhi_ElectronEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnDown", &type1_pfMet_shiftedPhi_JetEnDown, &b_type1_pfMet_shiftedPhi_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetEnUp", &type1_pfMet_shiftedPhi_JetEnUp, &b_type1_pfMet_shiftedPhi_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResDown", &type1_pfMet_shiftedPhi_JetResDown, &b_type1_pfMet_shiftedPhi_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_JetResUp", &type1_pfMet_shiftedPhi_JetResUp, &b_type1_pfMet_shiftedPhi_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_MuonEnDown", &type1_pfMet_shiftedPhi_MuonEnDown, &b_type1_pfMet_shiftedPhi_MuonEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_MuonEnUp", &type1_pfMet_shiftedPhi_MuonEnUp, &b_type1_pfMet_shiftedPhi_MuonEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_PhotonEnDown", &type1_pfMet_shiftedPhi_PhotonEnDown, &b_type1_pfMet_shiftedPhi_PhotonEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_PhotonEnUp", &type1_pfMet_shiftedPhi_PhotonEnUp, &b_type1_pfMet_shiftedPhi_PhotonEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_TauEnDown", &type1_pfMet_shiftedPhi_TauEnDown, &b_type1_pfMet_shiftedPhi_TauEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_TauEnUp", &type1_pfMet_shiftedPhi_TauEnUp, &b_type1_pfMet_shiftedPhi_TauEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnDown", &type1_pfMet_shiftedPhi_UnclusteredEnDown, &b_type1_pfMet_shiftedPhi_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPhi_UnclusteredEnUp", &type1_pfMet_shiftedPhi_UnclusteredEnUp, &b_type1_pfMet_shiftedPhi_UnclusteredEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_ElectronEnDown", &type1_pfMet_shiftedPt_ElectronEnDown, &b_type1_pfMet_shiftedPt_ElectronEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_ElectronEnUp", &type1_pfMet_shiftedPt_ElectronEnUp, &b_type1_pfMet_shiftedPt_ElectronEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnDown", &type1_pfMet_shiftedPt_JetEnDown, &b_type1_pfMet_shiftedPt_JetEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetEnUp", &type1_pfMet_shiftedPt_JetEnUp, &b_type1_pfMet_shiftedPt_JetEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResDown", &type1_pfMet_shiftedPt_JetResDown, &b_type1_pfMet_shiftedPt_JetResDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_JetResUp", &type1_pfMet_shiftedPt_JetResUp, &b_type1_pfMet_shiftedPt_JetResUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_MuonEnDown", &type1_pfMet_shiftedPt_MuonEnDown, &b_type1_pfMet_shiftedPt_MuonEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_MuonEnUp", &type1_pfMet_shiftedPt_MuonEnUp, &b_type1_pfMet_shiftedPt_MuonEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_PhotonEnDown", &type1_pfMet_shiftedPt_PhotonEnDown, &b_type1_pfMet_shiftedPt_PhotonEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_PhotonEnUp", &type1_pfMet_shiftedPt_PhotonEnUp, &b_type1_pfMet_shiftedPt_PhotonEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_TauEnDown", &type1_pfMet_shiftedPt_TauEnDown, &b_type1_pfMet_shiftedPt_TauEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_TauEnUp", &type1_pfMet_shiftedPt_TauEnUp, &b_type1_pfMet_shiftedPt_TauEnUp);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnDown", &type1_pfMet_shiftedPt_UnclusteredEnDown, &b_type1_pfMet_shiftedPt_UnclusteredEnDown);
   _tree->SetBranchAddress("type1_pfMet_shiftedPt_UnclusteredEnUp", &type1_pfMet_shiftedPt_UnclusteredEnUp, &b_type1_pfMet_shiftedPt_UnclusteredEnUp);
   _tree->SetBranchAddress("vbfDeta", &vbfDeta, &b_vbfDeta);
   _tree->SetBranchAddress("vbfDeta_JetEnDown", &vbfDeta_JetEnDown, &b_vbfDeta_JetEnDown);
   _tree->SetBranchAddress("vbfDeta_JetEnUp", &vbfDeta_JetEnUp, &b_vbfDeta_JetEnUp);
   _tree->SetBranchAddress("vbfDijetrap", &vbfDijetrap, &b_vbfDijetrap);
   _tree->SetBranchAddress("vbfDijetrap_JetEnDown", &vbfDijetrap_JetEnDown, &b_vbfDijetrap_JetEnDown);
   _tree->SetBranchAddress("vbfDijetrap_JetEnUp", &vbfDijetrap_JetEnUp, &b_vbfDijetrap_JetEnUp);
   _tree->SetBranchAddress("vbfDphi", &vbfDphi, &b_vbfDphi);
   _tree->SetBranchAddress("vbfDphi_JetEnDown", &vbfDphi_JetEnDown, &b_vbfDphi_JetEnDown);
   _tree->SetBranchAddress("vbfDphi_JetEnUp", &vbfDphi_JetEnUp, &b_vbfDphi_JetEnUp);
   _tree->SetBranchAddress("vbfDphihj", &vbfDphihj, &b_vbfDphihj);
   _tree->SetBranchAddress("vbfDphihj_JetEnDown", &vbfDphihj_JetEnDown, &b_vbfDphihj_JetEnDown);
   _tree->SetBranchAddress("vbfDphihj_JetEnUp", &vbfDphihj_JetEnUp, &b_vbfDphihj_JetEnUp);
   _tree->SetBranchAddress("vbfDphihjnomet", &vbfDphihjnomet, &b_vbfDphihjnomet);
   _tree->SetBranchAddress("vbfDphihjnomet_JetEnDown", &vbfDphihjnomet_JetEnDown, &b_vbfDphihjnomet_JetEnDown);
   _tree->SetBranchAddress("vbfDphihjnomet_JetEnUp", &vbfDphihjnomet_JetEnUp, &b_vbfDphihjnomet_JetEnUp);
   _tree->SetBranchAddress("vbfHrap", &vbfHrap, &b_vbfHrap);
   _tree->SetBranchAddress("vbfHrap_JetEnDown", &vbfHrap_JetEnDown, &b_vbfHrap_JetEnDown);
   _tree->SetBranchAddress("vbfHrap_JetEnUp", &vbfHrap_JetEnUp, &b_vbfHrap_JetEnUp);
   _tree->SetBranchAddress("vbfJetVeto20", &vbfJetVeto20, &b_vbfJetVeto20);
   _tree->SetBranchAddress("vbfJetVeto20_JetEnDown", &vbfJetVeto20_JetEnDown, &b_vbfJetVeto20_JetEnDown);
   _tree->SetBranchAddress("vbfJetVeto20_JetEnUp", &vbfJetVeto20_JetEnUp, &b_vbfJetVeto20_JetEnUp);
   _tree->SetBranchAddress("vbfJetVeto30", &vbfJetVeto30, &b_vbfJetVeto30);
   _tree->SetBranchAddress("vbfJetVeto30_JetEnDown", &vbfJetVeto30_JetEnDown, &b_vbfJetVeto30_JetEnDown);
   _tree->SetBranchAddress("vbfJetVeto30_JetEnUp", &vbfJetVeto30_JetEnUp, &b_vbfJetVeto30_JetEnUp);
   _tree->SetBranchAddress("vbfMVA", &vbfMVA, &b_vbfMVA);
   _tree->SetBranchAddress("vbfMVA_JetEnDown", &vbfMVA_JetEnDown, &b_vbfMVA_JetEnDown);
   _tree->SetBranchAddress("vbfMVA_JetEnUp", &vbfMVA_JetEnUp, &b_vbfMVA_JetEnUp);
   _tree->SetBranchAddress("vbfMass", &vbfMass, &b_vbfMass);
   _tree->SetBranchAddress("vbfMass_JetEnDown", &vbfMass_JetEnDown, &b_vbfMass_JetEnDown);
   _tree->SetBranchAddress("vbfMass_JetEnUp", &vbfMass_JetEnUp, &b_vbfMass_JetEnUp);
   _tree->SetBranchAddress("vbfNJets20", &vbfNJets20, &b_vbfNJets20);
   _tree->SetBranchAddress("vbfNJets20_JetEnDown", &vbfNJets20_JetEnDown, &b_vbfNJets20_JetEnDown);
   _tree->SetBranchAddress("vbfNJets20_JetEnUp", &vbfNJets20_JetEnUp, &b_vbfNJets20_JetEnUp);
   _tree->SetBranchAddress("vbfNJets30", &vbfNJets30, &b_vbfNJets30);
   _tree->SetBranchAddress("vbfNJets30_JetEnDown", &vbfNJets30_JetEnDown, &b_vbfNJets30_JetEnDown);
   _tree->SetBranchAddress("vbfNJets30_JetEnUp", &vbfNJets30_JetEnUp, &b_vbfNJets30_JetEnUp);
   _tree->SetBranchAddress("vbfVispt", &vbfVispt, &b_vbfVispt);
   _tree->SetBranchAddress("vbfVispt_JetEnDown", &vbfVispt_JetEnDown, &b_vbfVispt_JetEnDown);
   _tree->SetBranchAddress("vbfVispt_JetEnUp", &vbfVispt_JetEnUp, &b_vbfVispt_JetEnUp);
   _tree->SetBranchAddress("vbfdijetpt", &vbfdijetpt, &b_vbfdijetpt);
   _tree->SetBranchAddress("vbfdijetpt_JetEnDown", &vbfdijetpt_JetEnDown, &b_vbfdijetpt_JetEnDown);
   _tree->SetBranchAddress("vbfdijetpt_JetEnUp", &vbfdijetpt_JetEnUp, &b_vbfdijetpt_JetEnUp);
   _tree->SetBranchAddress("vbfj1eta", &vbfj1eta, &b_vbfj1eta);
   _tree->SetBranchAddress("vbfj1eta_JetEnDown", &vbfj1eta_JetEnDown, &b_vbfj1eta_JetEnDown);
   _tree->SetBranchAddress("vbfj1eta_JetEnUp", &vbfj1eta_JetEnUp, &b_vbfj1eta_JetEnUp);
   _tree->SetBranchAddress("vbfj1pt", &vbfj1pt, &b_vbfj1pt);
   _tree->SetBranchAddress("vbfj1pt_JetEnDown", &vbfj1pt_JetEnDown, &b_vbfj1pt_JetEnDown);
   _tree->SetBranchAddress("vbfj1pt_JetEnUp", &vbfj1pt_JetEnUp, &b_vbfj1pt_JetEnUp);
   _tree->SetBranchAddress("vbfj2eta", &vbfj2eta, &b_vbfj2eta);
   _tree->SetBranchAddress("vbfj2eta_JetEnDown", &vbfj2eta_JetEnDown, &b_vbfj2eta_JetEnDown);
   _tree->SetBranchAddress("vbfj2eta_JetEnUp", &vbfj2eta_JetEnUp, &b_vbfj2eta_JetEnUp);
   _tree->SetBranchAddress("vbfj2pt", &vbfj2pt, &b_vbfj2pt);
   _tree->SetBranchAddress("vbfj2pt_JetEnDown", &vbfj2pt_JetEnDown, &b_vbfj2pt_JetEnDown);
   _tree->SetBranchAddress("vbfj2pt_JetEnUp", &vbfj2pt_JetEnUp, &b_vbfj2pt_JetEnUp);
   _tree->SetBranchAddress("vispX", &vispX, &b_vispX);
   _tree->SetBranchAddress("vispY", &vispY, &b_vispY);
   _tree->SetBranchAddress("idx", &idx, &b_idx);

}

Int_t HTauTauTree_et::GetEntry(int entry)
{
    return _tree->GetEntry(entry);
} 

Long64_t HTauTauTree_et::GetEntries()
{
    return _tree->GetEntries();
}

TTree* HTauTauTree_et::GetTree()
{
    return _tree;
}

#endif
