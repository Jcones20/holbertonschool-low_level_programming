#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *	0 when functions fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	t = read(fd, bu, letters);
	w = write(STDOUT_FILENO, bu, t);

	free(bu);
	close(fd);
	return (w);
}
