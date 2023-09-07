#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: pointer to destination string
 * @s2: pointer to source string
 * @n: first n bytes of s2
 *
 * Return: concatenated string, if function fails, return NULL
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0;
	unsigned int l, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc((len1 + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (l = 0; l < len1; l++)
		str[l] = s1[l];
	for (k = 0; k < n; k++)
		str[l + k] = s2[k];

	str[l + k] = '\0';

	return (str);
}
