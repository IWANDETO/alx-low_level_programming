#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: nothing
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);

	else
		return (0);
}
