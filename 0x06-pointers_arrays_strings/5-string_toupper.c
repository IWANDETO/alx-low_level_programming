#include "main.h"
/**
 * string_toupper - print capital alphabet
 * @str: pointer to address
 * Return: Returns 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
