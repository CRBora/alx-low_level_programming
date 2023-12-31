#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog_t
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
