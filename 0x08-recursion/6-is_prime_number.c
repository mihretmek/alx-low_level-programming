#include "main.h"

/**
 * is_prime_number - a function that checks if a number is prime
 * Return: 0 or 1
 * @n: number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - use recursion to check if a number is prime
 * Return: 0 or 1
 * @n: number
 * @i: iterator
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if ((n % i) == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
