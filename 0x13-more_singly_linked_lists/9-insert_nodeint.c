#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head pointer
 * @idx: index to insert new node
 * @n: data for new node
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
