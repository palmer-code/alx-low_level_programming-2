#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 *
 * is_prime_helper - recursive helper function 
 *
 * @n: number to be checked
 * @i: the divisor
 * 
 * Return: 1 if number is prime otherwise 0
 */

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
