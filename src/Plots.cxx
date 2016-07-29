/////////////////////////////////////////////////////////////////////
//                         Plots.cxx                               //
//=================================================================//
//                                                                 //
// Contains functions for producing the analysis's Plots           //
/////////////////////////////////////////////////////////////////////

#include "Plots.h"

///////////////////////////////////////////////////////////////////////
//_________________________Sample Histograms_________________________//
///////////////////////////////////////////////////////////////////////

Plots::Plots(){}

///////////////////////////////////////////////////////////////////////
//-------------------------------------------------------------------//
///////////////////////////////////////////////////////////////////////

Plots::Plots(Sample* insample, Cuts* cut, SampleHistos* inhistos, TString cutName)
{
   /////////////////////////////////////////////////////////////////////
   // Save Class Variables----------------------------------------------
   /////////////////////////////////////////////////////////////////////

   sample = insample;
   histos = inhistos;

   /////////////////////////////////////////////////////////////////////
   // Create necessary canvas variables---------------------------------
   /////////////////////////////////////////////////////////////////////

   int index = 0;

   /////////////////////////////////////////////////////////////////////
   // Create Plots------------------------------------------------------
   /////////////////////////////////////////////////////////////////////

   for(std::vector<std::vector<TH1F*> >::const_iterator itr = histos->histo1D.begin(); itr != histos->histo1D.end(); itr++){
      	for(std::vector<TH1F*>::const_iterator j = (*itr).begin(); j != (*itr).end(); j++){

	    // Save Canvas vector
  	    canvas.push_back(new TCanvas() );
	    
	    // Set Histogram filling parameters
	    (*j)->SetFillColor(kOrange);
	    (*j)->SetLineColor(kOrange);
	    (*j)->SetMarkerStyle(0);
	    (*j)->SetFillStyle(1);
	    (*j)->GetYaxis()->SetTitleOffset(1.7);
	    (*j)->Draw("hist same");
	
	    TString histoVarName((*j)->GetName());

	    canvas[index]->SaveAs("Hist_" + histoVarName + ".png");
     	}
	
   }

}

////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////
