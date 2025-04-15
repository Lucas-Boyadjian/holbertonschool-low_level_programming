#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - Print numbers 0 to 9
 * Return: Always (Succes)
 */

void print_numbers(void)
{
	char number;

	for (number = 48; number <= 57; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
