#include "main.h"

/**
 * _strstr - a function that locates a string
 * Return: a pointer to the beginning of the string
 * @haystack: overall string
 * @needle: string to be located
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j]
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
