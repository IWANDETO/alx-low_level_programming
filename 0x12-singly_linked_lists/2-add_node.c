#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: first node
 * @str: string to be stored in node
 *
 * Return: address of the new element, NULL if code fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
