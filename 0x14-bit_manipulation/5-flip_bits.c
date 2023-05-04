#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - a function that returns number of bits needed
 * to flip from one number to another
 * Return: number of bits
 * @n: number 1
 * @m: number 2
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
