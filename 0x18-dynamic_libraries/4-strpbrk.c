#include "main.h"

/**
 * _strpbrk - function that searches a string for any
 * of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to string being compared
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s != '\0')
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
				return (s);
		}
		s++;
	}
	return ('\0');
}
