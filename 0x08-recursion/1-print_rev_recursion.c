#include "main.h"
/**
 * _print_rev_recursion - function prints string in reverse using recursion
 * @s: string that is to be printed
 * Return: Returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion;
		s++;
		_putchar(*s);
	}
}
