#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
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
