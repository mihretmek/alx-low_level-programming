#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - a function that returns value of a bit
 * at given index
 * Return: value of bit at index or -1
 * @n: number
 * @index: indicated index from 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}
