#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcmp - Write a function that compares two strings
* @s1: The source string to be copied.
* @s2: The buffer where the string will be copied.
* Return: s1-
*/

int _strcmp(char *s1, char *s2)

{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}
return (*s1 - *s2);
}
