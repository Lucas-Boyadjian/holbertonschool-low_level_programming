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

	if (alphabet == 'e' || alphabet == 'q')
	continue;
	}
	putchar('\n');
	return (0);
}
