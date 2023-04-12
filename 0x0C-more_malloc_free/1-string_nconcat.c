#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates 2 strings
 * Return: a pointer to newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (n + len1 + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[i + len1] = s2[i];
	s[i + len1] = '\0';

	return (s);
