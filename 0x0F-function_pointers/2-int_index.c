#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array being compared
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: int_index returns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;
	
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
			return (l);
	}
	return (-1);
}
