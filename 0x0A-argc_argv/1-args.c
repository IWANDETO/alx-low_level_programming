#include <stdio.h>
#include <stdlib.h>

/**
 *main -Main Program that prints number of arguments passed to it
 * @argc: argument count
 * @argv: string vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
			(void)argv;
	return (0);
}
