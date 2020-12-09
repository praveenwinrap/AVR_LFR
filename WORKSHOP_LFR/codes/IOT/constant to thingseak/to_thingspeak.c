#define F_CPU 16000000UL

#include<avr/io.h>
#include<util/delay.h>
#include "uart.h"



void main()
{
uart_init();
_delay_ms(1000);
uart_string("AT+CWMODE=3\r\n");
_delay_ms(3000);


uart_string("AT+CWJAP=\"nex\",\"asdfghjkl\"\r\n");
_delay_ms(15000);

while(1)
{
uart_string("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n");
_delay_ms(5000);

uart_string("AT+CIPSEND=49\r\n");
_delay_ms(500);

uart_string("GET /update?api_key=YOUR_TOKEN&field1=8\r\n");
_delay_ms(100);

uart_string("AT+CIPCLOSE\r\n");
_delay_ms(6000);


}
}
