#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints all arguments it receives
 * @argc :
 * @argv :
 * Return: Always (Success)
 */

int main(int argc, char *argv[0])

{
int num;
int a;
int b;
int result;

	if (argc == 1)
	{
		printf("0\n");
			return (0);
	}
for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\n0'; j++)
			{
				if (!isdigit(arg[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
a = atoi(argv[1]);
b = atoi(argv[2]);

result = a *b;
printf("%d\n", result);
			return (0);
}
