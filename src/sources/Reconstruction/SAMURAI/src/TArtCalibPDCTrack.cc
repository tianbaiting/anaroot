#include "TArtCalibDCTrack.hh" 
#include "TArtCalibPDCTrack.hh" 
#include "TArtCore.hh" 

#include <TROOT.h>
#include <TMath.h>
#include <TMinuit.h>

static TArtCalibPDCTrack* gPDCTrack = nullptr;
void fcn_wrapper(Int_t& npar, Double_t* grad, Double_t& fval, Double_t* par, Int_t flag) {
    fval = gPDCTrack->Chi2Calculation(par[0], par[1], par[2], par[3]);
}

//__________________________________________________________
TArtCalibPDCTrack::TArtCalibPDCTrack(const TString indata,
				     const TString outdata) 
  : TArtReconstruction(outdata)
{
  TArtCore::Info(__FILE__,"Creating the PDC detector track objects...");
  // initialize here all necessary variable (wire distances for example)

  indataname = indata ;
  outdataname = outdata ;

  sman = TArtStoreManager::Instance();

  // create the array of tracks that will be rebuild (assume 2 in average) 
  fDCTrackArray = new TClonesArray("TArtDCTrack",2);
  fDCTrackArray->SetName(outdataname.Data());
  fDCTrackArray->SetOwner();
  // add it to the "database"

  sman->AddDataContainer(fDCTrackArray);

  // PDC1
  layerdirs.push_back(u);
  layerdirs.push_back(x);
  layerdirs.push_back(v);

  // PDC2
  layerdirs.push_back(u);
  layerdirs.push_back(x);
  layerdirs.push_back(v);


  // init
  nlayer_u = 0 ;
  nlayer_x = 0 ;
  nlayer_v = 0 ;
  nlayer_y = 0 ; // for compatibility and flexibility

  // map : can be better writen (from layer_dir for example !)  
  
  layer_map.push_back(nlayer_u++); 
  layer_map.push_back(nlayer_x++); 
  layer_map.push_back(nlayer_v++); 
  layer_map.push_back(nlayer_u++); 
  layer_map.push_back(nlayer_x++); 
  layer_map.push_back(nlayer_v++); 
  //

  nlayer = nlayer_u + nlayer_x + nlayer_v ;

  hits_buffer   = new std::vector <TArtDCHit *> [nlayer];
  hits_buffer_x = new std::vector <TArtDCHit *> [nlayer_x];
  hits_buffer_u = new std::vector <TArtDCHit *> [nlayer_u];
  hits_buffer_v = new std::vector <TArtDCHit *> [nlayer_v];
  hits_buffer_y = new std::vector <TArtDCHit *> [nlayer_y]; // for compatibility and flexibility

}

//__________________________________________________________
TArtCalibPDCTrack::~TArtCalibPDCTrack()  {
  // delete, clear all array, varaibles, etc,... (free memory)
  ClearData();
  delete [] hits_buffer_x;
  delete [] hits_buffer_u;
  delete [] hits_buffer_v;
  delete fDCTrackArray;
}

//__________________________________________________________
void TArtCalibPDCTrack::ClearData()   {

  for(Int_t i=0;i<nlayer_x;i++) hits_buffer_x[i].clear();
  for(Int_t i=0;i<nlayer_u;i++) hits_buffer_u[i].clear();
  for(Int_t i=0;i<nlayer_v;i++) hits_buffer_v[i].clear();

  fDCTrackArray->Clear("C");
  fReconstructed = false;
  return;
}

