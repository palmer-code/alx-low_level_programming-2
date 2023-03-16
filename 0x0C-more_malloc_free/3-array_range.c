#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	int size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
