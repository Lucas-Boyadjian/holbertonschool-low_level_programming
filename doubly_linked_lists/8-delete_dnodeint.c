#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * 
 * 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr_node;

	if (*head == NULL)
		return (-1);

	curr_node = *head;

	if (index == 0)
	{
		*head = curr_node->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(curr_node);
		return (1);
	}

	for (i = 0; i < index && curr_node != NULL; i++)
	{
		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
		return (-1);

	if (curr_node->prev != NULL)
		curr_node->prev->next = curr_node->next;

	if (curr_node->next != NULL)
		curr_node->next->prev = curr_node->prev;

	free(curr_node);
	return (1);
}
