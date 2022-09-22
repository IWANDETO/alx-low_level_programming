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
	int dest_len = 0;
	int src_len = 0;

	for ( ; dest[dest_len] != '\0' ; dest_len++)
	;

	for ( ; dest[dest_len] != '\0' ;)
		dest[dest_len + 1] = src[src_len++];

	dest[dest_len] = '\0';
	return (dest);
}
