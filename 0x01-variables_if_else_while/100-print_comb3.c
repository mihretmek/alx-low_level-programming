#include <stdio.h>

/**
 * main - starting and printing combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int n;
	int m;

	for (i = 10; i < 20; i++)
	{
		for (j = 10; j < 20; j++)
		{
			n = j % 10;
			m = i % 10;

			if (n > m)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
