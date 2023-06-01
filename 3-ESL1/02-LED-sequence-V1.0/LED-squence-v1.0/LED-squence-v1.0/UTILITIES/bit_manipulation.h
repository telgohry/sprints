/*
 * bit_manipulation.h
 *
 * Created: 4/7/2023 7:53:30 PM
 *  Author: T2
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_

/* Set the bit at position 'pos' in 'reg' */
#define SET_BIT(reg, pos) ((reg) |= (1 << (pos)))

/* Clear the bit at position 'pos' in 'reg' */
#define CLEAR_BIT(reg, pos) ((reg) &= ~(1 << (pos)))

/* Toggle the bit at position 'pos' in 'reg' */
#define TOGGLE_BIT(reg, pos) ((reg) ^= (1 << (pos)))

/* Get the value of the bit at position 'pos' in 'reg' */
#define GET_BIT(reg, pos) (((reg) >> (pos)) & 1)



#endif /* BIT_MANIPULATION_H_ */