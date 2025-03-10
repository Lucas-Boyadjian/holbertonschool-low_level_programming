#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Function that frees a 2 dimensional grid
* @grid : Variable represent a array of 2 dimensions
* @height : Hauteur
* Return: free(grid)
*/

void free_grid(int **grid, int height)

{

int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
