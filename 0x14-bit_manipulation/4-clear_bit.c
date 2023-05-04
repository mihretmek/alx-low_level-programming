#include "main.h"
#include "2-get_bit.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - a function that sets value of bit to 0
 * at given index
 * Return: 1 or -1
 * @n: number
 * @index: given index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) &= ~(1 << index);
	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
