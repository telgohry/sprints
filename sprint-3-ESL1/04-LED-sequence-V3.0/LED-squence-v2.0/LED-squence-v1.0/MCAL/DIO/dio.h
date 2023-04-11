/*
 * File  : dio.h
 *
 * Author: Tarek Gohry
 * 
 */ 


#ifndef DIO_H_
#define DIO_H_

// Includes
#include "../../UTILITIES/registers.h"
#include "../../UTILITIES/typedefs.h"
#include "../../UTILITIES/bit_manipulation.h"

// typedefs
typedef enum
{
	DIO_OK,
	DIO_ERROR 
} EN_DIO_ErrorState_t;

// Driver Macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

// Direction defines
#define IN  0
#define OUT 1

// Value defines
#define LOW  0
#define HIGH 1


// Functions Prototypes
EN_DIO_ErrorState_t  DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);
EN_DIO_ErrorState_t  DIO_write(uint8_t portNumber, uint8_t pinNumber,uint8_t value);
EN_DIO_ErrorState_t  DIO_read(uint8_t portNumber, uint8_t pinNumber,uint8_t *value);
EN_DIO_ErrorState_t  DIO_toggle(uint8_t portNumber, uint8_t pinNumber);


#endif /* DIO_H_ */