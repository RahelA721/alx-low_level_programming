#include <stdio.h>

/**
 * main - prints the first 50 fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long t1, t2;

	t1 = 1;
	t2 = 2;

	for (i = 0; i < 50; ++i)
	{
		if (i == 0)
		{
			printf("%ld", t1);
		}
		else if (i == 1)
		{
			printf(", %ld", t2);
		}
		else
		{
			t2 = t1 + t2;
			t1 = t2 - t1;
			printf(", %ld", t2);
		}
	}

	printf("\n");
	return (0);
}
