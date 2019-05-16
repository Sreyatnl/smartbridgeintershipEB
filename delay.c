/*
 * delay.c
 *
 * Created: 15-05-2019 10:38:25
 * Author : SUNDARI
 */ 

#include <avr/io.h>
#define  LED PB0


int main(void)
{
	uint8_t timerOverflowCount=0;
	DDRB=0XFF;
	TCNT0=0X00;
	TCCR0=(1<<CS00)|(1<<CS02);
    /* Replace with your application code */
    while (1) 
    {
		
		if (TCNT0==199)
		{
			PORTB^=(0X01<<LED);
			timerOverflowCount=0;
		}
		else{
			PORTB^=(0X00<<LED);
			timerOverflowCount=0;
			
		}
    }
}

