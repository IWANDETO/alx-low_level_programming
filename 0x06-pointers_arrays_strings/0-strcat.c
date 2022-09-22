#include "main.h"
/**
 * _strcat - functions that concatenates two strings
 * @dest: the string @src is being added to
 * @src: the string to be appended by the function
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	while (dest[len_dest])
	{
		len_dest++;
	}
	for (; src[len_src] != '\0' ;)
	{
		dest[len_dest++] = src[len_src++];
	}
	dest[len_dest] = '\0';

	return (dest);
}
