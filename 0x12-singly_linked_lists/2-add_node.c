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
	list_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
