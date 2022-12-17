#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			if (j >3)
			{
				putchar((j / 10) +'0');
			}
			putchar((j % 10) + '0');
			putchar('\n\);
