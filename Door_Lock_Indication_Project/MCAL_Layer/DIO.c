/*
 * DIO.c
 *
 *  Created on: 
 *      Author: 
 */

#include "DIO.h"
unsigned char Dio_ReadChannel	(unsigned char ID)
{
	return (MCAL_GPIO_ReadPin(GPIO_Port_Used, ID));
}
void Dio_WriteChannel	(unsigned char ID,unsigned char Level)
{
	MCAL_GPIO_WritePin(GPIO_Port_Used, ID, Level);
}
