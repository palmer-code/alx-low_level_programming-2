#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: specifies the number of parameters
 *
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	int i;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	var_end(args);

	return (sum);
}
