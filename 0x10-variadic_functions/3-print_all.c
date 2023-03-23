#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i = 0, n;
	double f;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			n = va_arg(args, int);
			printf("%d", n);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;

		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
