/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:22:28
 * Author : SUNDARI
 */ 
#ifdef F_CPU
#define F_CPU 16000000UL
#endif


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB= 0xFF;
    while (1) 
    {
		PORTB= 0xFF;
		_delay_ms(100);
		PORTB= 0x00;
		_delay_ms(100);
    }
}

