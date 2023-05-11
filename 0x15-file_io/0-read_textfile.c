#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a textfile
 * Return: 0 or number of letters it could read and print
 * @filename: filename to be read
 * @letters: number of letters in text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDWR);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);
	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
