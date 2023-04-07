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
	int cents = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
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
