#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of the program that performs simple operations.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
int (*op_func)(int, int);
int num1;
int num2;

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
			exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
			exit(100);
	}

printf("%d\n", op_func(num1, num2));
return (0);
}
