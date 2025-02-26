#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 -
* @str :
* Return:
*/

void puts2(char *str)

{
char tmp;
int start = 0;
int end = 0;

        while (s[end] != '\0')
                end++;
        end--;

        while (start < end)
        {
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
        }
}
