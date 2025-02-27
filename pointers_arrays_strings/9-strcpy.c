#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @src: The source string to be copied.
 * @dest: The buffer where the string will be copied.
 * Return: A pointer to the destination string (dest).
 */

char *_strcpy(char *dest, char *src)
{

int length = 0;

	while (src[length] != '\0')
	{
	dest[length] = src[length];
	length++;
		}

dest[length] = '\0';

return (dest);
}
