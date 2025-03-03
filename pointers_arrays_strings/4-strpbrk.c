#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strpbrk(char *s, char *accept)

{
    int a = 0;
    int b;
    
    while (s[a] != '\0')
    {
        b = 0;

        while (accept[b] != '\0')
        {
            if (s[a] == accept[b])
            return (s + a);
            b++;
        }
     a++;
    }
return (NULL);
}
