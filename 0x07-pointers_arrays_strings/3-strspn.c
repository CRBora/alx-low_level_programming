#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to prefix sunstring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int l = 0;
        int k;

        while (*s != '\0')
        {
                for (k = 0; accept[k]; k++)
                {
                        if (*s == accept[k])
                        {
                                l++;
                                break;
                        }
                        else if (accept[k + 1] == '\0')
                                return (l);
                }
                s++;
        }
        return (l);
}
