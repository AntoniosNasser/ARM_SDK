/*			       Documentation Section	         		 */
/*************************************************************/
/*      This file contain interfacing of RCC periphiral      */
/* Author  : Antonios Nasser                                 */
/* Date    : 3 Dec 2020                                      */
/* version : V01                                             */
/*************************************************************/


/*	  		   Preprocessor Directive Section 		         */

//	Header Guard
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

//	Define Macros




/*	  		     Function Prototypes	 		        */

void RCC_voidEnableClock (uint8 Copy_uint8Bus,uint8 Copy_uint8PerId);
void RCC_voidDisableClock(uint8 Copy_uint8Bus,uint8 Copy_uint8PerId);
void RCC_voidInitSysClock(void);


#define RCC_AHB 	0
#define RCC_APB1	1
#define RCC_APB2	2


#define DMA1	0
#define DMA2	1
#define SRAM	2
#define FLITF	4
#define CRC		6
#define FSMC	8
#define SDIO	10
#define AFIO	0
#define IOPA	2
#define IOPB	3
#define IOPC	4
#define IOPD	5
#define IOPE	6
#define IOPF	7
#define IOPG	8
#define ADC1	9
#define ADC2	10
#define TIM1	11
#define SPI1	12
#define TIM8	13
#define USART1  14
#define ADC3	15
#define TIM9	19
#define TIM10   20
#define TIM11	21
#define TIM2	0
#define TIM3	1
#define TIM4	2
#define TIM5	3
#define TIM6	4
#define TIM7	5
#define TIM12	6
#define TIM13	7
#define TIM14	8
#define WWDG	11
#define SPI2	14
#define SPI3	15
#define USART2  17
#define USART3  18
#define USART4  19
#define USART5  20
#define I2C1	21
#define I2C2	22
#define USB		23
#define CAN		24
#define BKP		27
#define PWR		28
#define DAC		29








#endif // RCC_INTERFACE_H
