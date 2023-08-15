#include "main.h"

/**
 * print_alphabet - function to print lowercase alphabet
 *
 * Return: alphabet printed to stdout
 */
void print_alphabet(void)
{
	int l = 97;

	while (l <= 122)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
