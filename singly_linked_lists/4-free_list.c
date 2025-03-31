#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the linked list to be freed
 *
 * Return: Nothing
 **/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		if (tmp->str != NULL)
			free(tmp->str);
			
		free(tmp);
	}
}
