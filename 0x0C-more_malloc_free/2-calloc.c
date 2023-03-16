#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: number of bytes
 *
 * Return: pointer to an allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int nmemb, size, *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
		memset(ptr, 0, nmemb * size);

	return (ptr);
}
