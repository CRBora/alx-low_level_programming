#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to
 * an unsigned int
 * @b: pointer to constant string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0;
	int k;

	if (b == NULL)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] == '0' || b[k] == '1')
		{
			l = l << 1;
			l += b[k] - '0';
		}
		else
			return (0);
	}
	return (l);
}
