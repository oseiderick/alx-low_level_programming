#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int integerType;
	float floatType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	printf("size of a char: %ld byte(s)\n", sizeof(charType));
	printf("sixe of an int: %ld byte(s)\n", sizeof(integerType));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	return (0);

}
