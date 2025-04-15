#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_triangle - print a triangle with 3 variables
 * @size: Size of the triangle
 * Return: Always (Success)
 */
void print_triangle(int size)
{
	int ligne;
	int espace;
	int dieze;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (ligne = 0; ligne < size; ligne++)
	{
		for (espace = 0; espace < size - ligne - 1; espace++)
		{
			_putchar(' ');
		}

		for (dieze = 0; dieze < ligne + 1; dieze++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
