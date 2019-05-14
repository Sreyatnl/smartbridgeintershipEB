/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:22:28
 * Author : SUNDARI
 */ 
#ifdef F_CPU
#define F_CPU 16000000
#endif


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB= 0xFF;
    while (1) 
    {
		PORTA= 0xFF;
		_delay_ms(1000);
		PORTA= 0x00;
		_delay_ms(1000);
		PORTB= 0xFF;
		_delay_ms(1000);
		PORTB= 0x00;
		_delay_ms(1000);
		PORTC= 0xFF;
		_delay_ms(1000);
		PORTC= 0x00;
		_delay_ms(1000);
		PORTD= 0xFF;
		_delay_ms(1000);
		PORTD= 0x00;
		_delay_ms(1000);
    }
}

