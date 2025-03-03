#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
    unsigned int i = 0;

    while (i < n)
    {
        dest[i] = src [i];
        i++;
    }

    return (dest);
    
}
