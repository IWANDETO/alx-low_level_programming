#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	return (s);
}
