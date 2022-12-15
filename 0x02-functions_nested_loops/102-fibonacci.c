#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int fib[52];
	int i;

	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i <= 51; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i < 51)
			printf("%ld, ", fib[i]);
		else
			printf("%ld\n", fib[i]);
	}
	return (0);
}
