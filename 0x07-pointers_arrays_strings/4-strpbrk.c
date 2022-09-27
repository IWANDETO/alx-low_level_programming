#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @accept: pointer to char
 * @s: pointer to char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
