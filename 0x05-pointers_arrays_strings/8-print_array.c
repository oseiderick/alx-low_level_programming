#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints elements in an array
 * @a: array
 * @n: number of elements to print
 * Return:
 * void
 */

void print_array(int *a, int *n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(" , ");
		}
	}
	printf('\n');
}
