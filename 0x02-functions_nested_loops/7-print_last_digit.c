#include "main.h"
/**
 * print_last_digit -function prints the last digit of a number
 *
 * @x: number to be checked
 * Return: prints last digit of a number; 0 otherwise
 */

int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
