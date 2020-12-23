/*			       Documentation Section	         		 */
/*************************************************************/
/*   	  This file contain GPIO Registers  			     */
/* Author  : Antonios Nasser                                 */
/* Date    : 4 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/

/*	  		   Preprocessor Directive Section 		         */


//	Header Guard
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

// 	Base Address Of Ports

#define GPIOA_BASE_ADDRESS 		0x40010800		
#define GPIOB_BASE_ADDRESS 		0x40010C00		
#define GPIOC_BASE_ADDRESS 		0x40011000		


/* 		       		 Register Definations	   				*/

// Port A
#define GPIOA_CRL		*((uint32*)(GPIOA_BASE_ADDRESS))
#define GPIOA_CRH		*((uint32*)(GPIOA_BASE_ADDRESS+0x04))
#define GPIOA_IDR		*((volatile uint32*)(GPIOA_BASE_ADDRESS+0x08))
#define GPIOA_ODR   	*((volatile uint32*)(GPIOA_BASE_ADDRESS+0x0C))
#define GPIOA_BSRR  	*((uint32*)(GPIOA_BASE_ADDRESS+0x10))
#define GPIOA_BRR		*((uint32*)(GPIOA_BASE_ADDRESS+0x14))
#define GPIOA_LCKR		*((uint32*)(GPIOA_BASE_ADDRESS+0x18))

// Port B
#define GPIOB_CRL		*((uint32*)(GPIOB_BASE_ADDRESS))
#define GPIOB_CRH		*((uint32*)(GPIOB_BASE_ADDRESS+0x04))
#define GPIOB_IDR		*((volatile uint32*)(GPIOB_BASE_ADDRESS+0x08))
#define GPIOB_ODR   	*((volatile uint32*)(GPIOB_BASE_ADDRESS+0x0C))
#define GPIOB_BSRR  	*((uint32*)(GPIOB_BASE_ADDRESS+0x10))
#define GPIOB_BRR		*((uint32*)(GPIOB_BASE_ADDRESS+0x14))
#define GPIOB_LCKR		*((uint32*)(GPIOB_BASE_ADDRESS+0x18))

// Port C
#define GPIOC_CRL		*((uint32*)(GPIOC_BASE_ADDRESS))
#define GPIOC_CRH		*((uint32*)(GPIOC_BASE_ADDRESS+0x04))
#define GPIOC_IDR		*((volatile uint32*)(GPIOC_BASE_ADDRESS+0x08))
#define GPIOC_ODR   	*((volatile uint32*)(GPIOC_BASE_ADDRESS+0x0C))
#define GPIOC_BSRR  	*((uint32*)(GPIOC_BASE_ADDRESS+0x10))
#define GPIOC_BRR		*((uint32*)(GPIOC_BASE_ADDRESS+0x14))
#define GPIOC_LCKR		*((uint32*)(GPIOC_BASE_ADDRESS+0x18))



#endif // GPIO_PRIVATE_H
