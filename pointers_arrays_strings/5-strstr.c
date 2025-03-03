#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)

{
    int a = 0;
    int b;
    
    while (haystack[a] != '\0')
    {
        while (accept[b] != '\0')
        {   
        if (haystack[a] == needle[b])
            return (haystack(a));
            b++;
        }
     a++;
    }
return (NULL);
}


