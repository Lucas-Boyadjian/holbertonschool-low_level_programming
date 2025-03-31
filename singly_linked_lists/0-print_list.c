#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: Pointer to the head of the linked list.
*
* Return: The number of nodes in the linked list.
*/

size_t print_list(const list_t *h)
{
int count = 0;

if (h == NULL)
return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);

}
