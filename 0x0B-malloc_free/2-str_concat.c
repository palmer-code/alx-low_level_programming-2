#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0, len, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2 + 1;
	result = malloc(len * sizeof(char));

	if (result == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';

	return (result);
}
