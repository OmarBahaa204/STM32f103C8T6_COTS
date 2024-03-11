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
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _NVIC_PRIVATE_H_
#define _NVIC_PRIVATE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************         Registers        *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                         NVIC                         ******** */
#define NVIC_BASE_ADDRESS           *((volatile u32*)0xE000E100)
/* ********            Interrupt Set Enable Register 0           ******** */
#define NVIC_ISRE0                  *((volatile u32*)0xE000E100)
/* ********            Interrupt Set Enable Register 1           ******** */
#define NVIC_ISRE1                  *((volatile u32*)0xE000E104)
/* ********           Interrupt Clear Enable Register 0          ******** */
#define NVIC_ICRE0                  *((volatile u32*)0xE000E180)
/* ********           Interrupt Clear Enable Register 1          ******** */
#define NVIC_ICRE1                  *((volatile u32*)0xE000E184)
/* ********            Interrupt Set Penfing Register 0          ******** */
#define NVIC_ISPR0                  *((volatile u32*)0xE000E200)
/* ********            Interrupt Set Penfing Register 1          ******** */
#define NVIC_ISPR1                  *((volatile u32*)0xE000E204)
/* ********            Interrupt Clear Penfing Register 0        ******** */
#define NVIC_ICPR0                  *((volatile u32*)0xE000E280)
/* ********            Interrupt Clear Penfing Register 1        ******** */
#define NVIC_ICPR1                  *((volatile u32*)0xE000E284)
/* ********             Interrupt Active Bit Register 0          ******** */
#define NVIC_IABR0                  *((volatile u32*)0xE000E300)
/* ********             Interrupt Active Bit Register 1          ******** */
#define NVIC_IABR1                  *((volatile u32*)0xE000E304)
/* ********      Interrupt Periority First Register Address      ******** */
#define NVIC_IPR                     ((volatile u8* )0xE000E400)   
#define IP                           NVIC_IPR    //This is a pointer to the register which is a byte accesable so it is a pointer for the first byte then acessing the next byte using concept ptr[next]
/* ********                 SCB Core Peripheral                   ******* */

/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Post Configurations   *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********               Grouping Type Definitions              ******** */
#define GROUP_4_SUB_0                        0x05FA0300              /*16 GROUP with No SUB Priority*/
#define GROUP_3_SUB_1                        0x05FA0400              /*8  GROUP with 2  SUB Priority*/
#define GROUP_2_SUB_2                        0x05FA0500              /*4  GROUP with 4  SUB Priority*/
#define GROUP_1_SUB_3                        0x05FA0600              /*2  GROUP with 8  SUB Priority*/
#define GROUP_0_SUB_4                        0x05FA0700              /*No GROUP with 16 SUB Priority*/

/* ********                xxxxxxxxxxxxxxxxxxxxxx                ******** */


#endif


