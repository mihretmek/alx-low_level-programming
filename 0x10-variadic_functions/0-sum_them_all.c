#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns sum of all
 * its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_sum;

	if (n == 0)
		return (0);
	va_start(arg_sum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_sum, int);
	va_end(arg_sum);
	return (sum);
}
