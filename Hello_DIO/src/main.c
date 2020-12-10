/*
 * main.c
 *
 *  Created on: Dec 4, 2020
 *      Author: Antonios Nasser
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"

#define PORTA_CRL *((uint32*)0x40010800)
#define PORTA_ODR *((uint32*)0x4001080C)


void main(void)
{
	/* Initialization Clock System */
	RCC_voidInitSysClock();

	/* Enable IOPA on APB2 bus     */
	RCC_voidEnableClock(RCC_APB2,IOPA);

	// Configure A0 as an output Push Pull pin
	PORTA_CRL = 0x00000002;

	// Set A0 Output High
	PORTA_ODR = 0x00000001;


}


