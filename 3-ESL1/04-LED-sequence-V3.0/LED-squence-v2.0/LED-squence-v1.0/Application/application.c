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
#define NUMBER_OF_BLINK_STATES 5

// Global variables
volatile uint8_t state_number = 0;
volatile uint8_t blink_state = 0;


volatile uint32_t overflow;

void timer_delay(uint32_t delay)
{
	overflow=0;
	TCNT0=0;
	SET_BIT(TCCR0, 1);
	while((delay*1000UL) > (overflow*256UL + TCNT0 + 1));
	TCCR0 = 0x00;
}

// Functions Implementation 
EN_APP_ErrorState_t  APP_init(void)
{
	LED_init(LED_PORT, LED_1_PIN);
	LED_init(LED_PORT, LED_2_PIN);
	LED_init(LED_PORT, LED_3_PIN);
	LED_init(LED_PORT, LED_4_PIN);
	
	//BUTTON_init(BUTTON_PORT, BUTTON_PIN);
			
	/* Choose the external interrupt sense - sense on rising edge*/
	MCUCR |= (1<<0) | (1<<1);
	
	MCUCR |= (1<<2) | (1<<3);
		
	/* Enable External Interrupt 0 - INT0 */
	GICR |= (1<<6);
	
	GICR |= (1<<7);
	
	SET_BIT(TIMSK, 0);
	
	/* Enable global interrupts */
	sei();
	
	return APP_OK;
}

EN_APP_ErrorState_t  APP_start(void)
{
	uint8_t pins[4] = {LED_1_PIN, LED_2_PIN, LED_3_PIN, LED_4_PIN};
	uint8_t on;
	uint8_t off;
	uint8_t leds[4]={0};
	
	while(1)
	{
		for(uint8_t i=0; i<4; i++)
		{
			LED_off(LED_PORT, pins[i]);
		}
		
		switch(state_number)
		{
			case 0:
				
				break;
			case 1:
				leds[0] = 1;
				break;
			case 2:
				leds[1] = 1;
				break;
			case 3:
				leds[2] = 1;
				break;
			case 4:
				leds[3] = 1;
				break;
			case 5:
				leds[0] = 0;
				break;
			case 6:
				leds[1] = 0;
				break;
			case 7:
				leds[2] = 0;
				break;
			case 8:
				leds[3] = 0;
				break;
		}
		
		switch(blink_state)
		{
			case 0:
				on=100;
				off=900;
				break;
			case 1:
				on=200;
				off=800;
				break;
			case 2:
				on=300;
				off=700;
				break;
			case 3:
				on=500;
				off=500;
				break;
			case 4:
				on=800;
				off=200;
				break;
		}	
		
		for(uint8_t i=0; i<4; i++)
		{
			if(leds[i] == 1)
			{
				LED_on(LED_PORT, pins[i]);
			}
			
		}
		
		timer_delay(on);
		
		for(uint8_t i=0; i<4; i++)
		{
			LED_off(LED_PORT, pins[i]);
		}
		timer_delay(off);
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

ISR(EXT_INT_1)
{
	if(blink_state < NUMBER_OF_BLINK_STATES)
	{
		blink_state++;
	}
	else
	{
		blink_state = 0;
	}
}

ISR(TIMER0_OVF)
{
	overflow++;
}
