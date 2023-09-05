#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: initialized char
 *
 * Return: NULL if size = 0, or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int l;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);
	for (l = 0; l < size; l++)
		s[l] = c;
	return (s);
}
