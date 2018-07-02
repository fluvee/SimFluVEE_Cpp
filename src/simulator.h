#ifndef __SIMULATOR_H
#define __SIMULATOR_H

#include "params.h"
#include "population.h"
#include "randgen.h"

#if WITH_R
#include "MonthlyReport.h"
#include "SeasonReport.h"
#endif

#if WITH_UI
#include <wx/progdlg.h>
#endif

class Simulator
{
private:
  Params SimPar;    // Simulation parameters
  Population SimPop;// Population in the simulation
  RandGen Rnd;      // Random number generator for the simulation
  string filePostfix;
#if WITH_R
  MonthlyReport* monReport;
  SeasonReport* seaReport;
#endif
#if WITH_UI
    wxGenericProgressDialog* m_ProgressDialog;
#endif

public:
#if WITH_R
  Simulator(Params &pars,MonthlyReport*,SeasonReport*);
#endif
  Simulator(string fname);
  Simulator(string fname, string filePostfix);
#if WITH_UI
  Simulator(Params, wxGenericProgressDialog*);
#endif
  void Start();
  string spaceToUnderscore(string s);
  Params getSimPar();
  //Reset();
}; // Simulator.h

#endif
