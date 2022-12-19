#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
