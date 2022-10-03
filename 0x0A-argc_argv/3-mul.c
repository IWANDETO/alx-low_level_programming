#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints result of multiplication
 * @argc: argument count
 * @argv: string vector
 * Return: 1 if there are no 2 arguments
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
