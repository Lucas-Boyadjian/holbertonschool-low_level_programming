#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
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
