#include "lists.h"
/**
 * *add_nodeint - adds node at beginning.
 * @head: pointer to first node.
 * @n: node to be added.
 * Return: new elementor NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodep = NULL;

	nodep = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (nodep == NULL)
		return (NULL);
		
	nodep->n = n;
	nodep->next = NULL;
	nodep->next = *head;
	*head = nodep;
	return (nodep);
}
