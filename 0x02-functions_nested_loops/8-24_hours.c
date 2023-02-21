#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */

void jack_bauer(void) 
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++) 
    {
        for (minute = 0; minute < 60; minute++) 
	{
            char hour_tens = '0' + (hour / 10);
            char hour_units = '0' + (hour % 10);
            char minute_tens = '0' + (minute / 10);
            char minute_units = '0' + (minute % 10);
	    	_putchar(hour_tens);
		_putchar(hour_units);
		_putchar(':');
	       	_putchar(minute_tens);
		_putchar(minute_units);
		_putchar('\n');
        }
    }
}

