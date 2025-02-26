#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s : The string to be printed.
* Return: The prints in reversee
*/

void rev_string(char *s)
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
