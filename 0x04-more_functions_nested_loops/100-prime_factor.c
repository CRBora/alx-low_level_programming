#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int l = 612852475143;
	long int max = -1;
	long int k;

	while (l % 2 == 0)
	{
		max = 2;
		l /= 2;
	}
	for (k = 3; k <= sqrt(l); k = k + 2)
	{
		while (l % k == 0)
		{
			max = k;
			l = l / k;
		}
	}
	if (l > 2)
		max = l;

	printf("%ld\n", max);
	return (0);
}
