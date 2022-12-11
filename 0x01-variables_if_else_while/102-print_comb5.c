#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 * print_number: prints out the numbers individually from passing the values to it 
 */
int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j++)
		{
			print_number(i);
			putchar(' ');
			print_number(j);
			if (i < 99 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

