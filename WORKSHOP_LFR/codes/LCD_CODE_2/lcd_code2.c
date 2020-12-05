#define F_CPU 16000000UL			/* Define CPU Frequency e.g. here 8MHz */
#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>			/* Include Delay header file */
#include"lcd.h"
void main()
{
int i=0;
LCD_Init();
LCD_Clear();
LCD_Command(0x80);
LCD_String("Hello Brother");
while(1)
{
LCD_Command(0xc0);
lcd_digit(i);
_delay_ms(1000);
i=i+1;
}

}
