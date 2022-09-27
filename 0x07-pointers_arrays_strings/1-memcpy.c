#include "main.h"
/**
 * *_memcpy- function copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: the pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
