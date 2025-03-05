#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that prints the number of arguments passed into it.
* @argc : Count tab
* @argv : Values of tab
* Return: Always (Success)
*/

int main(int argc, char *argv[])

{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
