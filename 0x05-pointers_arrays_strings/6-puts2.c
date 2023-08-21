#include "main.h"

/**
 * puts2 - function that prints every other char of a string,
 * starting with the first char, followed by a new line
 * @str: pointer to string
 */
void puts2(char *str)
{
	int l = 0;
	int k = 0;
	char *s = str;
	int m;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	k = l - 1;

	for (m = 0 ; m <= k ; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar('\n');
}
