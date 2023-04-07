#include <stdio.h>

/**
 * main - prints a number
 * Return: 0
 * @argc: number of argument
 * @argv: array of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
