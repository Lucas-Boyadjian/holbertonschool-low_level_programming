#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position in a doubly linked list
 *
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr_node = *h;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr_node = *h;
	if (curr_node == NULL)
		return (NULL);

	for (i = 0; i < idx - 1 && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
		return (NULL);

	if (curr_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->prev = curr_node;
	new_node->next = curr_node->next;
	curr_node->next->prev = new_node;
	curr_node->next = new_node;

	return (new_node);
}
