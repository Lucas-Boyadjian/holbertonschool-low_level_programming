#include <stdio.h>
/**
 * main - Print th alphabet without  q and e
 *
 * Return: Always (Success)
 */
	int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet < 'z' ; alphabet++)
	{
	putchar(alphabet);

	if (alphabet == 'd' || alphabet == 'p')
	alphabet ++;
	}
	putchar('\n');
	return (0);
}
