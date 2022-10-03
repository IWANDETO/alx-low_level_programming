#include <stdio.h>
/**
 * main -function prints arguments
 * @argc: arguement count
 * @argv: string vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
