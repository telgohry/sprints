/*
 *  File  : button.c
 *
 *  Author: Tarek Gohry
 *  
 */ 

#include "button.h"


// Functions Implementation
EN_BUTTON_ErrorState_t  BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	if(DIO_init(buttonPort, buttonPin, IN) == DIO_OK)
	{
		return BUTTON_OK;
	}
	else
	{
		return BUTTON_ERROR;
	}
}

EN_BUTTON_ErrorState_t  BUTTON_GetState(uint8_t buttonPort, uint8_t buttonPin,uint8_t *value)
{
	if(DIO_read(buttonPort, buttonPin, value) == DIO_OK)
	{
		return BUTTON_OK;
	}
	else
	{
		return BUTTON_ERROR;
	}
}

