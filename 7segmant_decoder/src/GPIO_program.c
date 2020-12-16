/*			       Documentation Section	         		 */
/*************************************************************/
/*   		  This file contain GPIO program 			     */
/* Author  : Antonios Nasser                                 */
/* Date    : 4 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */


/*  	include           */


//	LIB Layer files
#include "STD_TYPES.h"
#include "BIT_MATH.h"

//	MCAL & HAL Layer interface files
#include "GPIO_interface.h"


//	Private & Config files
#include "GPIO_private.h"
#include "GPIO_config.h"

/*                  Functions Definations                    */
void GPIO_voidSetPinDirection(uint8 Copy_uint8Port, uint8 Copy_uint8Pin, uint8 Copy_uint8Mode)
{
	switch(Copy_uint8Port) {
	case PORTA:
		if(Copy_uint8Pin<8)
		{
			GPIOA_CRL &= ~((0b1111)<<(Copy_uint8Pin*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOA_CRL |= (GPIOA_OUT_MODE) <<(Copy_uint8Pin*4) ;
			else if (Copy_uint8Mode == INPUT)
				GPIOA_CRL |= (GPIOA_IN_MODE)<<(Copy_uint8Pin*4) ;
		}
		else if (Copy_uint8Pin < 16)
		{
			GPIOA_CRH &= ~((0b1111)<<((Copy_uint8Pin-8)*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOA_CRH |= ((GPIOA_OUT_MODE)<<((Copy_uint8Pin-8)*4));
			else if (Copy_uint8Mode == INPUT)
				GPIOA_CRH |=((GPIOA_IN_MODE)<<((Copy_uint8Pin-8)*4));
		}
		break;
	case PORTB:
		if(Copy_uint8Pin<8)
		{
			GPIOB_CRL &= ~((0b1111)<<(Copy_uint8Pin*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOB_CRL |= (GPIOB_OUT_MODE<<(Copy_uint8Pin*4));
			else if (Copy_uint8Mode == INPUT)
				GPIOB_CRL |= ((GPIOB_IN_MODE)<<(Copy_uint8Pin*4));
		}
		else if (Copy_uint8Pin < 16)
		{
			GPIOB_CRH &= ~((0b1111)<<((Copy_uint8Pin-8)*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOB_CRH |= ((GPIOB_OUT_MODE)<<((Copy_uint8Pin-8)*4));
			else if (Copy_uint8Mode == INPUT)
				GPIOB_CRH |=((GPIOB_IN_MODE)<<((Copy_uint8Pin-8)*4));
		}
		break;
	case PORTC:
		if(Copy_uint8Pin<8)
		{
			GPIOC_CRL &= ~((0b1111)<<(Copy_uint8Pin*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOC_CRL |= ((GPIOC_OUT_MODE)<<(Copy_uint8Pin*4));
			else if (Copy_uint8Mode == INPUT)
				GPIOC_CRL |= ((GPIOC_IN_MODE)<<(Copy_uint8Pin*4));
		}
		else if (Copy_uint8Pin < 16)
		{
			GPIOC_CRH &= ~((0b1111)<<(Copy_uint8Pin*4));
			if(Copy_uint8Mode == OUTPUT)
				GPIOC_CRH |= ((GPIOC_OUT_MODE)<<((Copy_uint8Pin-8)*4));
			else if (Copy_uint8Mode == INPUT)
				GPIOC_CRH |=((GPIOC_IN_MODE)<<((Copy_uint8Pin-8)*4));
		}
		break;
	default: 	break;
	}
}


void GPIO_voidSetPinValue(uint8 Copy_uint8Port, uint8 Copy_uint8Pin, uint8 Copy_uint8Value)
{
	switch(Copy_uint8Port)
	{
	case PORTA:
		if(Copy_uint8Value == HIGH )
		{
			SET_BIT(GPIOA_ODR , Copy_uint8Pin );
		}
		else if(Copy_uint8Value == LOW )
		{
			CLR_BIT(  GPIOA_ODR , Copy_uint8Pin );
		}
		break;
		
	case PORTB:
		if(Copy_uint8Value == HIGH )
		{
			SET_BIT( GPIOB_ODR  , Copy_uint8Pin );
		}
		else if(Copy_uint8Value == LOW )
		{
			CLR_BIT( GPIOB_ODR  , Copy_uint8Pin );
		}
		break;
		
	case PORTC:
		if(Copy_uint8Value == HIGH )
		{
			SET_BIT( GPIOC_ODR , Copy_uint8Pin );
		}else if( Copy_uint8Value == LOW ){
			CLR_BIT( GPIOC_ODR , Copy_uint8Pin );
		}
		break;

	}
}

uint8 GPIO_uint8GetPinValue(uint8 Copy_uint8Port, uint8 Copy_uint8Pin)
{
	uint8 PinValue = 0;
	if	(Copy_uint8Port == PORTA)
		PinValue = GET_BIT(GPIOA_IDR,Copy_uint8Pin);
	else if (Copy_uint8Port == PORTB)
		PinValue = GET_BIT(GPIOB_IDR,Copy_uint8Pin);
	else if (Copy_uint8Port == PORTC)
		PinValue = GET_BIT(GPIOC_IDR,Copy_uint8Pin);
	return PinValue;
}