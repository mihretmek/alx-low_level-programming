#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - a function that prints everything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep1 = "";
	char *str = "";
	va_list args;


	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case "char":
						printf("%s%c", sep1, va_arg(args, int));
						break;
				case "int":
						printf("%s%d", sep1, va_arg(args, int));
						break;
				case "float":
						printf("%s%f", sep1, va_arg(args, double));
						break;
				case "string":
						str = va_arg(args, char *);
						if (!str)
							str = "(nil)";
						printf("%s%s", sep1, str);
						break;
				default:
						i++;
						continue;
			}
			sep1 = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
