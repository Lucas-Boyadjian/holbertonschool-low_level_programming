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
int i = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
	return (s + i);
i++;
}
if (c == '\0')
return (s)

return (NULL);
}
