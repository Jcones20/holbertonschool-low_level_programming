#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_context: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *	Otherwise - 1.
 */
int create_file(const char *filename, char *text_context)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_context != NULL)
	{
		for (len = 0; text_context[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	w = write(fd, text_context, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
