#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src including null byte(\0)
 * to the buffer pointed to by dest
 * @src: source of string to be copied
 * @dest: destination of string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
