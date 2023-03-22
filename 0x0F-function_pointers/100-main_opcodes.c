#include <stdio.h>
#include <stdlib.h>

void print_opcodes(void *addr, int nbytes);

/**
 * main - prints opcodes of itself
 * @argc: number of command line arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int nbytes;
	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, nbytes);
	return (0);
}

/**
 * print_opcodes - pointer to an address in memory & number of bytes to print
 * @addr: pointer to an address in memory
 * @nbytes: number of bytes
 *
 * Return: number oof bytes in hexadecimal format
 */

void print_opcodes(void *addr, int nbytes)
{
	unsigned char *p = addr;
	int i;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", *(p + i));
	}

	printf("\n");
}
