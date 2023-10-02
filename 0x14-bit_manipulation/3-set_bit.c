#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to binary number
 * @index: index of bit set to 1
 *
 * Return: 1 if worked, otherwise -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int len = 1UL;

	if (index >= 64)
		return (-1);
	len <<= index;
	*n |= len;

	return (1);
}
