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
	char alphabet;

		for (number = 0 ; number < 10 ; number++)
{
		putchar(number + '0');
}
		for (alphabet = 'a' ; alphabet <= 'f' ; alphabet++)
{
		putchar(alphabet);
}
putchar ('\n');
return (0);
}
