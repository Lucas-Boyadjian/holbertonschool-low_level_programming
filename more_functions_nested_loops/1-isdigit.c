#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Value 0 through 9
 * @c: Character to check
 * Return: if c is 0 through 9 return 1, and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
