#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet x10
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		char alphabet;

			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			{
				_putchar(alphabet);
			}
	_putchar('\n');
	}
}
