#include "main.h"

/**
 * _strlen_recursion - function that prints length of a string
 * @s: pointer to string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
