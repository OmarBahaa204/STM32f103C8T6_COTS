/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : EXTI_Stm32     *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 09/03/2024     *********************/
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************         Registers        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
typedef struct
{
    volatile u32 IMR ; 
    volatile u32 EMR; 
    volatile u32 RTSR;
    volatile u32 FTSR;
    volatile u32 SWIER;
    volatile u32 PR;
}EXTI_Type;

#define EXTI        ((volatile EXTI_Type * ) 0x40010400)
/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Post Configurations   *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#define ENABLE 1
#define DISABLE  0



/* ********                xxxxxxxxxxxxxxxxxxxxxx                ******** */


#endif


