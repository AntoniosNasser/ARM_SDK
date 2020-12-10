/*			       Documentation Section	         		 */
/*************************************************************/
/*     This file contain configurations of RCC periphiral    */
/* Author  : Antonios Nasser                                 */
/* Date    : 3 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */

//	Header Guard
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

// RCC Options: /* RCC_HSE_CRYSTAL
				/* RCC_HSE_RC
				/* RCC_HSI
				/* RCC_PLL
							*/


#define RCC_CLOCK_TYPE	RCC_HSE_CRYSTAL	

// PLL Options: /* HSE_PLL_SRC
				/* HSE_PLL_SRC_DIV_BY_2
				/* HSI_PLL_SRC
								*/

#if RCC_CLOCK_TYPE	== RCC_PLL
	#define RCC_PLL_MUL_VAL		5
	#define PLLSRC			HSE_PLL_SRC
		#if PLLSRC == HSE_PLL_SRC || PLLSRC == HSE_PLL_SRC_DIV_BY_2
			#define PLL_HSE_TYPE	PLL_HSE_CRY
		#endif
#endif








#endif // RCC_CONFIG_H
