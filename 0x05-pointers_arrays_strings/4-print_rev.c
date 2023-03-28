#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
		_putchar(*(s + a));
	_putchar('\n');
}
