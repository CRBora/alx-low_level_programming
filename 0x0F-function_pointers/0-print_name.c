#include "function_pointers.h"

/**
 * _puts - function that prints a string
 * @str: pointer to printed string
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

/**
 * print_name - function that prints a name
 * @name: pointer to string
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
