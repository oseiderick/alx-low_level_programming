#include "main.h"
#include <string.h>

/**
 * _strncpy - entry point
 * @*dest: first string
 * @src: second string
 * @n: string
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *current = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*current++ = *src++;
	}
	*current = '\0';
	return (dest);
}
