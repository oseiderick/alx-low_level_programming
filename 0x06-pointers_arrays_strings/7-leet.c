#include "main.h"
#include <string.h>

/**
 * leet - encode
 * @s: pointer to char para
 * Return: *s
 */

char *leet(char *s)
{
	int i, j;
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (s[j] - 32)
				{
					s[i] = j + '0';
				}
		}
	}
	return (s);
}
