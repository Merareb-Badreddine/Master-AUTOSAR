/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng. 


 ******************************************************************************
//		Door Lock indication Project
 ******************************************************************************
 */


//include RTE Application Header
#include "RTE_gen/Rte_DoorSensorAbstractionSWC.h"
#include "MCAL_Layer/DIO.h"


#define LEDON  0
#define LEDOFF 1
//code for runnable
void ReadDoorSensor_runnable()
{
	uint8 DoorState = 0;
	//Read GPIOA3 door State
	DoorState = Dio_ReadChannel(DIO_Door);

	//write DoorState to RTE sender reciever interface
	Rte_IWrite_DoorSensorAbstractionSWC_ReadDoorSensor_PP_SR_DoorState(DoorState);
}

Std_ReturnType Led_Switch_runnable(uint8 LedState)
{
	if (LedState == LEDON)
	{
		Dio_WriteChannel(LED_ID,LEDON);

	}else if (LedState == LEDOFF)
	{
		Dio_WriteChannel(LED_ID,LEDOFF);
	}

	return E_OK;
}
