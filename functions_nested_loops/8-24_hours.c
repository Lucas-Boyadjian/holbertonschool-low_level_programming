#include "main.h"
#include <time.h>
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*
* Return - Always (Succes)
*/
void jack_bauer(void)
{
int hour;
int minute;
	for (hour = 00; hour <= 23; hour++)
	{
		for (minute = 00; minute <= 59; minute++)
			{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			}
	}
}
