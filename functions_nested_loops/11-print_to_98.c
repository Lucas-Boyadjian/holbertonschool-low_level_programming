#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98, followed by a new line.
 * @n: The number
 */

void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num < 98; num++)
		{
			printf("%d", num);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (num = n; num > 98; num--)
		{
			printf("%d", num);
			printf(",");
			printf(" ");
		}
	}

	printf("98\n");

}
