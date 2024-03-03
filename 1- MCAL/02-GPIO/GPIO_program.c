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
/******************************          **********************************/
/****************************** Includes **********************************/
/******************************          **********************************/
/**************************************************************************/
#include "../../4- LIB/STD_TYPES.h"
#include "../../4- LIB/STD_ERRORS.h"
#include "../../4- LIB/BIT_MATH.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"

/**************************************************************************/
/**************************                       *************************/
/**************************    Global Variables   *************************/
/**************************                       *************************/
/**************************************************************************/

/**************************************************************************/
/* *********************                          *********************** */
/* *********************        definitions       *********************** */
/* *********************                          *********************** */
/**************************************************************************/
// typedef struct {
//     u32 CNF_BIT_0 : 1;  // 1-bit field for CNF_BIT_0
//     u32 CNF_BIT_1 : 1;  // 1-bit field for CNF_BIT_1
//     u32 MODE_BIT_0 : 1; // 1-bit field for MODE_BIT_0
//     u32 MODE_BIT_1 : 1; // 1-bit field for MODE_BIT_1
// }pin_CR;

#define NUM_OF_PINS_IN_CRL      8
#define NUM_OF_PINS_IN_CRH      16
#define EACH_PIN_BITS           4
#define PIN_MODE_MASK           0b1111
#define MAX_PIN_NO              16

/**************************************************************************/
/**************************                       *************************/
/************************** Function declarations *************************/
/**************************                       *************************/
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
                                    5- MAX_2MHZ_GP_OUTPUT_PUSH_PULL   
                                    6- MAX_10MHZ_GP_OUTPUT_PUSH_PULL  
                                    7- MAX_50MHZ_GP_OUTPUT_PUSH_PULL  
                                    8- MAX_2MHZ_GP_OUTPUT_OPEN_DRAIN  
                                    9- MAX_10MHZ_GP_OUTPUT_OPEN_DRAIN 
                                    10- MAX_50MHZ_GP_OUTPUT_OPEN_DRAIN 
                                    11- MAX_2MHZ_AF_OUTPUT_PUSH_PULL   
                                    12- MAX_10MHZ_AF_OUTPUT_PUSH_PULL  
                                    13- MAX_50MHZ_AF_OUTPUT_PUSH_PULL  
                                    14- MAX_2MHZ_AF_OUTPUT_OPEN_DRAIN  
                                    15- MAX_10MHZ_AF_OUTPUT_OPEN_DRAIN 
                                    16- MAX_50MHZ_AF_OUTPUT_OPEN_DRAIN 
                      
