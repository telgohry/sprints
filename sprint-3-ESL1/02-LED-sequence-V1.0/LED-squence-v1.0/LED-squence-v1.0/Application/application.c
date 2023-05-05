/*
 * File  : application.c
 *
 * Author: Tarek Gohry
 *  
 */ 

// Includes
#include "application.h"

// Global variables

// Functions Implementation 
EN_APP_ErrorState_t  APP_init(void)
{
	LED_init(LED_PORT, LED_1_PIN);
	LED_init(LED_PORT, LED_2_PIN);
	LED_init(LED_PORT, LED_3_PIN);
	LED_init(LED_PORT, LED_4_PIN);
	
	BUTTON_init(BUTTON_PORT, BUTTON_PIN);
	
	return APP_OK;
}

EN_APP_ErrorState_t  APP_start(void)
{
	
	uint8_t buttonState = LOW; 
	uint8_t pressNumber = 0;
	
	while(1)
	{
			BUTTON_GetState(BUTTON_PORT, BUTTON_PIN, &buttonState);

			if(Pressed == buttonState)
			{
				pressNumber++;
			}
			
			switch(pressNumber)
			{
				case 1:
				LED_on(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_2_PIN);
				LED_off(LED_PORT, LED_3_PIN);
				LED_off(LED_PORT, LED_4_PIN);
				break;
				case 2:
				LED_on(LED_PORT, LED_1_PIN);
				LED_on(LED_PORT, LED_2_PIN);
				LED_off(LED_PORT, LED_3_PIN);
				LED_off(LED_PORT, LED_4_PIN);
				break;
				case 3:
				LED_on(LED_PORT, LED_1_PIN);
				LED_on(LED_PORT, LED_2_PIN);
				LED_on(LED_PORT, LED_3_PIN);
				LED_off(LED_PORT, LED_4_PIN);
				break;
				case 4:
				LED_on(LED_PORT, LED_1_PIN);
				LED_on(LED_PORT, LED_2_PIN);
				LED_on(LED_PORT, LED_3_PIN);
				LED_on(LED_PORT, LED_4_PIN);
				break;
				case 5:
				LED_off(LED_PORT, LED_1_PIN);
				LED_on(LED_PORT, LED_2_PIN);
				LED_on(LED_PORT, LED_3_PIN);
				LED_on(LED_PORT, LED_4_PIN);
				break;
				case 6:
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_2_PIN);
				LED_on(LED_PORT, LED_3_PIN);
				LED_on(LED_PORT, LED_4_PIN);
				break;
				case 7:
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_2_PIN);
				LED_off(LED_PORT, LED_3_PIN);
				LED_on(LED_PORT, LED_4_PIN);
				break;
				case 8:
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_2_PIN);
				LED_off(LED_PORT, LED_3_PIN);
				LED_off(LED_PORT, LED_4_PIN);
				pressNumber = 0;
				break;
			}
	}

	
	return APP_OK;
}
