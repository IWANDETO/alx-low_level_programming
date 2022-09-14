#include "main.h"
/**
 * print_sign- prints the sign of a number
 * @n: number that is to be checked
 * Return: returns 1 and prints + if n is greater than than zero
 *         returns 0 and prints 0 if n is zero
 *         returns -1 and prints - if n is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
