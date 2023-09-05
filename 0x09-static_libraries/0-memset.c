#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to constant byte
 * @b: constant byte
 * @n: memory size
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int k;

        for (k = 0; k < n; k++)
        {
                *s = b;
                s++;
        }
        return (s);
}

