
#define F_CPU 12000000UL

#include<avr/io.h>
#include<util/delay.h>
#include "uart.h"

char LK,as[20];


void main()
{
char c[20];
int i;
DDRB=0xff;
PORTB=0xff;
uart_init();

_delay_ms(1000);
uart_string("AT+CWMODE=3\r\n");
_delay_ms(3000);


uart_string("AT+CWJAP=\"nex\",\"asdfghjkl\"\r\n");
_delay_ms(5000);
_delay_ms(5000);
_delay_ms(5000);


while(1)
{

uart_string("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
_delay_ms(3000);
_delay_ms(2000);

uart_string("AT+CIPSEND=42\r\n");
_delay_ms(1000);

uart_string("GET /channels/410218/fields/1/last.txt\r\n");

_delay_ms(1000);



uart_string("AT+CIPCLOSE\r\n");
_delay_ms(3000);
_delay_ms(1000);



}
}
