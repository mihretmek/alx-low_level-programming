#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - a function that selects correct function
 * to perform operation
 * @s: operator passed as argument
 * Return: pointer to function that corresponds to operator passed
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
