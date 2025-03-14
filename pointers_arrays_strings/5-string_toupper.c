#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* string_toupper - Converts all lowercase letters of a string to uppercase.
* @str: The input string to be converted.
* Return: A pointer to the converted string.
*
*/

char *string_toupper(char *str)

{
int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	}
return (str);
}
