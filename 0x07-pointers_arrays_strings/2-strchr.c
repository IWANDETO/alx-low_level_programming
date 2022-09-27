#include "main.h"
/**
 * *_strchr - function locates a character in a string
 * @c: character to be found
 * @s: string
 * Return: pointer to first occurence in s of c
 *	or a null if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == 0)
	{
		return (s);
	}
	return (0);
}
