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
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _AFIO_INTERFACE_H_
#define _AFIO_INTERFACE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#define EXTI0  0
#define EXTI1  1
#define EXTI2  2
#define EXTI3  3

#define EXTI4  4
#define EXTI5  5
#define EXTI6  6
#define EXTI7  7

#define EXTI8  8
#define EXTI9  9
#define EXTI10 10
#define EXTI11 11

#define EXTI12 12
#define EXTI13 13
#define EXTI14 14
#define EXTI15 15


#define PA          0000
#define PB          0001
#define PC          0010

/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Function Proto_Type   *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/******************************************************************************/
/*Function: AFIO_u8SetEXTIConfiguration                            			  */
/*I/P Parameters: EXTI Line  , Port           								  */
/*Returns:it returns Error Status                            				  */
/*Desc:This Function selects the source input for EXTIx external interrupt    */
/******************************************************************************/
/*
 * Options for copy_u8Line:- EXTI0 ... EXTI15
 * Options for copy_u8Port  :- PA  ... PC
 */
/******************************************************************************/
u8 AFIO_u8SetEXTIConfiguration( u8 copy_u8Line , u8 copy_u8Port );

#endif
