#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates 2 strings
 * @s1: pointer to first input string
 * @s2: pointer to string to be concatenated
 *
 * Return: empty string if NULL is passed, otherwise NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int l, k;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = k = 0;

	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;

	c = malloc(sizeof(char) * (l + k + 1));

	if (c == NULL)
		return (NULL);

	l = k = 0;

	while (s1[l] != '\0')
	{
		c[l] = s1[l];
		l++;
	}
	while (s2[k] != '\0')
	{
		c[l] = s2[k];
		l++;
		k++;
	}

	c[l] = '\0';
	return (c);
}
