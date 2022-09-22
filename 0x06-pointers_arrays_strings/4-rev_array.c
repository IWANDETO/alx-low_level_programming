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
	int j, k, tmp;

	for (j = 0; j < n - 1; j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			tmp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = tmp;
		}
	}
}
