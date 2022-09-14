#include "main.h"
/**
 * _isalpha - checks for alphabetic characeter
 * @c: the character to be checked
 * Return: returns 1 if c is lowercase; 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
