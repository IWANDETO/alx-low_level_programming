#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 * @accept: accepted characters of substring
 * @s: string
 * Return: number of bytes in initial segment of s
 *	consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *x = accept;
	unsigned int y = 0;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				y++;
				break;
			}
		if (!(*--accept))
			break;
		accept = x;
	}
	return (y);
}
