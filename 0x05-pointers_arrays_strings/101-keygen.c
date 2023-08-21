#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int l, sum, k;

	sum = 0;

	srand(time(NULL));

	for (l = 0; l < 100; l++)
	{
		pass[l] = rand() % 78;
		sum += (pass[l] + '0');
		putchar(pass[l] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			k = 2772 - sum - '0';
			sum += k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}
