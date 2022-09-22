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
	int i = 0;
	int dest_len = 0;
	int src_len = 0;

	for ( ; dest_len != '\0' && src_len != '\0';)
	{
	dest_len++;
	src_len++;
	}
	for ( ; i <= dest_len; i++)
		dest[dest_len] = src[i];

	dest[dest_len] = '\0';
	return (dest);
}
