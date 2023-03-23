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
	int i;
	double f;
	const char *str;
	const char *fptr;

	va_start(args, format);

	fptr = format;

	while (fptr && *fptr)
	{
		if (*fptr == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (*fptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*fptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*fptr == 's')
		{
			str = va_arg(args, const char*);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
		++fptr;
	}
	printf("\n");
	va_end(args);
}
