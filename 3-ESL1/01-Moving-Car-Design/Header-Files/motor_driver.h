#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

/* Initialize motor driver */
void init_motor(int motor_id);

/* Set motor speed */
void set_motor_speed(int motor_id, int speed);

/* Stop motor */
void set_motor_direction(int motor_id, int direction);

#endif /* MOTOR_DRIVER_H */
