#include "main.h"
/**
 * prime2 - function to be called
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1.
 * Base case -1 is returned.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
