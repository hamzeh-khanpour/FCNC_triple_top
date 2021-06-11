

//*
//*   ---- Code to drow Plots -----  [ 16 March 2017 ]
//*


#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "TString.h"
#include "TH1F.h"
#include "TFile.h"
#include "TTree.h"


//*   -----------------------------------------------

void Plots_Separate_bkgs(){

gStyle->SetOptStat(0);


TH1F* hmll_Signal_tug = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tcg = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tuH = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tcH = new TH1F("hmll", "", 10,0,500);

TH1F* hmll_Signal_tuz_Gammamu = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tcz_Gammamu = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tuz_Sigmamunu = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tcz_Sigmamunu = new TH1F("hmll", "", 10,0,500);

TH1F* hmll_Signal_tua = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_Signal_tca = new TH1F("hmll", "", 10,0,500);

TH1F* hmll_ttbarz = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_ttbarw = new TH1F("hmll", "", 10,0,500);
TH1F* hmll_wwz = new TH1F("hmll", "", 10,0,500);

//*   -------------

TH1F* hdphill_Signal_tug = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tcg = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tuH = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tcH = new TH1F("hdphill", "", 20,-3.5,3.5);

TH1F* hdphill_Signal_tuz_Gammamu = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tcz_Gammamu = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tuz_Sigmamunu = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tcz_Sigmamunu = new TH1F("hdphill", "", 20,-3.5,3.5);

TH1F* hdphill_Signal_tua = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_Signal_tca = new TH1F("hdphill", "", 20,-3.5,3.5);

TH1F* hdphill_ttbarz = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_ttbarw = new TH1F("hdphill", "", 20,-3.5,3.5);
TH1F* hdphill_wwz = new TH1F("hdphill", "", 20,-3.5,3.5);

//*   -------------

TH1F* hht_Signal_tug = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tcg = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tuH = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tcH = new TH1F("hht", "", 10,0,100);

TH1F* hht_Signal_tuz_Gammamu = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tcz_Gammamu = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tuz_Sigmamunu = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tcz_Sigmamunu = new TH1F("hht", "", 10,0,100);

TH1F* hht_Signal_tua = new TH1F("hht", "", 10,0,100);
TH1F* hht_Signal_tca = new TH1F("hht", "", 10,0,100);

TH1F* hht_ttbarz = new TH1F("hht", "", 10,0,100);
TH1F* hht_ttbarw = new TH1F("hht", "", 10,0,100);
TH1F* hht_wwz = new TH1F("hht", "", 10,0,100);

//*   -------------

TH1F* hjetsmulti_Signal_tug = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tcg = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tuH = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tcH = new TH1F("hjetsmulti", "", 8,0,8);

TH1F* hjetsmulti_Signal_tuz_Gammamu = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tcz_Gammamu = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tuz_Sigmamunu = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tcz_Sigmamunu = new TH1F("hjetsmulti", "", 8,0,8);

TH1F* hjetsmulti_Signal_tua = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_Signal_tca = new TH1F("hjetsmulti", "", 8,0,8);

TH1F* hjetsmulti_ttbarz = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_ttbarw = new TH1F("hjetsmulti", "", 8,0,8);
TH1F* hjetsmulti_wwz = new TH1F("hjetsmulti", "", 8,0,8);

//*   -------------

TH1F* hbjetsmulti_Signal_tug = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tcg = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tuH = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tcH = new TH1F("hbjetsmulti", "", 8,0,8);

TH1F* hbjetsmulti_Signal_tuz_Gammamu = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tcz_Gammamu = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tuz_Sigmamunu = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tcz_Sigmamunu = new TH1F("hbjetsmulti", "", 8,0,8);

TH1F* hbjetsmulti_Signal_tua = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_Signal_tca = new TH1F("hbjetsmulti", "", 8,0,8);

TH1F* hbjetsmulti_ttbarz = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_ttbarw = new TH1F("hbjetsmulti", "", 8,0,8);
TH1F* hbjetsmulti_wwz = new TH1F("hbjetsmulti", "", 8,0,8);

//*   -------------

TH1F* hcoslb_Signal_tug = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tcg = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tuH = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tcH = new TH1F("hcoslb", "", 10,-1,1);

TH1F* hcoslb_Signal_tuz_Gammamu = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tcz_Gammamu = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tuz_Sigmamunu = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tcz_Sigmamunu = new TH1F("hcoslb", "", 10,-1,1);

TH1F* hcoslb_Signal_tua = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_Signal_tca = new TH1F("hcoslb", "", 10,-1,1);

TH1F* hcoslb_ttbarz = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_ttbarw = new TH1F("hcoslb", "", 10,-1,1);
TH1F* hcoslb_wwz = new TH1F("hcoslb", "", 10,-1,1);


//*   -------------

TH1F* hcosll_Signal_tug = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tcg = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tuH = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tcH = new TH1F("hcosll", "", 10,-1,1);

TH1F* hcosll_Signal_tuz_Gammamu = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tcz_Gammamu = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tuz_Sigmamunu = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tcz_Sigmamunu = new TH1F("hcosll", "", 10,-1,1);

TH1F* hcosll_Signal_tua = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_Signal_tca = new TH1F("hcosll", "", 10,-1,1);

TH1F* hcosll_ttbarz = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_ttbarw = new TH1F("hcosll", "", 10,-1,1);
TH1F* hcosll_wwz = new TH1F("hcosll", "", 10,-1,1);

//*   -------------

TH1F* hdeltaetall_Signal_tug = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tcg = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tuH = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tcH = new TH1F("hdeltaetall", "", 10,-5,5);

TH1F* hdeltaetall_Signal_tuz_Gammamu = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tcz_Gammamu = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tuz_Sigmamunu = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tcz_Sigmamunu = new TH1F("hdeltaetall", "", 10,-5,5);

TH1F* hdeltaetall_Signal_tua = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_Signal_tca = new TH1F("hdeltaetall", "", 10,-5,5);

TH1F* hdeltaetall_ttbarz = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_ttbarw = new TH1F("hdeltaetall", "", 10,-5,5);
TH1F* hdeltaetall_wwz = new TH1F("hdeltaetall", "", 10,-5,5);

//*   -------------

TH1F* hdeltarlb_Signal_tug = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tcg = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tuH = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tcH = new TH1F("hdeltarlb", "", 20,0,6);

TH1F* hdeltarlb_Signal_tuz_Gammamu = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tcz_Gammamu = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tuz_Sigmamunu = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tcz_Sigmamunu = new TH1F("hdeltarlb", "", 20,0,6);

TH1F* hdeltarlb_Signal_tua = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_Signal_tca = new TH1F("hdeltarlb", "", 20,0,6);

TH1F* hdeltarlb_ttbarz = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_ttbarw = new TH1F("hdeltarlb", "", 20,0,6);
TH1F* hdeltarlb_wwz = new TH1F("hdeltarlb", "", 20,0,6);


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root");
 tree = (TTree*)file->Get("Signal_tug"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tug->Add(tmp1);
  hdphill_Signal_tug->Add(tmp2);
  hht_Signal_tug->Add(tmp3);
  hjetsmulti_Signal_tug->Add(tmp4);
  hbjetsmulti_Signal_tug->Add(tmp5);

  hcoslb_Signal_tug->Add(tmp6);
  hcosll_Signal_tug->Add(tmp7);
  hdeltaetall_Signal_tug->Add(tmp8);
  hdeltarlb_Signal_tug->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9; 

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tcg"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tcg->Add(tmp1);
  hdphill_Signal_tcg->Add(tmp2);
  hht_Signal_tcg->Add(tmp3);
  hjetsmulti_Signal_tcg->Add(tmp4);
  hbjetsmulti_Signal_tcg->Add(tmp5);

  hcoslb_Signal_tcg->Add(tmp6);
  hcosll_Signal_tcg->Add(tmp7);
  hdeltaetall_Signal_tcg->Add(tmp8);
  hdeltarlb_Signal_tcg->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;

// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tuH"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tuH->Add(tmp1);
  hdphill_Signal_tuH->Add(tmp2);
  hht_Signal_tuH->Add(tmp3);
  hjetsmulti_Signal_tuH->Add(tmp4);
  hbjetsmulti_Signal_tuH->Add(tmp5);

  hcoslb_Signal_tuH->Add(tmp6);
  hcosll_Signal_tuH->Add(tmp7);
  hdeltaetall_Signal_tuH->Add(tmp8);
  hdeltarlb_Signal_tuH->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tcH"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tcH->Add(tmp1);
  hdphill_Signal_tcH->Add(tmp2);
  hht_Signal_tcH->Add(tmp3);
  hjetsmulti_Signal_tcH->Add(tmp4);
  hbjetsmulti_Signal_tcH->Add(tmp5);

  hcoslb_Signal_tcH->Add(tmp6);
  hcosll_Signal_tcH->Add(tmp7);
  hdeltaetall_Signal_tcH->Add(tmp8);
  hdeltarlb_Signal_tcH->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;



// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tuz_Gammamu"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tuz_Gammamu->Add(tmp1);
  hdphill_Signal_tuz_Gammamu->Add(tmp2);
  hht_Signal_tuz_Gammamu->Add(tmp3);
  hjetsmulti_Signal_tuz_Gammamu->Add(tmp4);
  hbjetsmulti_Signal_tuz_Gammamu->Add(tmp5);

  hcoslb_Signal_tuz_Gammamu->Add(tmp6);
  hcosll_Signal_tuz_Gammamu->Add(tmp7);
  hdeltaetall_Signal_tuz_Gammamu->Add(tmp8);
  hdeltarlb_Signal_tuz_Gammamu->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tcz_Gammamu"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tcz_Gammamu->Add(tmp1);
  hdphill_Signal_tcz_Gammamu->Add(tmp2);
  hht_Signal_tcz_Gammamu->Add(tmp3);
  hjetsmulti_Signal_tcz_Gammamu->Add(tmp4);
  hbjetsmulti_Signal_tcz_Gammamu->Add(tmp5);

  hcoslb_Signal_tcz_Gammamu->Add(tmp6);
  hcosll_Signal_tcz_Gammamu->Add(tmp7);
  hdeltaetall_Signal_tcz_Gammamu->Add(tmp8);
  hdeltarlb_Signal_tcz_Gammamu->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;

// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tuz_Sigmamunu"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tuz_Sigmamunu->Add(tmp1);
  hdphill_Signal_tuz_Sigmamunu->Add(tmp2);
  hht_Signal_tuz_Sigmamunu->Add(tmp3);
  hjetsmulti_Signal_tuz_Sigmamunu->Add(tmp4);
  hbjetsmulti_Signal_tuz_Sigmamunu->Add(tmp5);

  hcoslb_Signal_tuz_Sigmamunu->Add(tmp6);
  hcosll_Signal_tuz_Sigmamunu->Add(tmp7);
  hdeltaetall_Signal_tuz_Sigmamunu->Add(tmp8);
  hdeltarlb_Signal_tuz_Sigmamunu->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tcz_Sigmamunu"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tcz_Sigmamunu->Add(tmp1);
  hdphill_Signal_tcz_Sigmamunu->Add(tmp2);
  hht_Signal_tcz_Sigmamunu->Add(tmp3);
  hjetsmulti_Signal_tcz_Sigmamunu->Add(tmp4);
  hbjetsmulti_Signal_tcz_Sigmamunu->Add(tmp5);

  hcoslb_Signal_tcz_Sigmamunu->Add(tmp6);
  hcosll_Signal_tcz_Sigmamunu->Add(tmp7);
  hdeltaetall_Signal_tcz_Sigmamunu->Add(tmp8);
  hdeltarlb_Signal_tcz_Sigmamunu->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;



// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tua"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tua->Add(tmp1);
  hdphill_Signal_tua->Add(tmp2);
  hht_Signal_tua->Add(tmp3);
  hjetsmulti_Signal_tua->Add(tmp4);
  hbjetsmulti_Signal_tua->Add(tmp5);

  hcoslb_Signal_tua->Add(tmp6);
  hcosll_Signal_tua->Add(tmp7);
  hdeltaetall_Signal_tua->Add(tmp8);
  hdeltarlb_Signal_tua->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("Signal_tca"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_Signal_tca->Add(tmp1);
  hdphill_Signal_tca->Add(tmp2);
  hht_Signal_tca->Add(tmp3);
  hjetsmulti_Signal_tca->Add(tmp4);
  hbjetsmulti_Signal_tca->Add(tmp5);

  hcoslb_Signal_tca->Add(tmp6);
  hcosll_Signal_tca->Add(tmp7);
  hdeltaetall_Signal_tca->Add(tmp8);
  hdeltarlb_Signal_tca->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ++++++++++++++++++++++++++++++++++++++++++++
// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("ttbarz"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_ttbarz->Add(tmp1);
  hdphill_ttbarz->Add(tmp2);
  hht_ttbarz->Add(tmp3);
  hjetsmulti_ttbarz->Add(tmp4);
  hbjetsmulti_ttbarz->Add(tmp5);

  hcoslb_ttbarz->Add(tmp6);
  hcosll_ttbarz->Add(tmp7);
  hdeltaetall_ttbarz->Add(tmp8);
  hdeltarlb_ttbarz->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;



// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("ttbarw"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_ttbarw->Add(tmp1);
  hdphill_ttbarw->Add(tmp2);
  hht_ttbarw->Add(tmp3);
  hjetsmulti_ttbarw->Add(tmp4);
  hbjetsmulti_ttbarw->Add(tmp5);

  hcoslb_ttbarw->Add(tmp6);
  hcosll_ttbarw->Add(tmp7);
  hdeltaetall_ttbarw->Add(tmp8);
  hdeltarlb_ttbarw->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ============================================

 file = TFile::Open("triple_top_FCNC_27TeV_LHC.root") ;
 tree = (TTree*)file->Get("wwz"); 
// cout<< "trename" <<tree->GetEntries() << endl;
// histoBinEntry =(TH1F*) file->Get("BinId_Signal");

 TH1F* tmp1 = new TH1F("tmp1", "tmp1", 10,0,500);
 TH1F* tmp2 = new TH1F("tmp2", "tmp2", 20,-3.5,3.5);
 TH1F* tmp3 = new TH1F("tmp3", "tmp3", 10,0,100);
 TH1F* tmp4 = new TH1F("tmp4", "tmp4", 8,0,8);
 TH1F* tmp5 = new TH1F("tmp5", "tmp5", 8,0,8);
 
 TH1F* tmp6 = new TH1F("tmp6", "tmp6", 10,-1,1);
 TH1F* tmp7 = new TH1F("tmp7", "tmp7", 10,-1,1);
 TH1F* tmp8 = new TH1F("tmp8", "tmp8", 10,-5,5);
 TH1F* tmp9 = new TH1F("tmp9", "tmp9", 20,0,6);

  tree->Project("tmp1","mll");
  tmp1->Scale(1./tmp1->Integral());
  tree->Project("tmp2","dphill");
  tmp2->Scale(1./tmp2->Integral());
  tree->Project("tmp3","ht");
  tmp3->Scale(1./tmp3->Integral());
  tree->Project("tmp4","jetsmulti");
  tmp4->Scale(1./tmp4->Integral());
  tree->Project("tmp5","bjetsmulti");
  tmp5->Scale(1./tmp5->Integral());

  tree->Project("tmp6","coslb");
  tmp6->Scale(1./tmp6->Integral());
  tree->Project("tmp7","cosll");
  tmp7->Scale(1./tmp7->Integral());
  tree->Project("tmp8","deltaetall");
  tmp8->Scale(1./tmp8->Integral());
  tree->Project("tmp9","deltarlb");
  tmp9->Scale(1./tmp9->Integral());


  hmll_wwz->Add(tmp1);
  hdphill_wwz->Add(tmp2);
  hht_wwz->Add(tmp3);
  hjetsmulti_wwz->Add(tmp4);
  hbjetsmulti_wwz->Add(tmp5);

  hcoslb_wwz->Add(tmp6);
  hcosll_wwz->Add(tmp7);
  hdeltaetall_wwz->Add(tmp8);
  hdeltarlb_wwz->Add(tmp9);


delete tmp1; delete tmp2; delete tmp3; delete tmp4; delete tmp5; 
delete tmp6; delete tmp7; delete tmp8; delete tmp9;

delete tree; file->Close("R");
delete file;


// ++++++++++++++++++++++++++++++++++++++++++++
// ============================================


 hmll_Signal_tug->SetLineColor(1); 
  hmll_Signal_tcg->SetLineColor(2);
   hmll_Signal_tuH->SetLineColor(3);
    hmll_Signal_tcH->SetLineColor(4);

     hmll_Signal_tuz_Gammamu->SetLineColor(5);
      hmll_Signal_tcz_Gammamu->SetLineColor(6);
       hmll_Signal_tuz_Sigmamunu->SetLineColor(20);
        hmll_Signal_tcz_Sigmamunu->SetLineColor(21);

          hmll_Signal_tua->SetLineColor(7);
           hmll_Signal_tca->SetLineColor(8);


 hmll_ttbarz->SetLineColor(6);
  hmll_ttbarw->SetLineColor(12);
   hmll_wwz->SetLineColor(7);



 hdphill_Signal_tug->SetLineColor(1); 
  hdphill_Signal_tcg->SetLineColor(2);
   hdphill_Signal_tuH->SetLineColor(3);
    hdphill_Signal_tcH->SetLineColor(4);

     hdphill_Signal_tuz_Gammamu->SetLineColor(5);
      hdphill_Signal_tcz_Gammamu->SetLineColor(6);
       hdphill_Signal_tuz_Sigmamunu->SetLineColor(20);
        hdphill_Signal_tcz_Sigmamunu->SetLineColor(21);      

          hdphill_Signal_tua->SetLineColor(7);
           hdphill_Signal_tca->SetLineColor(8);


 hdphill_ttbarz->SetLineColor(9);
  hdphill_ttbarw->SetLineColor(11);
   hdphill_wwz->SetLineColor(12);


 hht_Signal_tug->SetLineColor(1); 
  hht_Signal_tcg->SetLineColor(2);
   hht_Signal_tuH->SetLineColor(3);
    hht_Signal_tcH->SetLineColor(4);

     hht_Signal_tuz_Gammamu->SetLineColor(5);
      hht_Signal_tcz_Gammamu->SetLineColor(6);
       hht_Signal_tuz_Sigmamunu->SetLineColor(20);
        hht_Signal_tcz_Sigmamunu->SetLineColor(21);     

          hht_Signal_tua->SetLineColor(7);
           hht_Signal_tca->SetLineColor(8);


 hht_ttbarz->SetLineColor(3);
  hht_ttbarw->SetLineColor(4);
   hht_wwz->SetLineColor(6);


 hjetsmulti_Signal_tug->SetLineColor(1); 
  hjetsmulti_Signal_tcg->SetLineColor(2);
   hjetsmulti_Signal_tuH->SetLineColor(3);
    hjetsmulti_Signal_tcH->SetLineColor(4);

     hjetsmulti_Signal_tuz_Gammamu->SetLineColor(5);
      hjetsmulti_Signal_tcz_Gammamu->SetLineColor(6);
       hjetsmulti_Signal_tuz_Sigmamunu->SetLineColor(20);
        hjetsmulti_Signal_tcz_Sigmamunu->SetLineColor(21);

          hjetsmulti_Signal_tua->SetLineColor(7);
           hjetsmulti_Signal_tca->SetLineColor(8);


 hjetsmulti_ttbarz->SetLineColor(6);
  hjetsmulti_ttbarw->SetLineColor(12);
   hjetsmulti_wwz->SetLineColor(7);


 hbjetsmulti_Signal_tug->SetLineColor(1); 
  hbjetsmulti_Signal_tcg->SetLineColor(2);
   hbjetsmulti_Signal_tuH->SetLineColor(3);
    hbjetsmulti_Signal_tcH->SetLineColor(4);

     hbjetsmulti_Signal_tuz_Gammamu->SetLineColor(5);
      hbjetsmulti_Signal_tcz_Gammamu->SetLineColor(6);
       hbjetsmulti_Signal_tuz_Sigmamunu->SetLineColor(20);
        hbjetsmulti_Signal_tcz_Sigmamunu->SetLineColor(21);

          hbjetsmulti_Signal_tua->SetLineColor(7);
           hbjetsmulti_Signal_tca->SetLineColor(8);


 hbjetsmulti_ttbarz->SetLineColor(6);
  hbjetsmulti_ttbarw->SetLineColor(12);
   hbjetsmulti_wwz->SetLineColor(7);


 hcoslb_Signal_tug->SetLineColor(1); 
  hcoslb_Signal_tcg->SetLineColor(2);
   hcoslb_Signal_tuH->SetLineColor(3);
    hcoslb_Signal_tcH->SetLineColor(4);

     hcoslb_Signal_tuz_Gammamu->SetLineColor(5);
      hcoslb_Signal_tcz_Gammamu->SetLineColor(6);
       hcoslb_Signal_tuz_Sigmamunu->SetLineColor(20);
        hcoslb_Signal_tcz_Sigmamunu->SetLineColor(21);

          hcoslb_Signal_tua->SetLineColor(7);
           hcoslb_Signal_tca->SetLineColor(8);


 hcoslb_ttbarz->SetLineColor(3);
  hcoslb_ttbarw->SetLineColor(4);
   hcoslb_wwz->SetLineColor(6);
   
   
   
 hcosll_Signal_tug->SetLineColor(1); 
  hcosll_Signal_tcg->SetLineColor(2);
   hcosll_Signal_tuH->SetLineColor(3);
    hcosll_Signal_tcH->SetLineColor(4);

     hcosll_Signal_tuz_Gammamu->SetLineColor(5);
      hcosll_Signal_tcz_Gammamu->SetLineColor(6);
       hcosll_Signal_tuz_Sigmamunu->SetLineColor(20);
        hcosll_Signal_tcz_Sigmamunu->SetLineColor(21);

          hcosll_Signal_tua->SetLineColor(7);
           hcosll_Signal_tca->SetLineColor(8);


 hcosll_ttbarz->SetLineColor(3);
  hcosll_ttbarw->SetLineColor(4);
   hcosll_wwz->SetLineColor(6);
   

 hdeltaetall_Signal_tug->SetLineColor(1); 
  hdeltaetall_Signal_tcg->SetLineColor(2);
   hdeltaetall_Signal_tuH->SetLineColor(3);
    hdeltaetall_Signal_tcH->SetLineColor(4);

     hdeltaetall_Signal_tuz_Gammamu->SetLineColor(5);
      hdeltaetall_Signal_tcz_Gammamu->SetLineColor(6);
       hdeltaetall_Signal_tuz_Sigmamunu->SetLineColor(20);
        hdeltaetall_Signal_tcz_Sigmamunu->SetLineColor(21);

          hdeltaetall_Signal_tua->SetLineColor(7);
           hdeltaetall_Signal_tca->SetLineColor(8);


 hdeltaetall_ttbarz->SetLineColor(3);
  hdeltaetall_ttbarw->SetLineColor(4);
   hdeltaetall_wwz->SetLineColor(6);
   
   
 hdeltarlb_Signal_tug->SetLineColor(1); 
  hdeltarlb_Signal_tcg->SetLineColor(2);
   hdeltarlb_Signal_tuH->SetLineColor(3);
    hdeltarlb_Signal_tcH->SetLineColor(4);

     hdeltarlb_Signal_tuz_Gammamu->SetLineColor(5);
      hdeltarlb_Signal_tcz_Gammamu->SetLineColor(6);
       hdeltarlb_Signal_tuz_Sigmamunu->SetLineColor(20);
        hdeltarlb_Signal_tcz_Sigmamunu->SetLineColor(21);

          hdeltarlb_Signal_tua->SetLineColor(7);
           hdeltarlb_Signal_tca->SetLineColor(8);


 hdeltarlb_ttbarz->SetLineColor(3);
  hdeltarlb_ttbarw->SetLineColor(4);
   hdeltarlb_wwz->SetLineColor(6);
   



 hmll_Signal_tug->SetLineWidth(1); 
  hmll_Signal_tcg->SetLineWidth(1);
   hmll_Signal_tuH->SetLineWidth(1);
    hmll_Signal_tcH->SetLineWidth(1);

     hmll_Signal_tuz_Gammamu->SetLineWidth(1);
      hmll_Signal_tcz_Gammamu->SetLineWidth(1);
       hmll_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hmll_Signal_tcz_Sigmamunu->SetLineWidth(1);

        hmll_Signal_tua->SetLineWidth(1);
         hmll_Signal_tca->SetLineWidth(1);


 hmll_ttbarz->SetLineWidth(1);
  hmll_ttbarw->SetLineWidth(1);
   hmll_wwz->SetLineWidth(1);



 hmll_Signal_tug->SetLineStyle(1); 
  hmll_Signal_tcg->SetLineStyle(2);
   hmll_Signal_tuH->SetLineStyle(7);
    hmll_Signal_tcH->SetLineStyle(4);

     hmll_Signal_tuz_Gammamu->SetLineStyle(1);
      hmll_Signal_tcz_Gammamu->SetLineStyle(1);
       hmll_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hmll_Signal_tcz_Sigmamunu->SetLineStyle(1);

          hmll_Signal_tua->SetLineStyle(1);
           hmll_Signal_tca->SetLineStyle(1);


 hmll_ttbarz->SetLineStyle(5);
  hmll_ttbarw->SetLineStyle(6);
   hmll_wwz->SetLineStyle(7);


 hdphill_Signal_tug->SetLineWidth(1); 
  hdphill_Signal_tcg->SetLineWidth(1);
   hdphill_Signal_tuH->SetLineWidth(1);
    hdphill_Signal_tcH->SetLineWidth(1);

     hdphill_Signal_tuz_Gammamu->SetLineWidth(1);
      hdphill_Signal_tcz_Gammamu->SetLineWidth(1);
        hdphill_Signal_tuz_Sigmamunu->SetLineWidth(1);
         hdphill_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hdphill_Signal_tua->SetLineWidth(1);
          hdphill_Signal_tca->SetLineWidth(1);


 hdphill_ttbarz->SetLineWidth(1);
  hdphill_ttbarw->SetLineWidth(1);
   hdphill_wwz->SetLineWidth(1);



 hdphill_Signal_tug->SetLineStyle(1); 
  hdphill_Signal_tcg->SetLineStyle(2);
   hdphill_Signal_tuH->SetLineStyle(1);
    hdphill_Signal_tcH->SetLineStyle(1);

     hdphill_Signal_tuz_Gammamu->SetLineStyle(1);
      hdphill_Signal_tcz_Gammamu->SetLineStyle(1);
       hdphill_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hdphill_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hdphill_Signal_tua->SetLineStyle(1);
          hdphill_Signal_tca->SetLineStyle(1);


 hdphill_ttbarz->SetLineStyle(3);
  hdphill_ttbarw->SetLineStyle(4);
   hdphill_wwz->SetLineStyle(6);


 hht_Signal_tug->SetLineWidth(1); 
  hht_Signal_tcg->SetLineWidth(1);
   hht_Signal_tuH->SetLineWidth(1);
    hht_Signal_tcH->SetLineWidth(1);

     hht_Signal_tuz_Gammamu->SetLineWidth(1);
      hht_Signal_tcz_Gammamu->SetLineWidth(1);
       hht_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hht_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hht_Signal_tua->SetLineWidth(1);
          hht_Signal_tca->SetLineWidth(1);


 hht_ttbarz->SetLineWidth(1);
  hht_ttbarw->SetLineWidth(1);
   hht_wwz->SetLineWidth(1);



 hht_Signal_tug->SetLineStyle(1); 
  hht_Signal_tcg->SetLineStyle(2);
   hht_Signal_tuH->SetLineStyle(1);
    hht_Signal_tcH->SetLineStyle(1);

     hht_Signal_tuz_Gammamu->SetLineStyle(1);
      hht_Signal_tcz_Gammamu->SetLineStyle(1);
       hht_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hht_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hht_Signal_tua->SetLineStyle(1);
          hht_Signal_tca->SetLineStyle(1);


 hht_ttbarz->SetLineStyle(3);
  hht_ttbarw->SetLineStyle(4);
   hht_wwz->SetLineStyle(6);

 hjetsmulti_Signal_tug->SetLineWidth(2); 
  hjetsmulti_Signal_tcg->SetLineWidth(2);
   hjetsmulti_Signal_tuH->SetLineWidth(2);
    hjetsmulti_Signal_tcH->SetLineWidth(2);

     hjetsmulti_Signal_tuz_Gammamu->SetLineWidth(2);
      hjetsmulti_Signal_tcz_Gammamu->SetLineWidth(2);
       hjetsmulti_Signal_tuz_Sigmamunu->SetLineWidth(2);
        hjetsmulti_Signal_tcz_Sigmamunu->SetLineWidth(2);

         hjetsmulti_Signal_tua->SetLineWidth(2);
          hjetsmulti_Signal_tca->SetLineWidth(2);


 hjetsmulti_ttbarz->SetLineWidth(2);
  hjetsmulti_ttbarw->SetLineWidth(2);
   hjetsmulti_wwz->SetLineWidth(2);



 hjetsmulti_Signal_tug->SetLineStyle(1); 
  hjetsmulti_Signal_tcg->SetLineStyle(2);
   hjetsmulti_Signal_tuH->SetLineStyle(7);
    hjetsmulti_Signal_tcH->SetLineStyle(4);

     hjetsmulti_Signal_tuz_Gammamu->SetLineStyle(1);
      hjetsmulti_Signal_tcz_Gammamu->SetLineStyle(1);
       hjetsmulti_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hjetsmulti_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hjetsmulti_Signal_tua->SetLineStyle(1);
          hjetsmulti_Signal_tca->SetLineStyle(1);


 hjetsmulti_ttbarz->SetLineStyle(5);
  hjetsmulti_ttbarw->SetLineStyle(6);
   hjetsmulti_wwz->SetLineStyle(7);


 hbjetsmulti_Signal_tug->SetLineWidth(2); 
  hbjetsmulti_Signal_tcg->SetLineWidth(2);
   hbjetsmulti_Signal_tuH->SetLineWidth(2);
    hbjetsmulti_Signal_tcH->SetLineWidth(2);

     hbjetsmulti_Signal_tuz_Gammamu->SetLineWidth(2);
      hbjetsmulti_Signal_tcz_Gammamu->SetLineWidth(2);
       hbjetsmulti_Signal_tuz_Sigmamunu->SetLineWidth(2);
        hbjetsmulti_Signal_tcz_Sigmamunu->SetLineWidth(2);

         hbjetsmulti_Signal_tua->SetLineWidth(2);
          hbjetsmulti_Signal_tca->SetLineWidth(2);


 hbjetsmulti_ttbarz->SetLineWidth(2);
  hbjetsmulti_ttbarw->SetLineWidth(2);
   hbjetsmulti_wwz->SetLineWidth(2);



 hbjetsmulti_Signal_tug->SetLineStyle(1); 
  hbjetsmulti_Signal_tcg->SetLineStyle(2);
   hbjetsmulti_Signal_tuH->SetLineStyle(7);
    hbjetsmulti_Signal_tcH->SetLineStyle(4);

     hbjetsmulti_Signal_tuz_Gammamu->SetLineStyle(1);
      hbjetsmulti_Signal_tcz_Gammamu->SetLineStyle(1);
       hbjetsmulti_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hbjetsmulti_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hbjetsmulti_Signal_tua->SetLineStyle(1);
          hbjetsmulti_Signal_tca->SetLineStyle(1);


 hbjetsmulti_ttbarz->SetLineStyle(5);
  hbjetsmulti_ttbarw->SetLineStyle(6);
   hbjetsmulti_wwz->SetLineStyle(7);

   
   
 hcoslb_Signal_tug->SetLineWidth(1); 
  hcoslb_Signal_tcg->SetLineWidth(1);
   hcoslb_Signal_tuH->SetLineWidth(1);
    hcoslb_Signal_tcH->SetLineWidth(1);

     hcoslb_Signal_tuz_Gammamu->SetLineWidth(1);
      hcoslb_Signal_tcz_Gammamu->SetLineWidth(1);
       hcoslb_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hcoslb_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hcoslb_Signal_tua->SetLineWidth(1);
          hcoslb_Signal_tca->SetLineWidth(1);


 hcoslb_ttbarz->SetLineWidth(1);
  hcoslb_ttbarw->SetLineWidth(1);
   hcoslb_wwz->SetLineWidth(1);



 hcoslb_Signal_tug->SetLineStyle(1); 
  hcoslb_Signal_tcg->SetLineStyle(2);
   hcoslb_Signal_tuH->SetLineStyle(1);
    hcoslb_Signal_tcH->SetLineStyle(1);

     hcoslb_Signal_tuz_Gammamu->SetLineStyle(1);
      hcoslb_Signal_tcz_Gammamu->SetLineStyle(1);
       hcoslb_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hcoslb_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hcoslb_Signal_tua->SetLineStyle(1);
          hcoslb_Signal_tca->SetLineStyle(1);


 hcoslb_ttbarz->SetLineStyle(3);
  hcoslb_ttbarw->SetLineStyle(4);
   hcoslb_wwz->SetLineStyle(6);



 hcosll_Signal_tug->SetLineWidth(1); 
  hcosll_Signal_tcg->SetLineWidth(1);
   hcosll_Signal_tuH->SetLineWidth(1);
    hcosll_Signal_tcH->SetLineWidth(1);

     hcosll_Signal_tuz_Gammamu->SetLineWidth(1);
      hcosll_Signal_tcz_Gammamu->SetLineWidth(1);
       hcosll_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hcosll_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hcosll_Signal_tua->SetLineWidth(1);
          hcosll_Signal_tca->SetLineWidth(1);


 hcosll_ttbarz->SetLineWidth(1);
  hcosll_ttbarw->SetLineWidth(1);
   hcosll_wwz->SetLineWidth(1);



 hcosll_Signal_tug->SetLineStyle(1); 
  hcosll_Signal_tcg->SetLineStyle(2);
   hcosll_Signal_tuH->SetLineStyle(1);
    hcosll_Signal_tcH->SetLineStyle(1);

     hcosll_Signal_tuz_Gammamu->SetLineStyle(1);
      hcosll_Signal_tcz_Gammamu->SetLineStyle(1);
       hcosll_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hcosll_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hcosll_Signal_tua->SetLineStyle(1);
          hcosll_Signal_tca->SetLineStyle(1);


 hcosll_ttbarz->SetLineStyle(3);
  hcosll_ttbarw->SetLineStyle(4);
   hcosll_wwz->SetLineStyle(6);
   
   
   
   
   
 hdeltaetall_Signal_tug->SetLineWidth(1); 
  hdeltaetall_Signal_tcg->SetLineWidth(1);
   hdeltaetall_Signal_tuH->SetLineWidth(1);
    hdeltaetall_Signal_tcH->SetLineWidth(1);

     hdeltaetall_Signal_tuz_Gammamu->SetLineWidth(1);
      hdeltaetall_Signal_tcz_Gammamu->SetLineWidth(1);
       hdeltaetall_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hdeltaetall_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hdeltaetall_Signal_tua->SetLineWidth(1);
          hdeltaetall_Signal_tca->SetLineWidth(1);


 hdeltaetall_ttbarz->SetLineWidth(1);
  hdeltaetall_ttbarw->SetLineWidth(1);
   hdeltaetall_wwz->SetLineWidth(1);



 hdeltaetall_Signal_tug->SetLineStyle(1); 
  hdeltaetall_Signal_tcg->SetLineStyle(2);
   hdeltaetall_Signal_tuH->SetLineStyle(1);
    hdeltaetall_Signal_tcH->SetLineStyle(1);

     hdeltaetall_Signal_tuz_Gammamu->SetLineStyle(1);
      hdeltaetall_Signal_tcz_Gammamu->SetLineStyle(1);
       hdeltaetall_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hdeltaetall_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hdeltaetall_Signal_tua->SetLineStyle(1);
          hdeltaetall_Signal_tca->SetLineStyle(1);


 hdeltaetall_ttbarz->SetLineStyle(3);
  hdeltaetall_ttbarw->SetLineStyle(4);
   hdeltaetall_wwz->SetLineStyle(6);
   

   
 hdeltarlb_Signal_tug->SetLineWidth(1); 
  hdeltarlb_Signal_tcg->SetLineWidth(1);
   hdeltarlb_Signal_tuH->SetLineWidth(1);
    hdeltarlb_Signal_tcH->SetLineWidth(1);

     hdeltarlb_Signal_tuz_Gammamu->SetLineWidth(1);
      hdeltarlb_Signal_tcz_Gammamu->SetLineWidth(1);
       hdeltarlb_Signal_tuz_Sigmamunu->SetLineWidth(1);
        hdeltarlb_Signal_tcz_Sigmamunu->SetLineWidth(1);

         hdeltarlb_Signal_tua->SetLineWidth(1);
          hdeltarlb_Signal_tca->SetLineWidth(1);


 hdeltarlb_ttbarz->SetLineWidth(1);
  hdeltarlb_ttbarw->SetLineWidth(1);
   hdeltarlb_wwz->SetLineWidth(1);



 hdeltarlb_Signal_tug->SetLineStyle(1); 
  hdeltarlb_Signal_tcg->SetLineStyle(2);
   hdeltarlb_Signal_tuH->SetLineStyle(1);
    hdeltarlb_Signal_tcH->SetLineStyle(1);

     hdeltarlb_Signal_tuz_Gammamu->SetLineStyle(1);
      hdeltarlb_Signal_tcz_Gammamu->SetLineStyle(1);
       hdeltarlb_Signal_tuz_Sigmamunu->SetLineStyle(1);
        hdeltarlb_Signal_tcz_Sigmamunu->SetLineStyle(1);

         hdeltarlb_Signal_tua->SetLineStyle(1);
          hdeltarlb_Signal_tca->SetLineStyle(1);


 hdeltarlb_ttbarz->SetLineStyle(3);
  hdeltarlb_ttbarw->SetLineStyle(4);
   hdeltarlb_wwz->SetLineStyle(6);


// hphotonpt_Signal_ca0->SetFillColor(3);
// hphotonpt_Signal_ca0->SetFillStyle(4001);


// ++++++++++++++++++++++++++++++++++++++++++++
// ============================================


Double_t xl1=0.70, yl1=0.60, xl2=xl1+0.250, yl2=yl1+0.250;

TLegend *leg = new TLegend(xl1,yl1,xl2,yl2);
leg->SetBorderSize(0);

leg->AddEntry(hmll_Signal_tug,"tug","L")->SetTextColor(1);
leg->AddEntry(hmll_Signal_tcg,"tcg","L")->SetTextColor(1);
leg->AddEntry(hmll_Signal_tuH,"tuH","L")->SetTextColor(1);
leg->AddEntry(hmll_Signal_tcH,"tcH","L")->SetTextColor(1);

//leg->AddEntry(hmll_Signal_tuz_Gammamu,"tuz_Gammamu","L")->SetTextColor(5);
//leg->AddEntry(hmll_Signal_tcz_Gammamu,"tcz_Gammamu","L")->SetTextColor(6);
//leg->AddEntry(hmll_Signal_tuz_Sigmamunu,"tuz_Sigmamunu","L")->SetTextColor(20);
//leg->AddEntry(hmll_Signal_tcz_Sigmamunu,"tcz_Sigmamunu","L")->SetTextColor(21);

//leg->AddEntry(hmll_Signal_tua,"tua","L")->SetTextColor(7);
//leg->AddEntry(hmll_Signal_tca,"tca","L")->SetTextColor(8);

leg->AddEntry(hmll_ttbarz,"t#bar{t}Z","L")->SetTextColor(1);
leg->AddEntry(hmll_ttbarw,"t#bar{t}W","L")->SetTextColor(1);
//leg->AddEntry(hmll_wwz,"WWZ","L")->SetTextColor(1);

leg->SetTextSize(0.032);
leg->SetTextFont(12);
leg->SetFillStyle(0);

//////////////////////////////////////////////////

TCanvas C1("c1","c1", 10, 10, 900, 700);

hmll_Signal_tug->GetXaxis()->SetTitle("M(l^{#pm}, l^{#pm})");
hmll_Signal_tug->GetXaxis()->SetTitleOffset(1.2);
hmll_Signal_tug->GetXaxis()->SetLabelFont(132);
hmll_Signal_tug->GetXaxis()->SetTitleFont(12);
hmll_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hmll_Signal_tug->GetYaxis()->SetTitleOffset(1.2);
hmll_Signal_tug->GetYaxis()->SetLabelFont(132);
hmll_Signal_tug->GetYaxis()->SetTitleFont(12);
hmll_Signal_tug->GetYaxis()-> SetRangeUser(0,0.35);

hmll_Signal_tug->Draw("hist");
hmll_Signal_tcg->Draw("hist same");
//hmll_Signal_tuH->Draw("hist same");
//hmll_Signal_tcH->Draw("hist same");

//hmll_Signal_tuz_Gammamu->Draw("hist same");
//hmll_Signal_tcz_Gammamu->Draw("hist same");
//hmll_Signal_tuz_Sigmamunu->Draw("hist same");
//hmll_Signal_tcz_Sigmamunu->Draw("hist same");

//hmll_Signal_tua->Draw("hist same");
//hmll_Signal_tca->Draw("hist same");

hmll_ttbarz->Draw("hist same");
hmll_ttbarw->Draw("hist same");
hmll_wwz->Draw("hist same");

leg->Draw("same");

//C1.SaveAs("Mll.pdf");
//C1.SaveAs("Mll.C");
//C1.SaveAs("Mll.eps");
//C1.SaveAs("Mll.root");



//////////////////////////////////////////////////

TCanvas C2("c2","c2", 10, 10, 900, 700);

hdphill_Signal_tug->GetXaxis()->SetTitle("dPhill");
hdphill_Signal_tug->GetXaxis()->SetTitleOffset(1.25);
hdphill_Signal_tug->GetXaxis()->SetLabelFont(22);
hdphill_Signal_tug->GetXaxis()->SetTitleFont(22);
hdphill_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hdphill_Signal_tug->GetYaxis()->SetTitleOffset(1.40);
hdphill_Signal_tug->GetYaxis()->SetLabelFont(22);
hdphill_Signal_tug->GetYaxis()->SetTitleFont(22);
hdphill_Signal_tug->GetYaxis()-> SetRangeUser(0,0.30);

hdphill_Signal_tug->Draw("hist");
hdphill_Signal_tcg->Draw("hist same");
hdphill_Signal_tuH->Draw("hist same");
hdphill_Signal_tcH->Draw("hist same");

//hdphill_Signal_tuz_Gammamu->Draw("hist same");
//hdphill_Signal_tcz_Gammamu->Draw("hist same");
//hdphill_Signal_tuz_Sigmamunu->Draw("hist same");
//hdphill_Signal_tcz_Sigmamunu->Draw("hist same");

//hdphill_Signal_tua->Draw("hist same");
//hdphill_Signal_tca->Draw("hist same");

hdphill_ttbarz->Draw("hist same");
hdphill_ttbarw->Draw("hist same");
hdphill_wwz->Draw("hist same");

leg->Draw("same");

//C2.SaveAs("dPhill.pdf");
//C2.SaveAs("dPhill.C");
//C2.SaveAs("dPhill.eps");
//C2.SaveAs("dPhill.root");



//////////////////////////////////////////////////

TCanvas C3("c3","c3", 10, 10, 900, 700);

hht_Signal_tug->GetXaxis()->SetTitle("H_{T}");
hht_Signal_tug->GetXaxis()->SetTitleOffset(1.20);
hht_Signal_tug->GetXaxis()->SetLabelFont(132);
hht_Signal_tug->GetXaxis()->SetTitleFont(12);
hht_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hht_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hht_Signal_tug->GetYaxis()->SetLabelFont(132);
hht_Signal_tug->GetYaxis()->SetTitleFont(12);
hht_Signal_tug->GetYaxis()-> SetRangeUser(0,0.65);

hht_Signal_tug->Draw("hist");
hht_Signal_tcg->Draw("hist same");
//hht_Signal_tuH->Draw("hist same");
//hht_Signal_tcH->Draw("hist same");

//hht_Signal_tuz_Gammamu->Draw("hist same");
//hht_Signal_tcz_Gammamu->Draw("hist same");
//hht_Signal_tuz_Sigmamunu->Draw("hist same");
//hht_Signal_tcz_Sigmamunu->Draw("hist same");

//hht_Signal_tua->Draw("hist same");
//hht_Signal_tca->Draw("hist same");

hht_ttbarz->Draw("hist same");
hht_ttbarw->Draw("hist same");
hht_wwz->Draw("hist same");

leg->Draw("same");

//C3.SaveAs("HT.pdf");
//C3.SaveAs("HT.C");
//C3.SaveAs("HT.eps");
//C3.SaveAs("HT.root");


//////////////////////////////////////////////////

TCanvas C4("c4","c4", 10, 10, 900, 700);

hjetsmulti_Signal_tug->GetXaxis()->SetTitle("Jets multiplicity");
hjetsmulti_Signal_tug->GetXaxis()->SetTitleOffset(1.2);
hjetsmulti_Signal_tug->GetXaxis()->SetLabelFont(132);
hjetsmulti_Signal_tug->GetXaxis()->SetTitleFont(12);
hjetsmulti_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hjetsmulti_Signal_tug->GetYaxis()->SetTitleOffset(1.2);
hjetsmulti_Signal_tug->GetYaxis()->SetLabelFont(132);
hjetsmulti_Signal_tug->GetYaxis()->SetTitleFont(12);
hjetsmulti_Signal_tug->GetYaxis()-> SetRangeUser(0,1.0);

hjetsmulti_Signal_tug->Draw("hist");
hjetsmulti_Signal_tcg->Draw("hist same");
hjetsmulti_Signal_tuH->Draw("hist same");
hjetsmulti_Signal_tcH->Draw("hist same");

//hjetsmulti_Signal_tuz_Gammamu->Draw("hist same");
//hjetsmulti_Signal_tcz_Gammamu->Draw("hist same");
//hjetsmulti_Signal_tuz_Sigmamunu->Draw("hist same");
//hjetsmulti_Signal_tcz_Sigmamunu->Draw("hist same");

//hjetsmulti_Signal_tua->Draw("hist same");
//hjetsmulti_Signal_tca->Draw("hist same");

hjetsmulti_ttbarz->Draw("hist same");
hjetsmulti_ttbarw->Draw("hist same");
//hjetsmulti_wwz->Draw("hist same");

leg->Draw("same");

//C4.SaveAs("jetsmulti.pdf");
//C4.SaveAs("jetsmulti.C");
C4.SaveAs("jetsmulti-HE-LHC.eps");
C4.SaveAs("jetsmulti-HE-LHC.root");


//////////////////////////////////////////////////

TCanvas C5("c5","c5", 10, 10, 900, 700);

hbjetsmulti_Signal_tug->GetXaxis()->SetTitle("b-jets multiplicity");
hbjetsmulti_Signal_tug->GetXaxis()->SetTitleOffset(1.2);
hbjetsmulti_Signal_tug->GetXaxis()->SetLabelFont(132);
hbjetsmulti_Signal_tug->GetXaxis()->SetTitleFont(12);
hbjetsmulti_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hbjetsmulti_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hbjetsmulti_Signal_tug->GetYaxis()->SetLabelFont(132);
hbjetsmulti_Signal_tug->GetYaxis()->SetTitleFont(12);
hbjetsmulti_Signal_tug->GetYaxis()-> SetRangeUser(0,1.0);

hbjetsmulti_Signal_tug->Draw("hist");
hbjetsmulti_Signal_tcg->Draw("hist same");
hbjetsmulti_Signal_tuH->Draw("hist same");
hbjetsmulti_Signal_tcH->Draw("hist same");

//hbjetsmulti_Signal_tuz_Gammamu->Draw("hist same");
//hbjetsmulti_Signal_tcz_Gammamu->Draw("hist same");
//hbjetsmulti_Signal_tuz_Sigmamunu->Draw("hist same");
//hbjetsmulti_Signal_tcz_Sigmamunu->Draw("hist same");

//hbjetsmulti_Signal_tua->Draw("hist same");
//hbjetsmulti_Signal_tca->Draw("hist same");

hbjetsmulti_ttbarz->Draw("hist same");
hbjetsmulti_ttbarw->Draw("hist same");
//hbjetsmulti_wwz->Draw("hist same");

leg->Draw("same");

//C5.SaveAs("bjetsmulti.pdf");
//C5.SaveAs("bjetsmulti.C");
C5.SaveAs("bjetsmulti-HE-LHC.eps");
C5.SaveAs("bjetsmulti-HE-LHC.root");



//////////////////////////////////////////////////

TCanvas C6("c6","c6", 10, 10, 900, 700);

hcoslb_Signal_tug->GetXaxis()->SetTitle("cos(l^{#pm}, b)");
hcoslb_Signal_tug->GetXaxis()->SetTitleOffset(1.20);
hcoslb_Signal_tug->GetXaxis()->SetLabelFont(132);
hcoslb_Signal_tug->GetXaxis()->SetTitleFont(12);
hcoslb_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hcoslb_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hcoslb_Signal_tug->GetYaxis()->SetLabelFont(132);
hcoslb_Signal_tug->GetYaxis()->SetTitleFont(12);
hcoslb_Signal_tug->GetYaxis()-> SetRangeUser(0,0.25);

hcoslb_Signal_tug->Draw("hist");
hcoslb_Signal_tcg->Draw("hist same");
//hcoslb_Signal_tuH->Draw("hist same");
//hcoslb_Signal_tcH->Draw("hist same");

//hcoslb_Signal_tuz_Gammamu->Draw("hist same");
//hcoslb_Signal_tcz_Gammamu->Draw("hist same");
//hcoslb_Signal_tuz_Sigmamunu->Draw("hist same");
//hcoslb_Signal_tcz_Sigmamunu->Draw("hist same");

//hcoslb_Signal_tua->Draw("hist same");
//hcoslb_Signal_tca->Draw("hist same");

hcoslb_ttbarz->Draw("hist same");
hcoslb_ttbarw->Draw("hist same");
hcoslb_wwz->Draw("hist same");

leg->Draw("same");

//C6.SaveAs("coslb.pdf");
//C6.SaveAs("coslb.C");
//C6.SaveAs("coslb.eps");
//C6.SaveAs("coslb.root");


//////////////////////////////////////////////////

TCanvas C7("c7","c7", 10, 10, 900, 700);

hcosll_Signal_tug->GetXaxis()->SetTitle("cos(l^{#pm}, l^{#pm})");
hcosll_Signal_tug->GetXaxis()->SetTitleOffset(1.20);
hcosll_Signal_tug->GetXaxis()->SetLabelFont(132);
hcosll_Signal_tug->GetXaxis()->SetTitleFont(12);
hcosll_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hcosll_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hcosll_Signal_tug->GetYaxis()->SetLabelFont(132);
hcosll_Signal_tug->GetYaxis()->SetTitleFont(12);
hcosll_Signal_tug->GetYaxis()-> SetRangeUser(0,0.25);

hcosll_Signal_tug->Draw("hist");
hcosll_Signal_tcg->Draw("hist same");
//hcosll_Signal_tuH->Draw("hist same");
//hcosll_Signal_tcH->Draw("hist same");

//hcosll_Signal_tuz_Gammamu->Draw("hist same");
//hcosll_Signal_tcz_Gammamu->Draw("hist same");
//hcosll_Signal_tuz_Sigmamunu->Draw("hist same");
//hcosll_Signal_tcz_Sigmamunu->Draw("hist same");

//hcosll_Signal_tua->Draw("hist same");
//hcosll_Signal_tca->Draw("hist same");

hcosll_ttbarz->Draw("hist same");
hcosll_ttbarw->Draw("hist same");
hcosll_wwz->Draw("hist same");

leg->Draw("same");

//C7.SaveAs("cosll.pdf");
//C7.SaveAs("cosll.C");
//C7.SaveAs("cosll.eps");
//C7.SaveAs("cosll.root");


//////////////////////////////////////////////////

TCanvas C8("c8","c8", 10, 10, 900, 700);

hdeltaetall_Signal_tug->GetXaxis()->SetTitle("#Delta#eta(l^{#pm}, l^{#pm})");
hdeltaetall_Signal_tug->GetXaxis()->SetTitleOffset(1.20);
hdeltaetall_Signal_tug->GetXaxis()->SetLabelFont(132);
hdeltaetall_Signal_tug->GetXaxis()->SetTitleFont(12);
hdeltaetall_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hdeltaetall_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hdeltaetall_Signal_tug->GetYaxis()->SetLabelFont(132);
hdeltaetall_Signal_tug->GetYaxis()->SetTitleFont(12);
hdeltaetall_Signal_tug->GetYaxis()-> SetRangeUser(0,0.30);

hdeltaetall_Signal_tug->Draw("hist");
hdeltaetall_Signal_tcg->Draw("hist same");
//hdeltaetall_Signal_tuH->Draw("hist same");
//hdeltaetall_Signal_tcH->Draw("hist same");

//hdeltaetall_Signal_tuz_Gammamu->Draw("hist same");
//hdeltaetall_Signal_tcz_Gammamu->Draw("hist same");
//hdeltaetall_Signal_tuz_Sigmamunu->Draw("hist same");
//hdeltaetall_Signal_tcz_Sigmamunu->Draw("hist same");

//hdeltaetall_Signal_tua->Draw("hist same");
//hdeltaetall_Signal_tca->Draw("hist same");

hdeltaetall_ttbarz->Draw("hist same");
hdeltaetall_ttbarw->Draw("hist same");
hdeltaetall_wwz->Draw("hist same");

leg->Draw("same");

//C8.SaveAs("deltaetall.pdf");
//C8.SaveAs("deltaetall.C");
//C8.SaveAs("deltaetall.eps");
//C8.SaveAs("deltaetall.root");




//////////////////////////////////////////////////

TCanvas C9("c9","c9", 10, 10, 900, 700);

hdeltarlb_Signal_tug->GetXaxis()->SetTitle("#DeltaR(l, b)");
hdeltarlb_Signal_tug->GetXaxis()->SetTitleOffset(1.20);
hdeltarlb_Signal_tug->GetXaxis()->SetLabelFont(132);
hdeltarlb_Signal_tug->GetXaxis()->SetTitleFont(12);
hdeltarlb_Signal_tug->GetYaxis()->SetTitle("Events normalised to unit area");
hdeltarlb_Signal_tug->GetYaxis()->SetTitleOffset(1.20);
hdeltarlb_Signal_tug->GetYaxis()->SetLabelFont(132);
hdeltarlb_Signal_tug->GetYaxis()->SetTitleFont(12);
hdeltarlb_Signal_tug->GetYaxis()-> SetRangeUser(0,0.20);

hdeltarlb_Signal_tug->Draw("hist");
hdeltarlb_Signal_tcg->Draw("hist same");
//hdeltarlb_Signal_tuH->Draw("hist same");
//hdeltarlb_Signal_tcH->Draw("hist same");

//hdeltarlb_Signal_tuz_Gammamu->Draw("hist same");
//hdeltarlb_Signal_tcz_Gammamu->Draw("hist same");
//hdeltarlb_Signal_tuz_Sigmamunu->Draw("hist same");
//hdeltarlb_Signal_tcz_Sigmamunu->Draw("hist same");

//hdeltarlb_Signal_tua->Draw("hist same");
//hdeltarlb_Signal_tca->Draw("hist same");

hdeltarlb_ttbarz->Draw("hist same");
hdeltarlb_ttbarw->Draw("hist same");
hdeltarlb_wwz->Draw("hist same");

leg->Draw("same");

//C9.SaveAs("deltarlb.pdf");
//C9.SaveAs("deltarlb.C");
//C9.SaveAs("deltarlb.eps");
//C9.SaveAs("deltarlb.root");

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
