#include "main.h"

/**
 * more_numbers - printd 10x the numbers from 0 to 14
 */
void more_numbers(void)
{
	int l, k;

	for (l = 1; l <= 10; l++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('1');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
