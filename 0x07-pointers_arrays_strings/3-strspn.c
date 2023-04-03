#include "main.h"

/**
 * _strspn - a function that gets length of a prefix
 * Return: n of bytes in the initial segment
 * @s: string
 * @accept: sub-string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[j] == '\0')
			return (n);
	}
	return (n);
}
