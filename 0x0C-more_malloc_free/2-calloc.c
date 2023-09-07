#include "main.h"
#include <stdlib.h>

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory of an array using malloc
 * and initialixes it to 0
 * @nmemb: array of elements
 * @size: size of array
 *
 * Return: NULL if nmemb or size is 0, and if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}
