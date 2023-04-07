#include "main.h"

/**
 * _isalpha - checks if c is lower or uppercase
 * @c: comparing character
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
