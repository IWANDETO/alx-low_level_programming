#include "main.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 - 23:59
 *
 * Return: prints time, 0 otherwise
 *
 */
void jack_bauer(void)
{
	int minute;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
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
