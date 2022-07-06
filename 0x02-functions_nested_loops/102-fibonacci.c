#include <stdio.h>

/**
 * main - prints the first 50 fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long t1, t2, next;

	t1 = 0;
	t2 = 1;
	next = t1 + t2;

	for (i = 3; i <= 52; ++i)
	{
		printf("%ld, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}

	printf("\n");
	return (0);
}
