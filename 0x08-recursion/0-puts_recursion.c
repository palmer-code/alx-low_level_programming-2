#include "main.h"

/**
 * puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
