// SampleHistos.h

#ifndef PLOTS
#define PLOTS

#include <vector>
#include <iostream>

#include "Sample.h"
#include "../selection/Cuts.h"

#include "TH1F.h"
#include "TString.h"

class SampleHistos
{
   public:
	SampleHistos();
	SampleHistos(Sample* sample, Cuts* cut, TString cutName);

	void setHistTitles(TH1F* hist, TString xtitle, TString ytitle);

   protected:
	TFile* file;  // output file with histograms

};

#endif
