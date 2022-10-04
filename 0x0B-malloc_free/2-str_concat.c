#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to s1 and s2 combined and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int s3len;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	s3len = s1len + s2len;

	s3 = malloc(sizeof(char) * s3len + 1);
	if (s3 == NULL)
		return (NULL);

	while (i < s1len)
	{
		s3[i] = s1[i];
		i++;
	}

	while (i <= s3len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
