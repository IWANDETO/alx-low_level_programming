#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: number to be converted to binary first
 * @index: position of bit in binary number
 * Return: bit at index, or -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);

	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
