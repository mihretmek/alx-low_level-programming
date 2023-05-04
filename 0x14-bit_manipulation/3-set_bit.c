#include "main.h"
#include "2-get_bit.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - a function that sets value of a bit to 1
 * at given index
 * Return: 1 or -1
 * @n: number
 * @index: given index from 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
