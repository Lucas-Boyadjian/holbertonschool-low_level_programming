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
int num;
	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
