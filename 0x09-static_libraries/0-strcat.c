#include "main.h"

/**
 * *_strcat - function that concatenates 2 strings
 * @dest: pointer destination string
 * @src: pointer to source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
