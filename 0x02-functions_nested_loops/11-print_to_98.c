#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: function starts counting from here
  *
  * Return: 0 otherwise
  */
oid print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
