#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strchr - function that locates a character in a string
* @s : "hello"
* @c : "l"
* Return: Return (s + i) ou Return (NULL)
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);
			return (NULL);
}
