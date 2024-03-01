/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : RCC_Stm32      *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 27/02/2024     *********************/
/**************************************************************************/
/**************************************************************************/

/**************************************************************************/
/******************************          **********************************/
/****************************** Includes **********************************/
/******************************          **********************************/
/**************************************************************************/
#include "..\..\4- LIB\STD_TYPES.h"
#include "..\..\4- LIB\STD_ERRORS.h"
#include "..\..\4- LIB\BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"
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
#define MAX_PERIPHERAL_NUMBER       32
#define HSI_TRIMMING_MASK           0xFFFFFF07
#define RCC_CR_INIT_VALUE           0x80
#define RCC_CFGR_INIT_VALUE         0x00000000
#define PLL_MUL_FACTOR_MASK         0xFFC3FFFF
/**************************************************************************/
/**************************                       *************************/
/************************** Function declarations *************************/
/**************************                       *************************/
/**************************************************************************/
u8 RCC_u8EnableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId)
{
    u8 local_u8ErrorStatus = RT_OK ; 
    if(copy_u8PeripheralId <  MAX_PERIPHERAL_NUMBER )
    {
        switch(copy_u8BusId)
        {
            case RCC_AHB  : SET_BIT(RCC_AHBENR  , copy_u8PeripheralId ) ; break;
            case RCC_APB1 : SET_BIT(RCC_APB1ENR , copy_u8PeripheralId ) ; break;
            case RCC_APB2 : SET_BIT(RCC_APB2ENR , copy_u8PeripheralId ) ; break;
            default : local_u8ErrorStatus = RT_NOK ; break ;
        }
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
/**************************************************************************/
u8 RCC_u8DisableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId)
{
    u8 local_u8ErrorStatus = RT_OK ; 
    if(copy_u8PeripheralId <  MAX_PERIPHERAL_NUMBER )
    {
        switch(copy_u8BusId)
        {
            case RCC_AHB  : CLR_BIT(RCC_AHBENR  , copy_u8PeripheralId ) ; break;
            case RCC_APB1 : CLR_BIT(RCC_APB1ENR , copy_u8PeripheralId ) ; break;
            case RCC_APB2 : CLR_BIT(RCC_APB2ENR , copy_u8PeripheralId ) ; break;
            default : local_u8ErrorStatus = RT_NOK ; break ;
        }
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
/**************************************************************************/
void RCC_voidInitSysClock(void)
{
    /*Initial values for both registers RCC_CR & RCC_CFGR*/
    RCC_CR = RCC_CR_INIT_VALUE ;
    RCC_CFGR = RCC_CFGR_INIT_VALUE ;

    /*Pre-configuration Selection of Clock Type*/
    #if RCC_CLOCK_TYPE == RCC_HSI  /*Enable HSI with Trimming choice*/
    SET_BIT(RCC_CR,RCC_CR_HSION);
    RCC_CR &= HSI_TRIMMING_MASK ;
    RCC_RC |= RCC_HSI_TRIMMING ;
    #elif RCC_CLOCK_TYPE == RCC_HSE_RC     /*Enable HSE with bypass*/
    SET_BIT(RCC_CR,RCC_CR_HSEBYP);
    SET_BIT(RCC_CR,RCC_CR_HSEON);
    #elif RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL  /*Enable HSE  not bypassed*/
    SET_BIT(RCC_CR,RCC_CR_HSEBYP);
    CLR_BIT(RCC_CR,RCC_CR_HSEON);
    #elif RCC_CLOCK_TYPE == RCC_PLL                     /*Enable PLL with HSI or HSE*/
    /*Pre-configuration Selection of PLL CLOCK SOURCE*/
    #if RCC_PLL_CLOCK_SOURCE == HSI_CLOCK_DIV2          /*Enable HSI/2 as PLL source*/
    CLR_BIT(RCC_CFGR , RCC_CFGR_PLLSRC);
    #elif RCC_PLL_CLOCK_SOURCE == HSE_CLOCK             /*Enable HSE as PLL source*/
    SET_BIT(RCC_CFGR , RCC_CFGR_PLLSRC);
    /*Pre-configuration Selection of HSE of PLL*/
    #if RCC_HSE_STATUS == HSE_NO_DIV                 /*Enable HSE with no division*/
    CLR_BIT(RCC_CFGR , RCC_CFGR_PLLXTPRE) ;
    #elif RCC_HSE_STATUS == HSE_CLOCK_DIV2          /*Enable HSE with division by 2*/
    SET_BIT(RCC_CFGR , RCC_CFGR_PLLXTPRE);
    #else
    #error "Wrong Pre-configuration Selection of HSE STATUS"
    #endif
    #else
    #error "Wrong Pre-configuration Selection of PLL CLOCK SOURCE"
    #endif
    SET_BIT(RCC_CR,RCC_CR_PLLON);               /*PLL on*/
    RCC_CFGR &= PLL_MUL_FACTOR_MASK;            /*PLL Multipliction Factor*/
    RCC_CFGR |= RCC_PLL_MUL_FACTOR ;
    #else
    #error "Wrong Pre-configuration Selection of Clock Type "
    #endif
}