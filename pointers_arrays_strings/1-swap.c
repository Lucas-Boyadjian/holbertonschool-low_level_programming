#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: A pointer with a value
* @b: A other pointer with a other value
*/

void swap_int(int *a, int *b)

{
int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
