#ifndef LED_DRIVER_H
#define LED_DRIVER_H

/* Initialize LED driver */
void init_led(int led_id);

/* Turn LED on */
void turn_on_led(int led_id);

/* Turn LED off */
void turn_off_led(int led_id);

/* Check the LED state*/
uint8_t  led_GetState(uint8_t buttonId);

#endif /* LED_DRIVER_H */
