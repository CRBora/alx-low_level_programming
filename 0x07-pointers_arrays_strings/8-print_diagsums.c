#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointe to array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int l;

	for (l = 0; l < size; l++)
		sum1 = sum1 + a[l * size + l];

	for (l = size - 1; l >= 0; l--)
		sum2 += a[l * size + (size - l - 1)];

	printf("%d, %d\n", sum1, sum2);
}
