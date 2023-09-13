#include "function_pointers.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: pointer to string to be reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int r = 0;
	int l;

	while (s[r] != '\0')
		r++;

	for (l = 0; l < r; l++)
	{
		r--;
		rev = s[l];
		s[l] = s[r];
		s[r] = rev;
	}
}

/**
 * print_name - function that prints a name
 * @name: pointer to string
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;
	f(name);
}
