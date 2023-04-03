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

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		else if (i == 0)
			return (NULL);
	}
}
