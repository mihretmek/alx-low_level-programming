#include "main.h"

/**
 * _islower - checking if c is lower
 * @c: comparing character
 * Return: 0 if false or 1 if true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
