#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: lenght counter
 *
 * Return: pointer to copied destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (n-- > 0 && *src)
		*dest++ = *src++;

	if (n > 0)
	{
		while (n-- > 0)
			*dest++ = '\0';
	}
	return (tmp);
}
