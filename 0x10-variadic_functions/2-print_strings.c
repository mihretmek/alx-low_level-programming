#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints string
 * @separator: string printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str_arg;
	va_list print_arg;

	if (separator == NULL)
		return (NULL);

	va_start(print_arg, n);
	for (i = 0; i < n; i++)
	{
		str_arg = va_arg(print_arg, char *);
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (str_arg == NULL)
			printf("(nil)");
		else
			printf("%s", str_arg);
	}
	va_end(print_arg);
	printf("\n");
}
