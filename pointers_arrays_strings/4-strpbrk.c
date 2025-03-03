#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s : "hello, world"
* @accept : "world"
* Return: Return (s + a) or Return (NULL)
*/

char *_strpbrk(char *s, char *accept)

{

int a = 0;
int b = 0;

while (s[a] != '\0')
{
b = 0;
	while (accept[b] != '\0')
	{
		if (s[a] == accept[b])
			return (s + a);
		b++;
	}
	a++;
}
return (NULL);
}
