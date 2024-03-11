/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : NVIC_Stm32     *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 08/03/2024     *********************/
/**************************************************************************/
/**************************************************************************/

/**************************************************************************/
/******************************          **********************************/
/****************************** Includes **********************************/
/******************************          **********************************/
/**************************************************************************/
#include "STD_TYPES.h"
#include "STD_ERRORS.h"
#include "BIT_MATH.h"
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
#define GROUPING_TYPE_EACH_STEP 0x100
#define PRIORITY_MSB_SHIFT      4
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
    if (copy_pu8StatusResult != NULL_POINTER)
    {
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
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }

    return local_u8ErrorStatus ;
}
u8 NVIC_u8SetPriority(s8 copy_u8INTID, u8 copy_u8GroupPriority, u8 copy_u8SubPriority)
{
    u8 local_u8ErrorStatus = RT_OK ;
    u8 local_u8Priority ;
    /*Core Peripherals Interrupts has priorities below Zero but External Peripherals Interrupts has priorities equal or above Zero*/
    if(copy_u8INTID < 0 )  //Core Peripherals
    {

    }
    else if (copy_u8INTID >= 0) //External Peripherals
    {
        local_u8Priority = copy_u8SubPriority | (copy_u8GroupPriority << ((NVIC_GROUP_SUB_DISTRIBUTION - GROUP_4_SUB_0) / GROUPING_TYPE_EACH_STEP));
        IP[copy_u8INTID] = local_u8Priority << PRIORITY_MSB_SHIFT ; 
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}


void NVIC_voidInit(void)
{
/* ********   Application interrupt and reset control register   ******** */
#define SCB_AIRCR                   *((volatile u32*)0xE000ED0C)
	SCB_AIRCR = NVIC_GROUP_SUB_DISTRIBUTION ;
}
