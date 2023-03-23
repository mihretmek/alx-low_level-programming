#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a < b)
	{
		if (b > c)
		{
			largest = b;
		} else if (b < c)
		{
			largest = c;
		}
	} else if (a < c)
	{
		if (c > b)
		{
			largest = c;
		} else if (c < b)
		{
			largest = b;
		}
	} else if (b < c)
	{
		if (c > a)
		{
			largest = c;
		} else if (c < a)
		{
			largest = a;
		}
	}
	return (largest);
}
