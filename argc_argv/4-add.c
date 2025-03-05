#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints all arguments it receives
 * @argc :
 * @argv :
 * Return: Always (Success)
 */

int main(int argc, char *argv[])

{
int num;
int a;
int b;
int result = 0;

if (argc <= 1)
	{
		printf("0\n");
			return (0);
	}

if (argc < 1)
{
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
						return (1);
				}
			}

num = atoi(argv[a]);
result += num;

	}

printf("%d\n", result);

}

return (0);
}
