/*
 * button.c
 *
 * Created: 10/13/2022 9:37:03 PM
 *  Author: Nasser
 */ 

#include "button.h"

//initialize
void Button_init(EN_port_t buttonPort, EN_pin_t buttonPin) // Button is an input device
{
	DIO_init(buttonPort, buttonPin, IN);
}

// get button status
void Button_get_state(EN_port_t buttonPort, EN_pin_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPort, buttonPin, value);
}