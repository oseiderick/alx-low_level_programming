#include "main.h"

/**
 * int print_last_digit(int) - computes for the last digit of a number
 * @n: input number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');	
	return (last);
}	
