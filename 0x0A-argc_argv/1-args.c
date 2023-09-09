#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
