#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * 
 * @n: starting integer
 *
 * Description: Prints all natural numbers from n - 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <=97; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
