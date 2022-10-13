#ifndef POINTERFUNCTIONS
#define POINTERFUNCTIONS

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif 
