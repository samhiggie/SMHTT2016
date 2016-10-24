import os
if __name__ == "__main__":

    #place="/hdfs/store/user/truggles/SMHTT_oct21/"
    place="/hdfs/store/user/caillol/SMHTT_oct24v4/"
    sample=["data_MuonEG_Run2016B/","data_MuonEG_Run2016C/","data_MuonEG_Run2016D/","data_MuonEG_Run2016E/","data_MuonEG_Run2016F/"]
    name=["DataB","DataC","DataD","DataE","DataF"]

    #sample=["DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY1JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY2JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY3JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","DY4JetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","W1JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","W2JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","W3JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","W4JetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/","WW_TuneCUETP8M1_13TeV-pythia8/","WZ_TuneCUETP8M1_13TeV-pythia8/","ZZ_TuneCUETP8M1_13TeV-pythia8/","TT_TuneCUETP8M1_13TeV-powheg-pythia8/","GluGluHToTauTau_M120_13TeV_powheg_pythia8/","GluGluHToTauTau_M125_13TeV_powheg_pythia8/","GluGluHToTauTau_M130_13TeV_powheg_pythia8/","VBFHToTauTau_M120_13TeV_powheg_pythia8/","VBFHToTauTau_M125_13TeV_powheg_pythia8/","VBFHToTauTau_M130_13TeV_powheg_pythia8/","ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/","ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1/","ST_t-channel_top_4f_leptonDecays_13TeV-powheg-pythia8_TuneCUETP8M1/","ST_t-channel_antitop_4f_leptonDecays_13TeV-powheg-pythia8_TuneCUETP8M1/","DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/","DY1JetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/","DY2JetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/","WminusHToTauTau_M120_13TeV_powheg_pythia8/","WminusHToTauTau_M125_13TeV_powheg_pythia8/","WminusHToTauTau_M130_13TeV_powheg_pythia8/","WplusHToTauTau_M120_13TeV_powheg_pythia8/","WplusHToTauTau_M125_13TeV_powheg_pythia8/","WplusHToTauTau_M130_13TeV_powheg_pythia8/","ZHToTauTau_M120_13TeV_powheg_pythia8/","ZHToTauTau_M125_13TeV_powheg_pythia8/","ZHToTauTau_M130_13TeV_powheg_pythia8/","WZTo1L3Nu_13TeV_amcatnloFXFX_madspin_pythia8/","WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8/","WZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8/","VVTo2L2Nu_13TeV_amcatnloFXFX_madspin_pythia8/","WWTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8/","ZZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8/","WWZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/","WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/","ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/","WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8/","EWKWMinus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8/","EWKWPlus2Jets_WToLNu_M-50_13TeV-madgraph-pythia8/","EWKZ2Jets_ZToLL_M-50_13TeV-madgraph-pythia8/","EWKZ2Jets_ZToNuNu_13TeV-madgraph-pythia8/","GluGluHToWWTo2L2Nu_M125_13TeV_powheg_pythia8/","WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/","WGstarToLNuEE_012Jets_13TeV-madgraph/","WGstarToLNuMuMu_012Jets_13TeV-madgraph/","WZJToLLLNu_TuneCUETP8M1_13TeV-amcnlo-pythia8/","ZZTo4L_13TeV-amcatnloFXFX-pythia8/"]


    #name=["DY","DY1","DY2","DY3","DY4","W","W1","W2","W3","W4","WW","WZ","ZZ","TT","SMH_gg120","SMH_gg125","SMH_gg130","SMH_VBF120","SMH_VBF125","SMH_VBF130","ST_tW_top","ST_tW_antitop","ST_t_top","ST_t_antitop","DYlow","DY1low","DY2low","Wminus120","Wminus125","Wminus130","Wplus120","Wplus125","Wplus130","ZH120","ZH125","ZH130","WZ1L3Nu","WZ1L1Nu2Q","WZ2L2Q","VV2L2Nu","WW1L1Nu2Q","ZZ2L2Q","WWZ","WZZ","ZZZ","WWW","EWKWMinus2Jets","EWKWPlus2Jets","EWKZ2Jets_LL","EWKZ2Jets_NuNu","HWW_gg125","WGToLNuG","WGstarToLNuEE","WGstarToLNuMuMu","WZJLLLNu","ZZ4L"]

    
    datadir="/nfs_scratch/caillol/emu_sv/"
    all_File = open("do_submit_data.sh" , 'w')
    line=""
    for j in range(0,len(name)):
       submit_File = open("Submit_"+name[j]+".sh" , 'w')
       line+="mkdir -p "+datadir+"Out_"+name[j]+"\n"
       line+="sh Submit_"+name[j]+".sh" +"\n"
       f=os.popen("ls -t " + place+sample[j] + "make* | sort")
       command1=""
       ligne=0
       for i in f.readlines():
	   command1=command1+"./skim_em.exe data "+datadir+"Out_"+name[j]+"/"+name[j]+str(ligne)+".root " + i[0:-1] +"\n"
           ligne=ligne+1
       submit_File.write(command1)
       submit_File.close()
    all_File.write(line)
    all_File.close()
