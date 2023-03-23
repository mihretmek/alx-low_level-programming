#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10x
 */

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
	}
	_putchar('\n');
}
