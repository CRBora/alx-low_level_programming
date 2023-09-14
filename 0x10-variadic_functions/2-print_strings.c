#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n:  the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int l;
	char *s;

	va_start(args, n);

	for (l = 0; l < n; l++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
