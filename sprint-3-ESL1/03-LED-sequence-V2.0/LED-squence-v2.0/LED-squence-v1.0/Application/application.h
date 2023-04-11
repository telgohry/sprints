/*
 * File  : application.h
 *
 * Author: Tarek Gohry
 *  
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

// includes 
#include "../ECUAL/BUTTON/button.h"
#include "../ECUAL/LED/led.h"
#include "../MCAL/Interrupt library/interrupts.h"

// typedefs
typedef enum
{
	APP_OK,
	APP_ERROR
}EN_APP_ErrorState_t;

// functions prototypes
EN_APP_ErrorState_t  APP_init(void);
EN_APP_ErrorState_t  APP_start(void);



#endif /* APPLICATION_H_ */