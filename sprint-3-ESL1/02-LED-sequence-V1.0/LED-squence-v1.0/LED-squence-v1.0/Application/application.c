/*
 * File  : application.c
 *
 * Author: Tarek Gohry
 *  
 */ 

// Includes
#include "application.h"

// Global variables

uint8_t led_state[4] = {0};

// Functions Implementation 
EN_APP_ErrorState_t  APP_init(void)
{
	if(LED_init(LED_PORT, LED_1_PIN) == LED_OK && LED_init(LED_PORT, LED_2_PIN) == LED_OK && LED_init(LED_PORT, LED_3_PIN) == LED_OK && LED_init(LED_PORT, LED_4_PIN) == LED_OK
	 && BUTTON_init(BUTTON_PORT, BUTTON_PIN) == BUTTON_OK)
	{
		return APP_OK;
	}
	else
	{
		return APP_ERROR; 
	}
}

EN_APP_ErrorState_t  APP_start(void)
{
	uint8_t buttonState = LOW; 
	
	/* Led default state initialization */
	LED_off(LED_PORT, LED_1_PIN);
	LED_off(LED_PORT, LED_2_PIN);
	LED_off(LED_PORT, LED_3_PIN);
	LED_off(LED_PORT, LED_4_PIN);
	
	BUTTON_GetState(BUTTON_PORT, BUTTON_PIN, &buttonState);

	
	
	return APP_OK;
}
