#include "main.h"
/**
 * print_alphabet_x10-function Prints 10x alphabet in lowercase + new line
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int alphabet1;

	for (alphabet = 0; alphabet < 10; alphabet++)
	{
		for (alphabet1 = 'a'; alphabet1 <= 'z'; alphabet1++)
		{
			_putchar(alphabet1);
		}
		_putchar('\n');
	}
}
