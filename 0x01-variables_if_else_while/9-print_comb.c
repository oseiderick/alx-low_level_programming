#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = '0';
	do {
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	} while (a <= '9');
	putchar('\n');
	return (0);

}
