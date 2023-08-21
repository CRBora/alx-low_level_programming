#include "main.h"

/**
 ** _strcpy - function that copies the string pointed to by src
 * @dest: pointer to destination
 * @src: pointer to source string
 * Return: *dest with copied string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int k = 0;

	while (*(src + l) != '\0')
		l++;
	while (k < l)
	{
		dest[k] = src[k];
		k++;
	}
	dest[l] = '\0';
	return (dest);
}
