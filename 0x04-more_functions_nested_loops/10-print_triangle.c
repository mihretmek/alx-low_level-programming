#include "main.h"

/**
 * print_triangle - function to draaw print_triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - i; b > 0; b--)
				_putchar(' ');
			for (c = 0; c < a; a++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
