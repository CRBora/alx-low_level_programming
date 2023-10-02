#include "main.h"

/**
 * get_bit - funtion that returns the value of a bit at a given index
 * @n: binary number to search
 * @index: index, starting at 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	if (index > 63)
		return (-1);
	l = ((n >> index) & 1);
	return (l);
}
