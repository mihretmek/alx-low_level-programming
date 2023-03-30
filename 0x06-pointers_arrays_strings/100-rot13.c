#include "main.h"

/**
 * rot13 - encodes a string
 * Return: encoded string
 * @s: string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char A[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char B[52] = "WRSTUVXYZQNOPMEDAFGBCHIJKLopqrstuvwxyzabcedgfhijklmn";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; A[j] != '\0'; j++)
		{
			if (s[i] == A[j])
			{
				s[i] = B[j];
				break;
			}
		}
	}
	return (s);
}
