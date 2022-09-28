#include "main.h"
/**
 * factorial - function returns factorial of a number
 * @n: number whose factorial is checked
 * Return -1: Returns -1 when n is lower than 0
 * Reurn 0: Executed successfully
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
