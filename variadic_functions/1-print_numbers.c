#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers, separated by a given string.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

if (separator == NULL)
printf(", ");

printf("\n");
}
