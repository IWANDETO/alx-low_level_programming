#include "main.h"
/**
 * swap_int -function swaps the values of two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap; /*temporary int that acts as a placeholder for value of 1 pointer */

	swap = *a; /*value of *a saved in temp */
	*a = *b;   /*value of *b saved in *a */
	*b = swap; /*(initial value of *a) now saved in *b */
}
