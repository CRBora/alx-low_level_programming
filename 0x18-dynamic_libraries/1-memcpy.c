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
	char *tmp = dest;

	while (n-- > 0 && *src)
		*dest++ = *src++;

	return (tmp);
}
