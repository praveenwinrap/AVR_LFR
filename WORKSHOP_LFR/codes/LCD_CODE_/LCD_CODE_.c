#define F_CPU 16000000UL			/* Define CPU Frequency e.g. here 8MHz */
#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>			/* Include Delay header file */
#include"lcd.h"
void main()
{

LCD_Init();
LCD_Clear();

LCD_Command(0x80);
LCD_String("i3indya");

LCD_Command(0xc0);
lcd_digit(55);

LCD_Command(0xc6);
LCD_String("tech");

}
