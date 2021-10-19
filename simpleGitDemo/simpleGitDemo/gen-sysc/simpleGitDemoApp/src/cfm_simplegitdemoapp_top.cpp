//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of simpleGitDemoApp generated by C++ Generator for SystemC/TLM2
 */

#include "cfm_simplegitdemoapp_top.h"
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

#ifdef COFS_MODEL_TYPE_APPLICATION_MODELING
int sc_main(int argc, char *argv[])
{

	// simpleGitDemoApp pre-simulation section
	cfm_simplegitdemoapp_cb_pre_simulation();

	// simpleGitDemoApp instantiation
	cfm_simplegitdemoapp* cfmi_simpleGitDemoApp = new cfm_simplegitdemoapp("simpleGitDemoApp");

	// start simulation
	cf_start();

	// shutdown simulator
	cf_stop();
	delete cfmi_simpleGitDemoApp;

	return EXIT_SUCCESS;
}
#endif // COFS_MODEL_TYPE_APPLICATION_MODELING

//<#!@READ-ONLY-SECTION-END@!#>