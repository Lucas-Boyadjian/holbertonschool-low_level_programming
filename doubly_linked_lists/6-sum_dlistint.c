#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}

