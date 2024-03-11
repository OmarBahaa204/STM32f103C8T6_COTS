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

/* ********                     Peripheral ID                    ******** */
#define RCC_APB2_AFIO              			0               /*Alternative function IO Clock Enable*/
#define RCC_APB2_GPIO_PORT_A              	2               /*IO Port A Clock Enable*/
#define RCC_APB2_GPIO_PORT_B              	3               /*IO Port B Clock Enable*/
#define RCC_APB2_GPIO_PORT_C              	4               /*IO Port C Clock Enable*/
#define RCC_APB2_GPIO_PORT_D              	5               /*IO Port D Clock Enable*/
#define RCC_APB2_GPIO_PORT_E              	6               /*IO Port E Clock Enable*/
#define RCC_APB2_GPIO_PORT_F              	7               /*IO Port F Clock Enable*/
#define RCC_APB2_GPIO_PORT_G              	8               /*IO Port G Clock Enable*/
#define RCC_APB2_ADC1              			9               /*ADC 1 interface Clock Enable*/
#define RCC_APB2_ADC2              			10              /*ADC 2 interface Clock Enable*/
#define RCC_APB2_TIM1              			11              /*Timer 1 Clock Enable*/
#define RCC_APB2_SPI1              			12              /*SPI1 Clock Enable*/
#define RCC_APB2_TIM8              			13              /*Timer 8 Clock Enable*/
#define RCC_APB2_USART1            			14              /*USART 1 Clock Enable*/
#define RCC_APB2_ADC3             			15              /*ADC 3 interface Clock Enable*/
#define RCC_APB2_TIM9             			19              /*Timer 9 Clock Enable*/
#define RCC_APB2_TIM10             			20              /*Timer 10 Clock Enable*/
#define RCC_APB2_TIM11             			21              /*Timer 11 Clock Enable*/

#define RCC_APB1_TIM2              0               /*Timer 2 Clock Enable*/
#define RCC_APB1_TIM3              1               /*Timer 3 Clock Enable*/
#define RCC_APB1_TIM4              2               /*Timer 4 Clock Enable*/
#define RCC_APB1_TIM5              3               /*Timer 5 Clock Enable*/
#define RCC_APB1_TIM6              4               /*Timer 6 Clock Enable*/
#define RCC_APB1_TIM7              5               /*Timer 7 Clock Enable*/
#define RCC_APB1_TIM12             6               /*Timer 12 Clock Enable*/
#define RCC_APB1_TIM13             7               /*Timer 13 Clock Enable*/
#define RCC_APB1_TIM14             8               /*Timer 14 Clock Enable*/
#define RCC_APB1_WWDG              11              /*Window watchdog Clock Enable*/
#define RCC_APB1_SPI2              14              /*SPI 2 Clock Enable*/
#define RCC_APB1_SPI3              15              /*SPI 1 Clock Enable*/
#define RCC_APB1_USART2            17              /*USART 2 Clock Enable*/
#define RCC_APB1_USART3            18              /*USART 1 Clock Enable*/
#define RCC_APB1_UART4             19              /*UART 4 Clock Enable*/
#define RCC_APB1_UART5             20              /*UART 5 Clock Enable*/
#define RCC_APB1_I2C1              21              /*I2C 1 Clock Enable*/
#define RCC_APB1_I2C2              22              /*I2C 2 Clock Enable*/
#define RCC_APB1_USB               23              /*USB Clock Enable*/
#define RCC_APB1_CAN               25              /*CAN Clock Enable*/
#define RCC_APB1_BKP               27              /*Backup interface Clock Enable*/
#define RCC_APB1_PWR               28              /*Power interface Clock Enable*/
#define RCC_APB1_DAC               29              /*DAC interface Clock Enable*/

#define RCC_AHB_SDIO       10      /*Peripheral SDIO Enable*/
#define RCC_AHB_FSMC       8       /*Peripheral FSMC Enable*/
#define RCC_AHB_CRC        6       /*Peripheral CRC Enable*/
#define RCC_AHB_FLITF      4       /*Peripheral FLITF Enable*/
#define RCC_AHB_SRAM       2       /*Peripheral SRAM Enable*/
#define RCC_AHB_DMA2       1       /*Peripheral DMA2 Enable*/
#define RCC_AHB_DMA1       0       /*Peripheral DMA1 Enable*/


