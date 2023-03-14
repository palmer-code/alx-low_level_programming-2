#include "main.h"
#include <stdlib.h>

/**
 * create_array: creates an array of chars,
 *	and initializes it with a specific char
 * @size: size of array to be initialized
 * @c: Specific char to initialize the array
 *
 * Return: If size == 0 function fails - NULL Otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char* arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
