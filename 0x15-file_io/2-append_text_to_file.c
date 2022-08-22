#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - append
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	return (1);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
