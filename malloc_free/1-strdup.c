#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - function to duplicate the string
* @str : String to duplicate
* Return: return (str_copy)
*/

char *_strdup(char *str)

{
int i;
int size = 0;
char *str_copy;


if (str == NULL)
{
	return (NULL);
}
	while (str[size] != '\0')
	{
		size++;
	}

	str_copy = malloc((size + 1) * sizeof(char));

if (str_copy == NULL)
{
	return (NULL);
}

	for (i = 0; i <= size; i++)
	{
		str_copy[i] = str[i];
	}
return (str_copy);
}
