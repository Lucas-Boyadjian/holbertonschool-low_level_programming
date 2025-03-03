#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strchr(char *s, char c)

{
int i = 0;

while (s[i] != '\0')
	{
		if (s[i] == c)
		return (s + i);
		i++;
		
	}
	return (NULL);
}