//__________________________________________________________
void TArtCalibPDCTrack::ReconstructData() { // call after the raw data are loaded
  TArtCore::Debug(__FILE__,"ReconstructData");
  // allocate each hit in hit_buffer
  SetHitsBuffer();

  // here comes the reconstruction code of tbt

  // --------------------------------------------
    // ====== ======
    int nhit_total = 0;
    for(int l=0; l<nlayer_x; l++) nhit_total += hits_buffer_x[l].size();
    for(int l=0; l<nlayer_u; l++) nhit_total += hits_buffer_u[l].size();
    for(int l=0; l<nlayer_v; l++) nhit_total += hits_buffer_v[l].size();

    if(nhit_total == 0) {
        TArtCore::Warning(__FILE__, "No valid hit in this event, skip track fitting.");
        fDCTrackArray->Clear("C");
        fReconstructed = false;
        return;
    }

    // ====== ======

  
// 重建角度 tbt
Int_t ntr=0 ;
gPDCTrack = this;
TMinuit minuit(4);
minuit.SetPrintLevel(-1); // 放在最前面
minuit.SetFCN(fcn_wrapper);


minuit.DefineParameter(0, "x0", 0.0, 0.001, -1000.0, 1000.0); // x0
minuit.DefineParameter(1, "y0", 0.0, 0.001, -800.0, 800.0); // y0
minuit.DefineParameter(2, "k_xz", 0.0, 0.001, -100.0, 100.0); // k_xz
minuit.DefineParameter(3, "k_yz", 0.0, 0.001, -100.0, 100.0); // k_yz
// minuit.SetPrintLevel(-1); // no printout

minuit.SetMaxIterations(100); // max iterations


// --- to minimaze the chi2 ---
minuit.Migrad(); // call the minimization algorithm

// --- obtian best line parameter ---
double x0, y0, k_xz, k_yz, err;
minuit.GetParameter(0, x0, err);
minuit.GetParameter(1, y0, err);
minuit.GetParameter(2, k_xz, err);
minuit.GetParameter(3, k_yz, err);


double chi2_final = Chi2Calculation(x0, y0, k_xz, k_yz); 
// if (chi2_final < 10000) {
  new ((*fDCTrackArray)[ntr]) TArtDCTrack();
// --- ---
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetPosition(x0, 0); // X
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetPosition(y0, 1); // Y
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetNDF(2); // 
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetNumHitLayer(nhit_total);
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetAngle(atan(k_xz), 0); // X方向角度（弧度）
((TArtDCTrack*)fDCTrackArray->At(ntr))->SetAngle(atan(k_yz), 1); // Y方向角度（弧度）

((TArtDCTrack*)fDCTrackArray->At(ntr))->SetChi2(chi2_final ); // 最小化后的chi2値
 ntr++ ;  
  fReconstructed = true;
  return;
// }else {
//   TArtCore::Warning(__FILE__, "Chi2 is too large: %f, no track found", chi2_final);
//   // If chi2 is too large, no track found
//   fDCTrackArray->Clear("C");
//   fReconstructed = false;
//   return;
// }



}

//__________________________________________________________
void TArtCalibPDCTrack::SetHitsBuffer() {

  // load the hits for PDC, from the "database"
  TClonesArray * hit_array = (TClonesArray *)sman->FindDataContainer(indataname.Data());
  Int_t num_hit = hit_array->GetEntries();

  // allocate each hit in hit_buffer
  for(Int_t i=0;i<num_hit;i++){
    TArtDCHit * hit = (TArtDCHit *)hit_array->At(i);
    Int_t layer = hit->GetLayer();

    hits_buffer[layer].push_back(hit);
    if(layerdirs[layer] == x){
      if(layer_map[layer]>=nlayer_x)
	TArtCore::Error(__FILE__,"layer-id(%d) is larger than expected num of layer-x %d",layer_map[layer],nlayer_x);
      hits_buffer_x[layer_map[layer]].push_back(hit);
    }
    else if(layerdirs[layer] == y){
      if(layer_map[layer]>=nlayer_y)
	TArtCore::Error(__FILE__,"layer-id(%d) is larger than expected num of layer-y %d",layer_map[layer],nlayer_y);
      hits_buffer_y[layer_map[layer]].push_back(hit);
    }
    else if(layerdirs[layer] == u){
      if(layer_map[layer]>=nlayer_u)
	TArtCore::Error(__FILE__,"layer-id(%d) is larger than expected num of layer-u %d",layer_map[layer],nlayer_u);
      hits_buffer_u[layer_map[layer]].push_back(hit);
    }
    else if(layerdirs[layer] == v){
      if(layer_map[layer]>=nlayer_v)
	TArtCore::Error(__FILE__,"layer-id(%d) is larger than expected num of layer-v %d",layer_map[layer],nlayer_v);
      hits_buffer_v[layer_map[layer]].push_back(hit);
    }
    else{TArtCore::Info(__FILE__,"Can not find corresponding wire-direction");
    }
  } 
        // for (int i = 0; i < num_hit; ++i) {
        //     TArtDCHit *hit = (TArtDCHit*) hit_array->At(i);
        //     int layer = hit->GetLayer();
        //     // 假设layer 0,3为u，1,4为x，2,5为v（可根据实际情况调整）
        //     if (layer == 0 || layer == 3) hits_buffer_u[layer/3].push_back(hit);
        //     else if (layer == 1 || layer == 4) hits_buffer_x[(layer-1)/3].push_back(hit);
        //     else if (layer == 2 || layer == 5) hits_buffer_v[(layer-2)/3].push_back(hit);
        // }


  return;

}

