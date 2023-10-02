#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: pointer to binary number
 * @index: index of bit to clear
 *
 * Return: 1 if worked, otherwise -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int len = 1UL;

	if (index >= 64)
		return (-1);
	len <<= index;
	len = ~len;
	*n &= len;

	return (1);
}
