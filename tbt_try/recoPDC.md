# PDC Track Analysis Documentation

This document describes the procedure and code for analyzing PDC (Proportional Drift Chamber) tracks using the script [`recoPDCTrack.C`](tbt_try/recoPDCTrack.C). It also explains the purpose of each library used in the analysis.

## Overview

The script reconstructs PDC tracks from a given RIDF data file, saves the results into a ROOT file, and produces a 2D plot of track positions. The main steps are:

1. Load necessary libraries and parameters.
2. Open the input RIDF file.
3. Reconstruct PDC hits and tracks for each event.
4. Save the reconstructed track information into a ROOT TTree.
5. Draw and save a 2D histogram of track positions.

## Libraries Used

- **libXMLParser.so**  
  Loads XML parsing capabilities, required for reading detector parameter files (e.g., geometry, calibration).

- **libanacore.so**  
  Provides the core analysis framework, including event handling, data containers, and reconstruction algorithms.

- **ROOT (TFile, TTree, TCanvas, TClonesArray, etc.)**  
  ROOT is used for data storage, tree structure, histogramming, and visualization.

- **TArtSAMURAIParameters**  
  Handles loading and managing SAMURAI spectrometer and PDC parameters from XML files.

- **TArtEventStore**  
  Manages reading events from the RIDF data file.

- **TArtCalibPDCHit**  
  Performs calibration and reconstruction of PDC hit information from raw data.

- **TArtCalibPDCTrack**  
  Reconstructs PDC tracks from calibrated hit information.

- **TArtStoreManager**  
  Manages data containers for hits and tracks, allowing access to reconstructed objects.

- **TArtDCTrack**  
  Represents a reconstructed drift chamber track, providing access to position, angle, chi2, etc.

## Analysis Workflow

1. **Initialization**  
   Load the required shared libraries and detector parameters:
   ```cpp
   gSystem->Load("libXMLParser.so");
   gSystem->Load("libanacore.so");
   TArtSAMURAIParameters *samuraiparameters = TArtSAMURAIParameters::Instance();
   samuraiparameters->LoadParameter("../db/SAMURAIPDC.xml");
   ```

2. **Open RIDF File**  
   ```cpp
   TArtEventStore *estore = new TArtEventStore();
   estore->Open(ridffile);
   ```

3. **Setup Reconstruction**  
   Initialize calibration and reconstruction objects:
   ```cpp
   TArtCalibPDCHit *pdchitcalib = new TArtCalibPDCHit();
   TArtCalibPDCTrack *pdctrackcalib = new TArtCalibPDCTrack();
   ```

4. **Access Data Containers**  
   Retrieve arrays for hits and tracks:
   ```cpp
   TArtStoreManager *sman = TArtStoreManager::Instance();
   TClonesArray *pdc_hit_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCHit");
   TClonesArray *pdc_trk_array = (TClonesArray *)sman->FindDataContainer("SAMURAIPDCTrack");
   ```

5. **Event Loop and Track Reconstruction**  
   For each event, clear previous data, reconstruct hits and tracks, and fill the output tree:
   ```cpp
   while (estore->GetNextEvent() && neve < 1000) {
       pdchitcalib->ClearData();
       pdctrackcalib->ClearData();
       pdchitcalib->ReconstructData();
       pdctrackcalib->ReconstructData();
       // Loop over tracks and fill tree...
   }
   ```

6. **Output and Visualization**  
   Write the TTree to a ROOT file and draw a 2D histogram of track positions:
   ```cpp
   tree->Write();
   TCanvas *c1 = new TCanvas("c1", "PDC Track X-Y", 800, 600);
   tree->Draw("y:x>>hxy", "", "COLZ");
   c1->SaveAs(outpng.c_str());
   ```

## Output

- **ROOT file**: Contains a TTree with event-wise track information (`event`, `trackid`, `x`, `y`, `ax`, `ay`, `chi2`, `ndf`, `nhit`).
- **PNG image**: 2D histogram of track positions (x vs y).

## File Structure

- [`tbt_try/recoPDCTrack.C`](tbt_try/recoPDCTrack.C): Main analysis script.
- `db/SAMURAIPDC.xml`: Detector parameter file.
- `ridf/`: Directory containing input RIDF files.
- `output/`: Output directory for ROOT and PNG files.

## How to Run

1. Make sure all dependencies and parameter files are in place.
2. Run the script in ROOT:
   ```sh
   root -l 'tbt_try/recoPDCTrack.C("ridf/your_data.ridf")'
   ```
3. Check the `output/` directory for results.

---

For further details, see the code in [`tbt_try/recoPDCTrack.C`](tbt_try/recoPDCTrack.C).


