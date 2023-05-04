#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - a function that checks endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);
}
