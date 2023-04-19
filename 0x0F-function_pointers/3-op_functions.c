#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add operation function
 * @a: number one
 * @b: number two
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation function
 * @a: number one
 * @b: number two
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operation function
 * @a: number one
 * @b: number two
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide operation function
 * @a: number one
 * @b: number two
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operation function
 * @a: number one
 * @b: number two
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
