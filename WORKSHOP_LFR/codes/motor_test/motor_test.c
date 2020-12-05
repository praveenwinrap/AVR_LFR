//Left motor----PB0,PB1
//right motor---PB2,PB3
#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRB=0B00001111;


while(1)
{
PORTB=0b00001010; //forward
_delay_ms(8000);

PORTB=0b00001000; //right motor run(Left turn)
_delay_ms(5000);

PORTB=0b00000010; //left motor run(right turn)
_delay_ms(5000);
}
}
