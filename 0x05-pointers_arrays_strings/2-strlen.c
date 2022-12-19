#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: string to check
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
