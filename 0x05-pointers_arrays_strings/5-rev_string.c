#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse the string
 * @s: given string
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
