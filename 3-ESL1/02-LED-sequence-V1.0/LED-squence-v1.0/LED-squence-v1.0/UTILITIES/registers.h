/*
 * registers.h
 *
 * Created: 4/7/2023 11:43:38 AM
 *  Author: T2
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

// Includes
#include "typedefs.h"

/************************************************************************/
/* DIO REGISTERS                                                        */
/************************************************************************/

// Port A
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

// Port B
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

// Port C
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

// Port D
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)


#endif /* REGISTERS_H_ */