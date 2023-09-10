#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, l, k, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (l = 1; l < argc; l++)
	{
		char *arg = argv[l];

		for (k = 0; arg[k] != '\0'; k++)
		{
			if (!isdigit(arg[k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
