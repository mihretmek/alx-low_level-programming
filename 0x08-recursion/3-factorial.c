#include "main.h"

/**
 * factorial - a function that returns factorial
 * Return: the value
 * @n: number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
