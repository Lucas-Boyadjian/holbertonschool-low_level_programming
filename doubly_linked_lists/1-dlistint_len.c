#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
