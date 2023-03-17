#include <stdio.h>

/**
 * main - starting and printing possible combinations
 * Return: 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 10; i < 20; i++)
	{
		n = i % 10
		putchar(n + '0');
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
