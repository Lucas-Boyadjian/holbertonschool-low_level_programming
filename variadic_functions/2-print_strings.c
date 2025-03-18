#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings, separated by a given string.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
			if (separator != NULL && )
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
