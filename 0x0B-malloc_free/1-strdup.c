#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
