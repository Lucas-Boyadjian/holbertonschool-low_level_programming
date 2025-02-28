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
int j;
int length = strlen(str);

char arr[] = {',', ';', '.', '!', '?', '"',
'(', ')', '{', '}', ' ', '\t', '\n'};

int arr_size = sizeof(arr) / sizeof(arr[0]);

if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}
	while (str[i] != '\0')
	{
		for (j = 0; j < arr_size; j++)
   		{
			if (str[i] == arr[j])
			{
				if (i + 1 < length && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				{
				str[i + 1] = str[i + 1] - 32;
				}
			break;
			}
		}
	i++;
	}
	return (str);
}
