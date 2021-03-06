//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_producer
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of simpleGitDemoApp generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_SIMPLEGITDEMOAPP_PRODUCER
#define COFS_MODEL_SIMPLEGITDEMOAPP_PRODUCER

#include "cfm_simplegitdemoapp_global.h"
#include "cfm_simplegitdemoapp_global_types.h"
#include "cofluent.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Producer includes' algorithm generated code

//End of 'Producer includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

///    \defgroup dxgProducer Function Producer
//@{
///        \page dxpProducer
//@{
///    \brief Producer function model.
class cfm_producer: public cf_core::cf_function {
public:
	SC_HAS_PROCESS (cfm_producer);

	/// ports typedef
	typedef cf_core::cf_mq_initiator_socket<cfm_producer,
			cf_core::cf_payload_int> p_mq_MsgQ_t;

	/// constructor
	cfm_producer(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_producer(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
	p_mq_MsgQ_t p_mq_MsgQ;
	//@}

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

	/// behavior
	void cfm_behavior();
	/// init operation
	void cfm_op_init();
	/// produce operation
	void cfm_op_produce();

protected:
	/// \name operations
	//@{
	cf_core::cf_operation init;
	cf_core::cf_operation produce;
	//@}

private:
	/// \name input/output local buffers
	//@{
	int MsgQ;
	cf_core::cf_payload_int MsgQ_trans;
	//@}

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Producer local declarations' algorithm generated code

	//End of 'Producer local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};

//@}
//@}
#endif // COFS_MODEL_SIMPLEGITDEMOAPP_PRODUCER

//<#!@READ-ONLY-SECTION-END@!#>