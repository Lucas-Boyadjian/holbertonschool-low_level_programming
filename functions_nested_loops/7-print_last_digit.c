#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the last digit of a number
 *
 * Return: The last digit of a number
 */

int print_last_digit(int n)

{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar(n + '0');

	return (n);
}
