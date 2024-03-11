/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : AFIO_Stm32     *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 10/03/2024     *********************/
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
#include "AFIO_private.h"
#include "AFIO_config.h"
#include "AFIO_interface.h"

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
#define NO_EXTICR_REGISTERS         4
#define EXTIx_MASK                  0b1111
#define NO_EXTIx_IN_EACH_REGISTER   4
/**************************************************************************/
/**************************                       *************************/
/************************** Function declarations *************************/
/**************************                       *************************/
/**************************************************************************/
u8 AFIO_u8SetEXTIConfiguration( u8 copy_u8Line , u8 copy_u8Port )
{
    u8 local_u8ErrorStatus = RT_OK ;
    u8 local_u8RegisteIndex; 
    if(copy_u8Line <= EXTI15)
    {
        /*For Example  copy_u8Line = 15 , local_u8RegisteIndex = 15 / 4 = 3 ,
            So we will use the Fourth Register of AFIO_EXTICRx
            **Note** AFIO_EXTICR0 .. AFIO_EXTICR3 */
        local_u8RegisteIndex = copy_u8Line / NO_EXTICR_REGISTERS ;

        if(copy_u8Line <= EXTI7 && copy_u8Line >= EXTI4 )
        {
            copy_u8Line -= EXTI4 ;
        }
        else if(copy_u8Line <= EXTI11 && copy_u8Line >= EXTI8 )
        {
            copy_u8Line -= EXTI8 ;
        }
        else if(copy_u8Line <= EXTI15 && copy_u8Line >= EXTI12 )
        {
            copy_u8Line -= EXTI12 ;
        }
        /*Puting value of needed port in its register , & Masking the hole register but the needed bits*/
        AFIO -> EXTICR[local_u8RegisteIndex] &= ~ ((EXTIx_MASK) << (copy_u8Line * NO_EXTIx_IN_EACH_REGISTER ));  
        AFIO -> EXTICR[local_u8RegisteIndex] |= (copy_u8Port << (copy_u8Line * NO_EXTIx_IN_EACH_REGISTER));
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK;
    }
    return local_u8ErrorStatus;
}
