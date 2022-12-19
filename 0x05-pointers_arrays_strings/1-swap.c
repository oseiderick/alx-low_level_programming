#include "main.h"

/**
 * swap_int - swaps the two numbers
 * @a: first number
 * @b: second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *b;
	*b = *a;
	*a = l;
}
