#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRB=0B00001111;
while(1)
{
PORTB=0B00000011;
_delay_ms(1000);
PORTB=0B00001100;
_delay_ms(1000);
}
}
