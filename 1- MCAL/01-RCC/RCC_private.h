/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : RCC_Stm32f103c8*********************/
/**********************      Version : 1.00           *********************/
/**********************      Date    : 27/02/2024     *********************/
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/
/* *********************                          *********************** */
/* *********************        File Guard        *********************** */
/* *********************                          *********************** */
/**************************************************************************/
#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************         Registers        *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                Clock Control Register                ******** */
#define RCC_CR          *( (volatile u32*) 0x40021000 )
#define RCC_CR_HSION        0
#define RCC_CR_HSIRDY       1
#define RCC_CR_HSITRIM_0    3
#define RCC_CR_HSITRIM_1    4
#define RCC_CR_HSITRIM_2    5
#define RCC_CR_HSITRIM_3    6
#define RCC_CR_HSITRIM_4    7
#define RCC_CR_HSICAL_0     8
#define RCC_CR_HSICAL_1     9
#define RCC_CR_HSICAL_2     10
#define RCC_CR_HSICAL_3     11
#define RCC_CR_HSICAL_4     12
#define RCC_CR_HSICAL_5     13
#define RCC_CR_HSICAL_6     14
#define RCC_CR_HSICAL_7     15
#define RCC_CR_HSEON        16
#define RCC_CR_HSERDY       17
#define RCC_CR_HSEBYP       18
#define RCC_CR_CSSON        19
#define RCC_CR_PLLON        24
#define RCC_CR_PLLRDY       25
/* ********             Clock Configuration Register             ******** */        
#define RCC_CFGR        *( (volatile u32*) 0x40021004 )
#define RCC_CFGR_SW_0           0           /*System Clock Switch Bit 0*/
#define RCC_CFGR_SW_1           1           /*System Clock Switch Bit 1*/
#define RCC_CFGR_SWS_0          2           /*System Clock Switch Status Bit 0*/
#define RCC_CFGR_SWS_1          3           /*System Clock Switch Status Bit 1*/
#define RCC_CFGR_HPRE_0         4           /*AHB Prescaller Bit 0 */
#define RCC_CFGR_HPRE_1         5           /*AHB Prescaller Bit 1 */
#define RCC_CFGR_HPRE_2         6           /*AHB Prescaller Bit 2 */
#define RCC_CFGR_HPRE_3         7           /*AHB Prescaller Bit 3 */
#define RCC_CFGR_PPRE1_0        8           /*APB1 Low speed Prescaller Bit 0*/
#define RCC_CFGR_PPRE1_1        9           /*APB1 Low speed Prescaller Bit 1*/
#define RCC_CFGR_PPRE1_2        10          /*APB1 Low speed Prescaller Bit 2*/
#define RCC_CFGR_PPRE2_0        11          /*APB2 High speed prescaller Bit 0*/
#define RCC_CFGR_PPRE2_1        12          /*APB2 High speed prescaller Bit 1*/
#define RCC_CFGR_PPRE2_2        13          /*APB2 High speed prescaller Bit 2*/
#define RCC_CFGR_ADCPRE_0       14          /*ADC Prescaller Bit 0*/
#define RCC_CFGR_ADCPRE_1       15          /*ADC Prescaller Bit 1*/
#define RCC_CFGR_PLLSRC         16          /*PLL entry Clock source*/
#define RCC_CFGR_PLLXTPRE       17          /*HSE Divider for PLL Entry*/
#define RCC_CFGR_PLLMUL_0       18          /*PLL Multipliction Factor Bit 0*/
#define RCC_CFGR_PLLMUL_1       19          /*PLL Multipliction Factor Bit 1*/
#define RCC_CFGR_PLLMUL_2       20          /*PLL Multipliction Factor Bit 2*/
#define RCC_CFGR_PLLMUL_3       21          /*PLL Multipliction Factor Bit 3*/
#define RCC_CFGR_USBPRE         22          /*USB prescaller*/
#define RCC_CFGR_MCO_0          24          /*Microcontroller Clock Output Bit 0*/
#define RCC_CFGR_MCO_1          25          /*Microcontroller Clock Output Bit 1*/
#define RCC_CFGR_MCO_2          26          /*Microcontroller Clock Output Bit 2*/
/* ********               Clock Interrupt Register               ******** */   
#define RCC_CIR         *( (volatile u32*) 0x40021008 )
#define RCC_CIR_LSIRDYF      0           /*LSI ready interrupt flag*/
#define RCC_CIR_LSERDYF      1           /*LSE ready interrupt flag*/
#define RCC_CIR_HSIRDYF      2           /*HSI ready interrupt flag*/
#define RCC_CIR_HSERDYF      3           /*HSE ready interrupt flag*/
#define RCC_CIR_PLLRDYF      4           /*PLL ready interrupt flag*/
#define RCC_CIR_CSSF         7           /*Clock Security System interrupt flag*/
#define RCC_CIR_LSIRDYIE     8           /*LSI ready interrupt enable*/
#define RCC_CIR_LSERDYIE     9           /*LSE ready interrupt enable*/
#define RCC_CIR_HSIRDYIE     10          /*HSI ready interrupt enable*/
#define RCC_CIR_HSERDYIE     11          /*HSE ready interrupt enable*/
#define RCC_CIR_PLLRDYIE     12          /*PLL ready interrupt enable*/
#define RCC_CIR_LSIRDYC      16          /*LSI ready interrupt Clear*/
#define RCC_CIR_LSERDYC      17          /*LSE ready interrupt Clear*/
#define RCC_CIR_HSIRDYC      18          /*HSI ready interrupt Clear*/
#define RCC_CIR_HSERDYC      19          /*HSE ready interrupt Clear*/
#define RCC_CIR_PLLRDYC      20          /*PLL ready interrupt Clear*/
#define RCC_CIR_CSSC         23          /*Clock Security System Interrupt Clear*/
/* ********            APB2 peripheral Reset Register            ******** */         
#define RCC_APB2RSTR    *( (volatile u32*) 0x4002100C )
#define RCC_APB2RSTR_AFIORST            0           /*Altimate function IO reset*/
#define RCC_APB2RSTR_IOPARST            2           /*IO port A reset*/
#define RCC_APB2RSTR_IOPBRST            3           /*IO port B reset*/
#define RCC_APB2RSTR_IOPCRST            4           /*IO port C reset*/
#define RCC_APB2RSTR_IOPDRST            5           /*IO port D reset*/
#define RCC_APB2RSTR_IOPERST            6           /*IO port E reset*/
#define RCC_APB2RSTR_IOPFRST            7           /*IO port F reset*/
#define RCC_APB2RSTR_IOPGRST            8           /*IO port G reset*/
#define RCC_APB2RSTR_ADC1RST            9           /*ADC1 reset*/
#define RCC_APB2RSTR_ADC2RST            10          /*ADC2 reset*/
#define RCC_APB2RSTR_TIM1RST            11          /*Timer 1 reset*/
#define RCC_APB2RSTR_SPI1RST            12          /*SPI 1 reset*/
#define RCC_APB2RSTR_TIM8RST            13          /*Timer 8 reset*/
#define RCC_APB2RSTR_USART1RST          14          /*USART 1 reset*/
#define RCC_APB2RSTR_ADC3RST            15          /*ADC3 reset*/          
#define RCC_APB2RSTR_TIM9RST            19          /*Timer 9 reset*/
#define RCC_APB2RSTR_TIM10RST           20          /*Timer 10 reset*/
#define RCC_APB2RSTR_TIM11RST           21          /*Timer 11 reset*/
/* ********            APB1 peripheral Reset Register            ******** */         
#define RCC_APB1RSTR    *( (volatile u32*) 0x40021010 )   
#define RCC_APB2RSTR_TIM2RST            0           /*Timer 2 reset*/
#define RCC_APB2RSTR_TIN3RST            1           /*Timer 3 reset*/
#define RCC_APB2RSTR_TIM4RST            2           /*Timer 4 reset*/
#define RCC_APB2RSTR_TIM5RST            3           /*Timer 5 reset*/
#define RCC_APB2RSTR_TIM6RST            4           /*Timer 6 reset*/
#define RCC_APB2RSTR_TIM7RST            5           /*Timer 7 reset*/
#define RCC_APB2RSTR_TIM12RST           6           /*Timer 12 reset*/
#define RCC_APB2RSTR_TIM13RST           7           /*Timer 13 reset*/
#define RCC_APB2RSTR_TIM14RST           8           /*Timer 14 reset*/
#define RCC_APB2RSTR_WWDGRST            11          /*Window watchdog reset*/
#define RCC_APB2RSTR_SPI2RST            14          /*SPI2 reset*/
#define RCC_APB2RSTR_SPI3RST            15          /*SPI 3 reset*/
#define RCC_APB2RSTR_USART2RST          17          /*USART 2 reset*/
#define RCC_APB2RSTR_USART3RST          18          /*USART 3 reset*/
#define RCC_APB2RSTR_UART4RST           19          /*UART 4 reset*/
#define RCC_APB2RSTR_UART5RST           20          /*UART 5 reset*/
#define RCC_APB2RSTR_I2C1RST            21          /*I2C 1 reset */
#define RCC_APB2RSTR_I2C2RST            22          /*I2C 2 reset*/
#define RCC_APB2RSTR_USBRST             23          /*USB reset*/
#define RCC_APB2RSTR_CANRST             25          /*CAN reset*/
#define RCC_APB2RSTR_BKPRST             27          /*backup interface reset*/
#define RCC_APB2RSTR_PWRRST             28          /*Power interface reset*/
#define RCC_APB2RSTR_DACRST             29          /*DAC interface reset*/
/* ********         AHP peripheral Clock enable Register        ******** */
#define RCC_AHBENR      *( (volatile u32*) 0x40021014 )         
#define RCC_AHBENR_SDIOEN       10      /*Peripheral SDIO Enable*/
#define RCC_AHBENR_FSMCEN       8       /*Peripheral FSMC Enable*/
#define RCC_AHBENR_CRCEN        6       /*Peripheral CRC Enable*/
#define RCC_AHBENR_FLITFEN      4       /*Peripheral FLITF Enable*/
#define RCC_AHBENR_SRAMEN       2       /*Peripheral SRAM Enable*/
#define RCC_AHBENR_DMA2EN       1       /*Peripheral DMA2 Enable*/
#define RCC_AHBENR_DMA1EN       0       /*Peripheral DMA1 Enable*/
/* ********        APB2 peripheral Clock enable Register        ******** */
#define RCC_APB2ENR     *( (volatile u32*) 0x40021018 )
#define RCC_APB2ENR_AFIOEN              0               /*Alternative function IO Clock Enable*/
#define RCC_APB2ENR_IOPAEN              2               /*IO Port A Clock Enable*/
#define RCC_APB2ENR_IOPBEN              3               /*IO Port B Clock Enable*/
#define RCC_APB2ENR_IOPCEN              4               /*IO Port C Clock Enable*/
#define RCC_APB2ENR_IOPDEN              5               /*IO Port D Clock Enable*/
#define RCC_APB2ENR_IOPEEN              6               /*IO Port E Clock Enable*/        
#define RCC_APB2ENR_IOPFEN              7               /*IO Port F Clock Enable*/
#define RCC_APB2ENR_IOPGEN              8               /*IO Port G Clock Enable*/
#define RCC_APB2ENR_ADC1EN              9               /*ADC 1 interface Clock Enable*/
#define RCC_APB2ENR_ADC2EN              10              /*ADC 2 interface Clock Enable*/
#define RCC_APB2ENR_TIM1EN              11              /*Timer 1 Clock Enable*/
#define RCC_APB2ENR_SPI1EN              12              /*SPI1 Clock Enable*/
#define RCC_APB2ENR_TIM8EN              13              /*Timer 8 Clock Enable*/
#define RCC_APB2ENR_USART1EN            14              /*USART 1 Clock Enable*/
#define RCC_APB2ENR_ADC3EN              15              /*ADC 3 interface Clock Enable*/    
#define RCC_APB2ENR_TIM9EN              19              /*Timer 9 Clock Enable*/
#define RCC_APB2ENR_TIM10EN             20              /*Timer 10 Clock Enable*/
#define RCC_APB2ENR_TIM11EN             21              /*Timer 11 Clock Enable*/
/* ********        APB1 peripheral Clock enable Register        ******** */         
#define RCC_APB1ENR     *( (volatile u32*) 0x4002101C )
#define RCC_APB1ENR_TIM2EN              0               /*Timer 2 Clock Enable*/
#define RCC_APB1ENR_TIM3EN              1               /*Timer 3 Clock Enable*/
#define RCC_APB1ENR_TIM4EN              2               /*Timer 4 Clock Enable*/
#define RCC_APB1ENR_TIM5EN              3               /*Timer 5 Clock Enable*/
#define RCC_APB1ENR_TIM6EN              4               /*Timer 6 Clock Enable*/
#define RCC_APB1ENR_TIM7EN              5               /*Timer 7 Clock Enable*/
#define RCC_APB1ENR_TIM12EN             6               /*Timer 12 Clock Enable*/
#define RCC_APB1ENR_TIM13EN             7               /*Timer 13 Clock Enable*/
#define RCC_APB1ENR_TIM14EN             8               /*Timer 14 Clock Enable*/
#define RCC_APB1ENR_WWDGEN              11              /*Window watchdog Clock Enable*/
#define RCC_APB1ENR_SPI2EN              14              /*SPI 2 Clock Enable*/
#define RCC_APB1ENR_SPI3EN              15              /*SPI 1 Clock Enable*/
#define RCC_APB1ENR_USART2EN            17              /*USART 2 Clock Enable*/
#define RCC_APB1ENR_USART3EN            18              /*USART 1 Clock Enable*/
#define RCC_APB1ENR_UART4EN             19              /*UART 4 Clock Enable*/
#define RCC_APB1ENR_UART5EN             20              /*UART 5 Clock Enable*/
#define RCC_APB1ENR_I2C1EN              21              /*I2C 1 Clock Enable*/
#define RCC_APB1ENR_I2C2EN              22              /*I2C 2 Clock Enable*/
#define RCC_APB1ENR_USBEN               23              /*USB Clock Enable*/
#define RCC_APB1ENR_CANEN               25              /*CAN Clock Enable*/
#define RCC_APB1ENR_BKPEN               27              /*Backup interface Clock Enable*/
#define RCC_APB1ENR_PWREN               28              /*Power interface Clock Enable*/
#define RCC_APB1ENR_DACEN               29              /*DAC interface Clock Enable*/
/* ********            Backup domain Control Register           ******** */         
#define RCC_BDCR        *( (volatile u32*) 0x40021020 )
#define RCC_BDCR_LSEON                  0               /*External low speed oscillator Enable*/
#define RCC_BDCR_LSERDY                 1               /*External low speed oscillator ready*/
#define RCC_BDCR_LSEBYP                 2               /*External Low Speed Oscillator bypass*/
#define RCC_BDCR_RTCSEL_0               8               /*RTC Clock Source selection Bit 0*/
#define RCC_BDCR_RTCSEL_1               9               /*RTC Clock Source selection Bit 1*/
#define RCC_BDCR_RTCEN                  15              /*RTC clock Enable*/
#define RCC_BDCR_BDRST                  16              /*Backup domain Software reset*/
/* ********                Control Status Register              ******** */          
#define RCC_CSR         *( (volatile u32*) 0x40021024 )         
#define RCC_CSR_LSION                   0               /*Internal low speed oscillator enable*/
#define RCC_CSR_LSIRDY                  1               /*Internal low speed ocsillator ready*/
#define RCC_CSR_RMVF                    24              /*remove reset flag*/
#define RCC_CSR_PINRSTF                 26              /*PIN reset flag*/
#define RCC_CSR_PORRSTF                 27              /*POR/PDR reset flag*/
#define RCC_CSR_SFTRSTF                 28              /*Software reset flag*/
#define RCC_CSR_IWDGRSTF                29              /*Independent Watchdog reset flag*/
#define RCC_CSR_WWDGRSTF                30              /*Window Watchdog reset flag*/
#define RCC_CSR_LPWRRSTF                31              /*Low power reset flag*/




