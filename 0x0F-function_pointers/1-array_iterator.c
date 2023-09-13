#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
		action(array[l]);
}

