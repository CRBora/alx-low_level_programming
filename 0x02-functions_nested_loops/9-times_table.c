#include "main.h"

/**
 * times_table - function that prints the 9 times table from 0
 *
 * Return: 9 times table printed to stdout
 */
void times_table(void)
{
	int l, k, m;

	for (l = 0; l <= 9; l++)
	{
		for (k = 0; k <= 9; k++)
		{
			m = l * k;

			if (k == 0)
				_putchar(m + '0');
			if (m < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
