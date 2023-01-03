#include "main.h"
#include <string.h>

/**
 * _memcpy - copies data to memory
 * @dest: destination of the data
 * @src: source of the data
 * @n: number of data to be copied
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
