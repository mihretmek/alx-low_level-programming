#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses the string
 * @s: string
 */

void rev_string(char *s)
{
	int n;
	char a;

	for (n = 0; n < _strlen(s) / 2; n++)
	{
		a = s[n];
		s[n] = s[_strlen(s) - n - 1];
		s[_strlen(s) - n - 1] = a;
	}
}
