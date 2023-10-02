#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: binary number whose bits are flipped
 * @m: target binary being flipped to
 *
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, len = 0;
	unsigned long int result = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		len += result & 1;
		result >>= 1;
	}
	return (len);
}
