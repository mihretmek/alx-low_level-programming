#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum
 * Return: 0 or 1
 * @argc: number of argument
 * @argv: array of argument
 */

int main(int argc, char *argv[])
{
	int i;
	int num1;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (num1 = 0; argv[i][num1]; num1++)
		{
			if (argv[i][num1] < '0' || argv[i][num1] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
