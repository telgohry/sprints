/*
 *  File  : button.h
 *
 *  Author: Tarek Gohry
 *  
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

// includes
#include "../../MCAL/DIO/dio.h"
#include <util\delay.h>
#define Debuncing_Ms  (50)
typedef enum
{
	Pressed,
	Not_Pressed
}Button_state;

#define Button_Sense_Pressed HIGH

// typedefs
typedef enum
{
	BUTTON_OK,
	BUTTON_ERROR	
} EN_BUTTON_ErrorState_t;

// macros
#define BUTTON_PORT PORT_C
#define BUTTON_PIN 0


// functions prototypes
EN_BUTTON_ErrorState_t  BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);
Button_state  BUTTON_GetState(uint8_t buttonPort, uint8_t buttonPin,uint8_t *value);


#endif /* BUTTON_H_ */