#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* cap_string - function that capitalizes all words of a string
* @str: All lowercase letters
* Return: str
*/

char *cap_string(char *str)

{
int i = 0;
char arr[] = {',', ';', '.', '!', '?', '"',
'(', ')', '{', '}', ' ', '\t', '\n'};

while (str[i] != '\0')
	{
	while (arr[i] < '\0')
	if (i == 0)
		{
		if (str[i] >= 'a' && str[i] <= 'z')
			{
			str[i] = str[i] - 32;
			}
		}
		i++;
	}
return (str);
}
