#include <main.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	char n;

	for (n = 0; n <= 9; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	return(0);
}
