#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to int
 * Return: integer
 * @s: string
 */

int _atoi(char *s)
{
	int i;
	int n;
	int num;
	int a;
	int b;

	n = 0;
	num = 0;
	b = 1;
	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && a > 0)
			break;
		if (s[i] == '-')
			n--;
		if (s[i] == '+')
			n++;
		if (s[i] >= '0' && s[i] <= '9')
			a++;
	}
	while (a > 0)
	{
		num = num + ((s[i - 1] - '0') * b);
		i--;
		a--;
		b = b * 10;
	}
	if (n >= 0)
		num = num * 1;
	else
		num = num * -1;
	return (num);
}

