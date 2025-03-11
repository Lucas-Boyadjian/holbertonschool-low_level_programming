#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: Minimum in the array
 * @max: Maximum in the array
 * Return: return (array)
 */
int *array_range(int min, int max)
{

int *array;
int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

for (i = 0; i < (max - min + 1); i++)
	array[i] = min + i;
return (array);

}
