#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n < _strlen(str); n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
