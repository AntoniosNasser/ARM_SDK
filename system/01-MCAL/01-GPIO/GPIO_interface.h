/*			       Documentation Section	         		 */
/*************************************************************/
/*   		This file contain GPIO interfaceing 		     */
/* Author  : Antonios Nasser                                 */
/* Date    : 4 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */

//	Header Guard
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

//	Define Macros

#define		PORTA		0
#define		PORTB		1
#define		PORTC		2

// Mode Options
#define		INPUT		0
#define		OUTPUT		1

// Value Options
#define		LOW			0
#define 	HIGH		1

// Port A
#define 	A0			0
#define 	A1			1
#define 	A2			2
#define 	A3			3
#define 	A4			4		
#define 	A5			5
#define 	A6			6
#define 	A7			7
#define 	A8			8
#define 	A9			9
#define 	A10			10
#define 	A11			11
#define 	A12			12
#define 	A13			13
#define 	A14			14
#define 	A15			15

//  Port B
#define 	B0			0
#define 	B1			1
#define 	B2			2
#define 	B3			3
#define 	B4			4		
#define 	B5			5
#define 	B6			6
#define 	B7			7
#define 	B8			8
#define 	B9			9
#define 	B10			10
#define 	B11			11
#define 	B12			12
#define 	B13			13
#define 	B14			14
#define 	B15			15

//	Port C
#define 	C0			0
#define 	C1			1
#define 	C2			2


//  Output Mode
#define		OUT_10M_PP			0b0001
#define		OUT_10M_OD			0b0101
#define		OUT_10M_AFPP		0b1001
#define		OUT_10M_AFOD		0b1101

#define		OUT_2M_PP			0b0010
#define		OUT_2M_OD			0b0110
#define		OUT_2M_AFPP		    0b1010
#define		OUT_2M_AFOD		    0b1110

#define		OUT_50M_PP			0b0011
#define		OUT_50M_OD			0b0111
#define		OUT_50M_AFPP		0b1011
#define		OUT_50M_AFOD		0b1111


// Input Mode
#define		IN_ANALOG			0b0000
#define		IN_FLOATING			0b0100
#define		IN_PULL_UP_DOWN		0b1000

/*	  		     Function Prototypes	 		        */

void GPIO_voidSetPinDirection(uint8 Copy_uint8Port, uint8 Copy_uint8Pin, uint8 Copy_uint8Mode);

void GPIO_voidSetPinValue(uint8 Copy_uint8Port, uint8 Copy_uint8Pin, uint8 Copy_uint8Value);

uint8 GPIO_uint8GetPinValue(uint8 Copy_uint8Port, uint8 Copy_uint8Pin);







#endif // GPIO_INTERFACE_H
