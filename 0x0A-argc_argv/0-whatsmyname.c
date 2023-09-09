#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);
	return (0);
}
