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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
