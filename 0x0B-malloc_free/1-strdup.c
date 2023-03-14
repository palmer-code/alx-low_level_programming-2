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
	new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (int i = 0; i < len; len++)
		new_str[i] = str[i];

	return (new_str);
}
