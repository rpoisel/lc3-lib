#ifndef LC_PROT_LCFU___PID__C
#define LC_PROT_LCFU___PID__C

#include <lcfu___pid.h>

#include "PID-c/PID.h"
#include "PID-c/PID_Support.h"

#include <RTAPITimer.h>

/* dimension nodes */
static const RTTypeNS_DimNode s_dim_nodes_PID_INTERNALDATA[] = {
	{0,255,256 * sizeof(LC_TD_BYTE)}
};

/* array nodes */
RTTypeNS_ArrayNode lcns_arrayNode___PID_INTERNALDATA = {1,s_dim_nodes_PID_INTERNALDATA};

/*                            FunctionBlocks                   */
void  lcfu___PID(LC_TD_FunctionBlock_PID* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	pid_t pid_data = (pid_t)LC_this->LC_VD_INTERNALDATA;
	if (LC_this->LC_VD_INITIALIZED == LC_EL_false)
	{
		pid_create(pid_data, &LC_this->LC_VD_INPUT, &LC_this->LC_VD_OUTPUT, &LC_this->LC_VD_SET,
				LC_this->LC_VD_KP, LC_this->LC_VD_KI, LC_this->LC_VD_KD,
				pEPDB);
	}

	/* IMPLEMENTATION NOT FINISHED YET */
	LC_this->LC_VD_ENO = LC_EL_false;
}

pid_ticks_t pid_ticks_per_second(void)
{
	return RT_TARGET_TIME_FREQU;
}

pid_ticks_t pid_ticks_get(void* ticksUser)
{
	struct _lcoplck_epdb_1_impl* epdb = ticksUser;
	return LC3_qw_get_current_time_ep(ticksUser);
}

#include "PID-c/PID.c"

#endif
