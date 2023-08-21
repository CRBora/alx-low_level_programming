#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of int
 * @a: pointer to array name
 * @n: number of elementsin a[] to be printed
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < (n - 1); l++)
		printf("%d, ", a[l]);
	if (l == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
