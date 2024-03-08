/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : RCC_Stm32      *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 08/03/2024     *********************/
/**************************************************************************/
/**************************************************************************/

/**************************************************************************/
/******************************          **********************************/
/****************************** Includes **********************************/
/******************************          **********************************/
/**************************************************************************/
#include "../../4- LIB/STD_TYPES.h"
#include "../../4- LIB/STD_ERRORS.h"
#include "../../4- LIB/BIT_MATH.h"
#include "NVIC_private.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"

/**************************************************************************/
/**************************                       *************************/
/**************************    Global Variables   *************************/
/**************************                       *************************/
/**************************************************************************/

/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/

#define FIRST_REGISTER_BITS     32
#define SECOND_REGISTER_BITS    64


/**************************************************************************/
/**************************                       *************************/
/************************** Function declarations *************************/
/**************************                       *************************/
/**************************************************************************/
u8 NVIC_u8EnableInterrupt(u8 copy_u8InterruptNumber)
{
    u8 local_u8ErrorStatus = RT_OK;

    if(copy_u8InterruptNumber < FIRST_REGISTER_BITS )
    {
        NVIC_ISRE0 = (1<<copy_u8InterruptNumber);       /*Set Bit to Enable the choosen peripheral*/
    }
    else if (copy_u8InterruptNumber >= FIRST_REGISTER_BITS && copy_u8InterruptNumber < SECOND_REGISTER_BITS)
    {
        copy_u8InterruptNumber -= FIRST_REGISTER_BITS ;
        NVIC_ISRE1 = (1<<copy_u8InterruptNumber);      /*Set Bit to Enable the choosen peripheral*/
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 NVIC_u8DisableInterrupt(u8 copy_u8InterruptNumber)
{
    u8 local_u8ErrorStatus = RT_OK;

    if(copy_u8InterruptNumber < FIRST_REGISTER_BITS )
    {
        NVIC_ICRE0 = (1<<copy_u8InterruptNumber);       /*Set Bit to Disable the choosen peripheral*/
    }
    else if (copy_u8InterruptNumber >= FIRST_REGISTER_BITS && copy_u8InterruptNumber < SECOND_REGISTER_BITS)
    {
        copy_u8InterruptNumber -= FIRST_REGISTER_BITS ;
        NVIC_ICRE1 = (1<<copy_u8InterruptNumber);      /*Set Bit to Disable the choosen peripheral*/
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 NVIC_u8EnablePendingFlag(u8 copy_u8InterruptNumber)
{
    u8 local_u8ErrorStatus = RT_OK;

    if(copy_u8InterruptNumber < FIRST_REGISTER_BITS )
    {
        NVIC_ISPR0 = (1<<copy_u8InterruptNumber);       /*Set Bit to Enable the Pending Flag of the choosen peripheral*/
    }
    else if (copy_u8InterruptNumber >= FIRST_REGISTER_BITS && copy_u8InterruptNumber < SECOND_REGISTER_BITS)
    {
        copy_u8InterruptNumber -= FIRST_REGISTER_BITS ;
        NVIC_ISPR1 = (1<<copy_u8InterruptNumber);      /*Set Bit to Enable the Pending Flag of the choosen peripheral*/
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 NVIC_u8DisablePendingFlag(u8 copy_u8InterruptNumber)
{
    u8 local_u8ErrorStatus = RT_OK;

    if(copy_u8InterruptNumber < FIRST_REGISTER_BITS )
    {
        NVIC_ICPR0 = (1<<copy_u8InterruptNumber);       /*Set Bit to Disable the Pending Flag of the choosen peripheral*/
    }
    else if (copy_u8InterruptNumber >= FIRST_REGISTER_BITS && copy_u8InterruptNumber < SECOND_REGISTER_BITS)
    {
        copy_u8InterruptNumber -= FIRST_REGISTER_BITS ;
        NVIC_ICPR1 = (1<<copy_u8InterruptNumber);      /*Set Bit to Disable the Pending Flag of the choosen peripheral*/
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 NVIC_u8GetFlagStatus(u8 copy_u8InterruptNumber , u8* copy_pu8StatusResult)
{
    u8 local_u8ErrorStatus = RT_OK;
    if(copy_u8InterruptNumber < FIRST_REGISTER_BITS )
    {
        copy_pu8StatusResult = GET_BIT(NVIC_IABR0,copy_u8InterruptNumber);
    }
    else if (copy_u8InterruptNumber >= FIRST_REGISTER_BITS && copy_u8InterruptNumber < SECOND_REGISTER_BITS)
    {
        copy_u8InterruptNumber -= FIRST_REGISTER_BITS ;
        copy_pu8StatusResult = GET_BIT(NVIC_IABR1,copy_u8InterruptNumber);
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}