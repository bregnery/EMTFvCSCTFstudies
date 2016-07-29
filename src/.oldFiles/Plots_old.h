// Plots.h

#ifndef ADD_PLOTS
#define ADD_PLOTS

#include <vector>
#include <iostream>

#include "tdrstyle.h"
#include "CMS_lumi.cxx"
#include "Sample.h"
#include "SampleHistos.h"
#include "../selection/Cuts.h"

#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
//#include "TPad.h"
//#include "TCanvas.h"
#include "TGraph.h"
#include "TFrame.h"
#include "TGraphErrors.h"
//#include "TStyle.h"

class Plots
{
   public:
	Plots();
	Plots(Sample* insample, Cuts* cut, SampleHistos* inhistos, TString cutName);

	Sample* sample;
	SampleHistos* histos;

	void createCanvas( int iPeriod, int iPos , TH1F* h);
};

#endif
