/*			       Documentation Section	         		 */
/*************************************************************/
/*     This file contain private spec of RCC periphiral      */
/* Author  : Antonios Nasser                                 */
/* Date    : 3 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */


//	Header Guard
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

//	Register Definations
#define RCC_CR			*((uint32*)0x40021000)
#define RCC_CFGR		*((uint32*)0x40021004)
#define RCC_CIR			*((uint32*)0x40021008)
#define RCC_APB2RSTR	*((uint32*)0x4002100C)
#define RCC_APB1RSTR	*((uint32*)0x40021010)
#define RCC_AHBENR		*((uint32*)0x40021014)
#define RCC_APB2ENR		*((uint32*)0x40021018)
#define RCC_APB1ENR		*((uint32*)0x4002101C)
#define RCC_BDCR		*((uint32*)0x40021020)
#define RCC_CSR 		*((uint32*)0x40021024)

// RCC Options

#define RCC_HSE_CRYSTAL			0
#define RCC_HSE_RC				1
#define RCC_HSI					2
#define RCC_PLL					3
#define HSE_PLL_SRC				0
#define HSE_PLL_SRC_DIV_BY_2    1
#define HSI_PLL_SRC_DIV_BY_2	2
#define PLL_HSE_CRY				0
#define PLL_HCE_RC				1






/*                Private Functions                */

void MRCC_voidMulPLL(uint8 Copy_uint8MulVal);

#endif // RCC_PRIVATE_H
