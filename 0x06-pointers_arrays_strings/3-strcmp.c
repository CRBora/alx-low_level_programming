#include "main.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: pointer to fist compared string
 * @s2: pointer to second compared string
 *
 * Return: the difference between s1 and s2 ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char*)s1 - *(unsigned char*)s2;

}
