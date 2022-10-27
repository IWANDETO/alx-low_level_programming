#include "lists.h"
/**
 *print_listint - prints all elements of a list
 *@h: pointer to the firsy node.
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	if (h == NULL)
		return (0);
	
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
