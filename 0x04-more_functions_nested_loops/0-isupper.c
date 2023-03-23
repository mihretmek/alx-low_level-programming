#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: checking parameter
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
