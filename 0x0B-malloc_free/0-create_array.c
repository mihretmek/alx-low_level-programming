#include "main.h"
#include <stdio.h>

/**
 * create_array - a function to create an array of characters
 * Return: NULL or pointer to array
 * @size: size
 * @c: characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = malloc(sizeof(char));

	if (p == '\0')
		return (NULL);
	for (i = 0; i < size; i++)
		c[i] = p;
	return (p);
}
