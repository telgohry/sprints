/*
 * File  : application.c
 *
 * Author: Tarek Gohry
 *  
 */ 

// Includes
#include "application.h"

// MACROS
#define NUMBER_OF_STATES 8

// Global variables
uint8_t state_number = 0;

// Functions Implementation 
EN_APP_ErrorState_t  APP_init(void)
{
	LED_init(LED_PORT, LED_1_PIN);
	LED_init(LED_PORT, LED_2_PIN);
	LED_init(LED_PORT, LED_3_PIN);
	LED_init(LED_PORT, LED_4_PIN);
	
	BUTTON_init(BUTTON_PORT, BUTTON_PIN);
	
	/* Enable global interrupts */
	sei();
		
	/* Choose the external interrupt sense - sense on rising edge*/
	MCUCR |= (1<<0) | (1<<1);
		
	/* Enable External Interrupt 0 - INT0 */
	GICR |= (1<<6);
	
	return APP_OK;
}

EN_APP_ErrorState_t  APP_start(void)
{

	while(1)
	{
		switch(state_number)
		{
			case 0:
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_1_PIN);
				LED_off(LED_PORT, LED_1_PIN);
			case 1:
				LED_on(LED_PORT, LED_1_PIN);
				break;
			case 2:
				LED_on(LED_PORT, LED_2_PIN);
				break;
			case 3:
				LED_on(LED_PORT, LED_3_PIN);
				break;
			case 4:
				LED_on(LED_PORT, LED_4_PIN);
				break;
			case 5:
				LED_off(LED_PORT, LED_1_PIN);
				break;
			case 6:
				LED_off(LED_PORT, LED_2_PIN);
				break;
			case 7:
				LED_off(LED_PORT, LED_3_PIN);
				break;
			case 8:
				LED_off(LED_PORT, LED_4_PIN);
			break;
		}	
	}

	
	
	return APP_OK;
}

ISR(EXT_INT_0)
{
	if(state_number < NUMBER_OF_STATES)
	{
		state_number++;
	}
	else
	{
		state_number = 1;
	}
}
