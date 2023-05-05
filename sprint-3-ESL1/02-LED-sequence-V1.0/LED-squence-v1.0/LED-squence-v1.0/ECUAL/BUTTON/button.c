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



//button state in not related
Button_state  BUTTON_GetState(uint8_t buttonPort, uint8_t buttonPin,uint8_t *value)
{
	Button_state ret_val = Not_Pressed;
	DIO_read(buttonPort, buttonPin, value);
	if(*value == Button_Sense_Pressed)
	{
		 _delay_ms(Debuncing_Ms);
		 DIO_read(buttonPort, buttonPin, value);
		 if(*value == Button_Sense_Pressed)
		 {
			 *value = Pressed;
		 }
		 else
		 {
			 *value = Not_Pressed;
		 }
	}
	else
	{
		*value = Not_Pressed;
	}
	return  ret_val;
}

