/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  OpenRF_JwikBrik_x69HW                          */
/*      FILE         :  hardware_setup.c                               */
/*      DESCRIPTION  :  Hardware Initialization                        */
/*      CPU SERIES   :  RL78 - G13                                     */
/*      CPU TYPE     :  R5F100EE                                       */
/*  													               */
/*      This file is generated by e2studio.                        	   */
/*  													               */
/***********************************************************************/

#include "..\..\..\SourceCode\MicrocontrollerAPI\RL78\microapi.h"

extern void HardwareSetup(void);

// ** HardwareSetup **
//
// This function is called by the start-up code.  This is where we initialize the hardware.
void HardwareSetup(void)
{
	InitializeMicroAPI();
}																   
