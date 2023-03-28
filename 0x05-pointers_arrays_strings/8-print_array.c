#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of integers
 * @a: array of integers
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
