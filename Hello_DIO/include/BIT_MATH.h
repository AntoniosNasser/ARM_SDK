/*			 Documentation Section			     */
/*************************************************/
/*   This file contain Macros to manpilate bits  */
/* Author  : Antonios Nasser                     */
/* Date    : 25 Nov 2020                         */
/* version : V01                                 */
/*************************************************/


/*	    Preprocessor Directive Section       */
#ifndef BIT_MATH_H
#define BIT_MATH_H

// define BIT MATH Macros
#define SET_BIT(VAR,BIT)     VAR |=  (1<<(BIT))
#define CLR_BIT(VAR,BIT)     VAR &= ~(1<<(BIT))
#define GET_BIT(VAR,BIT)     ( 1 &  (VAR>>BIT))
#define TOG_BIT(VAR,BIT)     VAR ^=  (1<<(BIT))




#endif // STD_TYPES_H
