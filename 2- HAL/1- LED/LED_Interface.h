/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : HAL            *********************/
/**********************      SWC     : LED            *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 03/03/2023     *********************/
/**************************************************************************/
/**************************************************************************/

#ifndef _LED_INTERFACE_H_
#define _LED_INTERFACE_H_
#include "../../4- LIB/STD_TYPES.h"

#define LED_SINK_CONNECTION		    0
#define LED_SOURCE_CONNECTION		1

u8 Led_u8TurnOn(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8ConnectionType);
u8 Led_u8TurnOff(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8ConnectionType);

#endif
