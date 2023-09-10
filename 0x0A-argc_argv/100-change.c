#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the min number of coins for an amount
 * @argc: number of arguments
 * @argv: pointer to araay of arguments
 *
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]), l, min_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (l = 0; l < 5 && cents >= 0; l++)
	{
		while (cents >= coins[l])
		{
			cents -= coins[l];
			min_coins++;
		}
	}
	printf("%d\n", min_coins);
	return (0);
}
