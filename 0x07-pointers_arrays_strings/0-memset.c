#include <string.h>
#include <stdio.h>
#include "main.h"


/**
 * _memset - Entry of the code
 *
 * @s: memory area
 * @n: number of characters to write to memory
 * @b: constant byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = (unsigned char) b;
	return (s);

}
