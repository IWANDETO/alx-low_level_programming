#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: pointer to first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *nodep = NULL;

	nodep = malloc(sizeof(listint_t));

	if (h == NULL)
		return (0);
	if (nodep == NULL)
		return (0);
	nodep = h;
	while (nodep != NULL)
	{
		count++;
		nodep = nodep->next;
	}
	return (count);
}
