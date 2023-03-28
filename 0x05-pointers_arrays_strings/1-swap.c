#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}
