//#define F_CPU 16000000UL
#include<avr/io.h>
#include <util/delay.h> 
#include "uart.h"
int main(void)
{
	
  char c;
	DDRB=0b00001111;
	PORTB=0b00000000;
	 uart_init();									
	_delay_ms(100);
 while(1)
 
 
{
c=uart_read();
if(c=='A')
PORTB=0b00001111;
if(c=='B')
PORTB=0b00000000;
	
}
}
