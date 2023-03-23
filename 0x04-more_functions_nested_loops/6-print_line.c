#include "main.h"

/**
 * print_line - draws a straight print_line
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
