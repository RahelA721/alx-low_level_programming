#include <stdio.h>

/**
 * main - prints sum of even valued terms
 *
 * Return: zero
 */

int main(void)
{
	int i;
	long t1, t2, sum;

	t1 = 1;
	t2 = 2;
	sum = 2;
	for (i = 0; t1 + t2 < 4000000; ++i)
	{
		t2 = t1 + t2;
		if (t2 % 2 == 0)
		{
			sum = sum + t2;
		}

		t1 = t2 - t1;
	}

	printf("%ld\n", sum);
	return (0);
}
