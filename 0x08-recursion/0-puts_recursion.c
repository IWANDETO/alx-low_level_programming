#include "main.h"
/**
 * _puts_recursion - function that prints a string plus new line
 * @s: string to be printed
 * Return; Does not return a value
 */
void _puts_recursion(char *s);
{
	if (*s == '0\')
	{
		putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

