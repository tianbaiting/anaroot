// macro to decode the ridf format file and put into root tree file

void RIDF2Tree(){

  gSystem->Load("libanacore.so");

  TArtEventStore *estore = new TArtEventStore();
  estore->Open("/home/s057/exp/exp2505_s057/anaroot/users/tbt/ridf/data0013.ridf");
  //  estore->Open(); // online mode
  
  TArtRawEventObject *rawevent = estore->GetRawEventObject();

  TFile *fout = new TFile("ridf.pool.root","RECREATE");




  TTree * tree = new TTree("tree","ridf tree");
  tree->Branch("rawdata",rawevent);

  int neve = 0;

  //  estore->LoadMapConfig("conf/mapper.conf");

  while(estore->GetNextEvent() && neve<10000){

    if(neve%1000==0)
      cout << "Event:" << neve << endl;

    tree->Fill();
    estore->ClearData();
    neve ++;
  }

  fout->Write();
  fout->Close();

}
