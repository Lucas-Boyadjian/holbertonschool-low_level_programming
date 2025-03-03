#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
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
