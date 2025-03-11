#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - check the code
 * @s1: String 1
 * @s2: String 2
 * @n: number char in string
 * Return: return (total_len)
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int index = 0;
	char *total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

		if (s2 == NULL)
		{
			s2 = "";
		}

while (s1[len1] != '\0')
{
	len1++;
}

	while (len2 < n && s2[len2] != '\0')
	{
		len2++;
	}

	total_len = malloc((len1 + len2 + 1) * sizeof(char));

if (total_len == NULL)
	return (NULL);

for (index = 0; index < len1; index++)
	total_len[index] = s1[index];

for (index = 0; index < len2; index++)
	total_len[len1 + index] = s2[index];

total_len[len1 + len2] = '\0';

return (total_len);
}
