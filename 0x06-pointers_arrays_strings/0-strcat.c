#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the two strings
 * @dest: destination of the two strings
 * @src: source of the two string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	/* move p to the end of dest*/
	while (*p != '\0')
	{
		p++;
	}
	/* copy src to the end of dest*/
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	/* add a terminating null byte to the end iof dest*/
	*p = '\0';

	return (dest);
}

