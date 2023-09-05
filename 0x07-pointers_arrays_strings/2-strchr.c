#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: characyer to be located
 * Return: pointer to first occurance of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int l = 0;

	for (; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (&s[l]);
	}
	return (0);
}
