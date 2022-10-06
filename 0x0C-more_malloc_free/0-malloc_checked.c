#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -function allocates memory using malloc.
 * @b: size
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == 0)
		exit(98);
	return (a);
}
