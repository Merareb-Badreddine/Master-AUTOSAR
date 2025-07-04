/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Type.h
 * Generated on:
 ********************************************************************/

#ifndef RTE_TYPE_H
#define RTE_TYPE_H


#include "Rte.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/**************************** datatypes ******************************/

typedef unsigned char uint8;


/********************* mode declaration groups ***********************/


/********************** per instance memories ************************/


/******************* implicit buffer declaration *********************/

typedef struct {
	uint8 value;
} Rte_DE_uint8;


/******************** component data structures **********************/

/*********************************************************************
 * component data structure for SWC: Composit_Door_Lock_indication_SWC 
 *********************************************************************/
typedef struct Rte_CDS_Composit_Door_Lock_indication_SWC
{
	/* Data Handles section*/
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
	uint8 _dummy;
} Rte_CDS_Composit_Door_Lock_indication_SWC;

/*********************************************************************
 * component data structure for SWC: DoorSensorAbstractionSWC 
 *********************************************************************/
typedef struct Rte_CDS_DoorSensorAbstractionSWC
{
	/* Data Handles section*/
	Rte_DE_uint8 *ReadDoorSensor_PP_SR_DoorState;
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
} Rte_CDS_DoorSensorAbstractionSWC;

/*********************************************************************
 * component data structure for SWC: DoorLock_indication_SWC 
 *********************************************************************/
typedef struct Rte_CDS_DoorLock_indication_SWC
{
	/* Data Handles section*/
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
	uint8 _dummy;
} Rte_CDS_DoorLock_indication_SWC;


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_TYPE_H */
