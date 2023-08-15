#include "main.h"

/**
 * print_alphabet_x10 - funvtion to print alphabet x10
 *
 * Return: alphabet printed to stdout 10 times
 */
void print_alphabet_x10(void)
{
	int l, m = 0;

	while (m < 10)
	{
		for (l = 97; l <= 122; l++)
			_putchar(l);
		_putchar('\n');
		m++;
	}
}
