#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - prints character of a string followed by a new line
* @str : String
* Return:
*/

void puts2(char *str)

{
	int i = 0;

		for (i = 0; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
			_putchar(str[i]);
		}
	_putchar('\n');
}
