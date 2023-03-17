#include <stdio.h>

/**
 * main - starting and printing the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
