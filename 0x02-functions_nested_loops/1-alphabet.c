#include "main.h"
/**
 * print_alphabet -this function Prints the alphabet a to z in lowercase
 *
 * Return: 0;
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
