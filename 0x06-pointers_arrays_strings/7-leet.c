#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @str: pointer to source string
 *
 * Return: pointer to string encoded into 1337
 */
char *leet(char *str)
{
	char *src = str;

	char *leet_chars = "aAeEoOtTlL";

	char *leet_rep = "4433007711";

	int l, k;

	for (l = 0; str[l] != '\0'; l++)
	{
		for (k = 0; leet_chars[k] != '\0'; k++)
		{
			if (str[l] == leet_chars[k])
			{
				str[l] = leet_rep[k];
				break;
			}
		}
	}
	return (src);
}
