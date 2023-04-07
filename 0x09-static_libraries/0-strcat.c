#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	for (m = 0; dest[m] != '\0' ; m++)
	{}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m + n] = src[n];
	}
	dest[m + n] = '\0';
	return (dest);
}
