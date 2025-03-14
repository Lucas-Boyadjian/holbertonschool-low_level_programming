#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _memset - fills memory with a constant byte
* @s: (buffer, 98)
* @b : 0x01
* @n : 95
* Return: Return (s).
*/

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

return (s);
}
