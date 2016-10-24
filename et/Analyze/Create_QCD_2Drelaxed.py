if __name__ == "__main__":

    import ROOT
    import argparse

    parser = argparse.ArgumentParser()
    parser.add_argument('--scale', default="nominal", choices=['nominal', 'up', 'down', 'wup', 'wdown'], help="Which TES?")
    options = parser.parse_args()

    postfix=""
    if (options.scale=="up"):
        postfix="_TESUp"
    if (options.scale=="down"):
        postfix="_TESDown"

    postfixP=""
    if (options.scale=="up"):
        postfixP="_TESUp"
    if (options.scale=="down"):
        postfixP="_TESDown"
    if (options.scale=="wup"):
        postfixP="_WnormPassUp"
    if (options.scale=="wdown"):
        postfixP="_WnormPassDown"

    postfixF=""
    if (options.scale=="up"):
        postfixF="_TESUp"
    if (options.scale=="down"):
        postfixF="_TESDown"
    if (options.scale=="wup"):
        postfixF="_WnormFailUp"
    if (options.scale=="wdown"):
        postfixF="_WnormFailDown"

    facteur=1.0
    if (options.scale=="wup"):
        facteur=1.10
    if (options.scale=="wdown"):
        facteur=0.90

    if options.scale=="up" or options.scale=="down":
       fDYB=ROOT.TFile("files_"+options.scale+"/ZLL.root","r")
       fDYS=ROOT.TFile("files_"+options.scale+"/ZTT.root","r")
       fW=ROOT.TFile("files_"+options.scale+"/W.root","r")
       fTT=ROOT.TFile("files_"+options.scale+"/TT.root","r")
       fVV=ROOT.TFile("files_"+options.scale+"/VV.root","r")
       fData=ROOT.TFile("files_nominal/Data.root","r")
    else:
       fDYB=ROOT.TFile("files_nominal/ZLL.root","r")
       fDYS=ROOT.TFile("files_nominal/ZTT.root","r")
       fW=ROOT.TFile("files_nominal/W.root","r")
       fTT=ROOT.TFile("files_nominal/TT.root","r")
       fVV=ROOT.TFile("files_nominal/VV.root","r")
       fData=ROOT.TFile("files_nominal/Data.root","r")
    fout=ROOT.TFile("files_"+options.scale+"/QCD.root","recreate")

    hSS_0jet=fData.Get("SS0jet/data_obs")
    hSS_0jet.Add(fDYB.Get("SS0jet/ZLL"+postfix),-1)
    hSS_0jet.Add(fTT.Get("SS0jet/TT"+postfix),-1)
    hSS_0jet.Add(fW.Get("SS0jet/W"+postfix),-1*facteur)
    hSS_0jet.Add(fVV.Get("SS0jet/VV"+postfix),-1)
    hSS_0jet.Add(fDYS.Get("SS0jet/ZTT"+postfix),-1)
    hSS_0jet.SetName("QCD"+postfixP)
    hSS_0jet.Scale(1.06)
    for i in range(0,hSS_0jet.GetSize()-2):
	if hSS_0jet.GetBinContent(i)<0:
	    hSS_0jet.SetBinContent(i,0)

    hQCD_0jet=fData.Get("QCD0jet/data_obs")
    hQCD_0jet.Add(fDYB.Get("QCD0jet/ZLL"+postfix),-1)
    hQCD_0jet.Add(fTT.Get("QCD0jet/TT"+postfix),-1)
    hQCD_0jet.Add(fW.Get("QCD0jet/W"+postfix),-1*facteur)
    hQCD_0jet.Add(fVV.Get("QCD0jet/VV"+postfix),-1)
    hQCD_0jet.Add(fDYS.Get("QCD0jet/ZTT"+postfix),-1)
    hQCD_0jet.SetName("QCD"+postfixP)
    hQCD_0jet.Scale(1.06)
    for i in range(0,hQCD_0jet.GetSize()-2):
        if hQCD_0jet.GetBinContent(i)<0:
            hQCD_0jet.SetBinContent(i,0)

    hSS_1jet=fData.Get("SS1jet/data_obs")
    hSS_1jet.Add(fDYB.Get("SS1jet/ZLL"+postfix),-1)
    hSS_1jet.Add(fTT.Get("SS1jet/TT"+postfix),-1)
    hSS_1jet.Add(fW.Get("SS1jet/W"+postfix),-1*facteur)
    hSS_1jet.Add(fVV.Get("SS1jet/VV"+postfix),-1)
    hSS_1jet.Add(fDYS.Get("SS1jet/ZTT"+postfix),-1)
    hSS_1jet.SetName("QCD"+postfixP)
    hSS_1jet.Scale(1.06)
    for i in range(0,hSS_1jet.GetSize()-2):
        if hSS_1jet.GetBinContent(i)<0:
            hSS_1jet.SetBinContent(i,0)

    hQCD_1jet=fData.Get("QCD1jet/data_obs")
    hQCD_1jet.Add(fDYB.Get("QCD1jet/ZLL"+postfix),-1)
    hQCD_1jet.Add(fTT.Get("QCD1jet/TT"+postfix),-1)
    hQCD_1jet.Add(fW.Get("QCD1jet/W"+postfix),-1*facteur)
    hQCD_1jet.Add(fVV.Get("QCD1jet/VV"+postfix),-1)
    hQCD_1jet.Add(fDYS.Get("QCD1jet/ZTT"+postfix),-1)
    hQCD_1jet.SetName("QCD"+postfixP)
    hQCD_1jet.Scale(1.06)
    for i in range(0,hQCD_1jet.GetSize()-2):
        if hQCD_1jet.GetBinContent(i)<0:
            hQCD_1jet.SetBinContent(i,0)

    hSS_2jet=fData.Get("SSvbf/data_obs")
    hSS_2jet.Add(fDYB.Get("SSvbf/ZLL"+postfix),-1)
    hSS_2jet.Add(fTT.Get("SSvbf/TT"+postfix),-1)
    hSS_2jet.Add(fW.Get("SSvbf/W"+postfix),-1*facteur)
    hSS_2jet.Add(fVV.Get("SSvbf/VV"+postfix),-1)
    hSS_2jet.Add(fDYS.Get("SSvbf/ZTT"+postfix),-1)
    hSS_2jet.SetName("QCD"+postfixP)
    hSS_2jet.Scale(1.06)
    for i in range(0,hSS_2jet.GetSize()-2):
        if hSS_2jet.GetBinContent(i)<0:
            hSS_2jet.SetBinContent(i,0)

    hQCD_2jet=fData.Get("QCDvbf/data_obs")
    hQCD_2jet.Add(fDYB.Get("QCDvbf/ZLL"+postfix),-1)
    hQCD_2jet.Add(fTT.Get("QCDvbf/TT"+postfix),-1)
    hQCD_2jet.Add(fW.Get("QCDvbf/W"+postfix),-1*facteur)
    hQCD_2jet.Add(fVV.Get("QCDvbf/VV"+postfix),-1)
    hQCD_2jet.Add(fDYS.Get("QCDvbf/ZTT"+postfix),-1)
    hQCD_2jet.SetName("QCD"+postfixP)
    hQCD_2jet.Scale(1.06)
    for i in range(0,hQCD_2jet.GetSize()-2):
        if hQCD_2jet.GetBinContent(i)<0:
            hQCD_2jet.SetBinContent(i,0)

    fout.cd()
    dir0jet=fout.mkdir("et_0jet")
    dir0jet.cd()
    hQCD_0jet.Scale(hSS_0jet.Integral()/hQCD_0jet.Integral())
    hQCD_0jet.Write()

    dir1jet=fout.mkdir("et_1jet")
    dir1jet.cd()
    hQCD_1jet.Scale(hSS_1jet.Integral()/hQCD_1jet.Integral())
    hQCD_1jet.Write()

    dir2jet=fout.mkdir("et_vbf")
    dir2jet.cd()
    hQCD_2jet.Scale(hSS_2jet.Integral()/hQCD_2jet.Integral())
    hQCD_2jet.Write()
