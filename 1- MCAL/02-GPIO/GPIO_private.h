/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : RCC_Stm32      *********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 03/03/2024     *********************/
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************         Registers        *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                        PORTA                         ******** */
#define GPIO_PORTA              *((volatile u32*) 0x40010800)      /*Base Address*/
#define GPIO_PORTA_CRL          *((volatile u32*) 0x40010800)      /*Configuration register Low*/
#define GPIO_PORTA_CRH          *((volatile u32*) 0x40010804)      /*Configuration register High*/
#define GPIO_PORTA_IDR          *((volatile u32*) 0x40010808)      /*Input data regester*/
#define GPIO_PORTA_ODR          *((volatile u32*) 0x4001080C)      /*Output Data register*/
#define GPIO_PORTA_BSRR         *((volatile u32*) 0x40010810)      /*Port Bit set/reset Register*/
#define GPIO_PORTA_BRR          *((volatile u32*) 0x40010814)      /*Port Bit reset register*/
#define GPIO_PORTA_LCKR         *((volatile u32*) 0x40010818)      /*Port Configuration lock register*/
/* ********                        PORTB                         ******** */
#define GPIO_PORTB              *((volatile u32*) 0x40010C00)      /*Base Address*/
#define GPIO_PORTB_CRL          *((volatile u32*) 0x40010C00)      /*Configuration register Low*/
#define GPIO_PORTB_CRH          *((volatile u32*) 0x40010C04)      /*Configuration register High*/     
#define GPIO_PORTB_IDR          *((volatile u32*) 0x40010C08)      /*Input data regester*/       
#define GPIO_PORTB_ODR          *((volatile u32*) 0x40010C0C)      /*Output Data register*/       
#define GPIO_PORTB_BSRR         *((volatile u32*) 0x40010C10)      /*Port Bit set/reset Register*/       
#define GPIO_PORTB_BRR          *((volatile u32*) 0x40010C14)      /*Port Bit reset register*/       
#define GPIO_PORTB_LCKR         *((volatile u32*) 0x40010C18)      /*Port Configuration lock register*/       
/* ********                        PORTC                         ******** */
#define GPIO_PORTC              *((volatile u32*) 0x40011000)      /*Base Address*/
#define GPIO_PORTC_CRL          *((volatile u32*) 0x40011000)      /*Configuration register Low*/
#define GPIO_PORTC_CRH          *((volatile u32*) 0x40011004)      /*Configuration register High*/
#define GPIO_PORTC_IDR          *((volatile u32*) 0x40011008)      /*Input data regester*/
#define GPIO_PORTC_ODR          *((volatile u32*) 0x4001100C)      /*Output Data register*/
#define GPIO_PORTC_BSRR         *((volatile u32*) 0x40011010)      /*Port Bit set/reset Register*/
#define GPIO_PORTC_BRR          *((volatile u32*) 0x40011014)      /*Port Bit reset register*/
#define GPIO_PORTC_LCKR         *((volatile u32*) 0x40011018)      /*Port Configuration lock register*/
/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Post Configurations   *********************** */
/* *********************                          *********************** */
/**************************************************************************/


/* ********                xxxxxxxxxxxxxxxxxxxxxx                ******** */


#endif


