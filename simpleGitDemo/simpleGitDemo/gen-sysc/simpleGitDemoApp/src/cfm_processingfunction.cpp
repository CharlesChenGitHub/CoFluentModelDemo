//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_processingfunction
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of simpleGitDemoApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_processingfunction.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_simplegitdemoapp
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_processingfunction
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'ProcessingFunction definitions' algorithm generated code

//End of 'ProcessingFunction definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_processingfunction::cfm_processingfunction(sc_core::sc_module_name name) :
		cf_function(name), p_mq_MsgQ("p_mq_MsgQ"), p_mq_MsgQ2("p_mq_MsgQ2"), init(
				"init"), process("process") {
	cf_function::init();

	// operations initialization
	CF_OPERATION(init, cfm_op_init);
	init.init();
	CF_OPERATION(process, cfm_op_process);
	process.init();

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'ProcessingFunction constructor' algorithm generated code

	//End of 'ProcessingFunction constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	SC_THREAD (cfm_behavior);

	cf_function::elab_end();
}
//@}

/// \name destructor
//@{
cfm_processingfunction::~cfm_processingfunction(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'ProcessingFunction destructor' algorithm generated code

	//End of 'ProcessingFunction destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name pre-elaboration section
//@{
void cfm_processingfunction::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'ProcessingFunction pre elaboration' algorithm generated code

	//End of 'ProcessingFunction pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-simulation section
//@{
void cfm_processingfunction::cb_end_of_simulation(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'ProcessingFunction post simulation' algorithm generated code

	//End of 'ProcessingFunction post simulation' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_processingfunction::cb_init_attributes() {

// initialize function attributes
	cfa_do_not_start.init(false);
// cfa_affinity.init();
	cfa_priority.init((cf_count) 0);

	cfa_policy.init(CF_SCHEDULER_POLICY_FF);
	cfa_time_slice.init(cf_expr_duration(10, CF_MS));
	cfa_static_code_size.init(cf_data_size(0, CF_KBYTE));
	cfa_static_data_size.init(cf_data_size(0, CF_KBYTE));
	cfa_static_power.init(cf_power(0, CF_UW));
	cfa_dynamic_power.init(cf_power(0, CF_UW));
	cfa_cost.init(cf_cost(0, CF_USD));
	cfa_dynamic_load.init(cf_resource_load(100, CF_PERCENT));

// initialize operation attributes
	init.cfa_type.init(CF_OP_TYPE_ACTIVE);
	init.cfa_execution_time.init(cf_expr_duration(10, CF_NS));
	init.cfa_dynamic_data_size.init(cf_data_size(0, CF_KBYTE));
	process.cfa_type.init(CF_OP_TYPE_ACTIVE);
	process.cfa_execution_time.init(cf_expr_duration(10, CF_NS));
	process.cfa_dynamic_data_size.init(cf_data_size(0, CF_KBYTE));
	return;
}
//@}

/// \name initialize definitions
//@{
void cfm_processingfunction::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'ProcessingFunction initializations' algorithm generated code

	//End of 'ProcessingFunction initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name behavioral model of the ProcessingFunction function
//@{
void cfm_processingfunction::cfm_behavior() {

	behavior_initialize();

	// transaction initialization
	MsgQ_trans.set_data_ptr(&MsgQ);
	MsgQ2_trans.set_data_ptr(&MsgQ2);

	// run init
	run_operation (init);

	while (1) {

		// input action InAction
		p_mq_MsgQ.receive(&MsgQ_trans);

		// run process
		run_operation (process);
		// output action OutAction
		p_mq_MsgQ2.send(&MsgQ2_trans);

	}

	behavior_finalize();
}

//@}
/// \name operation algorithm for init
//@{
void cfm_processingfunction::cfm_op_init() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'init operation' algorithm generated code

	//End of 'init operation' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
	return;
}
//@}
/// \name operation algorithm for process
//@{
void cfm_processingfunction::cfm_op_process() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'process operation' algorithm generated code

	//End of 'process operation' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
	return;
}
//@}


//<#!@READ-ONLY-SECTION-END@!#>