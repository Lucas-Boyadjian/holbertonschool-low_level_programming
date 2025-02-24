#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers - Print numbers 0 to 9 but not 2 and 4
 * Return: Always (Succes)
 */

void print_most_numbers(void)

{
char number;
	for (number = 48; number <= 57; number++)
		{
		if (number == 50 || number == 52)
		continue;
			_putchar(number);
		}
_putchar('\n');
}
