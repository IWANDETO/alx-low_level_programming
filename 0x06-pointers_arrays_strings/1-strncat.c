#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: msximum number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
