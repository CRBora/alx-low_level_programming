#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: number to be converted to binary representation
 */
void print_binary(unsigned long int n)
{
	int l, k = 0;
	unsigned long int len;

	for (l = 63; l >= 0; l--)
	{
		len = n >> l;

		if (len & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
