#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints product
 * Return: 1
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	} 
	else
		printf("Error\n");
	return (1);
}
