#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to
 * Return: pointer to dest
 * @dest: destination
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; n <= _strlen(src); n++)
		dest[n] = src[n];
	return (dest);
}
