#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information for a dog
 * @name:pointer to name of dog
 * @age: age of dog
 * @owner: pointer to dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
