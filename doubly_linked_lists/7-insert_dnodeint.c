#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * 
 *
 * Return:
 */
 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr_node = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}

	if (curr_node->next == NULL)
		return (add_dnodeint_end(h, n));

	if (curr_node == NULL)
		return (NULL);

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
