#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else if (hour >= 10)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			if (minute < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minute + '0');
			}
			else if (minute >= 10)
			{
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
