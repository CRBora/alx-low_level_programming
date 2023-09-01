#include "main.h"

int rec_sqrt_recursion(int n, int l);

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rec_sqrt_recursion(n, 0));
}

/**
 * rec_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @l: iterator
 *
 * Return: square root of n
 */
int rec_sqrt_recursion(int n, int l)
{
	if (l * l > n)
		return (-1);
	if (l * l == n)
		return (l);
	return (rec_sqrt_recursion(n, l + 1));
}

