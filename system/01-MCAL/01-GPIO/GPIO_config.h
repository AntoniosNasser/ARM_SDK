/*			       Documentation Section	         		 */
/*************************************************************/
/*  This file contain the configurations of GPIO peripherals */
/* Author  : Antonios Nasser                                 */
/* Date    : 4 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/

/*	  		   Preprocessor Directive Section 		         */

//	Header Guard
#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H


//	Output Mode
#define GPIOA_OUT_MODE		OUT_10M_PP		
#define GPIOB_OUT_MODE		OUT_10M_PP		
#define GPIOC_OUT_MODE		OUT_10M_PP		
 
//	Input Mode
#define GPIOA_IN_MODE	IN_PULL_UP_DOWN
#define GPIOB_IN_MODE	IN_PULL_UP_DOWN
#define GPIOC_IN_MODE	IN_PULL_UP_DOWN











#endif // GPIO_CONFIG_H
