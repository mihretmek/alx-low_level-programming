#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * Return: a pointer to first occurence of c
 * @s: string
 * @c: character
 */

char *_strchr(char *s, char c)
{
	int i;

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	}
	return (NULL);
}
