#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - Function that concatenates two strings
* @s1 : First string
* @s2 : Second string
* Return: return (full_str)
*/

char *str_concat(char *s1, char *s2)

{
int i;
int j;
int len1 = 0;
int len2 = 0;
char *full_str;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
{
	len1++;
}

	while (s2[len2] != '\0')
	{
		len2++;
	}

full_str = malloc((len1 + len2 + 1) * sizeof(char));

if (full_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
full_str[i] = s1[i];

	for (j = 0; j < len2; j++)
	full_str[i + j] = s2[j];

		full_str[i + j] = '\0';

return (full_str);

}
