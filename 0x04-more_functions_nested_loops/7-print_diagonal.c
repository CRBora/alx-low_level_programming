#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal
 * @n: number of times char \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, k;

		for (l = 0; l < n; l++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == l)
					_putchar('\\');
				else if (k < l)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
