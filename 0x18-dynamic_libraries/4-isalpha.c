#include "main.h"

/**
 * _isalpha - function to check for lower and uppercase character
 * @c: character to be checked
 * Return: 1 if upper or lowercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
