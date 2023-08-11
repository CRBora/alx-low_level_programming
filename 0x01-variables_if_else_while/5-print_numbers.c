#include <stdio.h>

/**
 * main - function to print numbers 0 to 9
 *
 * Return: Alsways 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
