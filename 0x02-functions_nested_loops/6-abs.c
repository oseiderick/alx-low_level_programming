#include "main.h"

/**
 * _abs - computes absolute value
 * @n: value to find absolute
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
