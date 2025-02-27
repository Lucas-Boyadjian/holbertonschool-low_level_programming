#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncpy - Write a function that copies a string
* @src: The source string to be copied.
* @dest: The buffer where the string will be copied.
* @n: Number of characters
* Return: A pointer to the destination string (dest).
*/

char *_strncpy(char *dest, char *src, int n)

{
int a = 0;

while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
	}

while (a < n)
{
dest[a] = '\0';
a++;
	}

return (dest);
}
