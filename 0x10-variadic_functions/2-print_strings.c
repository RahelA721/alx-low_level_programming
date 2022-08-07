#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print
 * @separator: sep
 * @n: args
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(args, char *);
			if (string == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
