#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 
 */

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
	{
		int r = rand() % 52;
		char c = (r < 26) ? 'a' + r : 'A' + (r - 26);
	printf("%c", c)
	}
	printf('\n');
	return (0);
}
