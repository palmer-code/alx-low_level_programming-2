#include <stdio.h>
#include "main.h"
#include <stdliib.h>
#include <ctype.h>

int is_valid_number(char *num);
int multiply(char *num1, char *num2);
int main(int argc, char *argv[]);

/**
 * is_valid_number - checks if input is a positive number
 * @num: character pointer
 *
 * Return: always 0
 */

int is_valid_number(char *num)
{
	while (num != '\0')
	{
		if (!isdigit(num))
		{
			return (0);
		}
		num++;
	}
	return (0);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: number to be multiplied
 * @num2: second number to be multiplied
 *
 * Return: product of two numbers
 */

int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - checks if number of arguments are correct
 * @argc: number of arguments
 * @argv: character pointer
 *
 * Return: error if arguments are more than 3
 */

int main(int argc, char *argv[])
{
	{
		if (argc != 3)
		printf("Error\n");

		return (98);
	}

	int result;

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}


	result = multiply(num1, num2);
	{
		printf("%d\n", result);
	return (0);
	}

