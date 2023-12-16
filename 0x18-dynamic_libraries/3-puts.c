#include "main.h"

/**
 * _puts - function that prints a string
 * @s: pointer to printed string
 */
void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s++);

	_putchar('\n');
}
