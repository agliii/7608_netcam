/*!
*****************************************************************************
** \file        gk7101_sys.c
**
** \version
**
** \brief       sdk system control
**
** \attention   THIS SAMPLE CODE IS PROVIDED AS IS. GOKE MICROELECTRONICS
**              ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR
**              OMMISSIONS
**
** (C) Copyright 2014-2015 by GOKE MICROELECTRONICS CO.,LTD
**
*****************************************************************************
*/
#include <string.h>

#include "sdk_sys.h"
#include "sdk_debug.h"

#include "sdk.h"


#include <sys/prctl.h>
#include <sys/types.h>
#include <sys/syscall.h>

//*****************************************************************************
//*****************************************************************************
//** Local Defines
//*****************************************************************************
//*****************************************************************************


//*****************************************************************************
//*****************************************************************************
//** Local structures
//*****************************************************************************
//*****************************************************************************



//*****************************************************************************
//*****************************************************************************
//** Global Data
//*****************************************************************************
//*****************************************************************************


//*****************************************************************************
//*****************************************************************************
//** Local Data
//*****************************************************************************
//*****************************************************************************



//*****************************************************************************
//*****************************************************************************
//** Local Functions Declaration
//*****************************************************************************
//*****************************************************************************




//*****************************************************************************
//*****************************************************************************
//** API Functions
//*****************************************************************************
//*****************************************************************************
int sdk_sys_init(int streamNum)
{
    int retVal;

    /*check parameters*/
    if(streamNum > 4 )
    {
        LOG_ERR("gk_sys_init input invalid parameter.\n");;
    }

    LOG_INFO("enter GK SDK_init_sys. streamNum=%d\n", streamNum);
    {
        gk_set_max_stream_nums(streamNum);
    }

	/*set debug level*/
	//retVal = gadi_sys_set_log_level(GADI_SYS_LOG_LEVEL_INFO);	xqq
    if(retVal != GADI_OK)
    {
		LOG_ERR("gadi_sys_set_log_level failed!\n");
		return -1;
	}
	/*system module init.*/
	//retVal = gadi_sys_init();	xqq
    if(retVal != GADI_OK)
    {
		LOG_ERR("gadi_sys_init() failed!\n");
		return -1;
	}

	//retVal = gadi_sys_load_firmware();	xqq
	if(retVal != GADI_OK)
	{
		LOG_ERR("gadi_sys_load_firmware() failed!\n");
		return -1;
	}
    return 0;
}

int sdk_sys_destroy()
{
    //gadi_sys_exit();	xqq
    return 0;
}


void sdk_sys_thread_set_name(char *name)
{
    prctl(PR_SET_NAME, (unsigned long)name, 0,0,0); \
    pid_t tid;\
    tid = syscall(SYS_gettid);\
    LOG_INFO("set pthread name:%d, %s, %s pid:%d tid:%d\n", __LINE__, __func__, name, getpid(), tid);\

}
