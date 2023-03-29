#include "main.h"

/**
 * _strncat - concatenates 2 strings with n bytes from c
 * and src does not need to be null-terminated >= n
 * Return: pointer to resulting string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; i < (n && src[i] != '\0'); i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
