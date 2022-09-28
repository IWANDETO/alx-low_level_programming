#include "main.h"
/**
 * _pow_recursion - function returns the value of x raised to power of y
 * @x: base interger
 * @y: interger being raised to the power of
 * Return: Returns -1 if y<0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
