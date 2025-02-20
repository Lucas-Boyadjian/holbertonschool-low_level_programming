#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98, followed by a new line.
 * @n: The number
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
}
