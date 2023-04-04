#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	struct listint_s *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
