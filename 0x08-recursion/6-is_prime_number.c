#include "main.h"

int actual_prime_num(int n, int l);

/**
 * is_prime_number - function that says if an integer is a prime number or not
 * @n: input integer
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_num(n, n - 1));
}

/**
 * actual_prime_num - recursively calculates if a number is prime
 * @n: input integer
 * @l: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int actual_prime_num(int n, int l)
{
	if (l == 1)
		return (1);
	if (n % l == 0 && l > 0)
		return (0);
	return (actual_prime_num(n, l - 1));
}
