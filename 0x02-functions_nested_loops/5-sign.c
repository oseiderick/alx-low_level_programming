#include "main.h"

/**
 * print_sign - print sogn of a number
 * @n: number input
 * Return: 1, 0, -1
 * @a: for the negative number
 */
int print_sign(int n)
{
	int a = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	_putchar('-');
		return ('a');
	}
}
