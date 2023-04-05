#include "main.h"

/**
 * _pow_recursion - a function that returns x raised to y
 * Return: -1 or result
 * @x: base
 * @y: exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
