#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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

