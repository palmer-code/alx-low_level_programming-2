#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, result;
	for (i=0; i<=10, i++)
	{
		result = i * 9;
		char tens_digit ='0' + (result / 10);
		char units_digit ='0' + (result % 10);
		
		_putchar(tens_digit);
		_putchar(units_digit);
		_putchar('\n');
	}
}
