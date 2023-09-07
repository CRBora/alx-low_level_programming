#include "main.h"
#include <stdlib.h>

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
	unsigned int tot_size;
	unsigned int l;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tot_size = nmemb * size;

	p = malloc(tot_size);

	if (p == NULL)
		return (NULL);

	for (l = 0; l < tot_size; l++)
		*((char *)p + 1) = 0;
	return (p);
}
