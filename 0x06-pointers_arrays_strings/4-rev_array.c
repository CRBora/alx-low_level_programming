#include "main.h"

/**
 * reverse_array - function that reverses the content of an
 * array of integers
 * @a: pointer to array of integers
 * @n: number of elements of the array
 *
 * Return: reversed array of integers
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
