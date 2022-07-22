#include "main.h"

/**
 * _isalpha - checks if its letter or not
 * @c: argument for the function
 *
 * Return: 1 if it is letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
