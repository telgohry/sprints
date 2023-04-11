/*
 * File  : dio.c
 *
 * Author: Tarek Gohry
 *  
 */ 

// Includes
#include "dio.h"

// Functions Implementation
EN_DIO_ErrorState_t  DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction)
{
	switch(portNumber)
	{
		case PORT_A:
			if(direction == IN)
			{
				CLEAR_BIT(DDRA,pinNumber);
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRA,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
			
		case PORT_B:
			if(direction == IN)
			{
				CLEAR_BIT(DDRB,pinNumber);
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRB,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
			
		case PORT_C:
			if(direction == IN)
			{
				CLEAR_BIT(DDRC,pinNumber);
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRC,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
			
		case PORT_D:
			if(direction == IN)
			{
				CLEAR_BIT(DDRD,pinNumber);
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRD,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
	}
	
	return DIO_ERROR;
}

EN_DIO_ErrorState_t  DIO_write(uint8_t portNumber, uint8_t pinNumber,uint8_t value)
{
	switch(portNumber)
	{
		case PORT_A:
			if(value == LOW)
			{
				CLEAR_BIT(PORTA,pinNumber);
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTA,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
		
		case PORT_B:
			if(value == LOW)
			{
				CLEAR_BIT(PORTB,pinNumber);
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTB,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
		
		case PORT_C:
			if(value == LOW)
			{
				CLEAR_BIT(PORTC,pinNumber);
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTC,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
			return DIO_OK;
		
		case PORT_D:
			if(value == LOW)
			{
				CLEAR_BIT(PORTD,pinNumber);
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTD,pinNumber);
			}
			else
			{
				return DIO_ERROR;
			}
	}	
	
	return DIO_OK;
}

EN_DIO_ErrorState_t  DIO_read(uint8_t portNumber, uint8_t pinNumber,uint8_t *value)
{
	switch(portNumber)
	{
		case PORT_A:
			*value = GET_BIT(PINA, pinNumber);
			return DIO_OK;
		
		case PORT_B:
			*value = GET_BIT(PINB, pinNumber);
			return DIO_OK;
		
		case PORT_C:
			*value = GET_BIT(PINC, pinNumber);
			return DIO_OK;
		
		case PORT_D:
			*value = GET_BIT(PIND, pinNumber);
			return DIO_OK;
			
		default:
			return DIO_ERROR; 
	}	
}

EN_DIO_ErrorState_t  DIO_toggle(uint8_t portNumber, uint8_t pinNumber)
{
	switch(portNumber)
	{
		case PORT_A:
			TOGGLE_BIT(PORTA, pinNumber);
			return DIO_OK;
		
		case PORT_B:
			TOGGLE_BIT(PORTB, pinNumber);
			return DIO_OK;
		
		case PORT_C:
			TOGGLE_BIT(PORTC, pinNumber);
			return DIO_OK;
		
		case PORT_D:
			TOGGLE_BIT(PORTD, pinNumber);
			return DIO_OK;
			
		default:
			return DIO_ERROR;
	}	
}