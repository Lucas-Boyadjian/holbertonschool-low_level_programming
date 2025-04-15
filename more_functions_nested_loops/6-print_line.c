#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_line - Print '_'
 * @n: how many '_'
 * Return: Always (Succes)
 */

void print_line(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
