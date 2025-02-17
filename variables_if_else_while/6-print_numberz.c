#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Putchar numbers 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int number;
		for (number = 0 ; number < 10 ; number++)
			{
			putchar(number + '0');
			}
	putchar ('\n');
return (0);
}
