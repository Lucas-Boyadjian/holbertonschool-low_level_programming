#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if last digit is more than 5, is zero or less than 6
 *
 * Return: Always (Success)
 */
	int main(void)
	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is zero\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	return (0);
	}
