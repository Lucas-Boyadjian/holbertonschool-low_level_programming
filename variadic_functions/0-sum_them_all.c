#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - Sums all its parameters.
* @n: The number of arguments passed to the function.
*
* Return: The sum of all parameters, or 0 if n is 0.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list args;
va_start(args, n);

	if (n == 0)
		return (0);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", va_arg(args, const unsigned int));

	}
}
