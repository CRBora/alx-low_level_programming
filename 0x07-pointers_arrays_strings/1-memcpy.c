#include "main.h"

/**
 * *_memcpy - function that copies a string
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes
 *
 * Return: pointer to copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int k = n;

	for (; l < k; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
