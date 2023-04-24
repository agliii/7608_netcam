/*!
*****************************************************************************
** \file        software/linux/kernel/drv/sensors/sc1245/sc1245_pri.h
**
** \version     $Id: sc1245_pri.h 12537 2017-08-10 04:04:47Z yulindeng $
**
** \brief
**
** \attention   THIS SAMPLE CODE IS PROVIDED AS IS. GOKE MICROELECTRONICS
**              ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR
**              OMMISSIONS
**
** (C) Copyright 2012-2015 by GOKE MICROELECTRONICS CO.,LTD
**
*****************************************************************************
*/
#ifndef _SC1245_PRI_H_
#define _SC1245_PRI_H_



//*****************************************************************************
//*****************************************************************************
//** Defines and Macros
//*****************************************************************************
//*****************************************************************************
/*         register name            address default value    R/W    description  */
#define SC1245_TIMING_HTS_H         0x320C
#define SC1245_TIMING_HTS_L         0x320D
#define SC1245_TIMING_VTS_H         0x320E
#define SC1245_TIMING_VTS_L         0x320F
#define SC1245_AEC_EXP_TIME_H       0x3E01
#define SC1245_AEC_EXP_TIME_L       0x3E02
#define SC1245_3e07                 0x3e07
#define SC1245_3e08                 0x3e08
#define SC1245_3e09                 0x3e09
#define SC1245_3633                 0x3631
#define SC1245_3301                 0x3301
#define SC1245_3622                 0x3633
#define SC1245_3903                 0x3903
#define SC1245_3812                 0x3812

//*****************************************************************************
//*****************************************************************************
//** Enumerated types
//*****************************************************************************
//*****************************************************************************


//*****************************************************************************
//*****************************************************************************
//** Data Structures
//*****************************************************************************
//*****************************************************************************


//*****************************************************************************
//*****************************************************************************
//** Global Data
//*****************************************************************************
//*****************************************************************************



//*****************************************************************************
//*****************************************************************************
//** API Functions
//*****************************************************************************
//*****************************************************************************



#ifdef __cplusplus
extern "C" {
#endif



#ifdef __cplusplus
}
#endif



#endif /* _SC1245_PRI_H_ */
