#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minumum number of coins to make change
 * for an amount of money
 * Return: 0 or 1
 * @argc: number of argument
 * @argv: array of argument
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin;

	cents = 0;
	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
