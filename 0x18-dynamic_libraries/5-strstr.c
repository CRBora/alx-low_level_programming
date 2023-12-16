#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to source string
 * @needle: pointer to substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *k = needle;

		while (*l == *k && *k != '\0')
		{
			l++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
