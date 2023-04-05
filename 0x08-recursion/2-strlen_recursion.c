#include "main.h"

/**
 * _strlen_recursion - a function that returns length of string
 * Return: length
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}
