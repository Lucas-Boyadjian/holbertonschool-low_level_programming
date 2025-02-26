#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - Prints a string in reverse followed by a new line.
* @s : The string to be printed.
* Return: The prints in reversee
*/

void print_rev(char *s)
{
int end = 0;

if (s == NULL)
return;
	while (s[end] != '\0')
	{
		end++;
	}
	end--;


	while (end >= 0)
	{
		_putchar(s[end]);
		end--;
	}
_putchar('\n');
}
