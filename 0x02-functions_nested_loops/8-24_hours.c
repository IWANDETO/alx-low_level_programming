#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 - 23:59
 *
 * Return: prints time, 0 otherwise
 *
 */

void jack_bauer(void)
{
int i, j, k, l;

for (i = 48; i <= 50; i++)
{
	for (j = 48; j <= 57; j++)
	{
		if ((i <= 49 && j <= 57) || (i <= 50 && j <= 51))
			{
				for (k = 48; k <= 53; k++)
				{
					for (l = 48; l <= 57; l++)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
	}
}
}
