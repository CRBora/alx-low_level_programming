#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times char  _ should be printed to stdout
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
