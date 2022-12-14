#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: null
 */
void times_table(void)
{
	int i, mult, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * mult;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) +'0');

			_putchar((result % 10) +'0');
		}
		_putchar('\n');
}
