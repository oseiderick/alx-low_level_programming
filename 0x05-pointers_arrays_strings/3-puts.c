#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * @str: string input
 * Return: null
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
