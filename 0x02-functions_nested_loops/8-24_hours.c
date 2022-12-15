#include "main.h"

/**
 * jack_bauer - prints minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				d = (a - (a % 10)) / 10;
				if (d <= 0)
				d = 0;
				e = a % 10;

				_putchar(d + '0');
				_putchar(e + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar(c + '0');
				_putchar('\n');
			}
		}
	}
}
