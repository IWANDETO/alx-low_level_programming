#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *struct list_s - String linked list
 *@str: String to be malloc-checked
 *@len: Length of string
 *@next: Points to the next node
 *Description: A structure of a singly linked list node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
