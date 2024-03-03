/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : HAL            *********************/
/**********************      SWC     : SSD            *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 22/12/2023     *********************/
/**************************************************************************/
/**************************************************************************/
#include "..\..\4- LIB\STD_TYPES.h"
#include "..\..\4- LIB\STD_ERRORS.h"
#include "..\..\4- LIB\BIT_MATH.h"
#include "../../1- MCAL/02-GPIO/GPIO_interface.h"
#include "SSD_Interface.h"

u8 SSD_Ru8Numbers[10]=
{
		0b00111111,
		0b00000110,
		0b01011011,
		0b01001111,
		0b01100110,
		0b01101101,
		0b01111101,
		0b00000111,
		0b01111111,
		0b01101111
} ;

//Enable function for enable(port & pin) using common pin in SSD
u8 SSD_u8Enable(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Type)
{
	u8 Local_u8ErrorStatus = RT_OK ;
	if(Copy_u8Type == SSD_u8COMMON_CATHODE)
	{
		GPIO_u8SetPinValue(Copy_u8Port ,Copy_u8Pin,OUTPUT_LOW);
	}
	else if (Copy_u8Type == SSD_u8COMMON_ANODE)
	{
		GPIO_u8SetPinValue(Copy_u8Port ,Copy_u8Pin,OUTPUT_HIGH);
	}
	else
	{
		Local_u8ErrorStatus=RT_NOK;
	}
	return Local_u8ErrorStatus;

}

//Disable function for (port & pin) using common pin in SSD
u8 SSD_u8Disable(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Type)
{
	u8 Local_u8ErrorStatus = RT_OK ;
	if(Copy_u8Type == SSD_u8COMMON_ANODE)
	{
		GPIO_u8SetPinValue(Copy_u8Port ,Copy_u8Pin,OUTPUT_LOW);
	}
	else if (Copy_u8Type == SSD_u8COMMON_CATHODE)
	{
		GPIO_u8SetPinValue(Copy_u8Port ,Copy_u8Pin,OUTPUT_HIGH);
	}
	else
	{
		Local_u8ErrorStatus=RT_NOK;
	}
	return Local_u8ErrorStatus;
}

/*
u8 SSD_u8SetNumber(u8 Copy_u8Number , u8 Copy_u8DisplayPort , u8 Copy_u8Type)
{
	u8 Local_u8ErrorStatus=RT_OK;
	if(Copy_u8Type == SSD_u8COMMON_CATHODE)
	{
		if(Copy_u8Number <= SSD_u8HIGHEST_NUMBER_DISPLAYED && Copy_u8Number >= SSD_u8LOWEST_NUMBER_DISPLAYED )
		{
			DIO_u8SetPortValue(Copy_u8DisplayPort,SSD_Ru8Numbers[Copy_u8Number]);
		}
		else
		{
			Local_u8ErrorStatus=RT_NOK;
		}
	}
	else if (Copy_u8Type == SSD_u8COMMON_ANODE)
	{
		if(Copy_u8Number <= SSD_u8HIGHEST_NUMBER_DISPLAYED && Copy_u8Number >= SSD_u8LOWEST_NUMBER_DISPLAYED )
		{
			DIO_u8SetPortValue(Copy_u8DisplayPort,(~(SSD_Ru8Numbers[Copy_u8Number])));
		}
		else
		{
			Local_u8ErrorStatus=RT_NOK;
		}
	}
	else
	{
		Local_u8ErrorStatus=RT_NOK;
	}
	return Local_u8ErrorStatus;

}
*/