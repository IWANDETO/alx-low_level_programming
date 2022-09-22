#include "main.h"
/**
 * reverse_array - function reverses the content of an array
 * @a: array containing integers
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	n -= 1;

	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
