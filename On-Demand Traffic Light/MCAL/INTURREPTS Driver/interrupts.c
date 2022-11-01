/*
 * interrupts.c
 *
 * Created: 10/13/2022 9:39:57 PM
 *  Author: Nasser
 */ 

#include "interrupts.h"
void interrupt_rising_init(void)
{
	/*
		Description: this function initialize external interrupt 0 and its sense to rising edge
		inputs: none
		outputs: none
		return: none
	*/
	// 1. Enable global interrupt(setting bit 7 in status register to 1
	sei();
	// 2. Choosing the external interrupt sense (sense on the rising edge)
	MCUCR |= (1 << 0) | (1 << 1);
	// 3.Enable External interrupt 0(INT0)
	GICR |= (1 << 6);
	
}