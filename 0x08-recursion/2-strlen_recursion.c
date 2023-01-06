#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of the string
 * @s: pointer to the string
 * Return: int
 *
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
