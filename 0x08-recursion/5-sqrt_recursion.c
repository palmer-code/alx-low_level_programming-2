#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural square root of
 *
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */
int square_root_helper(int n, int start, int end)
{
	if (n < 0)
	{
		return (-1);
	}
	if (start > end)
	{
		return (-1);
	}
	int mid = (start + end) / 2;
	int sqrt = n / mid;

	if (sqrt == mid)
	{
		return (sqrt);
	}
	else if (sqrt < mid)
	{
		return (square_root_helper(n, start, mid - 1));
	}
	else
	{
		return (square_root_helper(n, mid + 1, end));
	}
}
int _sqrt_recursion(int n)
{
	return (square_root_helper(n, 1, n));
}
