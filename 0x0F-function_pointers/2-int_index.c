#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: array size
 * @cmp: pointer to function to be used to compare values
 * Return: -1 or index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
