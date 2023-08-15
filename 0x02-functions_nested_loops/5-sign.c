#include "main.h"

/**
 * print_sign - function to print the sign of a number
 * @n: number to be checked
 * Return: 1 and prints + for positive, 0 if zero else -1 and -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
