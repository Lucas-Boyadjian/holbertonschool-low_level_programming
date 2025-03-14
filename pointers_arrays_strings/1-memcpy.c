#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _memcpy - check the code
* @dest : buffer[98]
* @src : buffer2[98]
* @n : how many time
* Return: Return (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

return (dest);

}
