#include "main.h"

/**
 * _islower - checks if it is lowercase or not
 * @c: argument for the function
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
