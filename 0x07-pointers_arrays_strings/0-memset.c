#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to constant byte
 * @b: constant byte
 * @n: memory size
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
