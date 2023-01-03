#include "main.h"
#include <string.h>

/**
 * _strchar - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
 */

char *_strchar(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
