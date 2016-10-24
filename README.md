Instructions:
=============


1) Skimming 
-----------

The first step consists in skimming FSA ntuples. For each final state there is a folder "Skim".

To compile the code: 
'''
./Make.sh skim_mt.cc
'''

The syntax to run over FSA ntuples is: 
'''
./skim_mt.exe mc (or data) out.root in.root
'''

To make the list of commands to run over all samples: 
'''
python prepare_run2.py
'''

2) SV mass
----------

To run SV mass on the skimmed ntuples, follow instructions in:
https://github.com/lmdodd/SubmitSVFit

3) Analysis
-----------

Skimmed ntuples with SV mass are stored in /data/ccaillol of uwlogin.

Codes to run the analysis are stored in the "Analysis" folders.

The first time you run, mkdir these directories: files_nominal, files_up, files_down.

The first time you run, you should also copy locally the HTT scale factors and pileup reweighting files:

'''
cp /afs/cern.ch/work/a/adewit/public/pileup-hists-2016/MC_Spring16_PU25ns_V1.root .
cp /afs/cern.ch/user/a/anehrkor/public/Data_Pileup_2016_July22.root MyDataPileupHistogram.root
git clone https://github.com/CMS-HTT/LeptonEfficiencies
'''

To run the 1D analysis: 
'''
sh do_all.sh
'''

Plot the 1D analysis:
'''
python Draw.py
'''

To run the 2D analysis: 
'''
sh do_all2D_relaxed.sh
'''

Plot and unroll 2D analysis: 
'''
python Unroll_2Drelaxed.py
'''

