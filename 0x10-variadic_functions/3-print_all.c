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

/**
 * print_all - a function that prints everything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *sep1 = "";
	char *sep2 = "";
	va_list args;

	printer ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep1);
				ops[j].f(args);
			}
			j++;
		}
		sep1 = sep2;
		i++;
	}
	printf("\n");
	va_end(args);
}
