#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of multiples of 3 under 1084
 * Return: nothing
 */
int amin(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
