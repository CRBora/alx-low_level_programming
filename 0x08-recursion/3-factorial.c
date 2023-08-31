#include "main.h"

/**
 * factorial - function that prints the factorial of a givien number
 * @n: number factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