double TArtCalibPDCTrack::Chi2Calculation(double_t x0, Double_t y0, Double_t k_xz, Double_t k_yz) {
// double Chi2Calculation(double_t x0, Double_t y0, Double_t k_xz, Double_t k_yz) {
// 
  // SetHitsBuffer();

  TArtCore::Debug(__FILE__,"Chi2Calculation");

  Int_t ntr=0 ;
  Double_t X =0.0, Y=0.0, U=0.0, V=0.0;

  Int_t nhit = 0, nhitx=0, nhitu=0, nhitv=0;
  Double_t weightx =0.0, weightv =0.0, weightu =0.0 ;

  Double_t chi2=0.0;

  Double_t x_line = 0.0; // for compatibility and flexibility
  Double_t y_line = 0.0; // for compatibility and flexibility
  Double_t U_line = 0.0; // for compatibility and flexibility
  Double_t V_line = 0.0; // for compatibility and flexibility
  Double_t z = 0.0; // for compatibility and flexibility


  // main algorithm that found track(s)
  // -----------S
  for(int l=0;l<nlayer_x;l++){
    X = 0.0;
    int nhitx_layer = 0 ;
    weightx = 0.0 ;
    for (std::vector<TArtDCHit *>::iterator it = hits_buffer_x[l].begin() ; it != hits_buffer_x[l].end(); ++it){
        TArtDCHit * hit = *it;
        //      std::cout << hit->GetTDC()  << " " << hit->GetTrailTDC()
        //		<< " " << hit-> GetWirePosition()
        //		<< std::endl;
        if(hit->GetTDC()>0 && hit->GetTrailTDC()>0){
        weightx += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC());
        X += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC())*hit-> GetWirePosition() ;
        z = hit->GetWireZPosition() ;
        nhit++;
        nhitx++;
        nhitx_layer++;
      }
      
      }
      x_line = k_xz * z + x0 ;
      y_line = k_yz * z + y0 ;
      if(nhitx_layer>0 && weightx>0) {
        X /= weightx ;
        chi2 += TMath::Power(X - x_line, 2);
      } else {
        X = NAN ;
      }


  }

  for(int l=0;l<nlayer_u;l++){
  U = 0.0;
  int nhitu_layer = 0 ;
  weightu = 0.0 ;
    for (std::vector<TArtDCHit *>::iterator it = hits_buffer_u[l].begin() ; it != hits_buffer_u[l].end(); ++it){
      TArtDCHit * hit = *it;
      if(hit->GetTDC()>0 && hit->GetTrailTDC()>0){
        weightu += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC());
        U += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC())*hit-> GetWirePosition() ;
        z = hit->GetWireZPosition() ;
        nhit++;
        nhitu++;	
        nhitu_layer++;
      }
    }
    x_line = k_xz * z + x0 ;
    y_line = k_yz * z + y0 ;
    U_line = (x_line + y_line)*TMath::Sqrt(2.0)/2.0 ;
    if(nhitu_layer>0 && weightu>0) {
      U /= weightu ;
      chi2 += TMath::Power(U - U_line, 2);
    } else {
      U = NAN ;
    }
  }
  
  for(int l=0;l<nlayer_v;l++){
    V = 0.0 ;
    int nhitv_layer = 0 ;
    weightv = 0.0 ;
    for (std::vector<TArtDCHit *>::iterator it = hits_buffer_v[l].begin() ; it != hits_buffer_v[l].end(); ++it){
      TArtDCHit * hit = *it;
      //      std::cout << hit->GetTDC()  << " " << hit->GetTrailTDC()
      //		<< " " << hit-> GetWirePosition()
      //		<< std::endl;
      if(hit->GetTDC()>0 && hit->GetTrailTDC()>0){
      
        weightv += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC());
        V += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC())*hit-> GetWirePosition();
        // X += TMath::Abs(hit->GetTDC() - hit->GetTrailTDC())*hit-> GetWirePosition()/TMath::Sqrt(2) ; // could be added   
        z = hit->GetWireZPosition() ;
        nhit++;
        nhitv++;
        nhitv_layer++;
      }
    }
    x_line = k_xz * z + x0 ;
    y_line = k_yz * z + y0 ;
    V_line = (x_line-y_line)*TMath::Sqrt(2.0)/2.0 ;
    if(nhitv_layer>0 && weightv>0) {
      V /= weightv ;
      chi2 += TMath::Power(V - V_line, 2);
    } else {
      V = NAN ;
    }
  }
  return chi2; 
}