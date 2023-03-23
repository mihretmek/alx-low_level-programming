#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \ should be printed
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			if (n > 1)
			{
				for (b = 0; b < a; b++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
