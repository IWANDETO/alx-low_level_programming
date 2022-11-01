#include "main.h"

unsigned int _pow(unsigned int base, int index);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number, 0 if b is NULL
 *         or if there's one or more chars that are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int power = 0;
	int output = 0;

	if (b == NULL)
		return (0);

	for (; *(b + len) != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	--len;

	for (; len >= 0; len--)
	{
		if (b[len] == '1')
		{
			output += _pow(2, power);
		}
		power++;
	}
	return (output);
}

/**
 * _pow - calculates power of an integer
 * @base: base
 * @index: power
 * Return: int raised to power
 */

unsigned int _pow(unsigned int base, int index)
{
	unsigned int product = 1;

	if (index == 0)
		return (1);

	while (index > 0)
	{
		product *= base;
		index--;
	}
	return (product);
}
