#ifndef POINTERFUNCTIONS
#define POINTERFUNCTIONS

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif 
