#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <TProfile.h>
#include "createHistos.h"



int main( int argc, char* argv[] ) {


  if(argc<3 || argc>4) {
    std::cout << "Usage:  ./tmp/plotHistos noPUFile.root PUFile.root output.root"<<std::endl
	 << std::endl;
    exit(-1);
  }


  char noPUFileName[500];
  sprintf(noPUFileName,argv[1]);

  char PUFileName[500];
  sprintf(PUFileName,argv[2]);

  char outputFileName[500];
  sprintf(outputFileName,argv[3]);


  gROOT->ProcessLine(".x ~/rootlogon.C");

  TFile* noPUFile=TFile::Open(noPUFileName);
  TFile* PUFile=TFile::Open(PUFileName);



  std::map<TString,TH1F*> histoNamesnoPU;
  std::map<TString,TH1F*> histoNamesPU;



  histoNamesnoPU["phoErecoOverETrueFirstEtaBin"]=(TH1F*)noPUFile->Get("phoErecoOverETrueFirstEtaBin");
  histoNamesnoPU["phoErecoOverETrueSecondEtaBin"]=(TH1F*)noPUFile->Get("phoErecoOverETrueSecondEtaBin");
  histoNamesnoPU["phoErecoOverETrueThirdEtaBin"]=(TH1F*)noPUFile->Get("phoErecoOverETrueThirdEtaBin");
  
  histoNamesnoPU["eleErecoOverETrueFirstEtaBin"]=(TH1F*)noPUFile->Get("eleErecoOverETrueFirstEtaBin");
  histoNamesnoPU["eleErecoOverETrueSecondEtaBin"]=(TH1F*)noPUFile->Get("eleErecoOverETrueSecondEtaBin");
  histoNamesnoPU["eleErecoOverETrueThirdEtaBin"]=(TH1F*)noPUFile->Get("eleErecoOverETrueThirdEtaBin");
  
  histoNamesnoPU["eleErecoOverETrueFirstEtaBinFbrem02"]=(TH1F*)noPUFile->Get("eleErecoOverETrueFirstEtaBinFbrem02");
  histoNamesnoPU["eleErecoOverETrueSecondEtaBinFbrem02"]=(TH1F*)noPUFile->Get("eleErecoOverETrueSecondEtaBinFbrem02");
  histoNamesnoPU["eleErecoOverETrueThirdEtaBinFbrem02"]=(TH1F*)noPUFile->Get("eleErecoOverETrueThirdEtaBinFbrem02");

  histoNamesnoPU["pfSC_ErecoOverETrueFirstEtaBin"]=(TH1F*)noPUFile->Get("pfSC_ErecoOverETrueFirstEtaBin");
  histoNamesnoPU["pfSC_ErecoOverETrueSecondEtaBin"]=(TH1F*)noPUFile->Get("pfSC_ErecoOverETrueSecondEtaBin");
  histoNamesnoPU["pfSC_ErecoOverETrueThirdEtaBin"]=(TH1F*)noPUFile->Get("pfSC_ErecoOverETrueThirdEtaBin");


  histoNamesnoPU["pfSC_FirstEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_nBCForSC");
  histoNamesnoPU["pfSC_FirstEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_nXtalsSeed");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoConv");

  histoNamesnoPU["pfSC_SecondEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_nBCForSC");
  histoNamesnoPU["pfSC_SecondEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_nXtalsSeed");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoConv");

  histoNamesnoPU["pfSC_ThirdEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_nBCForSC");
  histoNamesnoPU["pfSC_ThirdEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_nXtalsSeed");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("pfSC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoConv");

  histoNamesnoPU["multi5x5SC_ErecoOverETrueFirstEtaBin"]=(TH1F*)noPUFile->Get("multi5x5SC_ErecoOverETrueFirstEtaBin");
  histoNamesnoPU["multi5x5SC_ErecoOverETrueSecondEtaBin"]=(TH1F*)noPUFile->Get("multi5x5SC_ErecoOverETrueSecondEtaBin");
  histoNamesnoPU["multi5x5SC_ErecoOverETrueThirdEtaBin"]=(TH1F*)noPUFile->Get("multi5x5SC_ErecoOverETrueThirdEtaBin");

  histoNamesnoPU["multi5x5SC_FirstEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_nBCForSC");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_nXtalsSeed");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_FirstEtaBin_maxDistFromSeedinPhiinSCPhoConv");
			                 
  histoNamesnoPU["multi5x5SC_SecondEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_nBCForSC");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_nXtalsSeed");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_SecondEtaBin_maxDistFromSeedinPhiinSCPhoConv");
			                 
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_nBCForSC"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_nBCForSC");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_nXtalsSeed"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_nXtalsSeed");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCEle");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCEle");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCEle"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCEle");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoUnconv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoUnconv");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinRinSCPhoConv");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinEtainSCPhoConv");
  histoNamesnoPU["multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoConv"]=(TH1F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_maxDistFromSeedinPhiinSCPhoConv");


  std::map<TString,TH2F*> histoNames2DnoPU;
  std::map<TString,TH2F*> histoNames2DPU;

  histoNames2DnoPU["sieieVsPhi"]=(TH2F*)noPUFile->Get("sieieVsPhi");
  histoNames2DnoPU["sieieVsPhiFirstEtaBin"]=(TH2F*)noPUFile->Get("sieieVsPhiFirstEtaBin");
  histoNames2DnoPU["sieieVsPhiSecondEtaBin"]=(TH2F*)noPUFile->Get("sieieVsPhiSecondEtaBin");
  histoNames2DnoPU["sieieVsPhiThirdEtaBin"]=(TH2F*)noPUFile->Get("sieieVsPhiThirdEtaBin");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");

  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");

  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("pfSC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");

  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_FirstEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");
			                   
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_SecondEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");
			                   
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedEle");
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaPhiBCSeedPhoConv");
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedEle"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedEle");
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoUnconv");
  histoNames2DnoPU["multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv"]=(TH2F*)noPUFile->Get("multi5x5SC_ThirdEtaBin_EBCseedVsDeltaEtaBCSeedPhoConv");

  
  TFile *outfile=TFile::Open(outputFileName,"recreate");

  for(std::map<TString,TH1F*>::const_iterator out=histoNamesnoPU.begin();out!=histoNamesnoPU.end();++out){
    std::cout<<"plotting histo "<<out->first<<std::endl;
    histoNamesnoPU[out->first]->SetLineWidth(2);
    histoNamesnoPU[out->first]->SetLineColor(kBlack);

    histoNamesPU[out->first]=(TH1F*)PUFile->Get(out->first);
    histoNamesPU[out->first]->SetLineWidth(2);
    histoNamesPU[out->first]->SetLineColor(kRed);


    float max = histoNamesnoPU[out->first]->GetMaximum()/histoNamesnoPU[out->first]->Integral();
    bool isnoPUhigher=true;
    if (histoNamesPU[out->first]->GetMaximum()/histoNamesPU[out->first]->Integral()>max)isnoPUhigher=false;
    //plot 1D PU vs no PU
    outfile->cd();
    TCanvas* c1=new TCanvas();
    c1->cd();
    if(isnoPUhigher){
      histoNamesnoPU[out->first]->DrawNormalized();
      histoNamesPU[out->first]->DrawNormalized("same");
    }else{
      histoNamesPU[out->first]->DrawNormalized();
      histoNamesnoPU[out->first]->DrawNormalized("same");
    }
    c1->SaveAs("plots/h1_PUvsnoPU_"+out->first+".png");
    c1->SaveAs("plots/h1_PUvsnoPU_"+out->first+".pdf");
    c1->Write(out->first);
  }


  for(std::map<TString,TH2F*>::const_iterator out=histoNames2DnoPU.begin();out!=histoNames2DnoPU.end();++out){
    std::cout<<"plotting histo "<<out->first<<std::endl;
    histoNames2DnoPU[out->first]->SetLineWidth(2);
    histoNames2DnoPU[out->first]->SetLineColor(kBlack);
    histoNames2DPU[out->first]=(TH2F*)PUFile->Get(out->first);
    histoNames2DPU[out->first]->SetLineWidth(2);
    histoNames2DPU[out->first]->SetLineColor(kRed);

    //plot 1D PU vs no PU
    TCanvas* c1=new TCanvas();
    c1->cd();
    histoNames2DnoPU[out->first]->Draw("colz");
    TProfile* prof= (TProfile*) histoNames2DnoPU[out->first]->ProfileX();
    prof->Draw("samep");
    c1->SaveAs("plots/h2_noPU_"+out->first+".png");
    c1->SaveAs("plots/h2_noPU_"+out->first+".pdf");
    c1->Write(out->first);
  
    histoNames2DPU[out->first]->Draw("colz");
    TProfile* prof2= (TProfile*) histoNames2DPU[out->first]->ProfileX();
    prof2->SetLineColor(kBlack);
    prof2->Draw("samep");
    c1->SaveAs("plots/h2_PU_"+out->first+".png");
    c1->SaveAs("plots/h2_PU_"+out->first+".pdf");
    c1->Write(out->first);
}

  outfile->Write();
  outfile->Close();

}
