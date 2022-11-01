/*
 * led.h
 *
 * Created: 10/13/2022 9:37:46 PM
 *  Author: Nasser
 */ 

#ifndef LED_H_
#define LED_H_
/************************************************************************/
/* Led driver in upper layer, so we include DIO driver(from low layer) inside it */
/************************************************************************/
#include "../../MCAL/Timer Driver/timer.h"
#include "../../MCAL/DIO Driver/dio.h"


/************************************************************************/
/*					3LEDs for cars										*/
/************************************************************************/
// define led1 port and pin
#define LED_C_RED_PORT PORT_A
#define LED_C_RED_PIN PIN0
// define led2 port and pin
#define LED_C_YELLOW_PORT PORT_A
#define LED_C_YELLOW_PIN PIN1
// define led3 port and pin
#define LED_C_GREEN_PORT PORT_A
#define LED_C_GREEN_PIN PIN2

/************************************************************************/
/*					3LEDs for pedestrians                               */
/************************************************************************/
// define led1 port and pin
#define LED_P_RED_PORT PORT_B
#define LED_P_RED_PIN PIN0
// define led2 port and pin
#define LED_P_YELLOW_PORT PORT_B
#define LED_P_YELLOW_PIN PIN1
// define led3 port and pin
#define LED_P_GREEN_PORT PORT_B
#define LED_P_GREEN_PIN PIN2

// functions prototypes
void LED_init(EN_port_t ledPort, EN_pin_t ledPin);
void LED_on(EN_port_t ledPort, EN_pin_t ledPin);
void LED_off(EN_port_t ledPort, EN_pin_t ledPin);
void LED_toggle(EN_port_t ledPort, EN_pin_t ledPin);

#endif /* LED_H_ */