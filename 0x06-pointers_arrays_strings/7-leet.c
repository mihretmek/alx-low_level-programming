#include "main.h"

/**
 * leet - encodes a string into 1337
 * Return: string
 * @s: character
 */

char *leet(char *s)
{
	char enc[] = "a4A4e3E3o0O0t7T7l1L1";
	int n;
	int m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; enc[m] != '\0'; m++)
		{
			if (s[n] == enc[m])
				s[n] = enc[m + 1];
				break;
		}
	}
	return (s);
}
