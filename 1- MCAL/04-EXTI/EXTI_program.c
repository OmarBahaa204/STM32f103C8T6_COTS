/**************************************************************************/
/**************************************************************************/
/**********************      Author  : Omar Bahaa     *********************/
/**********************      Layer   : MCAl           *********************/
/**********************      SWC     : EXTI_Stm32     *********************/
/**********************      Version : 2.00           *********************/
/**********************      Date    : 09/03/2024     *********************/
/**************************************************************************/
/**************************************************************************/

/**************************************************************************/
/******************************          **********************************/
/****************************** Includes **********************************/
/******************************          **********************************/
/**************************************************************************/
#include "STD_TYPES.h"
#include "STD_ERRORS.h"
#include "BIT_MATH.h"
#include "EXTI_private.h"
#include "EXTI_config.h"
#include "EXTI_interface.h"
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
#define IMR_INITIAL_VALUE   0x00000000
#define PR_CLEARING_FLAGS   0xFFFFFFFF
#define NO_LINES            16
/**************************************************************************/
/**************************                       *************************/
/************************** Function declarations *************************/
/**************************                       *************************/
/**************************************************************************/
void EXTI_voidInit(void)
{
    /*Setting The Masked or not Masked of IMR with Pre-Configurations*/
    EXTI->IMR = IMR_INITIAL_VALUE ;
	EXTI->IMR |= (EXTI_LINE_0_EN << 0)  |
			     (EXTI_LINE_1_EN << 1)  |
				 (EXTI_LINE_2_EN << 2)  |
                 (EXTI_LINE_3_EN << 3)  |
                 (EXTI_LINE_4_EN << 4)  |
                 (EXTI_LINE_3_EN << 5)  |
                 (EXTI_LINE_3_EN << 6)  |   
                 (EXTI_LINE_3_EN << 7)  |   
                 (EXTI_LINE_3_EN << 8)  |   
                 (EXTI_LINE_3_EN << 9)  |   
                 (EXTI_LINE_3_EN << 10) |   
                 (EXTI_LINE_3_EN << 11) |   
                 (EXTI_LINE_3_EN << 12) |   
                 (EXTI_LINE_3_EN << 13) |   
                 (EXTI_LINE_3_EN << 14) |   
                 (EXTI_LINE_3_EN << 15) ;
    /*Setting The Trigger Type of RTSR with Pre-Configurations*/    
/*LINE 0 Trigger*/                 
#if EXTI_LINE_0_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE0);
#elif EXTI_LINE_0_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE0);
#elif EXTI_LINE_0_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE0);
    SET_BIT(EXTI->FTSR , EXTI_LINE0);
#endif  
/*LINE 1 Trigger*/                 
#if EXTI_LINE_1_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE1);
#elif EXTI_LINE_1_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE1);
#elif EXTI_LINE_1_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE1);
    SET_BIT(EXTI->FTSR , EXTI_LINE1);
#endif  
/*LINE 2 Trigger*/                 
#if EXTI_LINE_2_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE2);
#elif EXTI_LINE_2_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE2);
#elif EXTI_LINE_2_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE2);
    SET_BIT(EXTI->FTSR , EXTI_LINE2);
#endif  
/*LINE 3 Trigger*/                 
#if EXTI_LINE_3_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE3);
#elif EXTI_LINE_3_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE3);
#elif EXTI_LINE_3_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE3);
    SET_BIT(EXTI->FTSR , EXTI_LINE3);
#endif  
/*LINE 4 Trigger*/                 
#if EXTI_LINE_4_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE4);
#elif EXTI_LINE_4_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE4);
#elif EXTI_LINE_4_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE4);
    SET_BIT(EXTI->FTSR , EXTI_LINE4);
#endif  
/*LINE 5 Trigger*/                 
#if EXTI_LINE_5_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE5);
#elif EXTI_LINE_5_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE5);
#elif EXTI_LINE_5_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE5);
    SET_BIT(EXTI->FTSR , EXTI_LINE5);
#endif  
/*LINE 6 Trigger*/                 
#if EXTI_LINE_6_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE6);
#elif EXTI_LINE_6_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE6);
#elif EXTI_LINE_6_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE6);
    SET_BIT(EXTI->FTSR , EXTI_LINE6);
#endif  
/*LINE 7 Trigger*/                 
#if EXTI_LINE_7_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE7);
#elif EXTI_LINE_7_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE7);
#elif EXTI_LINE_7_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE7);
    SET_BIT(EXTI->FTSR , EXTI_LINE7);
#endif  
/*LINE 8 Trigger*/                 
#if EXTI_LINE_8_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE8);
#elif EXTI_LINE_8_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE8);
#elif EXTI_LINE_8_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE8);
    SET_BIT(EXTI->FTSR , EXTI_LINE8);
#endif  
/*LINE 9 Trigger*/                 
#if EXTI_LINE_9_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE9);
#elif EXTI_LINE_9_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE9);
#elif EXTI_LINE_9_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE9);
    SET_BIT(EXTI->FTSR , EXTI_LINE9);
#endif  
/*LINE 10 Trigger*/                 
#if EXTI_LINE_10_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE10);
#elif EXTI_LINE_10_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE10);
#elif EXTI_LINE_10_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE10);
    SET_BIT(EXTI->FTSR , EXTI_LINE10);
#endif  
/*LINE 11 Trigger*/                 
#if EXTI_LINE_11_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE11);
#elif EXTI_LINE_11_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE11);
#elif EXTI_LINE_11_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE11);
    SET_BIT(EXTI->FTSR , EXTI_LINE11);
#endif  
/*LINE 12 Trigger*/                 
#if EXTI_LINE_12_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE12);
#elif EXTI_LINE_12_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE12);
#elif EXTI_LINE_12_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE12);
    SET_BIT(EXTI->FTSR , EXTI_LINE12);
#endif  
/*LINE 13 Trigger*/                 
#if EXTI_LINE_13_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE13);
#elif EXTI_LINE_13_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE13);
#elif EXTI_LINE_13_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE13);
    SET_BIT(EXTI->FTSR , EXTI_LINE13);
#endif  
/*LINE 14 Trigger*/                 
#if EXTI_LINE_14_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE14);
#elif EXTI_LINE_14_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE14);
#elif EXTI_LINE_14_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE14);
    SET_BIT(EXTI->FTSR , EXTI_LINE14);
#endif  
/*LINE 15 Trigger*/                 
#if EXTI_LINE_15_TRIGGER == EXTI_RISING
	SET_BIT(EXTI->RTSR, EXTI_LINE15);
#elif EXTI_LINE_15_TRIGGER == EXTI_FALLING
    SET_BIT(EXTI->FTSR , EXTI_LINE15);
#elif EXTI_LINE_15_TRIGGER == EXTI_ONCHANGE 
    SET_BIT(EXTI->RTSR, EXTI_LINE15);
    SET_BIT(EXTI->FTSR , EXTI_LINE15);
#endif

/* Clear all flags */
	EXTI->PR = PR_CLEARING_FLAGS;
}

