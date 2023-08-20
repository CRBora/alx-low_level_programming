#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int l;
	
	for (l = 48; l <= 57; l++)
	{
		if (l != 50 && l != 52)
			_putchar(l);
	}
	_putchar('\n');
}
