#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the last digit of a number
 *
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	if (n >= 0)
{
	return (n % 10);
}
	else
{
	return (-n % 10);
}
}
