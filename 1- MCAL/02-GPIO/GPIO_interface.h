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
#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_
/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/

/* ********                 Options Of PIN MODE                  ******** */
#define INPUT_ANALOG_PIN                0b0000
#define INPUT_FLOATING_PIN              0b0100
#define INPUT_PULL_UP_PIN               0b1000
#define INPUT_PULL_DOWN_PIN             0b1000

#define OUTPUT_MAX_2MHZ_GP_PUSH_PULL            0b0010
#define OUTPUT_MAX_10MHZ_GP_PUSH_PULL           0b0001
#define OUTPUT_MAX_50MHZ_GP_PUSH_PULL           0b0011
#define OUTPUT_MAX_2MHZ_GP_OPEN_DRAIN           0b0110
#define OUTPUT_MAX_10MHZ_GP_OPEN_DRAIN          0b0101
#define OUTPUT_MAX_50MHZ_GP_OPEN_DRAIN          0b0111
#define OUTPUT_MAX_2MHZ_AF_PUSH_PULL            0b1010
#define OUTPUT_MAX_10MHZ_AF_PUSH_PULL           0b1001
#define OUTPUT_MAX_50MHZ_AF_PUSH_PULL           0b1011
#define OUTPUT_MAX_2MHZ_AF_OPEN_DRAIN           0b1110
#define OUTPUT_MAX_10MHZ_AF_OPEN_DRAIN          0b1101
#define OUTPUT_MAX_50MHZ_AF_OPEN_DRAIN          0b1111

/* ********                 Options Of PIN Value                 ******** */
#define OUTPUT_LOW                              0
#define OUTPUT_HIGH                             1

/* ********                 Options Of user using PORTS          ******** */
#define PORTA       0
#define PORTB       1
#define PORTC       2
/* ********                  Options Of user using PINS          ******** */
#define PIN0        0
#define PIN1        1
#define PIN2        2
#define PIN3        3
#define PIN4        4
#define PIN5        5
#define PIN6        6
#define PIN7        7
#define PIN8        8
#define PIN9        9
#define PIN10       10
#define PIN11       11
#define PIN12       12
#define PIN13       13
#define PIN14       14
#define PIN15       15

/**************************************************************************/
/* *********************                          *********************** */
/* *********************    Function Proto_Type   *********************** */
/* *********************                          *********************** */
/**************************************************************************/
/*01- Function used to set Direction of each pin
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
    1.2- Options of copy_u8Pin : 
                                1- PIN0 
                                2- PIN1 
                                3- PIN2 
                                4- PIN3 
                                5- PIN4 
                                6- PIN5 
                                7- PIN6 
                                8- PIN7 
                                9- PIN8 
                                10- PIN9 
                                11- PIN10
                                12- PIN11
                                13- PIN12
                                14- PIN13
                                15- PIN14
                                16- PIN15
    1.3- Options of copy_u8Mode :
                                    1- INPUT_ANALOG_PIN               
                                    2- INPUT_FLOATING_PIN             
                                    3- INPUT_PULL_UP_PIN              
                                    4- INPUT_PULL_DOWN_PIN            
                                    5- OUTPUT_MAX_2MHZ_GP_PUSH_PULL
                                    6- OUTPUT_MAX_10MHZ_GP_PUSH_PULL
                                    7- OUTPUT_MAX_50MHZ_GP_PUSH_PULL
                                    8- OUTPUT_MAX_2MHZ_GP_OPEN_DRAIN
                                    9- OUTPUT_MAX_10MHZ_GP_OPEN_DRAIN
                                    10- OUTPUT_MAX_50MHZ_GP_OPEN_DRAIN
                                    11- OUTPUT_MAX_2MHZ_AF_PUSH_PULL
                                    12- OUTPUT_MAX_10MHZ_AF_PUSH_PULL
                                    13- OUTPUT_MAX_50MHZ_AF_PUSH_PULL
                                    14- OUTPUT_MAX_2MHZ_AF_OPEN_DRAIN
                                    15- OUTPUT_MAX_10MHZ_AF_OPEN_DRAIN
                                    16- OUTPUT_MAX_50MHZ_AF_OPEN_DRAIN
                      
*/
u8 GPIO_u8SetPinDirection(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode);
/**************************************************************************/
/*01- Function used to set Value of each pin
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
    1.2- Options of copy_u8Pin : 
                                1- PIN0 
                                2- PIN1 
                                3- PIN2 
                                4- PIN3 
                                5- PIN4 
                                6- PIN5 
                                7- PIN6 
                                8- PIN7 
                                9- PIN8 
                                10- PIN9 
                                11- PIN10
                                12- PIN11
                                13- PIN12
                                14- PIN13
                                15- PIN14
                                16- PIN15
    1.3- Options of copy_u8Value:
                                1- OUTPUT_LOW
                                2- OUTPUT_HIGH                     
*/
u8 GPIO_u8SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value); 
/**************************************************************************/
/*01- Function used to get Value of a pin
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
    1.2- Options of copy_u8Pin : 
                                1- PIN0 
                                2- PIN1 
                                3- PIN2 
                                4- PIN3 
                                5- PIN4 
                                6- PIN5 
                                7- PIN6 
                                8- PIN7 
                                9- PIN8 
                                10- PIN9 
                                11- PIN10
                                12- PIN11
                                13- PIN12
                                14- PIN13
                                15- PIN14
                                16- PIN15
*/
u8 GPIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8* copy_pu8result);
/**************************************************************************/
#endif
