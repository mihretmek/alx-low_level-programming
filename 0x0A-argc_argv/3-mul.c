#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	m = 0;
	n = 0;
	len = 0;
	a = 0;
	b = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && a == 0)
	{
		if (s[i] == '-')
			++m;

		if (s[i] >= '0' && s[i] <= '9')
		{
			b = s[i] - '0';
			if (m % 2)
				b = -b;
			n = n * 10 + b;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}

	if (a == 0)
		return (0);

	return (n);
}

/**
 * main - prints product
 * Return: 1
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
