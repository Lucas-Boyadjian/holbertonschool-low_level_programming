#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * int_isupper - Value A to Z
 * @c: Character
 * Return: if c is uppercase return 1 and return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
