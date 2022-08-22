#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc : argc
 * @argv: argv
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - copy
 * @from: source
 * @to: destination
 *
 * Return: void
 */

void copy_file(const char *from, const char *to)
{
	int fdr, fdw, seen;
	char buf[1024];

	fdr = open(from, O_RDONLY);
	if (!from || fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fdw = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0700);
	while ((seen = read(fdr, buf, 1024)) > 0)
	{
		if (write(fdw, buf, seen) != seen || fdw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (seen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	if (close(fdr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	if (close(fdw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}

}
