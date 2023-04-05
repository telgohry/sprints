#ifndef BUTTON_DRIVER_H
#define BUTTON_DRIVER_H

/* Initialize button driver */
void init_button(int button_id);

/* button start is pressed */
void button_start_pressed(void);

/* button stop is pressed */
void button_stop_pressed(void);

/* Check the state of the button*/
uint8_t button_GetState(uint8_t buttonId);

#endif /* BUTTON_DRIVER_H */
