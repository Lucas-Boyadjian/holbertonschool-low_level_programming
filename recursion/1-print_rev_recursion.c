#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s : String
 * Return: A pointer to the destination string (dest).
 */

void _print_rev_recursion(char *s)

{

int i = 0;

if (*s == '\0')
	{
	return;
	}
_print_rev_recursion(s + 1);
_putchar(s[i]);

}