u8 EXTI_u8EnableLine(u8 copy_u8Trigger, u8 copy_u8LineNo)
{
    u8 local_u8ErrorStatus = RT_OK ; 
    if(copy_u8LineNo < NO_LINES)
	{
        //Enable Specific Line
		SET_BIT(EXTI->IMR, copy_u8LineNo);
        //Choose Trigger for this Line
		switch(copy_u8Trigger)
		{
		case EXTI_RISING:
			SET_BIT(EXTI->RTSR, copy_u8LineNo) ;
			CLR_BIT(EXTI->FTSR, copy_u8LineNo) ; //ensure that falling is disabled
			break;
		case EXTI_FALLING:
			SET_BIT(EXTI->FTSR, copy_u8LineNo) ;
			CLR_BIT(EXTI->RTSR, copy_u8LineNo) ; //ensure that Rising is disabled
			break;
		case EXTI_ONCHANG:
			SET_BIT(EXTI->RTSR, copy_u8LineNo) ;
			SET_BIT(EXTI->FTSR, copy_u8LineNo) ;
			break;
        default : local_u8ErrorStatus = RT_NOK ; break;
		}
	}
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}

u8 EXTI_u8DisableLine( u8 copy_u8LineNo)
{
    u8 local_u8ErrorStatus = RT_OK ;
    if(copy_u8LineNo < NO_LINES)
	{
        CLR_BIT(EXTI->IMR, copy_u8LineNo);
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 EXTI_u8SoftwareTrigger(u8 copy_u8LineNo)
{
    u8 local_u8ErrorStatus = RT_OK ;
    if(copy_u8LineNo < NO_LINES)
	{
        SET_BIT(EXTI->SWIER, copy_u8LineNo) ;
    }
    else 
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
u8 EXTI_u8SetTrigger(u8 copy_u8Trigger, u8 copy_u8LineNo)
{
    u8 local_u8ErrorStatus = RT_OK ;
    if(copy_u8LineNo < NO_LINES)
	{
        switch(copy_u8Trigger)
	    {
	        case EXTI_RISING:
	        	SET_BIT(EXTI->RTSR, copy_u8LineNo) ;
	        	CLR_BIT(EXTI->FTSR, copy_u8LineNo) ; //ensure that falling is disabled
	        	break;
	        case EXTI_FALLING:
	        	SET_BIT(EXTI->FTSR, copy_u8LineNo) ;
	        	CLR_BIT(EXTI->RTSR, copy_u8LineNo) ; //ensure that Rising is disabled
	        	break;
	        case EXTI_ONCHANG:
	        	SET_BIT(EXTI->RTSR, copy_u8LineNo) ;
	        	SET_BIT(EXTI->FTSR, copy_u8LineNo) ;
	        	break;
            default : local_u8ErrorStatus = RT_NOK ; break;
	    }
    }
    else
    {
        local_u8ErrorStatus = RT_NOK ;
    }
    return local_u8ErrorStatus ;
}
