#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1 : first string
 * @s2 : second string
 * @n : bits to concatenate from s2
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat = malloc((s1_len + n + 1) * sizeof(char));
	if (concat == NULL)
		exit(98);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
