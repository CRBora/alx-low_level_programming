#include "main.h"

/**
 * _strlen - function that returnd length of a string
 * @s: pointer to a string
 * Return: lenght of the string as an integer
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
