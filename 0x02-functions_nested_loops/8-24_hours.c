#include "main.h"

/**
 * jack_bauer - function that prints every hour and minute of
 * Jack Bauers day
 */
void jack_bauer(void)
{
	int l, k;

	l = 0;

	while (l < 24)
	{
		k = 0;

		while (k < 60)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		l++;
	}
}
