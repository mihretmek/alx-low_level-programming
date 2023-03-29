#include "main.h"

/**
 * _strncpy - copies a string
 * Return: copied string
 * @dest: destination
 * @src: source
 * @n: string length
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
