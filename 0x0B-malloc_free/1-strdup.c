#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *s;

	if (str == NULL)
		return (0);

	j = 0;
	while (*(str + j))
		j++;

	s = malloc(sizeof(char) * (j + 1));

	if (s == 0)
		return (0);

	for (i = 0; i <= j; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
