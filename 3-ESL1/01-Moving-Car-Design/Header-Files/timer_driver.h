#ifndef TIMER_DRIVER_H
#define TIMER_DRIVER_H

/* Initialize timer driver */
void timer_init(void);

/* Start timer */
void timer_start(uint16_t interval_ms);

/* Stop timer */
void timer_stop(void);

/* Check the timer state */
uint8_t timer_GetState(uint8_t buttonId);

#endif /* TIMER_DRIVER_H */
