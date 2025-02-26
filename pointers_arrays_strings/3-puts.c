#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout
* @str : "I do not fear computers. I fear the lack of them - Isaac Asimov"
* Return: length of the string as an integer.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
}
