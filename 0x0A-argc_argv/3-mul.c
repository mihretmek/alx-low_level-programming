#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to int
 * Return: integer
 * @s: string
 */

int _atoi(char *s)
{
	int i;
	int n;
	int len;
	int a;
	int b;
	int c;

	i = 0;
	n = 0;
	len = 0;
	a = 0;
	b = 0;
	c = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++b;
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = s[i] - '0';
			if (b % 2)
				a = -a;
			n = n * 10 + a;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}
	if (c == 0)
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
	int num1;
	int num2;
	int product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
