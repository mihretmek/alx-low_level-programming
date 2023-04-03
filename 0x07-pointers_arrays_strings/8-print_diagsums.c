#include "main.h"

/**
 * print_diagsums - a function that prints sum of two
 * diagonals of a square matrix
 * @a: pointer to matrix
 * @size: dimension
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[(i * size) + i];
		sum2 = sum2 + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);

}
