#include <stdio.h>

/**
 * main - Entry pint
 *
 * Return: ALways 0
 */
int main(void)
{
	int a , b;

	for (a ='0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			
			if (a < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
