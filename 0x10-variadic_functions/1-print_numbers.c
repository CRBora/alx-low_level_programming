#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int l;

	va_start(args, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(args, int));
		if (l != (n - 1) || seperator != NULL)
			printf("%c", *seperator);
	}
	printf("\n");

	va_end(args);
}
