#include "main.h"

int check_paln(char *s, int l, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: pointer to string to reverse
 *
 * Return: 1 if it is, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_paln(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_paln - function that checks the characters recursively
 * for palindrome
 * @s: pointer to string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, otherwise 0
 */
int check_paln(char *s, int l, int len)
{
	if (*(s + l) != *(s + len - 1))
		return (0);
	if (l >= len)
		return (1);
	return (check_paln(s, l + 1, len - 1));
}
