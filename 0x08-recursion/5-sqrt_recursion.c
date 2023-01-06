#include "main.h"
#include "math.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Reutrn: int
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n));
}

/**
 * _seqrt - _sqrt_recursion
 * @n: integer para
 * @i: integer para
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
