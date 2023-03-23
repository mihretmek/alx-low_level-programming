#include "main.h"

/**
 * print_triangle - function to draaw print_triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < size - (a + 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
