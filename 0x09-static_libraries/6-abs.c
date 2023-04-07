#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value
 * @r: absolute value integer
 * Return: +/- integer
 */

int _abs(int r)
{
	if (r > 0)
		return (r);
	else
		return (r * -1);
}
