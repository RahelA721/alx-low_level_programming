#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: number of letters
 *
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int seen;
	char *buf;

	buf = malloc(sizeof(char *) * letters);
	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}
	seen = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, seen);
	close(fd);
	return (seen);
}
