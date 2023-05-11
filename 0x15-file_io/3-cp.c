#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - creates a buffer of 1024
 * Return: pointer to allocated buffer
 * @file: file for storing buffers
 */

int *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of file to another file
 * Return: 0
 * @ac: number of arguments
 * @av: array of arguments
 */

int main(int ac, char *av[])
{
	int f1, f2, wr, re;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(av[2]);
	f1 = open(av[1], O_RDONLY);
	f2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	re = read(f1, buffer, 1024);

	if (f1 == -1 || re == -1)
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
	free(buffer);
	close_file(f1);
	close_file(f2);
	return (0);
}
