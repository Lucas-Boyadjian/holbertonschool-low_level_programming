#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - Function that returns a pointer to a array of integers
* @width : Largeur
* @height : Hauteur
* Return: return (full_str)
*/

int **alloc_grid(int width, int height)

{
int i;
int j;
int **array;

if (width <= 0 || height <= 0)
	return (NULL);

array = malloc(height * sizeof(int *));

if (array == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
		free(array);
		return (NULL);
		}
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
}
return (array);
}
