#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * Return: a pointer to the created array
 * @min: minimum integer in range
 * @max: maximum integer in range
 */

int *array_range(int min, int max)
{
	int i, range;
	int *m;

	range = 0;
	range = ((max + 1) - min);

	if (min > max)
		return (NULL);

	m = malloc(sizeof(int) * range);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		*(m + i) = min + i;

	return (m);
}
