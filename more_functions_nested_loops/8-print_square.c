#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_diagonal - Print '\'
 * @n: Print numbers of '\'
 * Return: Always (Succes)
 */

void print_square(int size)

{
int a;
int b;
	if (size <= 0)
	{
	_putchar('\n');
	}
a = 0;
		while (a < size)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		a++;
		}
}
