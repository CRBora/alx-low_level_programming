#include "main.h"

/**
 * puts_half - function that prints half a string
 * @str: pointer to string input
 */
void puts_half(char *str)
{
	int l, k, m = 0;

	for (l = 0; str[l] != '\0'; l++)
		m++;

	k = (m / 2);

	if ((m % 2) == 1)
		k = ((m + 1) / 2);

	for (l = k; str[l] != '\0'; l++)
		_putchar(str[l]);

	_putchar('\n');
}
