//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_simplegitdemoapp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of simpleGitDemoApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_simplegitdemoapp.h"
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'simpleGitDemoApp definitions' algorithm generated code

//End of 'simpleGitDemoApp definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_simplegitdemoapp::cfm_simplegitdemoapp(sc_core::sc_module_name name) :
		cf_application(name), mq_MsgQ("MsgQ") {
	cf_application::init();

	Consumer = new cfm_consumer("Consumer");

	Producer = new cfm_producer("Producer");

	// connections
	Consumer->p_mq_MsgQ(mq_MsgQ.p_target_socket);
	Producer->p_mq_MsgQ(mq_MsgQ.p_target_socket);

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleGitDemoApp constructor' algorithm generated code

	//End of 'simpleGitDemoApp constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cfm_simplegitdemoapp::~cfm_simplegitdemoapp(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleGitDemoApp destructor' algorithm generated code

	//End of 'simpleGitDemoApp destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
	delete Consumer;
	delete Producer;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_simplegitdemoapp::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleGitDemoApp pre elaboration' algorithm generated code

	//End of 'simpleGitDemoApp pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-elaboration section
//@{
void cfm_simplegitdemoapp::cb_end_of_elaboration(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'simpleGitDemoApp post elaboration' algorithm generated code

//End of 'simpleGitDemoApp post elaboration' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-simulation section
//@{
void cfm_simplegitdemoapp::cb_end_of_simulation(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleGitDemoApp post simulation' algorithm generated code

	//End of 'simpleGitDemoApp post simulation' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

}
//@}

/// \name initialize attributes
//@{
void cfm_simplegitdemoapp::cb_init_attributes() {

// initialize function attributes
	cfa_cycle_period.init(cf_expr_time(10, CF_NS));

// initialize relations attributes
	mq_MsgQ.cfa_send_time.init(cf_expr_duration(1, CF_NS));
	mq_MsgQ.cfa_receive_time.init(cf_expr_duration(1, CF_NS));
	mq_MsgQ.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_MsgQ.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_receive_threshold.init((cf_nonzero_count) 1);

	return;
}
//@}

/// \name initialize definitions
//@{
void cfm_simplegitdemoapp::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleGitDemoApp initializations' algorithm generated code

	//End of 'simpleGitDemoApp initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}


//<#!@READ-ONLY-SECTION-END@!#>