#include <stdio.h>
#include <stdlib.h>

/**
 *main -function prints result of positive numbers
 *@argc: argument count
 *@argv: number of arguments compiled
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
