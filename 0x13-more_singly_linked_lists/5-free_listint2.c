#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head pointer
 *
 * Return: head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);

		*head = temp;
	}
	*head = NULL;
}
