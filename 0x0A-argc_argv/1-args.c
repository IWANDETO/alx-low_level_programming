#include <stdio.h>
#include <stdlib.h>

/**
 *main -Main Program that prints number of arguments passed to it
 * @argc: arguement count
 * @argv: string vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("number of arguments is %d\n", argc);
	}
			return (0);
}
