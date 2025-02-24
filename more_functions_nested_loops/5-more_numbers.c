#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers - Print numbers 0 to 14
 * Return: Always (Succes)
 */

void more_numbers(void)
{
int number1;
int number2;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			if (number2 >= 10)
			_putchar('1');
			_putchar((number2 % 10) + '0');
		}
_putchar('\n');
	}
}
