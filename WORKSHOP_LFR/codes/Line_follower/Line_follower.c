//Right sensor---PC3
//Left sensor---PC0

//Left motor----PB0,PB1
//right motor---PB2,PB3
#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>


void main()
{
DDRB=0B00001111;
DDRC=0B00000000;
PORTC=0b00000000;


while(1)
{

if(PINC ==0b00001001)  //two sensors high (LS=1,RS=1)
PORTB=0b00001010; //forward

else if(PINC ==0b00000001) //right sensor on line(LS=1,RS=0)
PORTB=0b00000010; //right turn

else if(PINC ==0b00001000) //left  sensor on line (LS=0,RS=1)
PORTB=0b00001000; //left turn

else
PORTB=0b00000000;


PORTC=0b00000000; //sensor PORT to zero
}




}
