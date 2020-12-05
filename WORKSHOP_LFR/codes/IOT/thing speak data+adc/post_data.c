#define F_CPU 16000000UL

#include<avr/io.h>
#include<util/delay.h>
#include "uart.h"
#include"adc.h"

void main()
{
DDRB=0b11111111;
PORTB=0b11111111;
unsigned char digital;
uart_init();
adc_init();
_delay_ms(1000);
uart_string("AT+CWMODE=3\r\n");
_delay_ms(3000);


uart_string("AT+CWJAP=\"hotspot\",\"password\"\r\n");
_delay_ms(5000);
_delay_ms(5000);
_delay_ms(5000);
while(1)
{
digital=getdata(0);

uart_string("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
_delay_ms(3000);


uart_string("AT+CIPSEND=51\r\n");
_delay_ms(100);

uart_string("GET /update?api_key=HNI8SQCY8TU970TO&field1=");
uart_num(digital);
uart_string("\r\n");
_delay_ms(100);


uart_string("AT+CIPCLOSE\r\n");
_delay_ms(6000);


}
}
