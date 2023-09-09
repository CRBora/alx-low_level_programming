#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments passed to it
 * @argc: number of arguments
 * @argv: pointer to array of argumnets
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
	return (0);
}
