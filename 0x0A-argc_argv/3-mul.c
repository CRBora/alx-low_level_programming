#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string to an integer
 * @s: pointer to string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a = 0, b = 0, l = 0, len = 0, k = 0, digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && k == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			l = l * 10 + digit;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}

	if (k == 0)
		return (0);

	return (l);
}

/**
 * main - function that multiplies 2 numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, l1, l2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	l1 = _atoi(argv[1]);
	l2 = _atoi(argv[2]);
	result = l1 * l2;

	printf("%d\n", result);
	return (0);
}
