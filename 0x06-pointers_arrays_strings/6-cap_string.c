#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @str: pointer to source string
 *
 * Return: pointer to str with all words capitalized
 */
char *cap_string(char *str)
{
	int l = 0;

	while (str[l])
	{
		while (!(str[l] >= 'a' && str[l] <= 'z'))
			l++;

		if (str[l - 1] == ' ' || str[l - 1] == '\t' ||
		str[l - 1] == '\n' || str[l - 1] == ',' ||
		str[l - 1] == ';' || str[l - 1] == '.' ||
		str[l - 1] == '!' || str[l - 1] == '?' ||
		str[l - 1] == '"' || str[l - 1] == '(' ||
		str[l - 1] == ')' || str[l - 1] == '{' ||
		str[l - 1] == '}' || l == 0)
			str[l] -= 32;

		l++;
	}

	return (str);
}