/**************************************************************************/
/* *********************                          *********************** */
/* *********************       Configurations     *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                Clock Control Register                ******** */

/*01- Options for PLL Enable*/
#define PLL_ON          1
#define PLL_OFF         0
/*02- Options for Clock Security Sys Enable*/
#define CSS_ON          1
#define CSS_OFF         0
/*03- Options for HSE Clock Enable*/
#define HSE_ON                  1
#define HSE_OFF                 0
/*04- Options for HSI clock Trimming*/ 
#define TRIM_MINUS_16_TIMES_40MHZ           00000
#define TRIM_MINUS_15_TIMES_40MHZ           00001
#define TRIM_MINUS_14_TIMES_40MHZ           00010
#define TRIM_MINUS_13_TIMES_40MHZ           00011
#define TRIM_MINUS_12_TIMES_40MHZ           00100
#define TRIM_MINUS_11_TIMES_40MHZ           00101
#define TRIM_MINUS_10_TIMES_40MHZ           00110
#define TRIM_MINUS_9_TIMES_40MHZ            00111
#define TRIM_MINUS_8_TIMES_40MHZ            01000
#define TRIM_MINUS_7_TIMES_40MHZ            01001
#define TRIM_MINUS_6_TIMES_40MHZ            01010
#define TRIM_MINUS_5_TIMES_40MHZ            01011
#define TRIM_MINUS_4_TIMES_40MHZ            01100
#define TRIM_MINUS_3_TIMES_40MHZ            01101
#define TRIM_MINUS_2_TIMES_40MHZ            01110
#define TRIM_MINUS_1_TIMES_40MHz            01111
#define NO_TRIMMING                         10000
#define TRIM_PLUS_1_TIMES_40MHZ             10001
#define TRIM_PLUS_2_TIMES_40MHZ             10010
#define TRIM_PLUS_3_TIMES_40MHZ             10011
#define TRIM_PLUS_4_TIMES_40MHZ             10100
#define TRIM_PLUS_5_TIMES_40MHZ             10101
#define TRIM_PLUS_6_TIMES_40MHZ             10110
#define TRIM_PLUS_7_TIMES_40MHZ             10111
#define TRIM_PLUS_8_TIMES_40MHZ             11000
#define TRIM_PLUS_9_TIMES_40MHZ             11001
#define TRIM_PLUS_10_TIMES_40MHZ            11010
#define TRIM_PLUS_11_TIMES_40MHZ            11011
#define TRIM_PLUS_12_TIMES_40MHZ            11100
#define TRIM_PLUS_13_TIMES_40MHZ            11101
#define TRIM_PLUS_14_TIMES_40MHZ            11110
#define TRIM_PLUS_15_TIMES_40MHZ            11111
/*05- Options for HSI Clock Enable*/
#define HSI_ON          1
#define HSI_OFF         0
/*06- Options for MCO pin (Outout Clock)*/  
#define NO_CLOCK                000      
#define SYS_CLOCK               100
#define HSI_CLOCK               101
#define HSE_CLOCK               110
#define PLL_CLOCK_DIV2          111
/*07- Options for PLL multipliction Factor*/ 
#define PLL_INPUT_CLOCK_X2      0000
#define PLL_INPUT_CLOCK_X3      0001
#define PLL_INPUT_CLOCK_X4      0010
#define PLL_INPUT_CLOCK_X5      0011
#define PLL_INPUT_CLOCK_X6      0100
#define PLL_INPUT_CLOCK_X7      0101
#define PLL_INPUT_CLOCK_X8      0110
#define PLL_INPUT_CLOCK_X9      0111
#define PLL_INPUT_CLOCK_X10     1000
#define PLL_INPUT_CLOCK_X11     1001
#define PLL_INPUT_CLOCK_X12     1010
#define PLL_INPUT_CLOCK_X13     1011
#define PLL_INPUT_CLOCK_X14     1100
#define PLL_INPUT_CLOCK_X15     1100
#define PLL_INPUT_CLOCK_X16     1111
/*08- Options for HSE Divesion*/
#define HSE_CLOCK_DIV2      1
#define HSE_NO_DIV          0   
/*09- Options for PLL entry Clock Source : */
#define HSI_CLOCK_DIV2      0
#define HSE_CLOCK           1
/*10- Options for System Clock Switch*/
#define RCC_HSI                 000
#define RCC_HSE_RC              001
#define RCC_HSE_CRYSTAL         010
#define RCC_PLL                 100
/**************************************************************************/

#endif


