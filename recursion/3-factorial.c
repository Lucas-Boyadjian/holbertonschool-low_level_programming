#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n : The number to calculate the factorial for
 * Return: The factorial of the number, or -1 if n is negative
 */
int factorial(int n)

{
if (n == 0)
return (1);

else if (n < 0)
return (-1);

else
return (n * factorial(n - 1));
}
