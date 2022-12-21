#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the two strings
 * @dest: destination of the two strings
 * @src: source of the two string
 * Return: string
 */

char _strcat(char *dest, char *src)
{
	char *str = dest +strlen(dest);
	
	while (*src != '\0')
	{
		*str++ = src++;
	}
	*str = '\0';

	return (dest);
}

