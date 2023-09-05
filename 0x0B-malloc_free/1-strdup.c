#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given
 * as a parameter
 * @str: pointer to input string
 *
 * Return: pointer to string copy, otherwise NULL if memory
 * isinsufficient
 */
char *_strdup(char *str)
{
	char *p;
	int l, k = 0;

	if (str == NULL)
		return (NULL);

	l = 0;
	while (str[l] != '\0')
		l++;

	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		p[k] = str[k];

	return (p);
}
