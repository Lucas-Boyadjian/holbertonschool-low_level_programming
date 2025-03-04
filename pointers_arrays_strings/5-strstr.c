#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strstr - function that locates a substring.
* @haystack : "hello, world"
* @needle : "world"
* Return: Return (haystack + a) or (NULL)
*/

char *_strstr(char *haystack, char *needle)

{

int a = 0;
int b = 0;

if (needle[b] == '\0')
return (haystack);

while (haystack[a] != '\0')
{
b = 0;
	if (haystack[a] == needle[b])
	{
		while (needle[b] != haystack[a + b])
		{
			if (haystack[a + b] != needle[b])
			break;
		}
	return (haystack + a);
	}
a++;
}
return (NULL);
}
