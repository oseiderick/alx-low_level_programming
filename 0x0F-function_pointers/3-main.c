#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main file
 * @argc: number pf lines argument
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int R;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	R = (*get_op_func(argv[2]))(atoi(argv[1], atoi(argv[3]));
	printf("%d\n", R);


	return (0);
}
