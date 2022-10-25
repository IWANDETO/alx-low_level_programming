#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: first node of the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
