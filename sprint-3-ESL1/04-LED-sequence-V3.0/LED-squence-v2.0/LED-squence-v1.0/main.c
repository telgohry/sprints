/*
 * File   : LED-sequence-v1.0.c
 *
 * Author : Tarek Gohry
 * 
 */ 

#include "Application/application.h"
//#include <avr/interrupt.h>

//#define F_CPU 8000000

//#include <util/delay.h>



int main(void)
{
    APP_init();
	APP_start();	
	//LED_init(LED_PORT, LED_1_PIN);
	
	//TCCR0 = 0x00; 
	//SET_BIT(TIMSK, 0);
	//SET_BIT(TCCR0, 1);
	//sei();

}



