#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies content of file to another file
 * Return: 0
 * @ac: number of arguments
 * @av: array of arguments
 */

int main(int ac, char **av)
{
	int f1, f2, wr, re;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(av[1], O_RDONLY);
	f2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	if (f2 == -2)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	while ((re = read(f1, buffer, 1024)) > 0)
	{
		wr = write(f2, buffer, re);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(f1) < 0 || close(f2) < 0)
	{
		if (close(f1) < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", f1);
		if (close(f2) < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
