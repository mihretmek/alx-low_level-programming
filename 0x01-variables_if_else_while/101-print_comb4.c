#include <stdio.h>

/**
 * main - starting and printing combinations of 3 digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int n;
	int m;
	int o;

	for (i = 10; i < 20; i++)
	{
		for (j = 10; j < 20; j++)
		{
			for (k = 10; k < 20; k++)
			{
				n = j % 10;
				m = i % 10;
				o = k % 10;

				if (o > n && n > m)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m != 8 || n != 9 || o != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
