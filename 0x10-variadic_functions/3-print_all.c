#include "variadic_functions.h"
#include "format.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
