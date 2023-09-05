#include "main.h"

/**
 * *_strncat - function taht concatenates 2 strings except it will
 * use at most n bytes from src
 * @dest: pointer destination string
 * @src: pointer to source string
 * @n: the max number of bytes to be concatinated from src
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;

	while (n-- > 0 && *src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}
