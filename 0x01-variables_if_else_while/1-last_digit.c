#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - prints if last digit is zero or greater than 5 or less than 6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdg = n % 10;

	if (lastdg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdg);
	}
	else if (lastdg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdg);
	}
	else if (lastdg < 6 && lastdg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdg);
	}

	return (0);

}
