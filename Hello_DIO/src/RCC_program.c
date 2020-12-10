/*			       Documentation Section	         		 */
/*************************************************************/
/*     This file contain program to adjust RCC periphiral    */
/* Author  : Antonios Nasser                                 */
/* Date    : 3 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */
// 	include


//	LIB Layer files
#include "STD_TYPES.h"
#include "BIT_MATH.h"

//	MCAL & HAL Layer interface files
#include "RCC_interface.h"


//	Private & Config files
#include "RCC_private.h"
#include "RCC_config.h"

/*                  Functions Definations                    */

void RCC_voidEnableClock(uint8 Copy_uint8Bus,uint8 Copy_uint8PerId)
{
	if(Copy_uint8PerId<=31)
	{
		switch(Copy_uint8Bus)
		{
			case	RCC_AHB : SET_BIT(RCC_AHBENR ,Copy_uint8PerId); break;
			case	RCC_APB1: SET_BIT(RCC_APB1ENR,Copy_uint8PerId); break;
			case	RCC_APB2: SET_BIT(RCC_APB2ENR,Copy_uint8PerId); break;
			default			: /* Return Error */				   break;
		}
		
	}
	else
	{
		/* Return Error */
	}
}
void RCC_voidDisableClock(uint8 Copy_uint8Bus,uint8 Copy_uint8PerId)
{
	if(Copy_uint8PerId<=31)
	{
		switch(Copy_uint8Bus)
		{
			case	RCC_AHB : CLR_BIT(RCC_AHBENR ,Copy_uint8PerId); break;
			case	RCC_APB1: CLR_BIT(RCC_APB1ENR,Copy_uint8PerId); break;
			case	RCC_APB2: CLR_BIT(RCC_APB2ENR,Copy_uint8PerId); break;
			default			: /* Return Error */				   break;
		}
		
	}
	else
	{
		/* Return Error */
	}
}
void RCC_voidMulPLL(uint8 Copy_uint8MulVal)
{
	if (Copy_uint8MulVal <= 15)
	{
		for(int i =0 ;i<4;i++)
		{
			if(GET_BIT((Copy_uint8MulVal -2),i)==0)
				CLR_BIT(RCC_CFGR,18+i);
			else
				SET_BIT(RCC_CFGR,18+i);
		}

	}
}
void RCC_voidInitSysClock(void)
{
	#if 	RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL 
		RCC_CR   = 0x00010000 ;
		RCC_CFGR = 0X00000001 ;
	#elif   RCC_CLOCK_TYPE == RCC_HSE_RC
		RCC_CR   = 0x00050000 ;
		RCC_CFGR = 0X00000001 ;
	#elif   RCC_CLOCK_TYPE == RCC_HSI
		RCC_CR   = 0x00000081 ;
		RCC_CFGR = 0X00000000 ;
	#elif   RCC_CLOCK_TYPE == RCC_PLL
		RCC_voidMulPLL(RCC_PLL_MUL_VAL);
		#if 	PLLSRC == HSE_PLL_SRC 
			#if		PLL_HSE_TYPE == PLL_HSE_CRY
				RCC_CR = 0x01010000 ;
				
			#elif	PLL_HSE_TYPE == PLL_HSE_RC
				RCC_RC = 0x01050000 ;
				
			#else
				#error("You Entered wrong clock typr");
			#endif
			RCC_CFGR |= 0X00010001 ;
		#elif PLLSRC == HSE_PLL_SRC_DIV_BY_2
			#if		PLL_HSE_TYPE == PLL_HSE_CRY
				RCC_CR = 0x01010000 ;
			#elif	PLL_HSE_TYPE == PLL_HSE_RC
				RCC_RC = 0x01050000 ;
			#else
				#error("You Entered wrong clock typr");
			#endif
			RCC_CFGR |= 0x00030001 ;
		#elif	PLLSRC == HSI_PLL_SRC_DIV_BY_2
			RCC_RC   = 0x01000081 ;
			RCC_CFGR |= 0x0000000 ;
		#else
			#error("You Entered wrong clock typr");
		#endif
	#else
			#error("You Entered wrong clock typr");
	#endif
	
	
}
