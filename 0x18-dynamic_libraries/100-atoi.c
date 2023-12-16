#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int l = 0, k = 0, n = 0, len = 0, m = 0, dgt = 0;

	while (s[len] != '\0')
		len++;

	while (l < len && m == 0)
	{
		if (s[l] == '-')
			++k;

		if (s[l] >= '0' && s[l] <= '9')
		{
			dgt = s[l] - '0';
			if (k % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			m = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			m = 0;
		}
		l++;
	}

	if (m == 0)
		return (0);

	return (n);
}
