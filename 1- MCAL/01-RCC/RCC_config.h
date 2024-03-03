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
/******************************File Guard**********************************/
/******************************          **********************************/
/**************************************************************************/

#ifndef _RCC_CONFIG_H_
#define _RCC_CONFIG_H_

/**************************************************************************/
/******************************                  **************************/
/******************************  Configurations  **************************/
/******************************                  **************************/
/**************************************************************************/
/* 
    01- Options for PLL Enable : 
                               1- PLL_ON
                               2- PLL_OFF
*/
#define RCC_PLL_STATUS          PLL_OFF
/*
    02- Options for Clock Security Sys Enable :
                                               1- CSS_ON
                                               2- CSS_OFF
*/
#define RCC_CLOCK_DETECTOR               CSS_ON  
/*
    04- Options for HSI clock Trimming : 
                                        1-  TRIM_MINUS_16_TIMES_40MHZ
                                        2-  TRIM_MINUS_15_TIMES_40MHZ
                                        3-  TRIM_MINUS_14_TIMES_40MHZ
                                        4-  TRIM_MINUS_13_TIMES_40MHZ
                                        5-  TRIM_MINUS_12_TIMES_40MHZ
                                        6-  TRIM_MINUS_11_TIMES_40MHZ
                                        7-  TRIM_MINUS_10_TIMES_40MHZ
                                        8-  TRIM_MINUS_9_TIMES_40MHZ 
                                        9-  TRIM_MINUS_8_TIMES_40MHZ 
                                        10- TRIM_MINUS_7_TIMES_40MHZ 
                                        11- TRIM_MINUS_6_TIMES_40MHZ 
                                        12- TRIM_MINUS_5_TIMES_40MHZ 
                                        13- TRIM_MINUS_4_TIMES_40MHZ 
                                        14- TRIM_MINUS_3_TIMES_40MHZ 
                                        15- TRIM_MINUS_2_TIMES_40MHZ 
                                        16- TRIM_MINUS_1_TIMES_40MHz 
                                        17- NO_TRIMMING
                                        18- TRIM_PLUS_1_TIMES_40MHZ  
                                        19- TRIM_PLUS_2_TIMES_40MHZ  
                                        20- TRIM_PLUS_3_TIMES_40MHZ  
                                        21- TRIM_PLUS_4_TIMES_40MHZ  
                                        22- TRIM_PLUS_5_TIMES_40MHZ  
                                        23- TRIM_PLUS_6_TIMES_40MHZ  
                                        24- TRIM_PLUS_7_TIMES_40MHZ  
                                        25- TRIM_PLUS_8_TIMES_40MHZ  
                                        26- TRIM_PLUS_9_TIMES_40MHZ  
                                        27- TRIM_PLUS_10_TIMES_40MHZ 
                                        28- TRIM_PLUS_11_TIMES_40MHZ 
                                        29- TRIM_PLUS_12_TIMES_40MHZ 
                                        30- TRIM_PLUS_13_TIMES_40MHZ 
                                        31- TRIM_PLUS_14_TIMES_40MHZ 
                                        32- TRIM_PLUS_15_TIMES_40MHZ 
*/ 
#define RCC_HSI_TRIMMING               NO_TRIMMING 
/*    
    06- Options for MCO pin (Outout Clock) : 
                                            1- NO_CLOCK
                                            2- SYS_CLOCK
                                            3- HSI_CLOCK
                                            4- HSE_CLOCK
                                            5- PLL_CLOCK_DIV2
*/
#define RCC_MCO_PIN_CLOCK_SELLECTION             NO_CLOCK                
/*  
    07- Options for PLL multipliction Factor : 
                                            1- PLL_INPUT_CLOCK_X2
                                            2- PLL_INPUT_CLOCK_X3
                                            3- PLL_INPUT_CLOCK_X4
                                            4- PLL_INPUT_CLOCK_X5
                                            5- PLL_INPUT_CLOCK_X6
                                            6- PLL_INPUT_CLOCK_X7
                                            7- PLL_INPUT_CLOCK_X8
                                            8- PLL_INPUT_CLOCK_X9
                                            9- PLL_INPUT_CLOCK_X10
                                            10- PLL_INPUT_CLOCK_X11
                                            11- PLL_INPUT_CLOCK_X12
                                            12- PLL_INPUT_CLOCK_X13
                                            13- PLL_INPUT_CLOCK_X14
                                            14- PLL_INPUT_CLOCK_X15
                                            15- PLL_INPUT_CLOCK_X16
*/
#define RCC_PLL_MUL_FACTOR          PLL_INPUT_CLOCK_X2
/*    
    09- Options for PLL entry Clock Source : 
                                    1- HSI_CLOCK_DIV2
                                    2- HSE_CLOCK
*/
#define RCC_PLL_CLOCK_SOURCE            HSE_CLOCK
/*  
    08- Options for HSE Divesion if used for PLL source : 
                                    1- HSE_CLOCK_DIV2
                                    2- HSE_NO_DIV
*/  
#define RCC_HSE_STATUS              HSE_NO_DIV
/*   
    10- Options for System Clock Switch : 
                                            1- RCC_HSI
                                            2- RCC_HSE_RC
                                            3- RCC_HSE_CRYSTAL
                                            3- RCC_PLL
*/
#define RCC_CLOCK_TYPE          RCC_HSI

#endif