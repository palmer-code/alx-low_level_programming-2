#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: head pointer
 * @n: new int for node
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_s *new_node;

	new_node = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = head;
	head = new_node;

	return (new_node);

}
