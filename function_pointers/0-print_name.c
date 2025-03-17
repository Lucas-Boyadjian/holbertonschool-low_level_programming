#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name : argument
 * @f : pointer of the function
 * Return: return name
 */

void print_name(char *name, void (*f)(char *))
{

	if (f != NULL && name != NULL)
		f(name);

}
