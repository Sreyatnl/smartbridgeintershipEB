/*
 * lbutton.c
 *
 * Created: 10-05-2019 11:52:05
 * Author : SUNDARI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC |=(1<<PC0);
	 DDRC |=(1<<PC1);
	  DDRC |=(1<<PC2);
	   DDRC |=(1<<PC3);
	DDRD &= ~(1<<PD0);
	DDRD &= ~(1<<PD1);
    while (1)  
    {
		if((PIND & (1<<PD0)) ==0)
		{
			PORTC |=(1<<PC0);
			_delay_ms(1000);
			PORTC &= ~(1<<PC0);
			/*PORTC |=(1<<PC1);
			_delay_ms(1000);
			PORTC &= ~(1<<PC1);*/
			PORTC |=(1<<PC2);
			_delay_ms(1000);
			PORTC &= ~(1<<PC2);
			/*PORTC |=(1<<PC3);
			_delay_ms(1000);
			PORTC &= ~(1<<PC3);*/
			
    }
	if((PIND & (1<<PD1)) ==0)
	{
		PORTC |=(1<<PC3);
		_delay_ms(1000);
		PORTC &= ~(1<<PC3);
		/*PORTC |=(1<<PC2);
		_delay_ms(1000);
		PORTC &= ~(1<<PC2);*/
		PORTC |=(1<<PC1);
		_delay_ms(1000);
		PORTC &= ~(1<<PC1);
		/*PORTC |=(1<<PC0);
		_delay_ms(1000);
		PORTC &= ~(1<<PC0);*/
		
	}
}

}