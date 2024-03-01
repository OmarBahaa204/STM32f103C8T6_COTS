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
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                        BUS ID                        ******** */
#define RCC_AHB         0
#define RCC_APB1        1
#define RCC_APB2        2

/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Function Proto_Type   *********************** */
/* *********************                          *********************** */
/**************************************************************************/
/*Function to initialize the clock of the system , this function is Pre configuration*/
void RCC_voidInitSysClock(void);
/*Function to Enable Clock For a peripheral 
   Options for BusId : 
                        1- RCC_AHB
                        2- RCC_APB1
                        3- RCC_APB2
   Options for PeripheralId :
                        1-  RCC_AHBENR_SDIOEN 
                        2-  RCC_AHBENR_FSMCEN 
                        3-  RCC_AHBENR_CRCEN  
                        4-  RCC_AHBENR_FLITFEN
                        5-  RCC_AHBENR_SRAMEN 
                        6-  RCC_AHBENR_DMA2EN 
                        7-  RCC_AHBENR_DMA1EN 
                        8-  RCC_APB2ENR_AFIOEN   
                        9-  RCC_APB2ENR_IOPAEN   
                        10- RCC_APB2ENR_IOPBEN   
                        11- RCC_APB2ENR_IOPCEN   
                        12- RCC_APB2ENR_IOPDEN   
                        13- RCC_APB2ENR_IOPEEN   
                        14- RCC_APB2ENR_IOPFEN   
                        15- RCC_APB2ENR_IOPGEN   
                        16- RCC_APB2ENR_ADC1EN   
                        17- RCC_APB2ENR_ADC2EN   
                        18- RCC_APB2ENR_TIM1EN   
                        19- RCC_APB2ENR_SPI1EN   
                        20- RCC_APB2ENR_TIM8EN   
                        21- RCC_APB2ENR_USART1EN 
                        22- RCC_APB2ENR_ADC3EN   
                        23- RCC_APB2ENR_TIM9EN   
                        24- RCC_APB2ENR_TIM10EN  
                        25- RCC_APB2ENR_TIM11EN
                        26- RCC_APB1ENR_TIM2EN  
                        27- RCC_APB1ENR_TIM3EN  
                        28- RCC_APB1ENR_TIM4EN  
                        29- RCC_APB1ENR_TIM5EN  
                        30- RCC_APB1ENR_TIM6EN  
                        31- RCC_APB1ENR_TIM7EN  
                        32- RCC_APB1ENR_TIM12EN 
                        33- RCC_APB1ENR_TIM13EN 
                        34- RCC_APB1ENR_TIM14EN 
                        35- RCC_APB1ENR_WWDGEN  
                        36- RCC_APB1ENR_SPI2EN  
                        37- RCC_APB1ENR_SPI3EN  
                        38- RCC_APB1ENR_USART2EN
                        39- RCC_APB1ENR_USART3EN
                        40- RCC_APB1ENR_UART4EN 
                        41- RCC_APB1ENR_UART5EN 
                        42- RCC_APB1ENR_I2C1EN  
                        43- RCC_APB1ENR_I2C2EN  
                        44- RCC_APB1ENR_USBEN   
                        45- RCC_APB1ENR_CANEN   
                        46- RCC_APB1ENR_BKPEN   
                        47- RCC_APB1ENR_PWREN   
                        48- RCC_APB1ENR_DACEN     
*/
u8 RCC_u8EnableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId);
/**************************************************************************/
/*Function to Disable Clock For a peripheral 
   Options for BusId : 
                        1- RCC_AHB
                        2- RCC_APB1
                        3- RCC_APB2
   Options for PeripheralId :
                        1-  RCC_AHBENR_SDIOEN 
                        2-  RCC_AHBENR_FSMCEN 
                        3-  RCC_AHBENR_CRCEN  
                        4-  RCC_AHBENR_FLITFEN
                        5-  RCC_AHBENR_SRAMEN 
                        6-  RCC_AHBENR_DMA2EN 
                        7-  RCC_AHBENR_DMA1EN 
                        8-  RCC_APB2ENR_AFIOEN   
                        9-  RCC_APB2ENR_IOPAEN   
                        10- RCC_APB2ENR_IOPBEN   
                        11- RCC_APB2ENR_IOPCEN   
                        12- RCC_APB2ENR_IOPDEN   
                        13- RCC_APB2ENR_IOPEEN   
                        14- RCC_APB2ENR_IOPFEN   
                        15- RCC_APB2ENR_IOPGEN   
                        16- RCC_APB2ENR_ADC1EN   
                        17- RCC_APB2ENR_ADC2EN   
                        18- RCC_APB2ENR_TIM1EN   
                        19- RCC_APB2ENR_SPI1EN   
                        20- RCC_APB2ENR_TIM8EN   
                        21- RCC_APB2ENR_USART1EN 
                        22- RCC_APB2ENR_ADC3EN   
                        23- RCC_APB2ENR_TIM9EN   
                        24- RCC_APB2ENR_TIM10EN  
                        25- RCC_APB2ENR_TIM11EN
                        26- RCC_APB1ENR_TIM2EN  
                        27- RCC_APB1ENR_TIM3EN  
                        28- RCC_APB1ENR_TIM4EN  
                        29- RCC_APB1ENR_TIM5EN  
                        30- RCC_APB1ENR_TIM6EN  
                        31- RCC_APB1ENR_TIM7EN  
                        32- RCC_APB1ENR_TIM12EN 
                        33- RCC_APB1ENR_TIM13EN 
                        34- RCC_APB1ENR_TIM14EN 
                        35- RCC_APB1ENR_WWDGEN  
                        36- RCC_APB1ENR_SPI2EN  
                        37- RCC_APB1ENR_SPI3EN  
                        38- RCC_APB1ENR_USART2EN
                        39- RCC_APB1ENR_USART3EN
                        40- RCC_APB1ENR_UART4EN 
                        41- RCC_APB1ENR_UART5EN 
                        42- RCC_APB1ENR_I2C1EN  
                        43- RCC_APB1ENR_I2C2EN  
                        44- RCC_APB1ENR_USBEN   
                        45- RCC_APB1ENR_CANEN   
                        46- RCC_APB1ENR_BKPEN   
                        47- RCC_APB1ENR_PWREN   
                        48- RCC_APB1ENR_DACEN     
*/
u8 RCC_u8DisableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId);
/**************************************************************************/
#endif