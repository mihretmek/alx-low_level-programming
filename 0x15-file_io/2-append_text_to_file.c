#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the
 * end of a file
 * Return: 1 or -1
 * @filename: name of file to be appended
 * @text_content: NULL terminated string to add
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);

}
