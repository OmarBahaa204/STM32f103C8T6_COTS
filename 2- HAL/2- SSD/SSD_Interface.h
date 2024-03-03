/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : HAL            *********************/
/**********************      SWC     : SSD            *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 22/12/2023     *********************/
/**************************************************************************/
/**************************************************************************/
#ifndef _SSD_INTERFACE_H_
#define _SSD_INTERFACE_H_


#define SSD_u8ANODE		0
#define SSD_u8CATHODE	1
#define SSD_u8COMMON_ANODE					0
#define SSD_u8COMMON_CATHODE				1
#define SSD_u8HIGHEST_NUMBER_DISPLAYED		9
#define SSD_u8LOWEST_NUMBER_DISPLAYED		0



u8 SSD_u8Enable(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Type);
u8 SSD_u8Disable(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Type);
u8 SSD_u8SetNumber(u8 Copy_u8Number , u8 Copy_u8DisplayPort , u8 Copy_u8Type);
#endif
