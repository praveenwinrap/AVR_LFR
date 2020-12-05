@echo off
color f0
title AvrDude GUI Command Window
@echo.
@echo. trying to connect to device...
avrdude -p ATMEGA8 -c usbasp -P COM1  -U flash:w:"D:\worshop\LFR\WORKSHOP_LFR\codes\LCD_CODE_2\default\lcd_code2.hex":i
avrdudeGUI.exe -done
pause