#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints struct dog with the elements initialized
 * if an element is empty, print (nil)
 * if d is NULL, print nothing
 * @d: structure pointer
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
