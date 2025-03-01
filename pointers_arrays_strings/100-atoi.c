#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* _atoi - Function that convert a string to an integer
* @s : The string that needs to be converted to an integer
* Return: return (result * sign);
*
*/

int _atoi(char *s)

{
int result = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0')
	{

	if (s[i] == ' ')
		{
		i++;
		continue;
		}

	if (s[i] == '+' || s[i] == '-')
		{
		if (s[i] == '-')
			{
			sign = -sign;
			}
		i++;
		continue;
		}

	if (s[i] >= '0' && s[i] <= '9')
		{
		result = result * 10 + (s[i] - '0');
		}

	else
		{
		break;
		}

	i++;
	}
return (result * sign);
}


