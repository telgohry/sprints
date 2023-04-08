/*
 * led.h
 *
 * Created: 4/7/2023 11:45:20 AM
 *  Author: T2
 */ 


#ifndef LED_H_
#define LED_H_

// includes
#include "../../MCAL/DIO/dio.h"

// typedefs
typedef enum
{
	LED_OK,
	LED_ERROR
} EN_LED_ErrorState_t;

// macros 
#define LED_PORT PORT_A
#define LED_1_PIN 0
#define LED_2_PIN 1
#define LED_3_PIN 2
#define LED_4_PIN 3

// functions prototypes
EN_LED_ErrorState_t  LED_init(uint8_t ledPort, uint8_t ledPin);
EN_LED_ErrorState_t  LED_on(uint8_t ledPort, uint8_t ledPin);
EN_LED_ErrorState_t  LED_off(uint8_t ledPort, uint8_t ledPin);
EN_LED_ErrorState_t  LED_toggle(uint8_t ledPort, uint8_t ledPin);
EN_LED_ErrorState_t  LED_GetState(uint8_t ledPort, uint8_t ledPin,uint8_t *value);



#endif /* LED_H_ */