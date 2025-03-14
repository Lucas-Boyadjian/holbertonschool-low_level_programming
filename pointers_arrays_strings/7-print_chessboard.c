#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_chessboard -  function that prints the chessboard.
* @a : Array 2D
* Return: Always (Success)
*/

void print_chessboard(char (*a)[8])

{

int hori;
int vert;

for (hori = 0; hori < 8; hori++)
	{
	for (vert = 0; vert < 8; vert++)
		{
		_putchar(a[hori][vert]);
		}
	_putchar('\n');
	}
}