/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Function Proto_Type   *********************** */
/* *********************                          *********************** */
/**************************************************************************/
/*Function to initialize the clock of the system , this function is Pre-configuration*/
void RCC_voidInitSysClock(void);
/*Function to Disable Clock For a peripheral
   Options for BusId : 
                        1- RCC_AHB
                        2- RCC_APB1
                        3- RCC_APB2
   Options for PeripheralId if RCC_APB2 :
											1-RCC_APB2_AFIO
											2-RCC_APB2_GPIO_PORT_A
											3-RCC_APB2_GPIO_PORT_B
											5-RCC_APB2_GPIO_PORT_C
											6-RCC_APB2_GPIO_PORT_D
											7-RCC_APB2_GPIO_PORT_E
											8-RCC_APB2_GPIO_PORT_F
											9-RCC_APB2_GPIO_PORT_G
											10-RCC_APB2_ADC1
											11-RCC_APB2_ADC2
											12-RCC_APB2_TIM1
											13-RCC_APB2_SPI1
											14-RCC_APB2_TIM8
											15-RCC_APB2_USART1
											16-RCC_APB2_ADC3
											17-RCC_APB2_TIM9
											18-RCC_APB2_TIM10
											19-RCC_APB2_TIM11
	Options for PeripheralId if RCC_APB1 :
											1-  RCC_APB1_TIM2
											2-  RCC_APB1_TIM3
											3-  RCC_APB1_TIM4
											5-  RCC_APB1_TIM5
											6-  RCC_APB1_TIM6
											7-  RCC_APB1_TIM7
											8-  RCC_APB1_TIM12
											9-  RCC_APB1_TIM13
											10- RCC_APB1_TIM14
											11- RCC_APB1_WWDG
											12- RCC_APB1_SPI2
											13- RCC_APB1_SPI3
											14- RCC_APB1_USART2
											15- RCC_APB1_USART3
											16- RCC_APB1_UART4
											17- RCC_APB1_UART5
											18- RCC_APB1_I2C1
											19- RCC_APB1_I2C2
                                            20- RCC_APB1_USB
                                            21- RCC_APB1_CAN
                                            22- RCC_APB1_BKP
                                            23- RCC_APB1_PWR
                                            24- RCC_APB1_DAC
     Options for PeripheralId if RCC_APB2 :
    										1-RCC_AHB_SDIO
    										2-RCC_AHB_FSMC
    										3-RCC_AHB_CRC
    										5-RCC_AHB_FLITF
    										6-RCC_AHB_SRAM
    										7-RCC_AHB_DMA2
    										8-RCC_AHB_DMA1
 */
u8 RCC_u8EnableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId);
/**************************************************************************/
/*Function to Disable Clock For a peripheral 
   Options for BusId : 
                        1- RCC_AHB
                        2- RCC_APB1
                        3- RCC_APB2
   Options for PeripheralId if RCC_APB2 :
											1-RCC_APB2_AFIO
											2-RCC_APB2_GPIO_PORT_A
											3-RCC_APB2_GPIO_PORT_B
											5-RCC_APB2_GPIO_PORT_C
											6-RCC_APB2_GPIO_PORT_D
											7-RCC_APB2_GPIO_PORT_E
											8-RCC_APB2_GPIO_PORT_F
											9-RCC_APB2_GPIO_PORT_G
											10-RCC_APB2_ADC1
											11-RCC_APB2_ADC2
											12-RCC_APB2_TIM1
											13-RCC_APB2_SPI1
											14-RCC_APB2_TIM8
											15-RCC_APB2_USART1
											16-RCC_APB2_ADC3
											17-RCC_APB2_TIM9
											18-RCC_APB2_TIM10
											19-RCC_APB2_TIM11
	Options for PeripheralId if RCC_APB1 :
											1-  RCC_APB1_TIM2
											2-  RCC_APB1_TIM3
											3-  RCC_APB1_TIM4
											5-  RCC_APB1_TIM5
											6-  RCC_APB1_TIM6
											7-  RCC_APB1_TIM7
											8-  RCC_APB1_TIM12
											9-  RCC_APB1_TIM13
											10- RCC_APB1_TIM14
											11- RCC_APB1_WWDG
											12- RCC_APB1_SPI2
											13- RCC_APB1_SPI3
											14- RCC_APB1_USART2
											15- RCC_APB1_USART3
											16- RCC_APB1_UART4
											17- RCC_APB1_UART5
											18- RCC_APB1_I2C1
											19- RCC_APB1_I2C2
                                            20- RCC_APB1_USB
                                            21- RCC_APB1_CAN
                                            22- RCC_APB1_BKP
                                            23- RCC_APB1_PWR
                                            24- RCC_APB1_DAC
     Options for PeripheralId if RCC_APB2 :
    										1-RCC_AHB_SDIO
    										2-RCC_AHB_FSMC
    										3-RCC_AHB_CRC
    										5-RCC_AHB_FLITF
    										6-RCC_AHB_SRAM
    										7-RCC_AHB_DMA2
    										8-RCC_AHB_DMA1
 */
u8 RCC_u8DisableClock(u8 copy_u8BusId , u8 copy_u8PeripheralId);
/**************************************************************************/
#endif
