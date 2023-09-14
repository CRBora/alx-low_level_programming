#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that prints the sum of all its parameters
 * @n: constant number of parameters
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, l;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (l = 0; l < n; l++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
