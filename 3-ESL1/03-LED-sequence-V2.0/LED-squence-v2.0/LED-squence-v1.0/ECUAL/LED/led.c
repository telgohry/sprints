/*
 *  File  : led.c
 *
 * Author: Tarek Gohry
 *  
 */ 

// Includes 
#include "led.h"


// Functions Implementation
EN_LED_ErrorState_t  LED_init(uint8_t ledPort, uint8_t ledPin)
{
	if (DIO_init(ledPort, ledPin, OUT) == DIO_OK)
	{
		return LED_OK;
	}
	else
	{
		return LED_ERROR;
	}
}
EN_LED_ErrorState_t  LED_on(uint8_t ledPort, uint8_t ledPin)
{
	if(DIO_write(ledPort, ledPin, HIGH) == DIO_OK)
	{
		return LED_OK;	
	}
	else
	{
		return LED_ERROR;
	}
}
EN_LED_ErrorState_t  LED_off(uint8_t ledPort, uint8_t ledPin)
{
	if(DIO_write(ledPort, ledPin, LOW) == DIO_OK)
	{
		return LED_OK;
	}
	else
	{
		return LED_ERROR;
	}
}
EN_LED_ErrorState_t  LED_toggle(uint8_t ledPort, uint8_t ledPin)
{
	if(DIO_toggle(ledPort, ledPin) == DIO_OK)
	{
		return LED_OK;
	}
	else
	{
		return LED_ERROR;
	}
}
EN_LED_ErrorState_t  LED_GetState(uint8_t ledPort, uint8_t ledPin,uint8_t *value)
{
	if(DIO_read(ledPort, ledPin, value) == DIO_OK)
	{
		return LED_OK;
	}
	else
	{
		return LED_ERROR;
	}
}