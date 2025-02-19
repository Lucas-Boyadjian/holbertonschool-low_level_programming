#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int n;
int m;
int x;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			x = n * m;

			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
