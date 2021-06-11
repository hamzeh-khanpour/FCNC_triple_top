{
  // Please replace with location of your libDelphes.so
  gSystem->Load("/qnapshare2/khanpour/Delphes-3.4.0/libDelphes.so");
  // Please replace with location of your Delphes folder
  gROOT->ProcessLine(".include /qnapshare2/khanpour/Delphes-3.4.0");
  // Please replace with location of your Delphes/external folder
  gROOT->ProcessLine(".include /qnapshare2/khanpour/Delphes-3.4.0/external");
}
