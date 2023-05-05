/*
 * interrupts.h
 *
 * Created: 4/11/2023 9:00:47 AM
 *  Author: T2
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

/******************************************************************************************/
/*                                  Interrupt Vectors                                     */
/******************************************************************************************/
/* External Interrupt Vectors */
/* External Interrupt Request 0 */
#define EXT_INT_0 __vector_1
/* External Interrupt Request 1 */
#define EXT_INT_1 __vector_2
/* External Interrupt Request 2 */
#define EXT_INT_2 __vector_3

#define TIMER0_OVF __vector_11

/* Set Global Interrupts, Set the I-bit in status register to 1 */
#define sei() __asm__ __volatile__ ("sei" ::: "memory")

/* Clear Global Interrupts, Set the I-bit in status register to 0 */
#define cli() __asm__ __volatile__ ("cli" ::: "memory")

/* ISR definition */
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal, used));\
void INT_VECT(void)

#endif /* INTERRUPTS_H_ */