#include "main.h"

/**
 * _sqrt_recursion - a function that returns natural square root
 * Return: -1 or result
 * @n: number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - use recursion to find natural square root
 * Return: result
 * @n: number
 * @i: iterator
 */

int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
