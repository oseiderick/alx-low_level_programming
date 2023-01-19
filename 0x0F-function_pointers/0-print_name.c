#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - prints aname
 * @name: name's main
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
