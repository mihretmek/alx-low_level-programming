#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory
 * Return: pointer to allocated memory
 * @b: number to be checked
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
