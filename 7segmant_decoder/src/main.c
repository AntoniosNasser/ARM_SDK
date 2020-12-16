/*      Documentation section      */
/* Author : Antonios Nasser        */
/* Date : 16 Dec 2020			   */
/* Version : 01 V   			   */
/* Description : Control 7-Segment */
/***********************************/


/* 		  Header Inclusion 	   	   */

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

/*		   Program Section  	   */
void SevenSegment_voidDecoder(uint8 Copy_uint8Num);

void main (void)
{
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,IOPA);
	RCC_voidEnableClock(RCC_APB2,IOPB);

	GPIO_voidSetPinDirection(PORTA,A0,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A1,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A2,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A3,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A4,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A5,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A6,OUTPUT);
	GPIO_voidSetPinDirection(PORTA,A7,OUTPUT);

	GPIO_voidSetPinDirection(PORTB,B0,INPUT);

	GPIO_voidSetPinValue(PORTB,B0,HIGH);

	uint8 count = 0;
	uint16 w =1000;
	while(1)
	{
		if(GPIO_uint8GetPinValue(PORTB,B0)==0)
		{
			count ++;
			for(int i=0;i<w;i++)
			{
				for(uint16 j=0;j<w;j++)
					asm("NOP");
			}
		}
		SevenSegment_voidDecoder(count);

	}

}

void SevenSegment_voidDecoder(uint8 Copy_uint8Num)
{
	 if(Copy_uint8Num == 0)
	 {
		 GPIO_voidSetPinValue(PORTA,A0,HIGH);
		 GPIO_voidSetPinValue(PORTA,A1,HIGH);
		 GPIO_voidSetPinValue(PORTA,A2,HIGH);
		 GPIO_voidSetPinValue(PORTA,A3,HIGH);
		 GPIO_voidSetPinValue(PORTA,A4,HIGH);
		 GPIO_voidSetPinValue(PORTA,A5,HIGH);
		 GPIO_voidSetPinValue(PORTA,A6,LOW);
	 }
	 else if(Copy_uint8Num == 1)
	{
		GPIO_voidSetPinValue(PORTA,A0,LOW);
		GPIO_voidSetPinValue(PORTA,A1,LOW);
		GPIO_voidSetPinValue(PORTA,A2,LOW);
		GPIO_voidSetPinValue(PORTA,A3,LOW);
		GPIO_voidSetPinValue(PORTA,A4,HIGH);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,LOW);
	}
	else if(Copy_uint8Num==2)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,LOW);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,HIGH);
		GPIO_voidSetPinValue(PORTA,A5,LOW);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==3)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,LOW);
		GPIO_voidSetPinValue(PORTA,A5,LOW);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==4)
	{
		GPIO_voidSetPinValue(PORTA,A0,LOW);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,LOW);
		GPIO_voidSetPinValue(PORTA,A4,LOW);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==5)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,LOW);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,LOW);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==6)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,LOW);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,HIGH);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==7)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,LOW);
		GPIO_voidSetPinValue(PORTA,A4,LOW);
		GPIO_voidSetPinValue(PORTA,A5,LOW);
		GPIO_voidSetPinValue(PORTA,A6,LOW);
	}
	else if(Copy_uint8Num==8)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,HIGH);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else if(Copy_uint8Num==9)
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);
		GPIO_voidSetPinValue(PORTA,A1,HIGH);
		GPIO_voidSetPinValue(PORTA,A2,HIGH);
		GPIO_voidSetPinValue(PORTA,A3,HIGH);
		GPIO_voidSetPinValue(PORTA,A4,LOW);
		GPIO_voidSetPinValue(PORTA,A5,HIGH);
		GPIO_voidSetPinValue(PORTA,A6,HIGH);
	}
	else
	{
		GPIO_voidSetPinValue(PORTA,A0,HIGH);

	}
}
