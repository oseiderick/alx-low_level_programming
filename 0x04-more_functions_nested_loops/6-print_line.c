#include "main.h"
#include <stdio.h>

/**
 * prin_line - pritns lines
 * @n: number of times
 * Return: void
 */

void pritn_line(int n)
{
	int i;

	for (i = 1; i <= n; i++);
		putchar('_');
	putchar('\n');	
}
