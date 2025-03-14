#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strspn - function that gets the length of a prefix substring
* @s : "hello, world"
* @accept : "oleh"
* Return: Return (c)
*/

unsigned int _strspn(char *s, char *accept)

{
int a = 0;
int b;
int c = 0;

while (s[a] != '\0')
{
b = 0;
	while (accept[b] != '\0')
	{
		if (s[a] == accept[b])
		{
			c++;
			break;
		}
	b++;
	}

		if (accept[b] == '\0')
			break;
			a++;
}
return (c);
}
