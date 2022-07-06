#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: argument for the function
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (lastd < 0)
	{
		lastd = -1 * lastd;
	}

	_putchar(lastd + '0');

	return (lastd);

}
