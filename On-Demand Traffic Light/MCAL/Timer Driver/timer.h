/*
 * timer.h
 *
 * Created: 10/13/2022 9:47:14 PM
 *  Author: Nasser
 */ 

#ifndef TIMER_H_
#define TIMER_H_
#include "../../utilities/registers.h"
#include "../../utilities/typedefs.h"


void TIMER_init(void);
void TIMER_start(uint16_t preScalar, uint32_t number_of_overflow);
void TIMER_stop(void);
void delay_5s(void);

#endif /* TIMER_H_ */