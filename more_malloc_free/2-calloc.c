#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb : How mayne elements to stock
 * @size : size of octet for elements
 *
 * Return: return (ptr)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == 0)
	return (NULL);

for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

return (ptr);
}
