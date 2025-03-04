#include "main.h"
#include <stdio.h>

/**
*_sqrt_helper -
*_sqrt_recursion -
* @n: the number to find the square root of
* @number: the current guess for the square root
* Return: the square root of n if it exists, otherwise -1
*/

int _sqrt_helper(int n, int number)
{
if (number * number > n)
return (-1);
if (number * number == n)
return (number);
return (_sqrt_helper(n, number + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 1));
}
