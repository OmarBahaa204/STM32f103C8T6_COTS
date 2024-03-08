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
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _NVIC_INTERFACE_H_
#define _NVIC_INTERFACE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#define INTERRUPT_WWDG                      0
#define INTERRUPT_PVD                       1
#define INTERRUPT_TAMPER                    2
#define INTERRUPT_RTC                       3
#define INTERRUPT_FLASH                     4
#define INTERRUPT_RCC                       5
#define INTERRUPT_EXTI0                     6
#define INTERRUPT_EXTI1                     7
#define INTERRUPT_EXTI2                     8
#define INTERRUPT_EXTI3                     9
#define INTERRUPT_EXTI4                     10
#define INTERRUPT_DMA1_CHANNEL_1            11
#define INTERRUPT_DMA1_CHANNEL_2            12
#define INTERRUPT_DMA1_CHANNEL_3            13
#define INTERRUPT_DMA1_CHANNEL_4            14
#define INTERRUPT_DMA1_CHANNEL_5            15
#define INTERRUPT_DMA1_CHANNEL_6            16
#define INTERRUPT_DMA1_CHANNEL_7            17
#define INTERRUPT_ADC1_2                    18
#define INTERRUPT_USB_HP_CAN_TX             19
#define INTERRUPT_USB_LP_CAN_RX0            20
#define INTERRUPT_CAN_RX1                   21
#define INTERRUPT_CAN_SCE                   22
#define INTERRUPT_EXTI9_5                   23
#define INTERRUPT_TIM1_BRK                  24
#define INTERRUPT_TIM1_UP                   25
#define INTERRUPT_TIM1_TRG_COM              26
#define INTERRUPT_TIM1_CC                   27
#define INTERRUPT_TIM2                      28
#define INTERRUPT_TIM3                      29
#define INTERRUPT_TIM4                      30
#define INTERRUPT_I2C1_EV                   31
#define INTERRUPT_I2C1_ER                   32
#define INTERRUPT_I2C2_EV                   33
#define INTERRUPT_I2C2_ER                   34
#define INTERRUPT_SPI1                      35
#define INTERRUPT_SPI2                      36
#define INTERRUPT_USART1                    37
#define INTERRUPT_USART2                    38
#define INTERRUPT_USART3                    39
#define INTERRUPT_EXTI15_10                 40
#define INTERRUPT_RTC_ALARM                 40
#define INTERRUPT_USB_WAKE_UP               42
#define INTERRUPT_TIM8_BRK                  43
#define INTERRUPT_TIM8_UP                   44
#define INTERRUPT_TIM8_TRG_COM              45
#define INTERRUPT_TIM8_CC                   46
#define INTERRUPT_ADC3                      47
#define INTERRUPT_FSMC                      48
#define INTERRUPT_SDIO                      49
#define INTERRUPT_TIM5                      50
#define INTERRUPT_SPI3                      51
#define INTERRUPT_UART4                     52
#define INTERRUPT_UART5                     53
#define INTERRUPT_TIM6                      54
#define INTERRUPT_TIM7                      55
#define INTERRUPT_DMA2_CHANNEL_1            56  
#define INTERRUPT_DMA2_CHANNEL_2            57
#define INTERRUPT_DMA2_CHANNEL_3            58
#define INTERRUPT_DMA2_CHANNEL_4_5          59
/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Function Proto_Type   *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/*Options :
            1- INTERRUPT_WWDG            
            2- INTERRUPT_PVD             
            3- INTERRUPT_TAMPER          
            4- INTERRUPT_RTC             
            5- INTERRUPT_FLASH           
            6- INTERRUPT_RCC             
            7- INTERRUPT_EXTI0           
            8- INTERRUPT_EXTI1           
            9- INTERRUPT_EXTI2           
            10- INTERRUPT_EXTI3           
            11- INTERRUPT_EXTI4           
            12- INTERRUPT_DMA1_CHANNEL_1  
            13- INTERRUPT_DMA1_CHANNEL_2  
            14- INTERRUPT_DMA1_CHANNEL_3  
            15- INTERRUPT_DMA1_CHANNEL_4  
            16- INTERRUPT_DMA1_CHANNEL_5  
            17- INTERRUPT_DMA1_CHANNEL_6  
            18- INTERRUPT_DMA1_CHANNEL_7  
            19- INTERRUPT_ADC1_2          
            20- INTERRUPT_USB_HP_CAN_TX   
            21- INTERRUPT_USB_LP_CAN_RX0  
            22- INTERRUPT_CAN_RX1         
            23- INTERRUPT_CAN_SCE         
            24- INTERRUPT_EXTI9_5         
            25- INTERRUPT_TIM1_BRK        
            26- INTERRUPT_TIM1_UP         
            27- INTERRUPT_TIM1_TRG_COM    
            28- INTERRUPT_TIM1_CC         
            29- INTERRUPT_TIM2            
            30- INTERRUPT_TIM3            
            31- INTERRUPT_TIM4            
            32- INTERRUPT_I2C1_EV         
            33- INTERRUPT_I2C1_ER         
            34- INTERRUPT_I2C2_EV         
            35- INTERRUPT_I2C2_ER         
            36- INTERRUPT_SPI1            
            37- INTERRUPT_SPI2            
            38- INTERRUPT_USART1          
            39- INTERRUPT_USART2          
            40- INTERRUPT_USART3          
            41- INTERRUPT_EXTI15_10       
            42- INTERRUPT_RTC_ALARM       
            43- INTERRUPT_USB_WAKE_UP     
            44- INTERRUPT_TIM8_BRK        
            45- INTERRUPT_TIM8_UP         
            46- INTERRUPT_TIM8_TRG_COM    
            47- INTERRUPT_TIM8_CC         
            48- INTERRUPT_ADC3            
            49- INTERRUPT_FSMC            
            50- INTERRUPT_SDIO            
            51- INTERRUPT_TIM5            
            52- INTERRUPT_SPI3            
            53- INTERRUPT_UART4           
            54- INTERRUPT_UART5           
            55- INTERRUPT_TIM6            
            56- INTERRUPT_TIM7            
            57- INTERRUPT_DMA2_CHANNEL_1  
            58- INTERRUPT_DMA2_CHANNEL_2  
            59- INTERRUPT_DMA2_CHANNEL_3  
            60- INTERRUPT_DMA2_CHANNEL_4_5
*/
u8 NVIC_u8EnableInterrupt(u8 copy_u8InterruptNumber);
/*Options :
            1- INTERRUPT_WWDG            
            2- INTERRUPT_PVD             
            3- INTERRUPT_TAMPER          
            4- INTERRUPT_RTC             
            5- INTERRUPT_FLASH           
            6- INTERRUPT_RCC             
            7- INTERRUPT_EXTI0           
            8- INTERRUPT_EXTI1           
            9- INTERRUPT_EXTI2           
            10- INTERRUPT_EXTI3           
            11- INTERRUPT_EXTI4           
            12- INTERRUPT_DMA1_CHANNEL_1  
            13- INTERRUPT_DMA1_CHANNEL_2  
            14- INTERRUPT_DMA1_CHANNEL_3  
            15- INTERRUPT_DMA1_CHANNEL_4  
            16- INTERRUPT_DMA1_CHANNEL_5  
            17- INTERRUPT_DMA1_CHANNEL_6  
            18- INTERRUPT_DMA1_CHANNEL_7  
            19- INTERRUPT_ADC1_2          
            20- INTERRUPT_USB_HP_CAN_TX   
            21- INTERRUPT_USB_LP_CAN_RX0  
            22- INTERRUPT_CAN_RX1         
            23- INTERRUPT_CAN_SCE         
            24- INTERRUPT_EXTI9_5         
            25- INTERRUPT_TIM1_BRK        
            26- INTERRUPT_TIM1_UP         
            27- INTERRUPT_TIM1_TRG_COM    
            28- INTERRUPT_TIM1_CC         
            29- INTERRUPT_TIM2            
            30- INTERRUPT_TIM3            
            31- INTERRUPT_TIM4            
            32- INTERRUPT_I2C1_EV         
            33- INTERRUPT_I2C1_ER         
            34- INTERRUPT_I2C2_EV         
            35- INTERRUPT_I2C2_ER         
            36- INTERRUPT_SPI1            
            37- INTERRUPT_SPI2            
            38- INTERRUPT_USART1          
            39- INTERRUPT_USART2          
            40- INTERRUPT_USART3          
            41- INTERRUPT_EXTI15_10       
            42- INTERRUPT_RTC_ALARM       
            43- INTERRUPT_USB_WAKE_UP     
            44- INTERRUPT_TIM8_BRK        
            45- INTERRUPT_TIM8_UP         
            46- INTERRUPT_TIM8_TRG_COM    
            47- INTERRUPT_TIM8_CC         
            48- INTERRUPT_ADC3            
            49- INTERRUPT_FSMC            
            50- INTERRUPT_SDIO            
            51- INTERRUPT_TIM5            
            52- INTERRUPT_SPI3            
            53- INTERRUPT_UART4           
            54- INTERRUPT_UART5           
            55- INTERRUPT_TIM6            
            56- INTERRUPT_TIM7            
            57- INTERRUPT_DMA2_CHANNEL_1  
            58- INTERRUPT_DMA2_CHANNEL_2  
            59- INTERRUPT_DMA2_CHANNEL_3  
            60- INTERRUPT_DMA2_CHANNEL_4_5
*/
u8 NVIC_u8DisableInterrupt(u8 copy_u8InterruptNumber);
/*Options :
            1- INTERRUPT_WWDG            
            2- INTERRUPT_PVD             
            3- INTERRUPT_TAMPER          
            4- INTERRUPT_RTC             
            5- INTERRUPT_FLASH           
            6- INTERRUPT_RCC             
            7- INTERRUPT_EXTI0           
            8- INTERRUPT_EXTI1           
            9- INTERRUPT_EXTI2           
            10- INTERRUPT_EXTI3           
            11- INTERRUPT_EXTI4           
            12- INTERRUPT_DMA1_CHANNEL_1  
            13- INTERRUPT_DMA1_CHANNEL_2  
            14- INTERRUPT_DMA1_CHANNEL_3  
            15- INTERRUPT_DMA1_CHANNEL_4  
            16- INTERRUPT_DMA1_CHANNEL_5  
            17- INTERRUPT_DMA1_CHANNEL_6  
            18- INTERRUPT_DMA1_CHANNEL_7  
            19- INTERRUPT_ADC1_2          
            20- INTERRUPT_USB_HP_CAN_TX   
            21- INTERRUPT_USB_LP_CAN_RX0  
            22- INTERRUPT_CAN_RX1         
            23- INTERRUPT_CAN_SCE         
            24- INTERRUPT_EXTI9_5         
            25- INTERRUPT_TIM1_BRK        
            26- INTERRUPT_TIM1_UP         
            27- INTERRUPT_TIM1_TRG_COM    
            28- INTERRUPT_TIM1_CC         
            29- INTERRUPT_TIM2            
            30- INTERRUPT_TIM3            
            31- INTERRUPT_TIM4            
            32- INTERRUPT_I2C1_EV         
            33- INTERRUPT_I2C1_ER         
            34- INTERRUPT_I2C2_EV         
            35- INTERRUPT_I2C2_ER         
            36- INTERRUPT_SPI1            
            37- INTERRUPT_SPI2            
            38- INTERRUPT_USART1          
            39- INTERRUPT_USART2          
            40- INTERRUPT_USART3          
            41- INTERRUPT_EXTI15_10       
            42- INTERRUPT_RTC_ALARM       
            43- INTERRUPT_USB_WAKE_UP     
            44- INTERRUPT_TIM8_BRK        
            45- INTERRUPT_TIM8_UP         
            46- INTERRUPT_TIM8_TRG_COM    
            47- INTERRUPT_TIM8_CC         
            48- INTERRUPT_ADC3            
            49- INTERRUPT_FSMC            
            50- INTERRUPT_SDIO            
            51- INTERRUPT_TIM5            
            52- INTERRUPT_SPI3            
            53- INTERRUPT_UART4           
            54- INTERRUPT_UART5           
            55- INTERRUPT_TIM6            
            56- INTERRUPT_TIM7            
            57- INTERRUPT_DMA2_CHANNEL_1  
            58- INTERRUPT_DMA2_CHANNEL_2  
            59- INTERRUPT_DMA2_CHANNEL_3  
            60- INTERRUPT_DMA2_CHANNEL_4_5
*/
u8 NVIC_u8EnablePendingFlag(u8 copy_u8InterruptNumber);
/*Options :
            1- INTERRUPT_WWDG            
            2- INTERRUPT_PVD             
            3- INTERRUPT_TAMPER          
            4- INTERRUPT_RTC             
            5- INTERRUPT_FLASH           
            6- INTERRUPT_RCC             
            7- INTERRUPT_EXTI0           
            8- INTERRUPT_EXTI1           
            9- INTERRUPT_EXTI2           
            10- INTERRUPT_EXTI3           
            11- INTERRUPT_EXTI4           
            12- INTERRUPT_DMA1_CHANNEL_1  
            13- INTERRUPT_DMA1_CHANNEL_2  
            14- INTERRUPT_DMA1_CHANNEL_3  
            15- INTERRUPT_DMA1_CHANNEL_4  
            16- INTERRUPT_DMA1_CHANNEL_5  
            17- INTERRUPT_DMA1_CHANNEL_6  
            18- INTERRUPT_DMA1_CHANNEL_7  
            19- INTERRUPT_ADC1_2          
            20- INTERRUPT_USB_HP_CAN_TX   
            21- INTERRUPT_USB_LP_CAN_RX0  
            22- INTERRUPT_CAN_RX1         
            23- INTERRUPT_CAN_SCE         
            24- INTERRUPT_EXTI9_5         
            25- INTERRUPT_TIM1_BRK        
            26- INTERRUPT_TIM1_UP         
            27- INTERRUPT_TIM1_TRG_COM    
            28- INTERRUPT_TIM1_CC         
            29- INTERRUPT_TIM2            
            30- INTERRUPT_TIM3            
            31- INTERRUPT_TIM4            
            32- INTERRUPT_I2C1_EV         
            33- INTERRUPT_I2C1_ER         
            34- INTERRUPT_I2C2_EV         
            35- INTERRUPT_I2C2_ER         
            36- INTERRUPT_SPI1            
            37- INTERRUPT_SPI2            
            38- INTERRUPT_USART1          
            39- INTERRUPT_USART2          
            40- INTERRUPT_USART3          
            41- INTERRUPT_EXTI15_10       
            42- INTERRUPT_RTC_ALARM       
            43- INTERRUPT_USB_WAKE_UP     
            44- INTERRUPT_TIM8_BRK        
            45- INTERRUPT_TIM8_UP         
            46- INTERRUPT_TIM8_TRG_COM    
            47- INTERRUPT_TIM8_CC         
            48- INTERRUPT_ADC3            
            49- INTERRUPT_FSMC            
            50- INTERRUPT_SDIO            
            51- INTERRUPT_TIM5            
            52- INTERRUPT_SPI3            
            53- INTERRUPT_UART4           
            54- INTERRUPT_UART5           
            55- INTERRUPT_TIM6            
            56- INTERRUPT_TIM7            
            57- INTERRUPT_DMA2_CHANNEL_1  
            58- INTERRUPT_DMA2_CHANNEL_2  
            59- INTERRUPT_DMA2_CHANNEL_3  
            60- INTERRUPT_DMA2_CHANNEL_4_5
*/
u8 NVIC_u8DisablePendingFlag(u8 copy_u8InterruptNumber);
/*Options of copy_u8InterruptNumber :
            1- INTERRUPT_WWDG            
            2- INTERRUPT_PVD             
            3- INTERRUPT_TAMPER          
            4- INTERRUPT_RTC             
            5- INTERRUPT_FLASH           
            6- INTERRUPT_RCC             
            7- INTERRUPT_EXTI0           
            8- INTERRUPT_EXTI1           
            9- INTERRUPT_EXTI2           
            10- INTERRUPT_EXTI3           
            11- INTERRUPT_EXTI4           
            12- INTERRUPT_DMA1_CHANNEL_1  
            13- INTERRUPT_DMA1_CHANNEL_2  
            14- INTERRUPT_DMA1_CHANNEL_3  
            15- INTERRUPT_DMA1_CHANNEL_4  
            16- INTERRUPT_DMA1_CHANNEL_5  
            17- INTERRUPT_DMA1_CHANNEL_6  
            18- INTERRUPT_DMA1_CHANNEL_7  
            19- INTERRUPT_ADC1_2          
            20- INTERRUPT_USB_HP_CAN_TX   
            21- INTERRUPT_USB_LP_CAN_RX0  
            22- INTERRUPT_CAN_RX1         
            23- INTERRUPT_CAN_SCE         
            24- INTERRUPT_EXTI9_5         
            25- INTERRUPT_TIM1_BRK        
            26- INTERRUPT_TIM1_UP         
            27- INTERRUPT_TIM1_TRG_COM    
            28- INTERRUPT_TIM1_CC         
            29- INTERRUPT_TIM2            
            30- INTERRUPT_TIM3            
            31- INTERRUPT_TIM4            
            32- INTERRUPT_I2C1_EV         
            33- INTERRUPT_I2C1_ER         
            34- INTERRUPT_I2C2_EV         
            35- INTERRUPT_I2C2_ER         
            36- INTERRUPT_SPI1            
            37- INTERRUPT_SPI2            
            38- INTERRUPT_USART1          
            39- INTERRUPT_USART2          
            40- INTERRUPT_USART3          
            41- INTERRUPT_EXTI15_10       
            42- INTERRUPT_RTC_ALARM       
            43- INTERRUPT_USB_WAKE_UP     
            44- INTERRUPT_TIM8_BRK        
            45- INTERRUPT_TIM8_UP         
            46- INTERRUPT_TIM8_TRG_COM    
            47- INTERRUPT_TIM8_CC         
            48- INTERRUPT_ADC3            
            49- INTERRUPT_FSMC            
            50- INTERRUPT_SDIO            
            51- INTERRUPT_TIM5            
            52- INTERRUPT_SPI3            
            53- INTERRUPT_UART4           
            54- INTERRUPT_UART5           
            55- INTERRUPT_TIM6            
            56- INTERRUPT_TIM7            
            57- INTERRUPT_DMA2_CHANNEL_1  
            58- INTERRUPT_DMA2_CHANNEL_2  
            59- INTERRUPT_DMA2_CHANNEL_3  
            60- INTERRUPT_DMA2_CHANNEL_4_5
Result of copy_pu8StatusResult : 
                                1- (0) if not active
                                2- (1) if active
*/
u8 NVIC_u8GetFlagStatus(u8 copy_u8InterruptNumber , u8* copy_pu8StatusResult);
#endif