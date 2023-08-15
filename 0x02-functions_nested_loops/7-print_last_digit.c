#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 * @m: number last digit is printed from
 * Return: last digit of a number printed to stdout
 */
int print_last_digit(int m)
{
	int l;

	if (m < 0)
		m = -m;

	l = m % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
