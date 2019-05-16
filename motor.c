/*
 * MOTOR.c
 *
 * Created: 15-05-2019 14:17:15
 * Author : SUNDARI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0x01;
	
		_delay_ms(1000);
		PORTB=0x00;
		_delay_ms(1000);
		PORTB=0x02;
		_delay_ms(1000);
		PORTB=0x00;
		_delay_ms(1000);
		
		
		
    }
}

