#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function to concatenate two strings
 * Return: NULL or pointer to newly allocated space
 * @s1: string 1
 * @s2: string 2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *c;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (c == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (i = 0; i < len2; i++)
		c[i + len1] = s2[i];
	c[i + len2] = '\0';
	return (c);
}
