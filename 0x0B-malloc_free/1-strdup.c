#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 *	containing a copy of string given as  a parameter
 * @str: string to be copied
 *
 * Return: If str == NULL - Null
 *	Otherwisw a pointer to duplicated string
 */

char *_strdup(char *str)
{
	int len;
	char *copy;

	if (str == NULL)

		return (NULL);

	len = strlen(str);

	copy = malloc(len + 1);

	if (copy == NULL)
		return (NULL);

	memcpy(copy, str, len + 1);

	return (copy);
}
