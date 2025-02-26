#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: pointer to the string to calculate the length.
* Return: length of the string as an integer.
*/

int _strlen(char *s)
{
int compteur = 0;

	while (s[compteur] != '\0')
	{
		compteur++;
	}
return (compteur);
}
