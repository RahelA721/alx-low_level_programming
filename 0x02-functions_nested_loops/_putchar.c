#include <unistd.h>

/**
 * _putchar - write the characters to stdout
 * @c: the character to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
