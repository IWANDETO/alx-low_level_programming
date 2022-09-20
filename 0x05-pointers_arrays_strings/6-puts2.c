#include "main.h"
/**
 * puts2 - prints every other character of a  string plus new line
 * @str: string to print
 * Return: returns nothing
 */
void puts2(char *str)
{
	int i = 0;
	int len;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
