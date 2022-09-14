#include <unistd.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			write(1, &c);
			write(1, ",", 1);
			write(1, " ", 1);
		}

		_putchar('\n');
	}
}
