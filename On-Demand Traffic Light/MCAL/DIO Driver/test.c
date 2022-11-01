/*
 * test.c
 *
 * Created: 10/25/2022 4:56:28 PM
 *  Author: Nasser
 */ 

/*#include "dio.h"
int main(void)
{
	while (1)
	{
		DIO_init(PORT_A, PIN0, OUT);
		DIO_init(PORT_A, PIN1, IN);
		DIO_init(PORT_A, PIN2, OUT);
		DIO_write(PORT_A, PIN0, HIGH);
		DIO_write(PORT_A, PIN2, LOW);
		uint8_t value = 0;
		DIO_read(PORT_A, PIN1, &value);
		if(value)
		{
			DIO_write(PORT_A, PIN2, HIGH);
		}
	}
}*/