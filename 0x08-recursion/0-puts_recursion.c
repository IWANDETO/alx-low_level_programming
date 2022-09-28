#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string plus new line
 * function main - main function which calls the puts function
 * @s: string to be printed
 * Return; Does not return a value
 */
void _puts_recursion(char *s)
{
	while (*s == 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
int main(void)
{
	char s[0];

	_putchar(*s);
	_puts_recursion;
	return (0);
}
