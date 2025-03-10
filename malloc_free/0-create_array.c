#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - function to creat a dynamic array
* @c: Parameter to initialize the array
* @size: Size of the array
* Return: return (array)
*/

char *create_array(unsigned int size, char c)

{
unsigned int i;
char *array;
array = malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			{
			array[i] = c;
			}
	}
else
	{
	return (NULL);
	}
return (array);
}
