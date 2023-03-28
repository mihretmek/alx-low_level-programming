#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int n;
	int odd;

	odd = 0;
	if (_strlen(str) % 2 != 0)
		odd += 1;
	for (n = (_strlen(str) + odd) / 2; n < _strlen(str); n++)
		{
			_putchar(str[n]);
		}
	_putchar('\n');
}
