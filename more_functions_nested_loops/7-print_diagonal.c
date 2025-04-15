#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_diagonal - Print '\'
 * @n: Print numbers of '\'
 * Return: Always (Succes)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	a = 0;
	while (a < n)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	a++;
	}
}
