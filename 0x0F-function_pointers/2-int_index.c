#include "function_pointers.h"

/**
 * int_index - searches for an intefer
 * @array: array of elements
 * @size: number of elements in the array
 * @cmp: is a pointer to the func to be used to compare values
 * Return: index first element cmp funct does not return 0 
 * If no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
