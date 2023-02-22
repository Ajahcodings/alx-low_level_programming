#include "main.h"

/**
 * jack_bauer - a function that prints every minutes of the day of Jack B
 * starting from 00:00 to 23:59
 * Description: Using neste while loops,
 * count up through every minutes of the day and print 
 */
void jack_bauer(void)
{
	int hour = 0, min;

	while (min < 60)
	{
		_putchar(hour / 10) + '0');
		_putchar(hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		min++;
	}
	hour++;
}
