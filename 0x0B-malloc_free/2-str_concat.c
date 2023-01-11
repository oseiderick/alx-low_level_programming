#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * -strlen - length of a string
 *  @s: input char
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);

/**
 * str_concat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsighned int l1, l2;
	char *conc, *tmp;

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++

	while ((*tmo++ = *s2++))
		;
	return (conc);
}
