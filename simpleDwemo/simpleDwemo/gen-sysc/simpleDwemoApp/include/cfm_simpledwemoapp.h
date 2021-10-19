//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_simpledwemoapp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of simpleDwemoApp generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_SIMPLEDWEMOAPP
#define COFS_MODEL_SIMPLEDWEMOAPP

#include "cfm_simpledwemoapp_global.h"
#include "cfm_simpledwemoapp_global_types.h"
#include "cofluent.h"

#include "cfm_consumer.h"
#include "cfm_producer.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'simpleDwemoApp includes' algorithm generated code

//End of 'simpleDwemoApp includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

///    \defgroup dxgsimpleDwemoApp Function simpleDwemoApp
//@{
///        \page dxpsimpleDwemoApp
//@{
///    \brief simpleDwemoApp function model.
class cfm_simpledwemoapp: public cf_core::cf_application {
public:
	/// relations typedef
	typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQ_t;

	/// constructor
	cfm_simpledwemoapp(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_simpledwemoapp(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	/// \name functions
	//@{
	cfm_consumer* Consumer;
	cfm_producer* Producer;
	//@}

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

public:
	/// \name relations
	//@{
	mq_MsgQ_t mq_MsgQ;
	//@}

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'simpleDwemoApp local declarations' algorithm generated code

	//End of 'simpleDwemoApp local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};

//@}
//@}
#endif // COFS_MODEL_SIMPLEDWEMOAPP

//<#!@READ-ONLY-SECTION-END@!#>