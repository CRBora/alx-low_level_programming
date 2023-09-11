#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that returnd length of a string
 * @s: pointer to a string
 * Return: lenght of the string as an integer
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 ** _strcpy - function that copies the string pointed to by src
 * @dest: pointer to destination
 * @src: pointer to source string
 * Return: *dest with copied string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, k = 0;

	while (*(src + l) != '\0')
		l++;
	while (k < l)
	{
		dest[k] = src[k];
		k++;
	}
	dest[l] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: pointer to new dog name
 * @age: age of new dog
 * @owner: pointer to new odg owner
 *
 * Return: information for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (len1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (len2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	_strcpy(dg->name, name);
	_strcpy(dg->owner, owner);
	dg->age = age;

	return (dg);
}
