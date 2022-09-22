#include "main.h"
/**
 * _strcat -function concatenates two strings
 * appends the src string to the dest string
 * overwrites the terminating null byte at the end of dest and adds a null byte
 *returns a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;
	int src_len = 0;

	for(; dest_len != '\0' && src_len != '\0';)
	{
	dest_len++;
	src_len++;
	}
	for(; i <= dest_len; i++)
		dest[dest_len] = src[i];
	return dest;
}
