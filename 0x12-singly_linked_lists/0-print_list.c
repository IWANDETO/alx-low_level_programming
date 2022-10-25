#include "lists.h"

/**
 * print_list - prints all elements of the list_t list
 * @h: list to be printed out
 * Return: Return the number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%i] %s\n", h->len, h->str);

	h = h->next;
	counter++;
	}
	return (counter);
}
