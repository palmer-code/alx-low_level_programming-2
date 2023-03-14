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

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; len++)
		new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}
