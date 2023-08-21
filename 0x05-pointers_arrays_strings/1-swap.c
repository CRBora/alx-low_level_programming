#include "main.h"

/**
 * swap_int - function that swaps 2 integers
 * @a: pointer to int a
 * @b: pointer to int b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
