#include "main.h"

/**
 * _abs - prints the absolute value of number
 * @n: argument for the function
 *
 * Return: absolute value of number
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = -1 * n;
		return (abs);
	}

	return (n);
}