*/
u8 GPIO_u8SetPinDirection(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode)
{
    u8 local_u8ErrorStatus = RT_OK ;
    switch(copy_u8Port)
    {
        case PORTA : 
            if (copy_u8Pin < NUM_OF_PINS_IN_CRL )
            {
                /*Mask used to reset then over write to ensure that the 4 bits i will OR with my mode are 0000*/
                GPIO_PORTA_CRL &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin))); // Reset 4 bits
                GPIO_PORTA_CRL |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));   //OverWrite new mode
            }
            else if (copy_u8Pin >= NUM_OF_PINS_IN_CRL && copy_u8Pin < NUM_OF_PINS_IN_CRH )
            {
                copy_u8Pin -= NUM_OF_PINS_IN_CRL ;
                GPIO_PORTA_CRH &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin)));
                GPIO_PORTA_CRH |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));
            }
            else 
            {
                local_u8ErrorStatus = RT_NOK ;
            }
            break;
        case PORTB : 
        if (copy_u8Pin < NUM_OF_PINS_IN_CRL )
            {
                GPIO_PORTB_CRL &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin)));
                GPIO_PORTB_CRL |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));
            }
            else if (copy_u8Pin >= NUM_OF_PINS_IN_CRL && copy_u8Pin < NUM_OF_PINS_IN_CRH )
            {
                copy_u8Pin -= NUM_OF_PINS_IN_CRL ;
                GPIO_PORTB_CRH &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin)));
                GPIO_PORTB_CRH |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));
            }
            else 
            {
                local_u8ErrorStatus = RT_NOK ;
            }
            break;
        case PORTC :
        if (copy_u8Pin < NUM_OF_PINS_IN_CRL )
            {
                GPIO_PORTC_CRL &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin)));
                GPIO_PORTC_CRL |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));
            }
            else if (copy_u8Pin >= NUM_OF_PINS_IN_CRL && copy_u8Pin < NUM_OF_PINS_IN_CRH )
            {
                copy_u8Pin -= NUM_OF_PINS_IN_CRL ;
                GPIO_PORTC_CRH &= (~((PIN_MODE_MASK) << (EACH_PIN_BITS * copy_u8Pin)));
                GPIO_PORTC_CRH |=   ((copy_u8Mode) << (EACH_PIN_BITS * copy_u8Pin));
            }
            else 
            {
                local_u8ErrorStatus = RT_NOK ;
            }
            break;
        default : local_u8ErrorStatus = RT_NOK ; break;
    }
    return local_u8ErrorStatus;
}
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
u8 GPIO_u8SetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Value)
{

    u8 local_u8ErrorStatus = RT_OK ;
    if(copy_u8Pin < MAX_PIN_NO)
    {
        switch(copy_u8Port)
        {
            case PORTA : 
                    switch(copy_u8Value)
                    {
                        case OUTPUT_HIGH : SET_BIT(GPIO_PORTA_ODR , copy_u8Pin ); break;
                        case OUTPUT_LOW : CLR_BIT(GPIO_PORTA_ODR , copy_u8Pin ); break;
                        default : local_u8ErrorStatus = RT_NOK ; break ;
                    } break;
            case PORTB : 
                    switch(copy_u8Value)
                    {
                        case OUTPUT_HIGH : SET_BIT(GPIO_PORTB_ODR , copy_u8Pin ); break;
                        case OUTPUT_LOW : CLR_BIT(GPIO_PORTB_ODR , copy_u8Pin ); break;
                        default : local_u8ErrorStatus = RT_NOK ; break;
                    } break;
            case PORTC :
                    switch(copy_u8Value)
                    {
                        case OUTPUT_HIGH : SET_BIT(GPIO_PORTC_ODR , copy_u8Pin ); break;
                        case OUTPUT_LOW : CLR_BIT(GPIO_PORTC_ODR , copy_u8Pin ); break;
                        default : local_u8ErrorStatus = RT_NOK ; break;
                    }break;
            default : local_u8ErrorStatus = RT_NOK ; break ;
        }
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus;
}
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
u8 GPIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin , u8* copy_pu8Result)
{
    u8 local_u8ErrorStatus = RT_OK ;
    if(copy_u8Pin < MAX_PIN_NO)
    { 
        switch(copy_u8Port)
        {
            case PORTA : *copy_pu8Result = GET_BIT(GPIO_PORTA_IDR , copy_u8Pin ); break;
            case PORTB : *copy_pu8Result = GET_BIT(GPIO_PORTB_IDR , copy_u8Pin ); break;
            case PORTC : *copy_pu8Result = GET_BIT(GPIO_PORTC_IDR , copy_u8Pin ); break;
            default : local_u8ErrorStatus = RT_NOK ; break;
        }
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
/**************************************************************************/
/*01- Function used to set Direction of Full PORT
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
    1.2- Options of copy_u8Mode :
                                    1- INPUT_ANALOG_PORT
                                    2- INPUT_FLOATING_PORT
                                    3- INPUT_PULL_UP_PORT
                                    4- INPUT_PULL_DOWN_PORT
                                    5- OUTPUT_PORT_MAX_2MHZ_GP_PUSH_PULL
                                    6- OUTPUT_PORT_MAX_10MHZ_GP_PUSH_PULL
                                    7- OUTPUT_PORT_MAX_50MHZ_GP_PUSH_PULL
                                    8- OUTPUT_PORT_MAX_2MHZ_GP_OPEN_DRAIN
                                    9- OUTPUT_PORT_MAX_10MHZ_GP_OPEN_DRAIN
                                    10- OUTPUT_PORT_MAX_50MHZ_GP_OPEN_DRAIN
                                    11- OUTPUT_PORT_MAX_2MHZ_AF_PUSH_PULL
                                    12- OUTPUT_PORT_MAX_10MHZ_AF_PUSH_PULL
                                    13- OUTPUT_PORT_MAX_50MHZ_AF_PUSH_PULL
                                    14- OUTPUT_PORT_MAX_2MHZ_AF_OPEN_DRAIN
                                    15- OUTPUT_PORT_MAX_10MHZ_AF_OPEN_DRAIN
                                    16- OUTPUT_PORT_MAX_50MHZ_AF_OPEN_DRAIN
                      
*/
u8 GPIO_u8SetPortDirection(u8 copy_u8Port , u8 copy_u8Mode)
{
    u8 local_u8ErrorStatus = RT_OK ;
    switch (copy_u8Port)
    {
        case PORTA :  GPIO_PORTA_CRL =  copy_u8Mode ; GPIO_PORTA_CRH =  copy_u8Mode ; break;
        case PORTB :  GPIO_PORTB_CRL =  copy_u8Mode ; GPIO_PORTB_CRH =  copy_u8Mode ; break;
        case PORTC :  GPIO_PORTC_CRL =  copy_u8Mode ; GPIO_PORTC_CRH =  copy_u8Mode ; break;
        default : local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
/**************************************************************************/
/*01- Function used to set Value of each pin
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
    1.2- Options of copy_u8Value if full high or full low:
                                                            1- OUTPUTT_PORT_HIGH
                                                            2- OUTPUT_PORT_LOW  
*/
u8 GPIO_u8SetPortValue(u8 copy_u8Port , u8 copy_u8Value)
{
    u8 local_u8ErrorStatus = RT_OK ;
    switch(copy_u8Port)
    {
        case PORTA :  GPIO_PORTA_ODR = copy_u8Value ; break;
        case PORTB :  GPIO_PORTB_ODR = copy_u8Value ; break;
        case PORTC :  GPIO_PORTC_ODR = copy_u8Value ; break;
        default : local_u8ErrorStatus = RT_NOK ; break ;
    }
    return local_u8ErrorStatus ;
}
/**************************************************************************/
/*01- Function used to get Value of a pin
    1.1- Options of copy_u8Port : 
                                1- PORTA
                                2- PORTB
                                3- PORTC
u8 GPIO_u8GetPortValue(u8 copy_u8Port , u8* copy_pu8result)
*/