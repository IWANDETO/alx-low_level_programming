#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - function that prints a name
* @name: name of the person
* @f: input pointer function
* Return: return nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
	Return(0);
}
