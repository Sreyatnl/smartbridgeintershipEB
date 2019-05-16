/*
 * PWM.c
 *
 * Created: 15-05-2019 11:40:34
 * Author : SUNDARI
 */ 

#define F_CPU 8000000UL
#include "avr/io.h"
#include <util/delay.h>
void PWM_init()
{
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS00) ;
	DDRB|= (1<<PB3);
}

int main(void)
{
    /* Replace with your application code */
	
	DDRB=0xff;
	DDRD=0xff;
	DDRD&=~(1<<PD0);
	DDRD&=~(1<<PD1);
	PWM_init();
    while (1) 
    {
		PORTB=(1<<PB3);
		PORTB&=~(1<<PB0);
		if((PIND&(1<<PD0))==0)
		{
			OCR0=150;
			
		}
		if((PIND&(1<<PD1))==0)
		{
			OCR0=200;
			
		}
}
}

