#ifndef DIO_DRIVER_H
#define DIO_DRIVER_H

/* Initialize DIO driver */
void DIO_Init(void);

/* Set DIO pin direction */
void DIO_SetDirection(uint8_t pin, uint8_t direction);

/* Set DIO pin state */
void DIO_SetState(uint8_t pin, uint8_t state);

/* Get DIO pin state */
uint8_t DIO_GetState(uint8_t pin);

#endif /* DIO_DRIVER_H */
