#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns pointer to a new string
 * Return: NULL or pointer to copied string
 * @str: string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
