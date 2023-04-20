#ifndef FORMAT_H_
#define FORMAT_H_
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints character
 * @n: list
 * Return: 0;
 */

int print_char(va_list n)
{
	printf("%c", va_arg(n, int));
	return (0);
}

/**
 * print_int - prints integer
 * @n: list
 * Return: 0;
 */

int print_int(va_list n)
{
	printf("%d", va_arg(n, int));
	return (0);
}

/**
 * print_float - prints float
 * @n: list
 * Return: 0;
 */

int print_float(va_list n)
{
	printf("%f", va_arg(n, double));
	return (0);
}

/**
 * print_str - prints string
 * @n: list
 * Return: 0;
 */

int print_str(va_list n)
{
	char *s;

	s = va_arg(n, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}

#endif
