#include "main.h"

/**
 * times_table - function that prints the 9 times table from 0
 *
 * Return: 9 times table printed to stdout
 */
void times_table(void)
{
	int l, m;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
			_putchar(l * m);
		if (m < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
