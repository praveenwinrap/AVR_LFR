#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRD=0B00000100;
while(1)
{
PORTD=0B00000100;
_delay_ms(1000);
PORTD=0B00000000;
_delay_ms(1000);
}
}
