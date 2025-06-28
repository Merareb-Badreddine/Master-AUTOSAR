/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng. Keroles Shenouda


 ******************************************************************************
//		Door Lock indication Project
 ******************************************************************************
 */


//include RTE Application Header
#include "RTE_gen/Rte_DoorLock_indication_SWC.h"



#define LEDON  0
#define LEDOFF 1
//code for runnable
void DoorLock_indication_runnable()
{
	uint8 DoorState = 0;


	//Read DoorState from RTE sender receiver interface
	Rte_Read_DoorLock_indication_SWC_RP_SR_DoorState_DoorState(&DoorState);

	if (DoorState)
	{
		Rte_Call_RP_CS_Led_Switch_Led_Switch(LEDON);

	}else
	{
		Rte_Call_RP_CS_Led_Switch_Led_Switch(LEDOFF);
	}

}















