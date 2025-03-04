#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_recursion - function that returns the value of x and y
 * @x : The current estimate for the square root
 * @n : The number to find the square root of
 * Return: Expected to return an integer
 */

int _sqrt_recursion(int n)

{

static int x;

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (0);
}

if (x * x == n)
{
	return (x);
}
else if (x * x > n)
{
	return (-1);
}
else
{
	x++;
	return (_sqrt_recursion(n));
}
}
