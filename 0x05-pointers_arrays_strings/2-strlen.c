#include "main.h"
/**
 * _strlen -function returns the length of a string
 * @s: string whose length is to being checked
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++) /*counts characters in string until 0. */
		a++;

	return (a);
}
