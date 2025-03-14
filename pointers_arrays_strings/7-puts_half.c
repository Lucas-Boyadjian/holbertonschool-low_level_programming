#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: Pointer of the string
*/
void puts_half(char *str)

{
int length = 0;
int n;
int i;

	while (str[length] != '\0')
	{
		length++;
	}

n = (length + 1) / 2;

	for (i = n ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
