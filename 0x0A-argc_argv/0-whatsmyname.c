#include <stdio.h>

/**
 * main - prints its name
 * Return: 0
 * @argc: number of argument
 * @argv: array of arguments
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return 0;
}
