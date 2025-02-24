#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - Print numbers 0 to 9
 * Return: Always (Succes)
 */

void print_diagonal(int n)
{
int num;

if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
                n--;
                }
_putchar('\n');
}

