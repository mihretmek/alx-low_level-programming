#include <stdio.h>

/**
 * main - starting and printing numbers between 0-9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
