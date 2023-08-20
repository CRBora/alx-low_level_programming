#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function to print all natural numbers form n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int l, k;

	if (n <= 98)
	{
		for (l = n; l <= 98; l++)
		{
			if (l != 98)
				printf("%d, ", l);
			else if (l == 98)
				printf("%d\n", l);
		}
	}
	else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
}
