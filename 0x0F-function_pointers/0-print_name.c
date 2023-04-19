#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that prints print_name
 * @name: name to be printed
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
