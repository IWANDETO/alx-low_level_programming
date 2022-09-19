#include "main.h"
/**
 * print_rev - function prints a string in reverse followed by a new line
 * @s: string to print
  * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
