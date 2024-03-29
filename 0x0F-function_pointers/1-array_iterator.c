#include <stdio.h>

/**
 * array_iterator - executes function
 * @array: array of elements
 * @size: arrays's size
 * @action: pointer to function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
