#include "main.h"
#include <string.h>

/**
 * _strncpy - entry point
 * @dest: first string
 * @src: second string
 * @n: string
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	size_t dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
