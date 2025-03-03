#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @src: The source string to be copied.
 * @dest: The buffer where the string will be copied.
 * Return: A pointer to the destination string (dest).
 */

char *_strcat(char *dest, char *src)

{

int a = 0;
int b = 0;

while (dest[a] != '\0')
{
	a++;
}

b = 0;

while (src[b] != '\0')
{
	dest[a] = src[b];
	a++;
	b++;
}
dest[a] = '\0';

return (dest);

}
