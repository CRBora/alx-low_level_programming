#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @str: pointer to source string
 *
 * Return: string with uppercase letters
 */
char *string_toupper(char *str)
{
	char *l = str;

	while (*l)
	{
		if (*l >= 'a' && *l <= 'z')
			*l -= 32;

		l++;
	}
	return (str);
}
