#include "main.h"
#include <stdlib.h>

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
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	new_str = malloc(len * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; len++)
		new_str[i] = str[i];

	return (new_str);
}
