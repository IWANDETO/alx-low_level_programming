#include "main.h"
/**
 * *_memset - function fills memory with a constant byte
 * @b: constant byte
 * @n: number of bytes of memory
 * @s: pointer to string s
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
